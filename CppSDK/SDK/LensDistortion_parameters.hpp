#pragma once

 

// Package: LensDistortion

#include "Basic.hpp"

#include "LensDistortion_structs.hpp"


namespace SDK::Params
{

// Function LensDistortion.LensDistortionBlueprintLibrary.DrawUVDisplacementToRenderTarget
// 0x0048 (0x0048 - 0x0000)
struct LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLensDistortionCameraModel             CameraModel;                                       // 0x0008(0x0024)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         DistortedHorizontalFOV;                            // 0x002C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistortedAspectRatio;                              // 0x0030(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UndistortOverscanFactor;                           // 0x0034(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                 OutputRenderTarget;                                // 0x0038(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutputMultiply;                                    // 0x0040(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutputAdd;                                         // 0x0044(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget) == 0x000008, "Wrong alignment on LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget");
static_assert(sizeof(LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget) == 0x000048, "Wrong size on LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget");
static_assert(offsetof(LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget, WorldContextObject) == 0x000000, "Member 'LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget, CameraModel) == 0x000008, "Member 'LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget::CameraModel' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget, DistortedHorizontalFOV) == 0x00002C, "Member 'LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget::DistortedHorizontalFOV' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget, DistortedAspectRatio) == 0x000030, "Member 'LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget::DistortedAspectRatio' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget, UndistortOverscanFactor) == 0x000034, "Member 'LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget::UndistortOverscanFactor' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget, OutputRenderTarget) == 0x000038, "Member 'LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget::OutputRenderTarget' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget, OutputMultiply) == 0x000040, "Member 'LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget::OutputMultiply' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget, OutputAdd) == 0x000044, "Member 'LensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget::OutputAdd' has a wrong offset!");

// Function LensDistortion.LensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
// 0x004C (0x004C - 0x0000)
struct LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels final
{
public:
	struct FLensDistortionCameraModel             A;                                                 // 0x0000(0x0024)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FLensDistortionCameraModel             B;                                                 // 0x0024(0x0024)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10E7[0x3];                                     // 0x0049(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels) == 0x000004, "Wrong alignment on LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels");
static_assert(sizeof(LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels) == 0x00004C, "Wrong size on LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels");
static_assert(offsetof(LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels, A) == 0x000000, "Member 'LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels::A' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels, B) == 0x000024, "Member 'LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels::B' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels, ReturnValue) == 0x000048, "Member 'LensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels::ReturnValue' has a wrong offset!");

// Function LensDistortion.LensDistortionBlueprintLibrary.GetUndistortOverscanFactor
// 0x0030 (0x0030 - 0x0000)
struct LensDistortionBlueprintLibrary_GetUndistortOverscanFactor final
{
public:
	struct FLensDistortionCameraModel             CameraModel;                                       // 0x0000(0x0024)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                         DistortedHorizontalFOV;                            // 0x0024(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistortedAspectRatio;                              // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UndistortOverscanFactor;                           // 0x002C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensDistortionBlueprintLibrary_GetUndistortOverscanFactor) == 0x000004, "Wrong alignment on LensDistortionBlueprintLibrary_GetUndistortOverscanFactor");
static_assert(sizeof(LensDistortionBlueprintLibrary_GetUndistortOverscanFactor) == 0x000030, "Wrong size on LensDistortionBlueprintLibrary_GetUndistortOverscanFactor");
static_assert(offsetof(LensDistortionBlueprintLibrary_GetUndistortOverscanFactor, CameraModel) == 0x000000, "Member 'LensDistortionBlueprintLibrary_GetUndistortOverscanFactor::CameraModel' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_GetUndistortOverscanFactor, DistortedHorizontalFOV) == 0x000024, "Member 'LensDistortionBlueprintLibrary_GetUndistortOverscanFactor::DistortedHorizontalFOV' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_GetUndistortOverscanFactor, DistortedAspectRatio) == 0x000028, "Member 'LensDistortionBlueprintLibrary_GetUndistortOverscanFactor::DistortedAspectRatio' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_GetUndistortOverscanFactor, UndistortOverscanFactor) == 0x00002C, "Member 'LensDistortionBlueprintLibrary_GetUndistortOverscanFactor::UndistortOverscanFactor' has a wrong offset!");

// Function LensDistortion.LensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
// 0x004C (0x004C - 0x0000)
struct LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels final
{
public:
	struct FLensDistortionCameraModel             A;                                                 // 0x0000(0x0024)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FLensDistortionCameraModel             B;                                                 // 0x0024(0x0024)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10E8[0x3];                                     // 0x0049(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels) == 0x000004, "Wrong alignment on LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels");
static_assert(sizeof(LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels) == 0x00004C, "Wrong size on LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels");
static_assert(offsetof(LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels, A) == 0x000000, "Member 'LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels::A' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels, B) == 0x000024, "Member 'LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels::B' has a wrong offset!");
static_assert(offsetof(LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels, ReturnValue) == 0x000048, "Member 'LensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels::ReturnValue' has a wrong offset!");

}

