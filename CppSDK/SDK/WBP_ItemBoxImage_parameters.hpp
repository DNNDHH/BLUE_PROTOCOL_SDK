#pragma once

 

// Package: WBP_ItemBoxImage

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.ExecuteUbergraph_WBP_ItemBoxImage
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InItemId;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     K2Node_CustomEvent_InItemType;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_774F[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_TextureReference;               // 0x0010(0x0028)(ConstParm, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0038(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7750[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_NowLoadTexture;                 // 0x0080(0x0028)(HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage) == 0x000008, "Wrong alignment on WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage");
static_assert(sizeof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage) == 0x0000C0, "Wrong size on WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, EntryPoint) == 0x000000, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, K2Node_CustomEvent_InItemId) == 0x000004, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::K2Node_CustomEvent_InItemId' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, K2Node_CustomEvent_InItemType) == 0x000008, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::K2Node_CustomEvent_InItemType' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, K2Node_CustomEvent_TextureReference) == 0x000010, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::K2Node_CustomEvent_TextureReference' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000038, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000060, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, K2Node_CustomEvent_Loaded) == 0x000068, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, K2Node_CreateDelegate_OutputDelegate) == 0x000070, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, K2Node_CustomEvent_NowLoadTexture) == 0x000080, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::K2Node_CustomEvent_NowLoadTexture' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, Temp_object_Variable) == 0x0000A8, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, K2Node_DynamicCast_AsTexture_2D) == 0x0000B0, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, CallFunc_IsValid_ReturnValue) == 0x0000B9, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage, CallFunc_IsValid_ReturnValue_1) == 0x0000BA, "Member 'WBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.InitIconImage
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemBoxImage_C_InitIconImage final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     InItemType;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxImage_C_InitIconImage) == 0x000004, "Wrong alignment on WBP_ItemBoxImage_C_InitIconImage");
static_assert(sizeof(WBP_ItemBoxImage_C_InitIconImage) == 0x000008, "Wrong size on WBP_ItemBoxImage_C_InitIconImage");
static_assert(offsetof(WBP_ItemBoxImage_C_InitIconImage, InItemID) == 0x000000, "Member 'WBP_ItemBoxImage_C_InitIconImage::InItemID' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxImage_C_InitIconImage, InItemType) == 0x000004, "Member 'WBP_ItemBoxImage_C_InitIconImage::InItemType' has a wrong offset!");

// Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.IconLoadStart
// 0x0028 (0x0028 - 0x0000)
struct WBP_ItemBoxImage_C_IconLoadStart final
{
public:
	TSoftObjectPtr<class UTexture2D>              NowLoadTexture;                                    // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxImage_C_IconLoadStart) == 0x000008, "Wrong alignment on WBP_ItemBoxImage_C_IconLoadStart");
static_assert(sizeof(WBP_ItemBoxImage_C_IconLoadStart) == 0x000028, "Wrong size on WBP_ItemBoxImage_C_IconLoadStart");
static_assert(offsetof(WBP_ItemBoxImage_C_IconLoadStart, NowLoadTexture) == 0x000000, "Member 'WBP_ItemBoxImage_C_IconLoadStart::NowLoadTexture' has a wrong offset!");

// Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.IconLoadRequest
// 0x0028 (0x0028 - 0x0000)
struct WBP_ItemBoxImage_C_IconLoadRequest final
{
public:
	TSoftObjectPtr<class UTexture2D>              TextureReference;                                  // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxImage_C_IconLoadRequest) == 0x000008, "Wrong alignment on WBP_ItemBoxImage_C_IconLoadRequest");
static_assert(sizeof(WBP_ItemBoxImage_C_IconLoadRequest) == 0x000028, "Wrong size on WBP_ItemBoxImage_C_IconLoadRequest");
static_assert(offsetof(WBP_ItemBoxImage_C_IconLoadRequest, TextureReference) == 0x000000, "Member 'WBP_ItemBoxImage_C_IconLoadRequest::TextureReference' has a wrong offset!");

// Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.OnLoaded_753F2A8F4CEFA9688FDB97A44A552509
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemBoxImage_C_OnLoaded_753F2A8F4CEFA9688FDB97A44A552509 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxImage_C_OnLoaded_753F2A8F4CEFA9688FDB97A44A552509) == 0x000008, "Wrong alignment on WBP_ItemBoxImage_C_OnLoaded_753F2A8F4CEFA9688FDB97A44A552509");
static_assert(sizeof(WBP_ItemBoxImage_C_OnLoaded_753F2A8F4CEFA9688FDB97A44A552509) == 0x000008, "Wrong size on WBP_ItemBoxImage_C_OnLoaded_753F2A8F4CEFA9688FDB97A44A552509");
static_assert(offsetof(WBP_ItemBoxImage_C_OnLoaded_753F2A8F4CEFA9688FDB97A44A552509, Loaded) == 0x000000, "Member 'WBP_ItemBoxImage_C_OnLoaded_753F2A8F4CEFA9688FDB97A44A552509::Loaded' has a wrong offset!");

}

