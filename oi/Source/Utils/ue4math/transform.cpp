#include "transform.h"
#include "vector.h"
#include "quat.h"
#include "matrix.h"

FTransform::FTransform(const FQuat& Rotation, const FVector& Translation, const FVector& Scale3D) :Rotation(Rotation), Translation(Translation), Scale3D(Scale3D) {}
FTransform::FTransform() : Rotation(FQuat(0.f, 0.f, 0.f, 1.f)), Translation(FVector(0.0, 0.0, 0.0)), Scale3D(FVector(1.0f, 1.0f, 1.0f)) {}

bool FTransform::AnyHasNegativeScale(const FVector& InScale3D, const FVector& InOtherScale3D)
{
	return  (InScale3D.X < 0.f || InScale3D.Y < 0.f || InScale3D.Z < 0.f
		|| InOtherScale3D.X < 0.f || InOtherScale3D.Y < 0.f || InOtherScale3D.Z < 0.f);
}

/**
* Convert this Transform to a transformation matrix with scaling.
*/
//FMatrix FTransform::ToMatrixWithScale() const
//{
//	FMatrix OutMatrix;
//	OutMatrix.M[3][0] = Translation.X;
//	OutMatrix.M[3][1] = Translation.Y;
//	OutMatrix.M[3][2] = Translation.Z;
//
//	const float x2 = Rotation.X + Rotation.X;
//	const float y2 = Rotation.Y + Rotation.Y;
//	const float z2 = Rotation.Z + Rotation.Z;
//	{
//		const float xx2 = Rotation.X * x2;
//		const float yy2 = Rotation.Y * y2;
//		const float zz2 = Rotation.Z * z2;
//
//		OutMatrix.M[0][0] = (1.0f - (yy2 + zz2)) * Scale3D.X;
//		OutMatrix.M[1][1] = (1.0f - (xx2 + zz2)) * Scale3D.Y;
//		OutMatrix.M[2][2] = (1.0f - (xx2 + yy2)) * Scale3D.Z;
//	}
//	{
//		const float yz2 = Rotation.Y * z2;
//		const float wx2 = Rotation.W * x2;
//
//		OutMatrix.M[2][1] = (yz2 - wx2) * Scale3D.Z;
//		OutMatrix.M[1][2] = (yz2 + wx2) * Scale3D.Y;
//	}
//	{
//		const float xy2 = Rotation.X * y2;
//		const float wz2 = Rotation.W * z2;
//
//		OutMatrix.M[1][0] = (xy2 - wz2) * Scale3D.Y;
//		OutMatrix.M[0][1] = (xy2 + wz2) * Scale3D.X;
//	}
//	{
//		const float xz2 = Rotation.X * z2;
//		const float wy2 = Rotation.W * y2;
//
//		OutMatrix.M[2][0] = (xz2 + wy2) * Scale3D.Z;
//		OutMatrix.M[0][2] = (xz2 - wy2) * Scale3D.X;
//	}
//
//	OutMatrix.M[0][3] = 0.0f;
//	OutMatrix.M[1][3] = 0.0f;
//	OutMatrix.M[2][3] = 0.0f;
//	OutMatrix.M[3][3] = 1.0f;
//
//	return OutMatrix;
//}
FMatrix FTransform::ToMatrixWithScale() const
{
#if defined(__SSE2__)
	FMatrix OutMatrix;

	// 使用SIMD加载四元数和缩放
	__m128 vQuat = _mm_loadu_ps(&Rotation.X);
	__m128 vScale = _mm_loadu_ps(&Scale3D.X);

	// 计算2倍的四元数值
	__m128 v2 = _mm_add_ps(vQuat, vQuat);

	// 提取分量
	float x2 = v2.m128_f32[0];
	float y2 = v2.m128_f32[1];
	float z2 = v2.m128_f32[2];

	// 计算乘积项
	__m128 vTemp = _mm_mul_ps(vQuat, v2);
	float xx2 = vTemp.m128_f32[0];
	float yy2 = vTemp.m128_f32[1];
	float zz2 = vTemp.m128_f32[2];

	// 计算对角线元素
	__m128 vDiag = _mm_sub_ps(_mm_set1_ps(1.0f),
		_mm_add_ps(_mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(1, 1, 2, 2)),
			_mm_shuffle_ps(vTemp, vTemp, _MM_SHUFFLE(2, 0, 0, 1))));
	vDiag = _mm_mul_ps(vDiag, vScale);

	_mm_storeu_ps(&OutMatrix.M[0][0], vDiag);

	// 计算交叉项
	float yz2 = Rotation.Y * z2;
	float wx2 = Rotation.W * x2;
	float xy2 = Rotation.X * y2;
	float wz2 = Rotation.W * z2;
	float xz2 = Rotation.X * z2;
	float wy2 = Rotation.W * y2;

	// 设置非对角线元素
	OutMatrix.M[2][1] = (yz2 - wx2) * Scale3D.Z;
	OutMatrix.M[1][2] = (yz2 + wx2) * Scale3D.Y;
	OutMatrix.M[1][0] = (xy2 - wz2) * Scale3D.Y;
	OutMatrix.M[0][1] = (xy2 + wz2) * Scale3D.X;
	OutMatrix.M[2][0] = (xz2 + wy2) * Scale3D.Z;
	OutMatrix.M[0][2] = (xz2 - wy2) * Scale3D.X;

	// 设置平移和最后一行
	__m128 vTranslation = _mm_loadu_ps(&Translation.X);
	__m128 vLastRow = _mm_blend_ps(vTranslation, _mm_set_ps(1.0f, 0.0f, 0.0f, 0.0f), 0xF0);
	_mm_storeu_ps(&OutMatrix.M[3][0], vLastRow);

	return OutMatrix;

