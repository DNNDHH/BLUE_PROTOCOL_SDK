#pragma once

 

// Package: CaptureImageFace

#include "Basic.hpp"


namespace SDK::Params
{

// Function CaptureImageFace.CaptureImageFace_C.ExecuteUbergraph_CaptureImageFace
// 0x0010 (0x0010 - 0x0000)
struct CaptureImageFace_C_ExecuteUbergraph_CaptureImageFace final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_904D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImageFace_C_ExecuteUbergraph_CaptureImageFace) == 0x000008, "Wrong alignment on CaptureImageFace_C_ExecuteUbergraph_CaptureImageFace");
static_assert(sizeof(CaptureImageFace_C_ExecuteUbergraph_CaptureImageFace) == 0x000010, "Wrong size on CaptureImageFace_C_ExecuteUbergraph_CaptureImageFace");
static_assert(offsetof(CaptureImageFace_C_ExecuteUbergraph_CaptureImageFace, EntryPoint) == 0x000000, "Member 'CaptureImageFace_C_ExecuteUbergraph_CaptureImageFace::EntryPoint' has a wrong offset!");
static_assert(offsetof(CaptureImageFace_C_ExecuteUbergraph_CaptureImageFace, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'CaptureImageFace_C_ExecuteUbergraph_CaptureImageFace::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function CaptureImageFace.CaptureImageFace_C.SetCaptureImage
// 0x0008 (0x0008 - 0x0000)
struct CaptureImageFace_C_SetCaptureImage final
{
public:
	class UTexture2DDynamic*                      CaptureImage;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CaptureImageFace_C_SetCaptureImage) == 0x000008, "Wrong alignment on CaptureImageFace_C_SetCaptureImage");
static_assert(sizeof(CaptureImageFace_C_SetCaptureImage) == 0x000008, "Wrong size on CaptureImageFace_C_SetCaptureImage");
static_assert(offsetof(CaptureImageFace_C_SetCaptureImage, CaptureImage) == 0x000000, "Member 'CaptureImageFace_C_SetCaptureImage::CaptureImage' has a wrong offset!");

}

