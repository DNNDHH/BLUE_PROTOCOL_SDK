#pragma once

 

// Package: CaptureImageChat

#include "Basic.hpp"


namespace SDK::Params
{

// Function CaptureImageChat.CaptureImageChat_C.ExecuteUbergraph_CaptureImageChat
// 0x0010 (0x0010 - 0x0000)
struct CaptureImageChat_C_ExecuteUbergraph_CaptureImageChat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F83[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImageChat_C_ExecuteUbergraph_CaptureImageChat) == 0x000008, "Wrong alignment on CaptureImageChat_C_ExecuteUbergraph_CaptureImageChat");
static_assert(sizeof(CaptureImageChat_C_ExecuteUbergraph_CaptureImageChat) == 0x000010, "Wrong size on CaptureImageChat_C_ExecuteUbergraph_CaptureImageChat");
static_assert(offsetof(CaptureImageChat_C_ExecuteUbergraph_CaptureImageChat, EntryPoint) == 0x000000, "Member 'CaptureImageChat_C_ExecuteUbergraph_CaptureImageChat::EntryPoint' has a wrong offset!");
static_assert(offsetof(CaptureImageChat_C_ExecuteUbergraph_CaptureImageChat, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'CaptureImageChat_C_ExecuteUbergraph_CaptureImageChat::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function CaptureImageChat.CaptureImageChat_C.SetCaptureImage
// 0x0008 (0x0008 - 0x0000)
struct CaptureImageChat_C_SetCaptureImage final
{
public:
	class UTexture2DDynamic*                      CaptureImage;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImageChat_C_SetCaptureImage) == 0x000008, "Wrong alignment on CaptureImageChat_C_SetCaptureImage");
static_assert(sizeof(CaptureImageChat_C_SetCaptureImage) == 0x000008, "Wrong size on CaptureImageChat_C_SetCaptureImage");
static_assert(offsetof(CaptureImageChat_C_SetCaptureImage, CaptureImage) == 0x000000, "Member 'CaptureImageChat_C_SetCaptureImage::CaptureImage' has a wrong offset!");

}

