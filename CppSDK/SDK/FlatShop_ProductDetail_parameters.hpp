#pragma once

 

// Package: FlatShop_ProductDetail

#include "Basic.hpp"

#include "ST_ShopIconData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.ExecuteUbergraph_FlatShop_ProductDetail
// 0x0278 (0x0278 - 0x0000)
struct FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6116[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2DDynamic*                      K2Node_CustomEvent_Texture_1;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2DDynamic* Texture)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UTexture2DDynamic*                      K2Node_CustomEvent_Texture;                        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2DDynamic* Texture)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UTexture2DDynamic*                      Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	struct FSBRoseOrbShopItemMasterData           K2Node_CustomEvent_ProductData;                    // 0x0058(0x0060)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_Get_ThumbnailTexture_Texture;             // 0x00B8(0x0028)(HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6117[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00E8(0x0018)()
	int32                                         K2Node_CustomEvent_Ribbon;                         // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0105(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6118[0x2];                                     // 0x0106(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable_1;                            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6119[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_Name;                           // 0x011C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_611A[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IAssetRegistry>        CallFunc_GetAssetRegistry_ReturnValue;             // 0x0128(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAssetData                             CallFunc_GetAssetByObjectPath_ReturnValue;         // 0x0140(0x0060)(HasGetValueTypeHash)
	class UObject*                                CallFunc_GetAsset_ReturnValue;                     // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                 CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x01A8(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_Path;                           // 0x01D0(0x0028)(HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_URL;                            // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncTaskDownloadImage*                CallFunc_DownloadImage_ReturnValue;                // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D_1;                 // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_611B[0x1];                                     // 0x0223(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_3;            // 0x0224(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x023D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_611C[0x2];                                     // 0x023E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          K2Node_ComponentBoundEvent_Sender;                 // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_611D[0x6];                                     // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x025A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_611E[0x5];                                     // 0x025B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_Sender;                         // 0x0268(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail) == 0x000008, "Wrong alignment on FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail");
