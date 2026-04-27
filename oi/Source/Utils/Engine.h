#pragma once

#include <wchar.h>
#include <cstdint>
#include <vector>
#include <string>
#include <iostream>
#include <locale>
#include <basetsd.h>
#include <intrin.h>
#include <DMALibrary/Memory/Memory.h>
#include <Utils/ue4math/ue4math.h>
#include <Utils/ue4math/vector.h>

template<class T>
class TArray {
private:
	T* Data;
	int32_t Count;
	//int32_t Max;
public:
	T* GetData() const {
		return Data;
	}

	size_t Size() const {
		return Count;
	}

	bool GetValue(int i, T& value) const {
		if (i < 0 || i >= Size()) return false;
		return mem.Read(reinterpret_cast<uintptr_t>((Data + sizeof(T) * i)), &value, sizeof(T));
	}

	bool GetValues(T& value) const {
		return mem.Read(reinterpret_cast<uintptr_t>(Data), &value, sizeof(T) * Size());
	}

	std::vector<T> GetVector() const {
		std::vector<T> v(Size());
		if (!GetValues(v[0]))
			v.clear();

		return v;
	}

	operator std::vector<T>() const { return GetVector(); }

	T operator [](int i) const {
		T Value;
		if (!GetValue(i, Value))
			ZeroMemory(&Value, sizeof(Value));
		return Value;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	typedef TEnum EnumType;
	TEnumAsByte() = default;
	TEnumAsByte(const TEnumAsByte&) = default;
	TEnumAsByte& operator=(const TEnumAsByte&) = default;
	FORCEINLINE TEnumAsByte(TEnum InValue) : Value(static_cast<uint8_t>(InValue)) {}
	explicit FORCEINLINE TEnumAsByte(int32_t InValue) : Value(static_cast<uint8_t>(InValue)) {}
	explicit FORCEINLINE TEnumAsByte(uint8_t InValue) : Value(InValue) {}
	bool operator==(TEnum InValue) const { return static_cast<TEnum>(Value) == InValue; }
	bool operator==(TEnumAsByte InValue) const { return Value == InValue.Value; }
	operator TEnum() const { return (TEnum)Value; }
	TEnum GetValue() const { return (TEnum)Value; }
private:
	uint8_t Value;
};

template<class T>
struct TSetElement {
	T Value;//0
	int HashNextId;//9
	int HashIndex;//A
};

template<class T>
class TSet : public TArray<TSetElement<T>> {};

template<class KeyType, class ValueType>
struct TPair {
	KeyType Key;
	ValueType Value;
};

template<class KeyType, class ValueType>
class TMap : public TSet<TPair<KeyType, ValueType>> {
public:
	bool GetValue(const KeyType& Key, ValueType& Value) const {

		for (const auto& Elem : this->GetVector()) {
			if (Elem.Value.Key == Key) {
				Value = Elem.Value.Value;
				return true;
			}
		}
		return false;
	}
};

struct FTslWidgetStateOld
{
	unsigned char Pad[0x30];
	uint64_t WidgetClass;	                                                                             // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	uint64_t Widget;                                                                               // 0x0040(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
};

struct FSkinnedMeshComponentSlot
{
	char pad_0[0x8]; // 0x00(0x08)
	//uint64_t Mesh1;
	uint64_t Mesh; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
	uint64_t Mesh1;
	//char pad_30[0x8]; // 0x30(0x08)
};

struct FTslWidgetState
{
	unsigned char Pad[0x38];
	unsigned char WidgetClass[0x8];
	unsigned char pad_38[0x8];
	ULONG64 Widget;
	unsigned char pad_48[0x20];
};

struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

struct FWeaponTrajectoryConfig3
{
	float                                              InitialSpeed;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                                HitDamage;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LowerClampDamage;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned long long                                 BallisticCurve;                                           // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RangeModifier;                                            // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReferenceDistance;                                        // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TravelDistanceMax;                                        // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseMaxDamageDistance : 1;                                // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulationSubstepTime;                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VDragCoefficient;                                         // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BDS;                                                      // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseAdvancedBallistics : 1;                               // 0x0034(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCanProduceCrackSound : 1;                                // 0x0035(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsPenetrable : 1;                                         // 0x0036(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned long long                                 DamageType;                                               // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsTrajectoryReplicationEnabled : 1;                      // 0x0040(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
};

struct FName
{
	int ComparisonIndexValue = 0;
	int NumberValue = 0;

