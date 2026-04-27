#pragma once
#define NOMINMAX

#include <windows.h>
#include <algorithm>
#include <iostream>
#include "Data.h"
#include "VectorHelper.h"
#include <Utils/Engine.h>
#include <Utils/ue4math/matrix.h>

FVector VectorHelper::RotateVector(const FMatrix& RotationMatrix, const FVector& Vec) {
	FVector AxisX = RotationMatrix.GetScaledAxisX();
	FVector AxisY = RotationMatrix.GetScaledAxisY();
	FVector AxisZ = RotationMatrix.GetScaledAxisZ();

	return FVector{
		Vec.X * AxisX.X + Vec.Y * AxisY.X + Vec.Z * AxisZ.X,
		Vec.X * AxisX.Y + Vec.Y * AxisY.Y + Vec.Z * AxisZ.Y,
		Vec.X * AxisX.Z + Vec.Y * AxisY.Z + Vec.Z * AxisZ.Z
	};
}

//FVector VectorHelper::GetBoneWithRotation(const FTransform& BoneArray, const FTransform& ComponentToWorld)
//{
//	FVector Bone = BoneArray.Translation;
//	if (std::max(std::max(abs(Bone.X), abs(Bone.Y)), abs(Bone.Z)) >= 500)
//	{
//		return FVector(INFINITY, INFINITY, INFINITY);
//	}
//	FMatrix Matrix = BoneArray.ToMatrixWithScale() * ComponentToWorld.ToMatrixWithScale();
//	return FVector(Matrix._41, Matrix._42, Matrix._43);
//}

FVector VectorHelper::GetBoneWithRotation(const FTransform& BoneArray, const FTransform& ComponentToWorld)
{
	const FVector& Bone = BoneArray.Translation;
	if (Bone.X > 500.0f || Bone.X < -500.0f ||
		Bone.Y > 500.0f || Bone.Y < -500.0f ||
		Bone.Z > 500.0f || Bone.Z < -500.0f)
	{
		static const FVector InvalidPos(INFINITY, INFINITY, INFINITY);
		return InvalidPos;
	}
	const FMatrix& BoneMat = BoneArray.ToMatrixWithScale();
	const FMatrix& CompMat = ComponentToWorld.ToMatrixWithScale();
	return FVector(
		BoneMat._41 * CompMat._11 + BoneMat._42 * CompMat._21 + BoneMat._43 * CompMat._31 + CompMat._41,
		BoneMat._41 * CompMat._12 + BoneMat._42 * CompMat._22 + BoneMat._43 * CompMat._32 + CompMat._42,
		BoneMat._41 * CompMat._13 + BoneMat._42 * CompMat._23 + BoneMat._43 * CompMat._33 + CompMat._43
	);
}

FVector VectorHelper::ScreenToWorld(const FVector2D& ScreenLocation)
{
	float ScreenCenterX = GameData.Config.Overlay.ScreenWidth / 2.0f;
	float ScreenCenterY = GameData.Config.Overlay.ScreenHeight / 2.0f;
	float TangentFOV = tanf(ConvertToRadians(GameData.Global.Data.Camera.FOV / 2.0f));

	// 计算屏幕坐标相对于中心点的偏移
	float OffsetX = (ScreenLocation.X - ScreenCenterX);
	float OffsetY = (ScreenCenterY - ScreenLocation.Y);

	// 计算射线方向
	FVector Direction;
	Direction.X = OffsetX * TangentFOV / ScreenCenterX;
	Direction.Y = OffsetY * TangentFOV / ScreenCenterX;
	Direction.Z = 1.0f;

	// 将方向向量转换到世界空间
	FMatrix RotationMatrix = GameData.Global.Data.Camera.Rotation.GetMatrix();
	FVector WorldDirection;
	WorldDirection.X = Direction.X * RotationMatrix.M[0][0] + Direction.Y * RotationMatrix.M[1][0] + Direction.Z * RotationMatrix.M[2][0];
	WorldDirection.Y = Direction.X * RotationMatrix.M[0][1] + Direction.Y * RotationMatrix.M[1][1] + Direction.Z * RotationMatrix.M[2][1];
	WorldDirection.Z = Direction.X * RotationMatrix.M[0][2] + Direction.Y * RotationMatrix.M[1][2] + Direction.Z * RotationMatrix.M[2][2];

	float Length = sqrtf(WorldDirection.X * WorldDirection.X +
		WorldDirection.Y * WorldDirection.Y +
		WorldDirection.Z * WorldDirection.Z);
	if (Length > 0.0f)
	{
		WorldDirection.X /= Length;
		WorldDirection.Y /= Length;
		WorldDirection.Z /= Length;
	}

	return WorldDirection;
}

