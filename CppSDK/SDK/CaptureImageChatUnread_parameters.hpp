#pragma once

 

// Package: CaptureImageChatUnread

#include "Basic.hpp"


namespace SDK::Params
{

// Function CaptureImageChatUnread.CaptureImageChatUnread_C.ExecuteUbergraph_CaptureImageChatUnread
// 0x0010 (0x0010 - 0x0000)
struct CaptureImageChatUnread_C_ExecuteUbergraph_CaptureImageChatUnread final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A42[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImageChatUnread_C_ExecuteUbergraph_CaptureImageChatUnread) == 0x000008, "Wrong alignment on CaptureImageChatUnread_C_ExecuteUbergraph_CaptureImageChatUnread");
static_assert(sizeof(CaptureImageChatUnread_C_ExecuteUbergraph_CaptureImageChatUnread) == 0x000010, "Wrong size on CaptureImageChatUnread_C_ExecuteUbergraph_CaptureImageChatUnread");
static_assert(offsetof(CaptureImageChatUnread_C_ExecuteUbergraph_CaptureImageChatUnread, EntryPoint) == 0x000000, "Member 'CaptureImageChatUnread_C_ExecuteUbergraph_CaptureImageChatUnread::EntryPoint' has a wrong offset!");
static_assert(offsetof(CaptureImageChatUnread_C_ExecuteUbergraph_CaptureImageChatUnread, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'CaptureImageChatUnread_C_ExecuteUbergraph_CaptureImageChatUnread::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function CaptureImageChatUnread.CaptureImageChatUnread_C.SetCaptureImage
// 0x0008 (0x0008 - 0x0000)
struct CaptureImageChatUnread_C_SetCaptureImage final
{
public:
	class UTexture2DDynamic*                      CaptureImage;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImageChatUnread_C_SetCaptureImage) == 0x000008, "Wrong alignment on CaptureImageChatUnread_C_SetCaptureImage");
static_assert(sizeof(CaptureImageChatUnread_C_SetCaptureImage) == 0x000008, "Wrong size on CaptureImageChatUnread_C_SetCaptureImage");
static_assert(offsetof(CaptureImageChatUnread_C_SetCaptureImage, CaptureImage) == 0x000000, "Member 'CaptureImageChatUnread_C_SetCaptureImage::CaptureImage' has a wrong offset!");

}