	int GetComparisonIndex(const bool Reversal = false)
	{
		return !Reversal ? ComparisonIndexValue : NumberValue;
	}

	int GetNumber(const bool Reversal = false)
	{
		return !Reversal ? NumberValue : ComparisonIndexValue;
	}

	void SetComparisonIndex(const bool Reversal = false, const int Value = 0)
	{
		if (!Reversal)
		{
			ComparisonIndexValue = Value;
		}
		else {
			NumberValue = Value;
		}
	}

	void SetNumber(const bool Reversal = false, const int Value = 0)
	{
		if (!Reversal)
		{
			NumberValue = Value;
		}
		else {
			ComparisonIndexValue = Value;
		}
	}

	bool operator == (const FName& rhs) const { return ComparisonIndexValue == rhs.ComparisonIndexValue && NumberValue == rhs.NumberValue; }
	bool operator != (const FName& rhs) const { return !(*this == rhs); }
};

struct FTakeHitInfo {
	float ActualDamage;
	char pad_4[0x4];
	uint64_t ArmorData;
	uint64_t DamageType;
	uint64_t PlayerInstigator;
	char DamageOrigin[0xC];
	char RelHitLocation[0xC];
	struct FName BoneName;
	float DamageMaxRadius;
	bool ShotDirPitch;
	bool ShotDirYaw;
	char pad_5;
	bool EnsureReplicationByte;
	struct FName AttackerWeaponName;
};

struct FInputAxisProperties {
	float DEADZONE; // 0x00(0x04)
	float OuterDeadZone; // 0x04(0x04)
	float Sensitivity; // 0x08(0x04)
	float Exponent; // 0x0c(0x04)
	char bInvert : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UCurveFloat* MultiplierAxisValueCurve; // 0x18(0x08)
};

struct FInputAxisConfigEntry {
	struct FName AxisKeyName; // 0x00(0x08)
	struct FInputAxisProperties AxisProperties; // 0x08(0x20)
};

struct FWeaponTrajectoryConfig
{
	float                                              InitialSpeed;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitDamage;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	char                                               pad_47[0x10];                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VehicleDamageScalar;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowerClampDamage;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ULONG64	 										   BallisticCurve;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeModifier;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReferenceDistance;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TravelDistanceMax;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMaxDamageDistance;                                    // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              SimulationSubstepTime;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VDragCoefficient;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BDS;                                                      // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAdvancedBallistics;                                   // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanProduceCrackSound;                                    // 0x0035(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPenetrable;                                             // 0x0036(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
	ULONG64											   DamageType;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsTrajectoryReplicationEnabled : 1;
	unsigned char                                      pad_50_1 : 7;                                             // 0x0040(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              WeaponSpread;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

struct FKeyHandleMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};
struct FIndexedCurve
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FKeyHandleMap                               KeyHandlesToIndices;                                      // 0x0008(0x0050) (Transient)
};
struct FRichCurve : public FIndexedCurve
{
	BYTE		                                       PreInfinityExtrap;                                        // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	BYTE		                                       PostInfinityExtrap;                                       // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	BYTE		                                       UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              DefaultValue;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ULONG64						                       Keys;                                                     // 0x0060(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};
struct FRichCurveKey
{
	BYTE		                                       InterpMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	BYTE		                                       TangentMode;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	BYTE		                                       TangentWeightMode;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	BYTE		                                       UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangentWeight;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

struct FMeshBoneInfo
{
	FName Name;
	int32_t ParentIndex;
};

typedef  int	 		int32;		// 32-bit signed.
__forceinline int32 FloorToInt(float F)
{
	return _mm_cvt_ss2si(_mm_set_ss(F + F - 0.5f)) >> 1;
}

template< class T >
constexpr __forceinline T Abs(const T A)
{
	return (A >= (T)0) ? A : -A;
}
