#pragma once

 

// Package: BlueOcean

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct BlueOcean.StructBoneOverride
// 0x0010 (0x0010 - 0x0000)
struct FStructBoneOverride final
{
public:
	class FName                                   BoneName;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Density;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TestRadius;                                        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FStructBoneOverride) == 0x000004, "Wrong alignment on FStructBoneOverride");
static_assert(sizeof(FStructBoneOverride) == 0x000010, "Wrong size on FStructBoneOverride");
static_assert(offsetof(FStructBoneOverride, BoneName) == 0x000000, "Member 'FStructBoneOverride::BoneName' has a wrong offset!");
static_assert(offsetof(FStructBoneOverride, Density) == 0x000008, "Member 'FStructBoneOverride::Density' has a wrong offset!");
static_assert(offsetof(FStructBoneOverride, TestRadius) == 0x00000C, "Member 'FStructBoneOverride::TestRadius' has a wrong offset!");

// ScriptStruct BlueOcean.WaveParameter
// 0x0014 (0x0014 - 0x0000)
struct FWaveParameter final
{
public:
	float                                         Rotation;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Length;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Amplitude;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Steepness;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeScale;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWaveParameter) == 0x000004, "Wrong alignment on FWaveParameter");
static_assert(sizeof(FWaveParameter) == 0x000014, "Wrong size on FWaveParameter");
static_assert(offsetof(FWaveParameter, Rotation) == 0x000000, "Member 'FWaveParameter::Rotation' has a wrong offset!");
static_assert(offsetof(FWaveParameter, Length) == 0x000004, "Member 'FWaveParameter::Length' has a wrong offset!");
static_assert(offsetof(FWaveParameter, Amplitude) == 0x000008, "Member 'FWaveParameter::Amplitude' has a wrong offset!");
static_assert(offsetof(FWaveParameter, Steepness) == 0x00000C, "Member 'FWaveParameter::Steepness' has a wrong offset!");
static_assert(offsetof(FWaveParameter, TimeScale) == 0x000010, "Member 'FWaveParameter::TimeScale' has a wrong offset!");

// ScriptStruct BlueOcean.WaveSetParameters
// 0x0010 (0x0010 - 0x0000)
struct FWaveSetParameters final
{
public:
	TArray<struct FWaveParameter>                 Waves;                                             // 0x0000(0x0010)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWaveSetParameters) == 0x000008, "Wrong alignment on FWaveSetParameters");
static_assert(sizeof(FWaveSetParameters) == 0x000010, "Wrong size on FWaveSetParameters");
static_assert(offsetof(FWaveSetParameters, Waves) == 0x000000, "Member 'FWaveSetParameters::Waves' has a wrong offset!");

// ScriptStruct BlueOcean.ProjectedGridParameters
// 0x0028 (0x0028 - 0x0000)
struct FProjectedGridParameters final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                GroundNormal;                                      // 0x0008(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScreenScale;                                       // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Infinite;                                          // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C84[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     OverrideMaterial;                                  // 0x0020(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FProjectedGridParameters) == 0x000008, "Wrong alignment on FProjectedGridParameters");
static_assert(sizeof(FProjectedGridParameters) == 0x000028, "Wrong size on FProjectedGridParameters");
static_assert(offsetof(FProjectedGridParameters, Material) == 0x000000, "Member 'FProjectedGridParameters::Material' has a wrong offset!");
static_assert(offsetof(FProjectedGridParameters, GroundNormal) == 0x000008, "Member 'FProjectedGridParameters::GroundNormal' has a wrong offset!");
static_assert(offsetof(FProjectedGridParameters, ScreenScale) == 0x000014, "Member 'FProjectedGridParameters::ScreenScale' has a wrong offset!");
static_assert(offsetof(FProjectedGridParameters, Infinite) == 0x000018, "Member 'FProjectedGridParameters::Infinite' has a wrong offset!");
static_assert(offsetof(FProjectedGridParameters, OverrideMaterial) == 0x000020, "Member 'FProjectedGridParameters::OverrideMaterial' has a wrong offset!");

}