#else
	// 非SIMD优化版本
	FMatrix OutMatrix;

	// 预计算常用值
	const float x2 = Rotation.X * 2.0f;
	const float y2 = Rotation.Y * 2.0f;
	const float z2 = Rotation.Z * 2.0f;
	const float xx2 = Rotation.X * x2;
	const float yy2 = Rotation.Y * y2;
	const float zz2 = Rotation.Z * z2;
	const float yz2 = Rotation.Y * z2;
	const float wx2 = Rotation.W * x2;
	const float xy2 = Rotation.X * y2;
	const float wz2 = Rotation.W * z2;
	const float xz2 = Rotation.X * z2;
	const float wy2 = Rotation.W * y2;

	// 设置对角线元素
	OutMatrix.M[0][0] = (1.0f - (yy2 + zz2)) * Scale3D.X;
	OutMatrix.M[1][1] = (1.0f - (xx2 + zz2)) * Scale3D.Y;
	OutMatrix.M[2][2] = (1.0f - (xx2 + yy2)) * Scale3D.Z;

	// 设置非对角线元素
	OutMatrix.M[2][1] = (yz2 - wx2) * Scale3D.Z;
	OutMatrix.M[1][2] = (yz2 + wx2) * Scale3D.Y;
	OutMatrix.M[1][0] = (xy2 - wz2) * Scale3D.Y;
	OutMatrix.M[0][1] = (xy2 + wz2) * Scale3D.X;
	OutMatrix.M[2][0] = (xz2 + wy2) * Scale3D.Z;
	OutMatrix.M[0][2] = (xz2 - wy2) * Scale3D.X;

	// 设置平移和最后一行
	OutMatrix.M[3][0] = Translation.X;
	OutMatrix.M[3][1] = Translation.Y;
	OutMatrix.M[3][2] = Translation.Z;
	OutMatrix.M[0][3] = 0.0f;
	OutMatrix.M[1][3] = 0.0f;
	OutMatrix.M[2][3] = 0.0f;
	OutMatrix.M[3][3] = 1.0f;

	return OutMatrix;
#endif
}

void FTransform::MultiplyUsingMatrixWithScale(FTransform* OutTransform, const FTransform* A, const FTransform* B)
{
	// the goal of using M is to get the correct orientation
	// but for translation, we still need scale
	ConstructTransformFromMatrixWithDesiredScale(A->ToMatrixWithScale(), B->ToMatrixWithScale(), A->Scale3D * B->Scale3D, *OutTransform);
}

void FTransform::ConstructTransformFromMatrixWithDesiredScale(const FMatrix& AMatrix, const FMatrix& BMatrix, const FVector& DesiredScale, FTransform& OutTransform)
{
	// the goal of using M is to get the correct orientation
	// but for translation, we still need scale
	FMatrix M = AMatrix * BMatrix;
	M.RemoveScaling();

	// apply negative scale back to axes
	FVector SignedScale = DesiredScale.GetSignVector();

	M.SetAxis0(SignedScale.X * M.GetScaledAxisX());
	M.SetAxis1(SignedScale.Y * M.GetScaledAxisY());
	M.SetAxis2(SignedScale.Z * M.GetScaledAxisZ());

	// @note: if you have negative with 0 scale, this will return rotation that is identity
	// since matrix loses that axes
	FQuat Rotation = FQuat(M);
	Rotation.Normalize();

	// set values back to output
	OutTransform.Scale3D = DesiredScale;
	OutTransform.Rotation = Rotation;

	// technically I could calculate this using FTransform but then it does more quat multiplication 
	// instead of using Scale in matrix multiplication
	// it's a question of between RemoveScaling vs using FTransform to move translation
	OutTransform.Translation = M.GetOrigin();
}

/** Returns Multiplied Transform of 2 FTransforms **/
void FTransform::Multiply(FTransform* OutTransform, const FTransform* A, const FTransform* B)
{
	if (AnyHasNegativeScale(A->Scale3D, B->Scale3D))
	{
		// @note, if you have 0 scale with negative, you're going to lose rotation as it can't convert back to quat
		MultiplyUsingMatrixWithScale(OutTransform, A, B);
	}
	else
	{
		OutTransform->Rotation = B->Rotation * A->Rotation;
		OutTransform->Scale3D = A->Scale3D * B->Scale3D;
		OutTransform->Translation = B->Rotation * (B->Scale3D * A->Translation) + B->Translation;
	}

	// we do not support matrix transform when non-uniform
	// that was removed at rev 21 with UE4
}

