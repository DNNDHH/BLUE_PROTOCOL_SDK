#pragma once

 

// Package: CaptureImageMatching

#include "Basic.hpp"


namespace SDK::Params
{

// Function CaptureImageMatching.CaptureImageMatching_C.ExecuteUbergraph_CaptureImageMatching
// 0x0010 (0x0010 - 0x0000)
struct CaptureImageMatching_C_ExecuteUbergraph_CaptureImageMatching final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_86EA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImageMatching_C_ExecuteUbergraph_CaptureImageMatching) == 0x000008, "Wrong alignment on CaptureImageMatching_C_ExecuteUbergraph_CaptureImageMatching");
static_assert(sizeof(CaptureImageMatching_C_ExecuteUbergraph_CaptureImageMatching) == 0x000010, "Wrong size on CaptureImageMatching_C_ExecuteUbergraph_CaptureImageMatching");
static_assert(offsetof(CaptureImageMatching_C_ExecuteUbergraph_CaptureImageMatching, EntryPoint) == 0x000000, "Member 'CaptureImageMatching_C_ExecuteUbergraph_CaptureImageMatching::EntryPoint' has a wrong offset!");
static_assert(offsetof(CaptureImageMatching_C_ExecuteUbergraph_CaptureImageMatching, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'CaptureImageMatching_C_ExecuteUbergraph_CaptureImageMatching::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function CaptureImageMatching.CaptureImageMatching_C.SetCaptureImage
// 0x0008 (0x0008 - 0x0000)
struct CaptureImageMatching_C_SetCaptureImage final
{
public:
	class UTexture2DDynamic*                      CaptureImage;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImageMatching_C_SetCaptureImage) == 0x000008, "Wrong alignment on CaptureImageMatching_C_SetCaptureImage");
static_assert(sizeof(CaptureImageMatching_C_SetCaptureImage) == 0x000008, "Wrong size on CaptureImageMatching_C_SetCaptureImage");
static_assert(offsetof(CaptureImageMatching_C_SetCaptureImage, CaptureImage) == 0x000000, "Member 'CaptureImageMatching_C_SetCaptureImage::CaptureImage' has a wrong offset!");

}

