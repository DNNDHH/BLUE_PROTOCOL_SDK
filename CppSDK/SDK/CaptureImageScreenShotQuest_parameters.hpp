#pragma once

 

// Package: CaptureImageScreenShotQuest

#include "Basic.hpp"


namespace SDK::Params
{

// Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.ExecuteUbergraph_CaptureImageScreenShotQuest
// 0x0010 (0x0010 - 0x0000)
struct CaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8866[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest) == 0x000008, "Wrong alignment on CaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest");
static_assert(sizeof(CaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest) == 0x000010, "Wrong size on CaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest");
static_assert(offsetof(CaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest, EntryPoint) == 0x000000, "Member 'CaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest::EntryPoint' has a wrong offset!");
static_assert(offsetof(CaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'CaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.SetCaptureImage
// 0x0008 (0x0008 - 0x0000)
struct CaptureImageScreenShotQuest_C_SetCaptureImage final
{
public:
	class UTexture2D*                             CaptureImage;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImageScreenShotQuest_C_SetCaptureImage) == 0x000008, "Wrong alignment on CaptureImageScreenShotQuest_C_SetCaptureImage");
static_assert(sizeof(CaptureImageScreenShotQuest_C_SetCaptureImage) == 0x000008, "Wrong size on CaptureImageScreenShotQuest_C_SetCaptureImage");
static_assert(offsetof(CaptureImageScreenShotQuest_C_SetCaptureImage, CaptureImage) == 0x000000, "Member 'CaptureImageScreenShotQuest_C_SetCaptureImage::CaptureImage' has a wrong offset!");

}

