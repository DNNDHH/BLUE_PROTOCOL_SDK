#pragma once

 

// Package: CaptureImagePhotoMode

#include "Basic.hpp"


namespace SDK::Params
{

// Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.ExecuteUbergraph_CaptureImagePhotoMode
// 0x0040 (0x0040 - 0x0000)
struct CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9686[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetFaceImageURL_ReturnValue;              // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBDownloadImageImpl*                   CallFunc_DownloadImage_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_CharacterId;                    // 0x0028(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode) == 0x000008, "Wrong alignment on CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode");
static_assert(sizeof(CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode) == 0x000040, "Wrong size on CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode");
static_assert(offsetof(CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode, EntryPoint) == 0x000000, "Member 'CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode::EntryPoint' has a wrong offset!");
static_assert(offsetof(CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode, CallFunc_GetFaceImageURL_ReturnValue) == 0x000010, "Member 'CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode::CallFunc_GetFaceImageURL_ReturnValue' has a wrong offset!");
static_assert(offsetof(CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode, CallFunc_DownloadImage_ReturnValue) == 0x000020, "Member 'CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode, K2Node_CustomEvent_CharacterId) == 0x000028, "Member 'CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode::K2Node_CustomEvent_CharacterId' has a wrong offset!");
static_assert(offsetof(CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000039, "Member 'CaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.SetCaptureImageByCharacterId
// 0x0010 (0x0010 - 0x0000)
struct CaptureImagePhotoMode_C_SetCaptureImageByCharacterId final
{
public:
	class FString                                 Param_CharacterId;                                 // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImagePhotoMode_C_SetCaptureImageByCharacterId) == 0x000008, "Wrong alignment on CaptureImagePhotoMode_C_SetCaptureImageByCharacterId");
static_assert(sizeof(CaptureImagePhotoMode_C_SetCaptureImageByCharacterId) == 0x000010, "Wrong size on CaptureImagePhotoMode_C_SetCaptureImageByCharacterId");
static_assert(offsetof(CaptureImagePhotoMode_C_SetCaptureImageByCharacterId, Param_CharacterId) == 0x000000, "Member 'CaptureImagePhotoMode_C_SetCaptureImageByCharacterId::Param_CharacterId' has a wrong offset!");

// Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.SetCaptureImage
// 0x0008 (0x0008 - 0x0000)
struct CaptureImagePhotoMode_C_SetCaptureImage final
{
public:
	class UTexture2DDynamic*                      CaptureImage;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImagePhotoMode_C_SetCaptureImage) == 0x000008, "Wrong alignment on CaptureImagePhotoMode_C_SetCaptureImage");
static_assert(sizeof(CaptureImagePhotoMode_C_SetCaptureImage) == 0x000008, "Wrong size on CaptureImagePhotoMode_C_SetCaptureImage");
static_assert(offsetof(CaptureImagePhotoMode_C_SetCaptureImage, CaptureImage) == 0x000000, "Member 'CaptureImagePhotoMode_C_SetCaptureImage::CaptureImage' has a wrong offset!");

}