FTransform FTransform::operator*(const FTransform& A) {
	FTransform OutTransform;
	Multiply(&OutTransform, this, &A);
	return OutTransform;
}

// mathematically if you have 0 scale, it should be infinite, 
// however, in practice if you have 0 scale, and relative transform doesn't make much sense 
// anymore because you should be instead of showing gigantic infinite mesh
// also returning BIG_NUMBER causes sequential NaN issues by multiplying 
// so we hardcode as 0
FVector FTransform::GetSafeScaleReciprocal(const FVector& InScale, float Tolerance)
{
	FVector SafeReciprocalScale;
	if (fabs(InScale.X) <= Tolerance)
	{
		SafeReciprocalScale.X = 0.f;
	}
	else
	{
		SafeReciprocalScale.X = 1 / InScale.X;
	}

	if (fabs(InScale.Y) <= Tolerance)
	{
		SafeReciprocalScale.Y = 0.f;
	}
	else
	{
		SafeReciprocalScale.Y = 1 / InScale.Y;
	}

	if (fabs(InScale.Z) <= Tolerance)
	{
		SafeReciprocalScale.Z = 0.f;
	}
	else
	{
		SafeReciprocalScale.Z = 1 / InScale.Z;
	}

	return SafeReciprocalScale;
}

void FTransform::GetRelativeTransformUsingMatrixWithScale(FTransform* OutTransform, const FTransform* Base, const FTransform* Relative)
{
	// the goal of using M is to get the correct orientation
	// but for translation, we still need scale
	FMatrix AM = Base->ToMatrixWithScale();
	FMatrix BM = Relative->ToMatrixWithScale();
	// get combined scale
	FVector SafeRecipScale3D = GetSafeScaleReciprocal(Relative->Scale3D, SMALL_NUMBER);
	FVector DesiredScale3D = Base->Scale3D * SafeRecipScale3D;
	ConstructTransformFromMatrixWithDesiredScale(AM, BM.Inverse(), DesiredScale3D, *OutTransform);
}

FTransform FTransform::GetRelativeTransform(const FTransform& Other) const
{
	// A * B(-1) = VQS(B)(-1) (VQS (A))
	// 
	// Scale = S(A)/S(B)
	// Rotation = Q(B)(-1) * Q(A)
	// Translation = 1/S(B) *[Q(B)(-1)*(T(A)-T(B))*Q(B)]
	// where A = this, B = Other
	FTransform Result;

	if (AnyHasNegativeScale(Scale3D, Other.Scale3D))
	{
		// @note, if you have 0 scale with negative, you're going to lose rotation as it can't convert back to quat
		GetRelativeTransformUsingMatrixWithScale(&Result, this, &Other);
	}
	else
	{
		FVector SafeRecipScale3D = GetSafeScaleReciprocal(Other.Scale3D, SMALL_NUMBER);
		Result.Scale3D = Scale3D * SafeRecipScale3D;

		if (Other.Rotation.IsNormalized() == false)
		{
			return FTransform();
		}

		FQuat Inverse = Other.Rotation.Inverse();
		Result.Rotation = Inverse * Rotation;

		Result.Translation = (Inverse * (Translation - Other.Translation)) * (SafeRecipScale3D);
	}

	return Result;
}

FVector FTransform::GetWorldLocation(const FVector& Location, const float AddZ) const
{
	FVector Pos{};
	float X, Y, Z, _X, _Y, _Z, _11, _12, _13, _21, _22, _23, _31, _32, _33;

	X = Rotation.X + Rotation.X;
	Y = Rotation.Y + Rotation.Y;
	Z = Rotation.Z + Rotation.Z;
	_X = Rotation.X * X;
	_Y = Rotation.Y * Y;
	_Z = Rotation.Z * Z;
	_11 = (1 - (_Y + _Z)) * Scale3D.X;
	_22 = (1 - (_X + _Z)) * Scale3D.Y;
	_33 = (1 - (_X + _Y)) * Scale3D.Z;
	_Z = Rotation.Y * Z;
	_X = Rotation.W * X;
	_32 = (_Z - _X) * Scale3D.Z;
	_23 = (_Z + _X) * Scale3D.Y;
	_Y = Rotation.X * Y;
	_Z = Rotation.W * Z;
	_21 = (_Y - _Z) * Scale3D.Y;
	_12 = (_Y + _Z) * Scale3D.X;
	_Y = Rotation.W * Y;
	_Z = Rotation.X * Z;
	_31 = (_Z + _Y) * Scale3D.Z;
	_13 = (_Z - _Y) * Scale3D.X;

	Pos.X = Location.X * _11 + Location.Y * _21 + Location.Z * _31 + 1 * Translation.X;
	Pos.Y = Location.X * _12 + Location.Y * _22 + Location.Z * _32 + 1 * Translation.Y;
	Pos.Z = Location.X * _13 + Location.Y * _23 + Location.Z * _33 + 1 * Translation.Z + AddZ;

	return Pos;
}