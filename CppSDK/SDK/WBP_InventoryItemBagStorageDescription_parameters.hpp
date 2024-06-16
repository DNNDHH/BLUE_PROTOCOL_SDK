#pragma once

 

// Package: WBP_InventoryItemBagStorageDescription

#include "Basic.hpp"

#include "InventoryData_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "DescripionButtonType_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryItemBagStorageDescription_C_OnButtonClicked__DelegateSignature final
{
public:
	EDescripionButtonType                         ButtonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryItemBagStorageDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on WBP_InventoryItemBagStorageDescription_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(WBP_InventoryItemBagStorageDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on WBP_InventoryItemBagStorageDescription_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_OnButtonClicked__DelegateSignature, ButtonType) == 0x000000, "Member 'WBP_InventoryItemBagStorageDescription_C_OnButtonClicked__DelegateSignature::ButtonType' has a wrong offset!");

// Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.SetItem
// 0x0830 (0x0830 - 0x0000)
struct WBP_InventoryItemBagStorageDescription_C_SetItem final
{
public:
	struct FInventoryData                         Param_InventoryItemData;                           // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FName                                   AbilityPartsName2;                                 // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AbilityPartsName1;                                 // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSyntheAbilityData                   SyntheAbilityMax;                                  // 0x00A8(0x001C)(Edit, BlueprintVisible, NoDestructor)
	struct FSBSyntheAbilityData                   SyntheAbilityMin;                                  // 0x00C4(0x001C)(Edit, BlueprintVisible, NoDestructor)
	struct FSBAbilityTextData                     FusionItemText;                                    // 0x00E0(0x0050)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76EA[0x1];                                     // 0x0137(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76EB[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0140(0x00D0)()
	int32                                         Temp_int_Variable_1;                               // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0215(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0216(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0217(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x021B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76EC[0x3];                                     // 0x021D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76ED[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0238(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76EE[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0268(0x0018)()
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0280(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76EF[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x02A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x02BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76F0[0x1];                                     // 0x02BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x02BC(0x0018)(NoDestructor)
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76F1[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x02D8(0x0048)()
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy; // 0x0320(0x001C)(NoDestructor)
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy; // 0x033C(0x001C)(NoDestructor)
	bool                                          CallFunc_GetFusionItemTextCollection_bIsValid;     // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76F2[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityTextData                     CallFunc_GetFusionItemTextCollection_ReturnValue;  // 0x0360(0x0050)(ConstParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x03B0(0x0018)()
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x03C8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x03E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76F3[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x03F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x0402(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0403(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0404(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x0405(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0406(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0407(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue; // 0x0408(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_1; // 0x0418(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0428(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0440(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0458(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0498(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x04D8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x04F0(0x0018)()
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_2; // 0x0508(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_3; // 0x0518(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0528(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0540(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0558(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0598(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x05D8(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x05E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x05F8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0610(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0628(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0640(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0658(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76F4[0x7];                                     // 0x0659(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0660(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0678(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0679(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76F5[0x6];                                     // 0x067A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0680(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0698(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0699(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_9;                              // 0x069A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x069B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x069C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x069D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x069E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x069F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x06A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x06B0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x06C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76F6[0x3];                                     // 0x06C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTextTableHash                       K2Node_Select_Default_3;                           // 0x06CC(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_10;                             // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76F7[0x7];                                     // 0x06D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue_1;                // 0x06D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x06E8(0x0018)()
	bool                                          Temp_bool_Variable_11;                             // 0x0700(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76F8[0x7];                                     // 0x0701(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue_2;                // 0x0708(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0718(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76F9[0x7];                                     // 0x0719(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x0720(0x0018)()
	class FText                                   K2Node_Select_Default_5;                           // 0x0738(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0750(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0751(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76FA[0x6];                                     // 0x0752(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemToolTipText_OutName;               // 0x0758(0x0018)()
	class FText                                   CallFunc_GetItemToolTipText_OutType;               // 0x0770(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0788(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x0789(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x078A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_7;                           // 0x078B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isInventoryItemLockedSimple_ReturnValue;  // 0x078C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x078D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x078E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLockedSimple_ReturnValue;    // 0x078F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0790(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_8;                           // 0x0791(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0792(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0793(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_13;                             // 0x0794(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0795(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76FB[0x2];                                     // 0x0796(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_9;                           // 0x0798(0x0018)()
	int32                                         K2Node_Select_Default_10;                          // 0x07B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76FC[0x4];                                     // 0x07B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x07B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x07C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76FD[0x7];                                     // 0x07C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x07C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_11;                          // 0x07D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76FE[0x7];                                     // 0x07D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x07E0(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_12;                          // 0x07F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_13;                          // 0x07F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x07FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x07FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76FF[0x4];                                     // 0x07FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_4;                          // 0x0800(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0810(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0818(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0820(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryItemBagStorageDescription_C_SetItem) == 0x000008, "Wrong alignment on WBP_InventoryItemBagStorageDescription_C_SetItem");
static_assert(sizeof(WBP_InventoryItemBagStorageDescription_C_SetItem) == 0x000830, "Wrong size on WBP_InventoryItemBagStorageDescription_C_SetItem");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Param_InventoryItemData) == 0x000000, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Param_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, AbilityPartsName2) == 0x000098, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::AbilityPartsName2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, AbilityPartsName1) == 0x0000A0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::AbilityPartsName1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, SyntheAbilityMax) == 0x0000A8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::SyntheAbilityMax' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, SyntheAbilityMin) == 0x0000C4, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::SyntheAbilityMin' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, FusionItemText) == 0x0000E0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::FusionItemText' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable) == 0x000130, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_1) == 0x000131, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_byte_Variable) == 0x000132, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_byte_Variable_1) == 0x000133, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000134, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_2) == 0x000135, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_3) == 0x000136, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_int_Variable) == 0x000138, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x00013C, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_FindItemMaster_bIsValid) == 0x00013D, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_FindItemMaster_ItemMaster) == 0x000140, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_int_Variable_1) == 0x000210, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_4) == 0x000214, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_byte_Variable_2) == 0x000215, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_byte_Variable_3) == 0x000216, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_5) == 0x000217, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_byte_Variable_4) == 0x000218, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_byte_Variable_5) == 0x000219, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00021A, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_6) == 0x00021B, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_7) == 0x00021C, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000220, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_8) == 0x000230, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000238, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000250, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000260, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000268, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_MakeArray_Array) == 0x000280, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Array_Get_Item) == 0x000290, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_IsEmpty_ReturnValue) == 0x000298, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0002A0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetDisplayName_ReturnValue) == 0x0002A8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_IsEmpty_ReturnValue_1) == 0x0002B8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0002B9, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_FindFusionItemMaster_IsValid) == 0x0002BA, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x0002BC, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_FindAbilityMaster_bIsValid) == 0x0002D4, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_FindAbilityMaster_AbilityMaster) == 0x0002D8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy) == 0x000320, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy) == 0x00033C, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetFusionItemTextCollection_bIsValid) == 0x000358, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetFusionItemTextCollection_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetFusionItemTextCollection_ReturnValue) == 0x000360, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetFusionItemTextCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_IntToText_ReturnValue) == 0x0003B0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_MakeArray_Array_1) == 0x0003C8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Array_Get_Item_1) == 0x0003D8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x0003E0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0003E8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetDisplayName_ReturnValue_1) == 0x0003F0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000400, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000401, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x000402, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000403, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_BooleanOR_ReturnValue) == 0x000404, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x000405, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000406, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_BooleanOR_ReturnValue_1) == 0x000407, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue) == 0x000408, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue_1) == 0x000418, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000428, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000440, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_MakeStruct_FormatArgumentData) == 0x000458, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_MakeStruct_FormatArgumentData_1) == 0x000498, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0004D8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0004F0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue_2) == 0x000508, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue_3) == 0x000518, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000528, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000540, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_MakeStruct_FormatArgumentData_2) == 0x000558, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_MakeStruct_FormatArgumentData_3) == 0x000598, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_MakeArray_Array_2) == 0x0005D8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_MakeArray_Array_3) == 0x0005E8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Format_ReturnValue) == 0x0005F8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Format_ReturnValue_1) == 0x000610, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default) == 0x000628, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000640, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_1) == 0x000658, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000660, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000678, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Not_PreBool_ReturnValue) == 0x000679, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_FloatToText_ReturnValue) == 0x000680, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000698, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000699, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_9) == 0x00069A, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00069B, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_2) == 0x00069C, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_BooleanAND_ReturnValue) == 0x00069D, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_BooleanAND_ReturnValue_1) == 0x00069E, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x00069F, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetItemText_ReturnValue) == 0x0006A0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_10) == 0x0006B0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x0006C8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_3) == 0x0006CC, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_10) == 0x0006D0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetItemText_ReturnValue_1) == 0x0006D8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetItemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_11) == 0x0006E8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_11) == 0x000700, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetItemText_ReturnValue_2) == 0x000708, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetItemText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_4) == 0x000718, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_12) == 0x000720, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_5) == 0x000738, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000750, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x000751, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetItemToolTipText_OutName) == 0x000758, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetItemToolTipText_OutName' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetItemToolTipText_OutType) == 0x000770, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetItemToolTipText_OutType' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_BooleanAND_ReturnValue_2) == 0x000788, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_12) == 0x000789, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_6) == 0x00078A, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_7) == 0x00078B, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_isInventoryItemLockedSimple_ReturnValue) == 0x00078C, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_isInventoryItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00078D, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00078E, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_isStorageItemLockedSimple_ReturnValue) == 0x00078F, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_isStorageItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000790, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_8) == 0x000791, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_BooleanAND_ReturnValue_3) == 0x000792, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Not_PreBool_ReturnValue_2) == 0x000793, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, Temp_bool_Variable_13) == 0x000794, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_IsEmpty_ReturnValue_2) == 0x000795, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_9) == 0x000798, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_10) == 0x0007B0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetStorage_ReturnValue) == 0x0007B8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_IsItemLock_ReturnValue) == 0x0007C0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_IntToString_ReturnValue) == 0x0007C8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_11) == 0x0007D8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_13) == 0x0007E0, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_12) == 0x0007F8, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_12' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_Select_Default_13) == 0x0007F9, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_Select_Default_13' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Not_PreBool_ReturnValue_3) == 0x0007FA, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Not_PreBool_ReturnValue_4) == 0x0007FB, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, K2Node_MakeArray_Array_4) == 0x000800, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_Array_Get_Item_2) == 0x000810, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000818, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetItem, CallFunc_GetDisplayName_ReturnValue_2) == 0x000820, "Member 'WBP_InventoryItemBagStorageDescription_C_SetItem::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");

// Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.CheckUseItemFlag
// 0x0060 (0x0060 - 0x0000)
struct WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7700[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7701[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetPlayingDungeonId_ReturnValue;          // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7702[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGameModeInfo                        CallFunc_GetGameModeInfo_GameModeInfo;             // 0x0028(0x0030)()
	bool                                          CallFunc_GetGameModeInfo_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag) == 0x000008, "Wrong alignment on WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag");
static_assert(sizeof(WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag) == 0x000060, "Wrong size on WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag, NoUse) == 0x000000, "Member 'WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag::NoUse' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000010, "Member 'WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag, CallFunc_GetPlayingDungeonId_ReturnValue) == 0x00001C, "Member 'WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag::CallFunc_GetPlayingDungeonId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag, CallFunc_GetGameModeInfo_GameModeInfo) == 0x000028, "Member 'WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag::CallFunc_GetGameModeInfo_GameModeInfo' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag, CallFunc_GetGameModeInfo_ReturnValue) == 0x000058, "Member 'WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag::CallFunc_GetGameModeInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'WBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.SetIsIntervalTimeVisible
// 0x0005 (0x0005 - 0x0000)
struct WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible) == 0x000001, "Wrong alignment on WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible");
static_assert(sizeof(WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible) == 0x000005, "Wrong size on WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible, InIsVisible) == 0x000000, "Member 'WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible::InIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible, Temp_bool_Variable) == 0x000001, "Member 'WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible, Temp_byte_Variable) == 0x000002, "Member 'WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible, K2Node_Select_Default) == 0x000004, "Member 'WBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible::K2Node_Select_Default' has a wrong offset!");

}

