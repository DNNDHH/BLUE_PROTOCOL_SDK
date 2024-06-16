#pragma once

 

// Package: FlatShop_Product_L

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "ST_ShopIconData_structs.hpp"


namespace SDK::Params
{

// Function FlatShop_Product_L.FlatShop_Product_L_C.OnClickedIndex__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct FlatShop_Product_L_C_OnClickedIndex__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Product_L_C_OnClickedIndex__DelegateSignature) == 0x000004, "Wrong alignment on FlatShop_Product_L_C_OnClickedIndex__DelegateSignature");
static_assert(sizeof(FlatShop_Product_L_C_OnClickedIndex__DelegateSignature) == 0x000004, "Wrong size on FlatShop_Product_L_C_OnClickedIndex__DelegateSignature");
static_assert(offsetof(FlatShop_Product_L_C_OnClickedIndex__DelegateSignature, Param_Index) == 0x000000, "Member 'FlatShop_Product_L_C_OnClickedIndex__DelegateSignature::Param_Index' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.ExecuteUbergraph_FlatShop_Product_L
// 0x0270 (0x0270 - 0x0000)
struct FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6173[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBRoseOrbShopItemMasterData           K2Node_CustomEvent_ProductData;                    // 0x0008(0x0060)()
	int32                                         K2Node_CustomEvent_Index;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6174[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue; // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_Get_Thumbnail_Texture_Texture;            // 0x0080(0x0028)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6175[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6176[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0110(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6177[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6178[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0138(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0150(0x0018)()
	class FString                                 CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue_1; // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0180(0x0018)()
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6179[0x5];                                     // 0x01A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2DDynamic*                      Temp_object_Variable_1;                            // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2DDynamic*                      K2Node_CustomEvent_Texture_1;                      // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01D0(0x0018)()
	TDelegate<void(class UTexture2DDynamic* Texture)> K2Node_CreateDelegate_OutputDelegate;              // 0x01E8(0x0010)(ZeroConstructor, NoDestructor)
	class UTexture2DDynamic*                      K2Node_CustomEvent_Texture_2;                      // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2DDynamic* Texture)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0200(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_617A[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_URL;                            // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAsyncTaskDownloadImage*                CallFunc_DownloadImage_ReturnValue;                // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_617B[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_Texture;                        // 0x0238(0x0028)(HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;            // 0x0260(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L) == 0x000008, "Wrong alignment on FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L");
static_assert(sizeof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L) == 0x000270, "Wrong size on FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, EntryPoint) == 0x000000, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::EntryPoint' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_CustomEvent_ProductData) == 0x000008, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_CustomEvent_ProductData' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_CustomEvent_Index) == 0x000068, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue) == 0x000070, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Get_Thumbnail_Texture_Texture) == 0x000080, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Get_Thumbnail_Texture_Texture' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Conv_IntToString_ReturnValue) == 0x0000C0, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Concat_StrStr_ReturnValue) == 0x0000D8, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000E8, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000F8, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000100, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000110, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Greater_IntInt_ReturnValue) == 0x000128, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Add_IntInt_ReturnValue) == 0x00012C, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_BooleanAND_ReturnValue) == 0x000130, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Conv_IntToText_ReturnValue) == 0x000138, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000150, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue_1) == 0x000168, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_GetMasterRoseOrbPurchaseShopText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, Temp_object_Variable) == 0x000178, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000180, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_DynamicCast_AsTexture_2D) == 0x000198, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_DynamicCast_bSuccess) == 0x0001A0, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_IsValid_ReturnValue) == 0x0001A1, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_IsValid_ReturnValue_1) == 0x0001A2, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_CustomEvent_Loaded) == 0x0001A8, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, Temp_object_Variable_1) == 0x0001B0, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001B8, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_CustomEvent_Texture_1) == 0x0001C8, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_CustomEvent_Texture_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001D0, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_CreateDelegate_OutputDelegate) == 0x0001E8, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_CustomEvent_Texture_2) == 0x0001F8, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_CustomEvent_Texture_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_CreateDelegate_OutputDelegate_1) == 0x000200, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_SwitchEnum_CmpSuccess) == 0x000210, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_CustomEvent_URL) == 0x000218, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_CustomEvent_URL' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_DownloadImage_ReturnValue) == 0x000228, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_DownloadImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, CallFunc_IsValid_ReturnValue_2) == 0x000230, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_CustomEvent_Texture) == 0x000238, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L, K2Node_CreateDelegate_OutputDelegate_2) == 0x000260, "Member 'FlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.LoadTexture
// 0x0028 (0x0028 - 0x0000)
struct FlatShop_Product_L_C_LoadTexture final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Product_L_C_LoadTexture) == 0x000008, "Wrong alignment on FlatShop_Product_L_C_LoadTexture");
static_assert(sizeof(FlatShop_Product_L_C_LoadTexture) == 0x000028, "Wrong size on FlatShop_Product_L_C_LoadTexture");
static_assert(offsetof(FlatShop_Product_L_C_LoadTexture, Texture) == 0x000000, "Member 'FlatShop_Product_L_C_LoadTexture::Texture' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.DownLoadImage_Event
// 0x0010 (0x0010 - 0x0000)
struct FlatShop_Product_L_C_DownLoadImage_Event final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Product_L_C_DownLoadImage_Event) == 0x000008, "Wrong alignment on FlatShop_Product_L_C_DownLoadImage_Event");
static_assert(sizeof(FlatShop_Product_L_C_DownLoadImage_Event) == 0x000010, "Wrong size on FlatShop_Product_L_C_DownLoadImage_Event");
static_assert(offsetof(FlatShop_Product_L_C_DownLoadImage_Event, URL) == 0x000000, "Member 'FlatShop_Product_L_C_DownLoadImage_Event::URL' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.SetProductData_RoPS_Event
// 0x0068 (0x0068 - 0x0000)
struct FlatShop_Product_L_C_SetProductData_RoPS_Event final
{
public:
	struct FSBRoseOrbShopItemMasterData           ProductData;                                       // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Param_Index;                                       // 0x0060(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Product_L_C_SetProductData_RoPS_Event) == 0x000008, "Wrong alignment on FlatShop_Product_L_C_SetProductData_RoPS_Event");
static_assert(sizeof(FlatShop_Product_L_C_SetProductData_RoPS_Event) == 0x000068, "Wrong size on FlatShop_Product_L_C_SetProductData_RoPS_Event");
static_assert(offsetof(FlatShop_Product_L_C_SetProductData_RoPS_Event, ProductData) == 0x000000, "Member 'FlatShop_Product_L_C_SetProductData_RoPS_Event::ProductData' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetProductData_RoPS_Event, Param_Index) == 0x000060, "Member 'FlatShop_Product_L_C_SetProductData_RoPS_Event::Param_Index' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.OnLoaded_C1943EA54AEEFAC24C82819C900D7109
// 0x0008 (0x0008 - 0x0000)
struct FlatShop_Product_L_C_OnLoaded_C1943EA54AEEFAC24C82819C900D7109 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Product_L_C_OnLoaded_C1943EA54AEEFAC24C82819C900D7109) == 0x000008, "Wrong alignment on FlatShop_Product_L_C_OnLoaded_C1943EA54AEEFAC24C82819C900D7109");
static_assert(sizeof(FlatShop_Product_L_C_OnLoaded_C1943EA54AEEFAC24C82819C900D7109) == 0x000008, "Wrong size on FlatShop_Product_L_C_OnLoaded_C1943EA54AEEFAC24C82819C900D7109");
static_assert(offsetof(FlatShop_Product_L_C_OnLoaded_C1943EA54AEEFAC24C82819C900D7109, Loaded) == 0x000000, "Member 'FlatShop_Product_L_C_OnLoaded_C1943EA54AEEFAC24C82819C900D7109::Loaded' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.OnSuccess_0A62FBD840A02077625644ABD1C58C54
// 0x0008 (0x0008 - 0x0000)
struct FlatShop_Product_L_C_OnSuccess_0A62FBD840A02077625644ABD1C58C54 final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Product_L_C_OnSuccess_0A62FBD840A02077625644ABD1C58C54) == 0x000008, "Wrong alignment on FlatShop_Product_L_C_OnSuccess_0A62FBD840A02077625644ABD1C58C54");
static_assert(sizeof(FlatShop_Product_L_C_OnSuccess_0A62FBD840A02077625644ABD1C58C54) == 0x000008, "Wrong size on FlatShop_Product_L_C_OnSuccess_0A62FBD840A02077625644ABD1C58C54");
static_assert(offsetof(FlatShop_Product_L_C_OnSuccess_0A62FBD840A02077625644ABD1C58C54, Texture) == 0x000000, "Member 'FlatShop_Product_L_C_OnSuccess_0A62FBD840A02077625644ABD1C58C54::Texture' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.OnFail_0A62FBD840A02077625644ABD1C58C54
// 0x0008 (0x0008 - 0x0000)
struct FlatShop_Product_L_C_OnFail_0A62FBD840A02077625644ABD1C58C54 final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Product_L_C_OnFail_0A62FBD840A02077625644ABD1C58C54) == 0x000008, "Wrong alignment on FlatShop_Product_L_C_OnFail_0A62FBD840A02077625644ABD1C58C54");
static_assert(sizeof(FlatShop_Product_L_C_OnFail_0A62FBD840A02077625644ABD1C58C54) == 0x000008, "Wrong size on FlatShop_Product_L_C_OnFail_0A62FBD840A02077625644ABD1C58C54");
static_assert(offsetof(FlatShop_Product_L_C_OnFail_0A62FBD840A02077625644ABD1C58C54, Texture) == 0x000000, "Member 'FlatShop_Product_L_C_OnFail_0A62FBD840A02077625644ABD1C58C54::Texture' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.SetText_LimitDate
// 0x0040 (0x0040 - 0x0000)
struct FlatShop_Product_L_C_SetText_LimitDate final
{
public:
	struct FDateTime                              LimitDate;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Product_L_C_SetText_LimitDate) == 0x000008, "Wrong alignment on FlatShop_Product_L_C_SetText_LimitDate");