static_assert(sizeof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail) == 0x000278, "Wrong size on FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, EntryPoint) == 0x000000, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::EntryPoint' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CustomEvent_Texture_1) == 0x000008, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CustomEvent_Texture_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CustomEvent_Texture) == 0x000020, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, Temp_object_Variable) == 0x000038, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_Create_ReturnValue) == 0x000040, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CustomEvent_ProductData) == 0x000058, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CustomEvent_ProductData' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_Get_ThumbnailTexture_Texture) == 0x0000B8, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_Get_ThumbnailTexture_Texture' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_Add_IntInt_ReturnValue) == 0x0000E0, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_Conv_IntToText_ReturnValue) == 0x0000E8, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CustomEvent_Ribbon) == 0x000100, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CustomEvent_Ribbon' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, Temp_bool_Variable) == 0x000104, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_MakeLiteralByte_ReturnValue) == 0x000105, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, Temp_object_Variable_1) == 0x000108, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_DynamicCast_AsTexture_2D) == 0x000110, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CustomEvent_Name) == 0x00011C, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_GetAssetRegistry_ReturnValue) == 0x000128, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_GetAssetRegistry_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CustomEvent_Loaded) == 0x000138, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_GetAssetByObjectPath_ReturnValue) == 0x000140, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_GetAssetByObjectPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_GetAsset_ReturnValue) == 0x0001A0, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_GetAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x0001A8, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CustomEvent_Path) == 0x0001D0, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CustomEvent_Path' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CustomEvent_URL) == 0x0001F8, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000208, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_DownloadImage_ReturnValue) == 0x000210, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_DynamicCast_AsTexture_2D_1) == 0x000218, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_DynamicCast_AsTexture_2D_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_DynamicCast_bSuccess_1) == 0x000220, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_IsValid_ReturnValue) == 0x000221, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000222, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CreateDelegate_OutputDelegate_3) == 0x000224, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_MakeLiteralInt_ReturnValue) == 0x000234, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_And_IntInt_ReturnValue) == 0x000238, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_Conv_IntToBool_ReturnValue) == 0x00023C, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00023D, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_ComponentBoundEvent_Sender) == 0x000240, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_Select_Default) == 0x000248, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_GetUIManager_IsValid) == 0x000249, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_GetUIManager_ReturnValue) == 0x000250, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_Conv_IntToByte_ReturnValue) == 0x000258, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_GetValidValue_ReturnValue) == 0x000259, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_GetUIManager_IsValid_1) == 0x00025A, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_GetUIManager_ReturnValue_1) == 0x000260, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, K2Node_CustomEvent_Sender) == 0x000268, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail, CallFunc_PlayAnimation_ReturnValue) == 0x000270, "Member 'FlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnClose_Event
// 0x0008 (0x0008 - 0x0000)
struct FlatShop_ProductDetail_C_OnClose_Event final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductDetail_C_OnClose_Event) == 0x000008, "Wrong alignment on FlatShop_ProductDetail_C_OnClose_Event");
static_assert(sizeof(FlatShop_ProductDetail_C_OnClose_Event) == 0x000008, "Wrong size on FlatShop_ProductDetail_C_OnClose_Event");
static_assert(offsetof(FlatShop_ProductDetail_C_OnClose_Event, Sender) == 0x000000, "Member 'FlatShop_ProductDetail_C_OnClose_Event::Sender' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct FlatShop_ProductDetail_C_BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	class UCommonIcon_C*                          Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductDetail_C_BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on FlatShop_ProductDetail_C_BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(FlatShop_ProductDetail_C_BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong size on FlatShop_ProductDetail_C_BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(FlatShop_ProductDetail_C_BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, Sender) == 0x000000, "Member 'FlatShop_ProductDetail_C_BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::Sender' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.DownLoadImage_Event
// 0x0010 (0x0010 - 0x0000)
struct FlatShop_ProductDetail_C_DownLoadImage_Event final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductDetail_C_DownLoadImage_Event) == 0x000008, "Wrong alignment on FlatShop_ProductDetail_C_DownLoadImage_Event");
static_assert(sizeof(FlatShop_ProductDetail_C_DownLoadImage_Event) == 0x000010, "Wrong size on FlatShop_ProductDetail_C_DownLoadImage_Event");
static_assert(offsetof(FlatShop_ProductDetail_C_DownLoadImage_Event, URL) == 0x000000, "Member 'FlatShop_ProductDetail_C_DownLoadImage_Event::URL' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.LoadImageSoftRef_Event
// 0x0028 (0x0028 - 0x0000)
struct FlatShop_ProductDetail_C_LoadImageSoftRef_Event final
{
public:
	TSoftObjectPtr<class UTexture2D>              Path;                                              // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductDetail_C_LoadImageSoftRef_Event) == 0x000008, "Wrong alignment on FlatShop_ProductDetail_C_LoadImageSoftRef_Event");
static_assert(sizeof(FlatShop_ProductDetail_C_LoadImageSoftRef_Event) == 0x000028, "Wrong size on FlatShop_ProductDetail_C_LoadImageSoftRef_Event");
static_assert(offsetof(FlatShop_ProductDetail_C_LoadImageSoftRef_Event, Path) == 0x000000, "Member 'FlatShop_ProductDetail_C_LoadImageSoftRef_Event::Path' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.LoadImageName_Event
// 0x0008 (0x0008 - 0x0000)
struct FlatShop_ProductDetail_C_LoadImageName_Event final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductDetail_C_LoadImageName_Event) == 0x000004, "Wrong alignment on FlatShop_ProductDetail_C_LoadImageName_Event");
static_assert(sizeof(FlatShop_ProductDetail_C_LoadImageName_Event) == 0x000008, "Wrong size on FlatShop_ProductDetail_C_LoadImageName_Event");
static_assert(offsetof(FlatShop_ProductDetail_C_LoadImageName_Event, Param_Name) == 0x000000, "Member 'FlatShop_ProductDetail_C_LoadImageName_Event::Param_Name' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetFlags_ROS
// 0x0004 (0x0004 - 0x0000)
struct FlatShop_ProductDetail_C_SetFlags_ROS final
{
public:
	int32                                         Ribbon;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductDetail_C_SetFlags_ROS) == 0x000004, "Wrong alignment on FlatShop_ProductDetail_C_SetFlags_ROS");
static_assert(sizeof(FlatShop_ProductDetail_C_SetFlags_ROS) == 0x000004, "Wrong size on FlatShop_ProductDetail_C_SetFlags_ROS");
static_assert(offsetof(FlatShop_ProductDetail_C_SetFlags_ROS, Ribbon) == 0x000000, "Member 'FlatShop_ProductDetail_C_SetFlags_ROS::Ribbon' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetProductData_RoPS
// 0x0060 (0x0060 - 0x0000)
struct FlatShop_ProductDetail_C_SetProductData_RoPS final
{
public:
	struct FSBRoseOrbShopItemMasterData           ProductData;                                       // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FlatShop_ProductDetail_C_SetProductData_RoPS) == 0x000008, "Wrong alignment on FlatShop_ProductDetail_C_SetProductData_RoPS");
static_assert(sizeof(FlatShop_ProductDetail_C_SetProductData_RoPS) == 0x000060, "Wrong size on FlatShop_ProductDetail_C_SetProductData_RoPS");
static_assert(offsetof(FlatShop_ProductDetail_C_SetProductData_RoPS, ProductData) == 0x000000, "Member 'FlatShop_ProductDetail_C_SetProductData_RoPS::ProductData' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4
// 0x0008 (0x0008 - 0x0000)
struct FlatShop_ProductDetail_C_OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4 final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductDetail_C_OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4) == 0x000008, "Wrong alignment on FlatShop_ProductDetail_C_OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4");
static_assert(sizeof(FlatShop_ProductDetail_C_OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4) == 0x000008, "Wrong size on FlatShop_ProductDetail_C_OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4");
static_assert(offsetof(FlatShop_ProductDetail_C_OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4, Texture) == 0x000000, "Member 'FlatShop_ProductDetail_C_OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4::Texture' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnFail_48D4A76A494FBE239EF1AD90CEDE58B4
// 0x0008 (0x0008 - 0x0000)
struct FlatShop_ProductDetail_C_OnFail_48D4A76A494FBE239EF1AD90CEDE58B4 final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductDetail_C_OnFail_48D4A76A494FBE239EF1AD90CEDE58B4) == 0x000008, "Wrong alignment on FlatShop_ProductDetail_C_OnFail_48D4A76A494FBE239EF1AD90CEDE58B4");
static_assert(sizeof(FlatShop_ProductDetail_C_OnFail_48D4A76A494FBE239EF1AD90CEDE58B4) == 0x000008, "Wrong size on FlatShop_ProductDetail_C_OnFail_48D4A76A494FBE239EF1AD90CEDE58B4");
static_assert(offsetof(FlatShop_ProductDetail_C_OnFail_48D4A76A494FBE239EF1AD90CEDE58B4, Texture) == 0x000000, "Member 'FlatShop_ProductDetail_C_OnFail_48D4A76A494FBE239EF1AD90CEDE58B4::Texture' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D
// 0x0008 (0x0008 - 0x0000)
struct FlatShop_ProductDetail_C_OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductDetail_C_OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D) == 0x000008, "Wrong alignment on FlatShop_ProductDetail_C_OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D");
static_assert(sizeof(FlatShop_ProductDetail_C_OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D) == 0x000008, "Wrong size on FlatShop_ProductDetail_C_OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D");
static_assert(offsetof(FlatShop_ProductDetail_C_OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D, Loaded) == 0x000000, "Member 'FlatShop_ProductDetail_C_OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D::Loaded' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Get ThumbnailTexture
// 0x00C8 (0x00C8 - 0x0000)
struct FlatShop_ProductDetail_C_Get_ThumbnailTexture final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_611F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0008(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ShopIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_ProductDetail_C_Get_ThumbnailTexture) == 0x000008, "Wrong alignment on FlatShop_ProductDetail_C_Get_ThumbnailTexture");
static_assert(sizeof(FlatShop_ProductDetail_C_Get_ThumbnailTexture) == 0x0000C8, "Wrong size on FlatShop_ProductDetail_C_Get_ThumbnailTexture");
static_assert(offsetof(FlatShop_ProductDetail_C_Get_ThumbnailTexture, ID) == 0x000000, "Member 'FlatShop_ProductDetail_C_Get_ThumbnailTexture::ID' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_Get_ThumbnailTexture, Texture) == 0x000008, "Member 'FlatShop_ProductDetail_C_Get_ThumbnailTexture::Texture' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_Get_ThumbnailTexture, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'FlatShop_ProductDetail_C_Get_ThumbnailTexture::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_Get_ThumbnailTexture, CallFunc_Conv_StringToName_ReturnValue) == 0x000040, "Member 'FlatShop_ProductDetail_C_Get_ThumbnailTexture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_Get_ThumbnailTexture, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'FlatShop_ProductDetail_C_Get_ThumbnailTexture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_Get_ThumbnailTexture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'FlatShop_ProductDetail_C_Get_ThumbnailTexture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_Get_ThumbnailTexture, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000C1, "Member 'FlatShop_ProductDetail_C_Get_ThumbnailTexture::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetupBonusIcon
// 0x0090 (0x0090 - 0x0000)
struct FlatShop_ProductDetail_C_SetupBonusIcon final
{
public:
	int32                                         BounsId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindShopItemSetMaster_bIsValid;           // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6120[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFlatShopItemSetMasterData           CallFunc_FindShopItemSetMaster_ShopItemSetMaster;  // 0x0008(0x003C)(NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6121[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6122[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6123[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_ProductDetail_C_SetupBonusIcon) == 0x000008, "Wrong alignment on FlatShop_ProductDetail_C_SetupBonusIcon");
static_assert(sizeof(FlatShop_ProductDetail_C_SetupBonusIcon) == 0x000090, "Wrong size on FlatShop_ProductDetail_C_SetupBonusIcon");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, BounsId) == 0x000000, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::BounsId' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, Temp_bool_Variable) == 0x000004, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000005, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, CallFunc_FindShopItemSetMaster_bIsValid) == 0x000006, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::CallFunc_FindShopItemSetMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, CallFunc_FindShopItemSetMaster_ShopItemSetMaster) == 0x000008, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::CallFunc_FindShopItemSetMaster_ShopItemSetMaster' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, CallFunc_MakeLiteralByte_ReturnValue) == 0x000044, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, K2Node_MakeArray_Array) == 0x000048, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, CallFunc_Conv_IntToByte_ReturnValue) == 0x000058, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, CallFunc_Array_Get_Item) == 0x000060, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, CallFunc_GetValidValue_ReturnValue) == 0x000068, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000070, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, CallFunc_GetDisplayName_ReturnValue) == 0x000078, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, CallFunc_IsEmpty_ReturnValue) == 0x000088, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000089, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_ProductDetail_C_SetupBonusIcon, K2Node_Select_Default) == 0x00008A, "Member 'FlatShop_ProductDetail_C_SetupBonusIcon::K2Node_Select_Default' has a wrong offset!");

}