FVector2D VectorHelper::WorldToScreenInAimBot(const FVector& WorldLocation, const FRotator& RotatorCache) {
	static float LastFOV = 0.0f;
	static float LastScreenWidth = 0.0f;
	static float CachedScreenCenterX = 0.0f;
	static float CachedScreenCenterY = 0.0f;
	static float CachedFOVFactor = 0.0f;

	if (LastFOV != GameData.Global.Data.Camera.FOV || LastScreenWidth != GameData.Config.Overlay.ScreenWidth)
	{
		CachedScreenCenterX = GameData.Config.Overlay.ScreenWidth * 0.5f;
		CachedScreenCenterY = GameData.Config.Overlay.ScreenHeight * 0.5f;
		float TangentFOV = tanf(ConvertToRadians(GameData.Global.Data.Camera.FOV * 0.5f));
		CachedFOVFactor = CachedScreenCenterX / TangentFOV;

		LastFOV = GameData.Global.Data.Camera.FOV;
		LastScreenWidth = GameData.Config.Overlay.ScreenWidth;
	}

	const FMatrix& RotationMatrix = RotatorCache.GetMatrix();

	const FVector& AxisX = RotationMatrix.GetScaledAxisX();
	const FVector& AxisY = RotationMatrix.GetScaledAxisY();
	const FVector& AxisZ = RotationMatrix.GetScaledAxisZ();

	FVector vDelta = WorldLocation - GameData.Global.Data.Camera.Location;

	float TransformedX = vDelta | AxisY;
	float TransformedY = vDelta | AxisZ;
	float TransformedZ = vDelta | AxisX;

	if (TransformedZ == 0.0f)
		TransformedZ = -0.001f;

	float VieW = TransformedZ;

	TransformedZ = fabsf(TransformedZ);

	float InvZ = 1.0f / TransformedZ;
	FVector2D ScreenLocation(
		CachedScreenCenterX + TransformedX * CachedFOVFactor * InvZ,
		CachedScreenCenterY - TransformedY * CachedFOVFactor * InvZ
	);

	return (VieW > 0.0f && VieW != INFINITY) ? ScreenLocation : FVector2D(INFINITY, INFINITY);
}

FVector2D VectorHelper::WorldToScreen(const FVector& WorldLocation) {
	static float LastFOV = 0.0f;
	static float LastScreenWidth = 0.0f;
	static float CachedScreenCenterX = 0.0f;
	static float CachedScreenCenterY = 0.0f;
	static float CachedFOVFactor = 0.0f;
	static float Ratio = 0.0f;

	if (LastFOV != GameData.Global.Data.Camera.FOV || LastScreenWidth != GameData.Config.Overlay.ScreenWidth)
	{
		CachedScreenCenterX = GameData.Config.Overlay.ScreenWidth * 0.5f;
		CachedScreenCenterY = GameData.Config.Overlay.ScreenHeight * 0.5f;
	/*	Ratio = (float)GameData.Config.Overlay.ScreenWidth / GameData.Config.Overlay.ScreenHeight;

		if (Ratio < 4.0f / 3.0f)
			Ratio = 4.0f / 3.0f;*/

		//float TangentFOV = Ratio / (16.0f / 9.0f) * (float)tanf(GameData.Global.Data.Camera.FOV * M_PI / 360.0f);
		float TangentFOV = tanf(ConvertToRadians(GameData.Global.Data.Camera.FOV * 0.5f));
		CachedFOVFactor = CachedScreenCenterX / TangentFOV;

		LastFOV = GameData.Global.Data.Camera.FOV;
		LastScreenWidth = GameData.Config.Overlay.ScreenWidth;
	}

	const FMatrix& RotationMatrix = GameData.Global.Data.Camera.Rotation.GetMatrix();

	const FVector& AxisX = RotationMatrix.GetScaledAxisX();
	const FVector& AxisY = RotationMatrix.GetScaledAxisY();
	const FVector& AxisZ = RotationMatrix.GetScaledAxisZ();

	FVector vDelta = WorldLocation - GameData.Global.Data.Camera.Location;

	float TransformedX = vDelta | AxisY;
	float TransformedY = vDelta | AxisZ;
	float TransformedZ = vDelta | AxisX;

	if (TransformedZ == 0.0f)
		TransformedZ = -0.001f;

	float VieW = TransformedZ;

	TransformedZ = fabsf(TransformedZ);

	float InvZ = 1.0f / TransformedZ;
	FVector2D ScreenLocation(
		CachedScreenCenterX + TransformedX * CachedFOVFactor * InvZ,
		CachedScreenCenterY - TransformedY * CachedFOVFactor * InvZ
	);

	return (VieW > 0.0f && VieW != INFINITY) ? ScreenLocation : FVector2D(INFINITY, INFINITY);
}

