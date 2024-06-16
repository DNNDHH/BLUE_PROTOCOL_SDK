#pragma once

 

// Package: LensDistortion

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct LensDistortion.LensDistortionCameraModel
// 0x0024 (0x0024 - 0x0000)
struct FLensDistortionCameraModel final
{
public:
	float                                         K1;                                                // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         K2;                                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         K3;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         P1;                                                // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         P2;                                                // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              F;                                                 // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              C;                                                 // 0x001C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLensDistortionCameraModel) == 0x000004, "Wrong alignment on FLensDistortionCameraModel");
static_assert(sizeof(FLensDistortionCameraModel) == 0x000024, "Wrong size on FLensDistortionCameraModel");
static_assert(offsetof(FLensDistortionCameraModel, K1) == 0x000000, "Member 'FLensDistortionCameraModel::K1' has a wrong offset!");
static_assert(offsetof(FLensDistortionCameraModel, K2) == 0x000004, "Member 'FLensDistortionCameraModel::K2' has a wrong offset!");
static_assert(offsetof(FLensDistortionCameraModel, K3) == 0x000008, "Member 'FLensDistortionCameraModel::K3' has a wrong offset!");
static_assert(offsetof(FLensDistortionCameraModel, P1) == 0x00000C, "Member 'FLensDistortionCameraModel::P1' has a wrong offset!");
static_assert(offsetof(FLensDistortionCameraModel, P2) == 0x000010, "Member 'FLensDistortionCameraModel::P2' has a wrong offset!");
static_assert(offsetof(FLensDistortionCameraModel, F) == 0x000014, "Member 'FLensDistortionCameraModel::F' has a wrong offset!");
static_assert(offsetof(FLensDistortionCameraModel, C) == 0x00001C, "Member 'FLensDistortionCameraModel::C' has a wrong offset!");

}