static_assert(sizeof(FlatShop_Product_L_C_SetText_LimitDate) == 0x000040, "Wrong size on FlatShop_Product_L_C_SetText_LimitDate");
static_assert(offsetof(FlatShop_Product_L_C_SetText_LimitDate, LimitDate) == 0x000000, "Member 'FlatShop_Product_L_C_SetText_LimitDate::LimitDate' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetText_LimitDate, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'FlatShop_Product_L_C_SetText_LimitDate::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetText_LimitDate, CallFunc_DateTimeMinValue_ReturnValue) == 0x000018, "Member 'FlatShop_Product_L_C_SetText_LimitDate::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetText_LimitDate, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'FlatShop_Product_L_C_SetText_LimitDate::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetText_LimitDate, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000038, "Member 'FlatShop_Product_L_C_SetText_LimitDate::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetText_LimitDate, CallFunc_SetDateTime_ReturnValue) == 0x000039, "Member 'FlatShop_Product_L_C_SetText_LimitDate::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.SetFlag_RoPS
// 0x0020 (0x0020 - 0x0000)
struct FlatShop_Product_L_C_SetFlag_RoPS final
{
public:
	class FString                                 Param_Flags;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 L_Flags;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Product_L_C_SetFlag_RoPS) == 0x000008, "Wrong alignment on FlatShop_Product_L_C_SetFlag_RoPS");