bool VectorHelper::IsInScreen(const FVector2D& WorldToScreen) {
	if ((WorldToScreen.X < -500 || WorldToScreen.X > GameData.Config.Overlay.ScreenWidth + 500 || WorldToScreen.Y < -500 || WorldToScreen.Y > GameData.Config.Overlay.ScreenHeight + 500))
	{
		return false;
	}
	return true;
}

FVector2D VectorHelper::ClampToScreenEdge(const FVector& WorldLocation, float margin, float boxSize)
{
	float w = GameData.Config.Overlay.ScreenWidth;
	float h = GameData.Config.Overlay.ScreenHeight;
	float halfW = w / 2.f - margin - boxSize / 2;
	float halfH = h / 2.f - margin - boxSize / 2;
	FVector2D center(w / 2.f, h / 2.f);

	FVector vDelta = WorldLocation - GameData.Global.Data.Camera.Location;
	const FMatrix& RotationMatrix = GameData.Global.Data.Camera.Rotation.GetMatrix();
	float localX = vDelta | RotationMatrix.GetScaledAxisX(); // 前
	float localY = vDelta | RotationMatrix.GetScaledAxisY(); // 右
	float localZ = vDelta | RotationMatrix.GetScaledAxisZ(); // 上

	if (localX > 0)
	{
		// 前方：归一化投影
		float fov = GameData.Global.Data.Camera.FOV * M_PI / 180.0f;
		float aspect = w / h;
		float tanFov = tanf(fov * 0.5f);

		float nx = localY / (tanFov * aspect * std::max(localX, 1e-3f));
		float ny = -localZ / (tanFov * std::max(localX, 1e-3f));

		float dx = nx;
		float dy = ny;
		float scaleX = halfW / std::max(std::abs(dx), 1e-5f);
		float scaleY = halfH / std::max(std::abs(dy), 1e-5f);
		float scale = std::min(scaleX, scaleY);

		float x = center.X + dx * scale;
		float y = center.Y + dy * scale;

		x = std::clamp(x, margin + boxSize / 2, w - margin - boxSize / 2);
		y = std::clamp(y, margin + boxSize / 2, h - margin - boxSize / 2);

		return FVector2D(x, y);
	}
	else
	{        // 后方：只用水平角度投影
		float angle = atan2f(localY, localX); // 以摄像机前方为0
		float dx = sinf(angle);
		float dy = -cosf(angle);

		float scaleX = halfW / std::max(std::abs(dx), 1e-5f);
		float scaleY = halfH / std::max(std::abs(dy), 1e-5f);
		float scale = std::min(scaleX, scaleY);

		float x = center.X + dx * scale;
		float y = center.Y + dy * scale;

		x = std::clamp(x, margin + boxSize / 2, w - margin - boxSize / 2);
		y = std::clamp(y, margin + boxSize / 2, h - margin - boxSize / 2);

		return FVector2D(x, y);
	}
}

bool VectorHelper::IsInScreenStrict(const FVector2D& ScreenLocation)
{
	float w = GameData.Config.Overlay.ScreenWidth;
	float h = GameData.Config.Overlay.ScreenHeight;
	return (ScreenLocation.X >= 0 && ScreenLocation.X <= w && ScreenLocation.Y >= 0 && ScreenLocation.Y <= h);
}

