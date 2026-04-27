#pragma once

#include "Data.h"
#include <Utils/Engine.h>
#include <Utils/ue4math/ue4math.h>
#include <Utils/ue4math/matrix.h>
#include <d3dx9math.h>
#include <cmath>

struct Vector2 {
	float x, y;
	Vector2() : x(0.0f), y(0.0f) {}
	Vector2(float x_, float y_) : x(x_), y(y_) {}
};

struct Vector3 {
	float x, y, z;

	Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
	Vector3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}

	Vector3 operator+(const Vector3& v) const {
		return Vector3(x + v.x, y + v.y, z + v.z);
	}

	Vector3 operator+(const FVector& v) const {
		return Vector3(x + v.X, y + v.Y, z + v.Z);
	}

	Vector3 operator-(const Vector3& v) const {
		return Vector3(x - v.x, y - v.y, z - v.z);
	}

	Vector3 operator*(float s) const {
		return Vector3(x * s, y * s, z * s);
	}

	float dot(const Vector3& v) const {
		return x * v.x + y * v.y + z * v.z;
	}

	Vector3 cross(const Vector3& v) const {
		return Vector3(
			y * v.z - z * v.y,
			z * v.x - x * v.z,
			x * v.y - y * v.x
		);
	}

	Vector3 operator-() const {
		return Vector3(-x, -y, -z);
	}

	Vector3& operator*=(float s) {
		x *= s;
		y *= s;
		z *= s;
		return *this;
	}

	Vector3 normalized() const {
		float length = std::sqrt(x * x + y * y + z * z);
		if (length > 0) {
			return Vector3(x / length, y / length, z / length);
		}
		return *this;
	}

	Vector3 multiply(const Vector3& a) const {
		return Vector3(x * a.x, y * a.y, z * a.z);
	}

	double Length2DSquare() const {
		return std::abs(static_cast<double>(x) * x + static_cast<double>(y) * y);
	}

	bool IsNearlyEqual(const Vector3& other, float tolerance = 0.1f) const {
		return std::abs(x - other.x) <= tolerance &&
			std::abs(y - other.y) <= tolerance &&
			std::abs(z - other.z) <= tolerance;
	}
};

struct Vector4 {
	float x, y, z, w;

	Vector4() : x(0.0f), y(0.0f), z(0.0f), w(1.0f) {}
	Vector4(float x_, float y_, float z_, float w_) : x(x_), y(y_), z(z_), w(w_) {}

	Vector4 operator*(const Vector4& q) const {
		return Vector4(
			w * q.x + x * q.w + y * q.z - z * q.y,
			w * q.y - x * q.z + y * q.w + z * q.x,
			w * q.z + x * q.y - y * q.x + z * q.w,
			w * q.w - x * q.x - y * q.y - z * q.z
		);
	}

	Vector4 conjugate() const {
		return Vector4(-x, -y, -z, w);
	}

	Vector3 rotate(const Vector3& v) const {
		Vector4 q(v.x, v.y, v.z, 0.0f);
		Vector4 result = (*this) * q * conjugate();
		return Vector3(result.x, result.y, result.z);
	}

	Vector3 rotateInv(const Vector3& v) const {
		Vector4 q(v.x, v.y, v.z, 0.0f);
		Vector4 result = conjugate() * q * (*this);
		return Vector3(result.x, result.y, result.z);
	}

	bool IsNearlyEqual(const Vector4& other, float tolerance = 0.1f) const {
		return std::abs(x - other.x) <= tolerance &&
			std::abs(y - other.y) <= tolerance &&
			std::abs(z - other.z) <= tolerance &&
			std::abs(w - other.w) <= tolerance;
	}
};


class VectorHelper
{
public:
	static FVector RotateVector(const FMatrix& RotationMatrix, const FVector& Vec);
	static FVector GetBoneWithRotation(const FTransform& BoneArray, const FTransform& ComponentToWorld);
	static FVector2D WorldToScreen(const FVector& WorldLocation);
	static FVector2D WorldToScreenStrict(const FVector& WorldLocation);
	static FVector2D WorldToScreenInAimBot(const FVector& WorldLocation, const FRotator& RotatorCache);
	static FVector ScreenToWorld(const FVector2D& ScreenLocation);
	static bool MatrixToScreen(const FVector& objectCoord, FVector2D& returnCoord, const float ViewWorld[4][4]);
	static bool WorldToScreen(FVector Position, FVector2D& Screen, D3DMATRIX ViewMatrix);

	static double RadiansToDegrees(double radians) {
		return radians * double(57.29577951308);
	}

	static bool IsInScreen(const FVector2D& WorldToScreen);
	static bool IsInScreenStrict(const FVector2D& WorldToScreen);

	static FVector2D ClampToScreenEdge(const FVector& WorldLocation, float margin, float boxSize);

	static FVector Calc(FVector V, float angleX, float len) {
		return FVector(V.X + std::sin(angleX) * len, V.Y + std::cos(angleX) * len, V.Z);
	}

	static FVector CalculateAngles(FVector D, FVector W) {
		float deltaX = W.X - D.X;
		float deltaY = W.Y - D.Y;
		float deltaZ = W.Z - D.Z;
		FVector angles = FVector(float(RadiansToDegrees(atan2(deltaY, deltaX))), float(RadiansToDegrees(atan2(deltaZ, sqrt(deltaX * deltaX + deltaY * deltaY)))), 0.0f);
		return angles;
	}

	static FRotator CalcAngle(FVector LocalHeadPosition, FVector AimPosition)
	{
		FVector vecDelta((LocalHeadPosition.X - AimPosition.X), (LocalHeadPosition.Y - AimPosition.Y), (LocalHeadPosition.Z - AimPosition.Z));
		float hyp = (float)sqrt(vecDelta.X * vecDelta.X + vecDelta.Y * vecDelta.Y);

		FRotator ViewAngles{ 0 };
		ViewAngles.Pitch = -(float)atan(vecDelta.Z / hyp) * (float)(180.f / 3.1415f);
		ViewAngles.Yaw = (float)atan(vecDelta.Y / vecDelta.X) * (float)(180.f / 3.1415f);
		ViewAngles.Roll = (float)0.f;

		if (vecDelta.X >= 0.f)
			ViewAngles.Yaw += 180.0f;

		return ViewAngles;
	}

	static FRotator ClampAngles(FRotator Rotator)
	{
		FRotator angles{ Rotator.Pitch, Rotator.Yaw, Rotator.Roll };

		while (angles.Yaw < -180.0f)
			angles.Yaw += 360.0f;
		while (angles.Yaw > 180.0f)
			angles.Yaw -= 360.0f;

		if (angles.Pitch < -74.f)
			angles.Pitch = -74.f;
		if (angles.Pitch > 74.f)
			angles.Pitch = 74.f;

		return angles;
	}

	static float SmoothOutYaw(float targetYaw, float currentYaw, float smoothness)
	{
		if (targetYaw > 0.f && currentYaw < 0.f)
		{
			float dist = 180.f - targetYaw + 180.f + currentYaw;
			if (dist < 180.f)
				return currentYaw - dist / smoothness;
		}
		else if (currentYaw > 0.f && targetYaw < 0.f)
		{
			float dist = 180.f - currentYaw + 180.f + targetYaw;
			if (dist < 180.f)
				return currentYaw + dist / smoothness;
		}

		return currentYaw + (targetYaw - currentYaw) / smoothness;
	}
};