static_assert(sizeof(FlatShop_Product_L_C_SetFlag_RoPS) == 0x000020, "Wrong size on FlatShop_Product_L_C_SetFlag_RoPS");
static_assert(offsetof(FlatShop_Product_L_C_SetFlag_RoPS, Param_Flags) == 0x000000, "Member 'FlatShop_Product_L_C_SetFlag_RoPS::Param_Flags' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetFlag_RoPS, L_Flags) == 0x000010, "Member 'FlatShop_Product_L_C_SetFlag_RoPS::L_Flags' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.SetProductThumbnail
// 0x0040 (0x0040 - 0x0000)
struct FlatShop_Product_L_C_SetProductThumbnail final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Path;                                              // 0x0010(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Product_L_C_SetProductThumbnail) == 0x000008, "Wrong alignment on FlatShop_Product_L_C_SetProductThumbnail");
static_assert(sizeof(FlatShop_Product_L_C_SetProductThumbnail) == 0x000040, "Wrong size on FlatShop_Product_L_C_SetProductThumbnail");
static_assert(offsetof(FlatShop_Product_L_C_SetProductThumbnail, URL) == 0x000000, "Member 'FlatShop_Product_L_C_SetProductThumbnail::URL' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetProductThumbnail, Path) == 0x000010, "Member 'FlatShop_Product_L_C_SetProductThumbnail::Path' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetProductThumbnail, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000038, "Member 'FlatShop_Product_L_C_SetProductThumbnail::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetProductThumbnail, CallFunc_IsEmpty_ReturnValue) == 0x000039, "Member 'FlatShop_Product_L_C_SetProductThumbnail::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetProductThumbnail, CallFunc_Not_PreBool_ReturnValue) == 0x00003A, "Member 'FlatShop_Product_L_C_SetProductThumbnail::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.Get Thumbnail Texture
// 0x00C8 (0x00C8 - 0x0000)
struct FlatShop_Product_L_C_Get_Thumbnail_Texture final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_617C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0008(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ShopIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_Product_L_C_Get_Thumbnail_Texture) == 0x000008, "Wrong alignment on FlatShop_Product_L_C_Get_Thumbnail_Texture");
static_assert(sizeof(FlatShop_Product_L_C_Get_Thumbnail_Texture) == 0x0000C8, "Wrong size on FlatShop_Product_L_C_Get_Thumbnail_Texture");
static_assert(offsetof(FlatShop_Product_L_C_Get_Thumbnail_Texture, ID) == 0x000000, "Member 'FlatShop_Product_L_C_Get_Thumbnail_Texture::ID' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_Get_Thumbnail_Texture, Texture) == 0x000008, "Member 'FlatShop_Product_L_C_Get_Thumbnail_Texture::Texture' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_Get_Thumbnail_Texture, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'FlatShop_Product_L_C_Get_Thumbnail_Texture::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_Get_Thumbnail_Texture, CallFunc_Conv_StringToName_ReturnValue) == 0x000040, "Member 'FlatShop_Product_L_C_Get_Thumbnail_Texture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_Get_Thumbnail_Texture, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'FlatShop_Product_L_C_Get_Thumbnail_Texture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_Get_Thumbnail_Texture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'FlatShop_Product_L_C_Get_Thumbnail_Texture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_Get_Thumbnail_Texture, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000C1, "Member 'FlatShop_Product_L_C_Get_Thumbnail_Texture::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function FlatShop_Product_L.FlatShop_Product_L_C.SetRibbon
// 0x0018 (0x0018 - 0x0000)
struct FlatShop_Product_L_C_SetRibbon final
{
public:
	int32                                         Param_Flag;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_617D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_617E[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_And_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_Product_L_C_SetRibbon) == 0x000004, "Wrong alignment on FlatShop_Product_L_C_SetRibbon");
static_assert(sizeof(FlatShop_Product_L_C_SetRibbon) == 0x000018, "Wrong size on FlatShop_Product_L_C_SetRibbon");
static_assert(offsetof(FlatShop_Product_L_C_SetRibbon, Param_Flag) == 0x000000, "Member 'FlatShop_Product_L_C_SetRibbon::Param_Flag' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetRibbon, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'FlatShop_Product_L_C_SetRibbon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetRibbon, CallFunc_MakeLiteralInt_ReturnValue) == 0x000008, "Member 'FlatShop_Product_L_C_SetRibbon::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetRibbon, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00000C, "Member 'FlatShop_Product_L_C_SetRibbon::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetRibbon, Temp_bool_Variable) == 0x00000D, "Member 'FlatShop_Product_L_C_SetRibbon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetRibbon, CallFunc_And_IntInt_ReturnValue) == 0x000010, "Member 'FlatShop_Product_L_C_SetRibbon::CallFunc_And_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetRibbon, CallFunc_Conv_IntToBool_ReturnValue) == 0x000014, "Member 'FlatShop_Product_L_C_SetRibbon::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_Product_L_C_SetRibbon, K2Node_Select_Default) == 0x000015, "Member 'FlatShop_Product_L_C_SetRibbon::K2Node_Select_Default' has a wrong offset!");

}