FVector2D VectorHelper::WorldToScreenStrict(const FVector& WorldLocation)
{
	static float LastFOV = 0.0f;
	static float LastScreenWidth = 0.0f;
	static float CachedScreenCenterX = 0.0f;
	static float CachedScreenCenterY = 0.0f;
	static float CachedFOVFactor = 0.0f;

	if (LastFOV != GameData.Global.Data.Camera.FOV || LastScreenWidth != GameData.Config.Overlay.ScreenWidth)
	{
		CachedScreenCenterX = GameData.Config.Overlay.ScreenWidth * 0.5f;
		CachedScreenCenterY = GameData.Config.Overlay.ScreenHeight * 0.5f;
		float TangentFOV = tanf(ConvertToRadians(GameData.Global.Data.Camera.FOV * 0.5f));
		CachedFOVFactor = CachedScreenCenterX / TangentFOV;
		LastFOV = GameData.Global.Data.Camera.FOV;
		LastScreenWidth = GameData.Config.Overlay.ScreenWidth;
	}

	const FMatrix& RotationMatrix = GameData.Global.Data.Camera.Rotation.GetMatrix();
	const FVector& AxisX = RotationMatrix.GetScaledAxisX();
	const FVector& AxisY = RotationMatrix.GetScaledAxisY();
	const FVector& AxisZ = RotationMatrix.GetScaledAxisZ();

	FVector vDelta = WorldLocation - GameData.Global.Data.Camera.Location;

	float TransformedX = vDelta | AxisY;
	float TransformedY = vDelta | AxisZ;
	float TransformedZ = vDelta | AxisX;

	// 这里是关键：如果在后方，Z为负
	bool behind = (TransformedZ < 0.01f);

	// 取绝对值，保证能投影到屏幕
	float absZ = fabsf(TransformedZ);
	if (absZ < 0.01f) absZ = 0.01f; // 防止除0

	float InvZ = 1.0f / absZ;
	FVector2D ScreenLocation(
		CachedScreenCenterX + TransformedX * CachedFOVFactor * InvZ,
		CachedScreenCenterY - TransformedY * CachedFOVFactor * InvZ
	);

	// 如果在后方，把投影点“反向”到屏幕边缘
	if (behind)
	{
		// 以屏幕中心为对称轴，把点反射到对面
		ScreenLocation.X = CachedScreenCenterX * 2 - ScreenLocation.X;
		ScreenLocation.Y = CachedScreenCenterY * 2 - ScreenLocation.Y;
	}

	return ScreenLocation;
}

bool VectorHelper::WorldToScreen(FVector Position, FVector2D& Screen, D3DMATRIX ViewMatrix)
{
	float ScreenW = (ViewMatrix._14 * Position.X) + (ViewMatrix._24 * Position.Y) + (ViewMatrix._34 * Position.Z + ViewMatrix._44);
	if (ScreenW < 0.0001f) return FALSE;

	ScreenW = 1 / ScreenW;
	float SightX = GameData.Config.Overlay.ScreenWidth / 2;
	float SightY = GameData.Config.Overlay.ScreenHeight / 2;

	Screen.X = (SightX + (ViewMatrix._11 * Position.X + ViewMatrix._21 * Position.Y + ViewMatrix._31 * Position.Z + ViewMatrix._41) * ScreenW * SightX);
	Screen.Y = (SightY - (ViewMatrix._12 * Position.X + ViewMatrix._22 * Position.Y + ViewMatrix._32 * Position.Z + ViewMatrix._42) * ScreenW * SightY);

	return TRUE;
}

bool VectorHelper::MatrixToScreen(const FVector& objectCoord, FVector2D& returnCoord, const float ViewWorld[4][4]) {
	float SightX = GameData.Config.Overlay.ScreenWidth / 2;
	float SightY = GameData.Config.Overlay.ScreenHeight / 2;
	float ViewWg = ViewWorld[0][3] * objectCoord.X + ViewWorld[1][3] * objectCoord.Y + ViewWorld[2][3] * objectCoord.Z + ViewWorld[3][3];

	if (ViewWg < 0.01) {
		return false;
	}

	ViewWg = 1.0f / ViewWg;

	float BoxXg = SightX + (ViewWorld[0][0] * objectCoord.X + ViewWorld[1][0] * objectCoord.Y + ViewWorld[2][0] * objectCoord.Z + ViewWorld[3][0]) * ViewWg * SightX;
	float BoxYg = SightY - (ViewWorld[0][1] * objectCoord.X + ViewWorld[1][1] * objectCoord.Y + ViewWorld[2][1] * objectCoord.Z + ViewWorld[3][1]) * ViewWg * SightY;

	returnCoord.X = BoxXg;
	returnCoord.Y = BoxYg;

	return true;
}