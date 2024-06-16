#pragma once

 

// Package: WBP_InventoryItemDescription

#include "Basic.hpp"

#include "DescripionButtonType_structs.hpp"
#include "Engine_structs.hpp"
#include "UseItemWindowType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InventoryData_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryItemDescription_C_OnButtonClicked__DelegateSignature final
{
public:
	EDescripionButtonType                         ButtonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryItemDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on WBP_InventoryItemDescription_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(WBP_InventoryItemDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on WBP_InventoryItemDescription_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(WBP_InventoryItemDescription_C_OnButtonClicked__DelegateSignature, ButtonType) == 0x000000, "Member 'WBP_InventoryItemDescription_C_OnButtonClicked__DelegateSignature::ButtonType' has a wrong offset!");

// Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.ExecuteUbergraph_WBP_InventoryItemDescription
// 0x0060 (0x0060 - 0x0000)
struct WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDescripionButtonType                         Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDescripionButtonType                         Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76B6[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRemainingRecastTime_ReturnValue;       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isInventoryItemLockedSimple_ReturnValue;  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLockedSimple_ReturnValue;    // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDescripionButtonType                         K2Node_Select_Default_1;                           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription) == 0x000008, "Wrong alignment on WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription");
static_assert(sizeof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription) == 0x000060, "Wrong size on WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, EntryPoint) == 0x000000, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, Temp_bool_Variable) == 0x000004, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, Temp_bool_Variable_1) == 0x000005, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, Temp_byte_Variable) == 0x000006, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, Temp_byte_Variable_1) == 0x000007, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, K2Node_Event_MyGeometry) == 0x000008, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, K2Node_Event_InDeltaTime) == 0x000040, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x000048, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, CallFunc_GetRemainingRecastTime_ReturnValue) == 0x000050, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::CallFunc_GetRemainingRecastTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, CallFunc_isInventoryItemLockedSimple_ReturnValue) == 0x000054, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::CallFunc_isInventoryItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000055, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, CallFunc_isStorageItemLockedSimple_ReturnValue) == 0x000056, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::CallFunc_isStorageItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, K2Node_Select_Default) == 0x000057, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, CallFunc_Not_PreBool_ReturnValue) == 0x000058, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription, K2Node_Select_Default_1) == 0x000059, "Member 'WBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_InventoryItemDescription_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryItemDescription_C_Tick) == 0x000004, "Wrong alignment on WBP_InventoryItemDescription_C_Tick");
static_assert(sizeof(WBP_InventoryItemDescription_C_Tick) == 0x00003C, "Wrong size on WBP_InventoryItemDescription_C_Tick");
static_assert(offsetof(WBP_InventoryItemDescription_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_InventoryItemDescription_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_InventoryItemDescription_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.SetItem
// 0x08D0 (0x08D0 - 0x0000)
struct WBP_InventoryItemDescription_C_SetItem final
{
public:
	struct FInventoryData                         Param_InventoryItemData;                           // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Param_bStorageMode;                                // 0x0098(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76B7[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   AbilityPartsName2;                                 // 0x009C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AbilityPartsName1;                                 // 0x00A4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSyntheAbilityData                   SyntheAbilityMax;                                  // 0x00AC(0x001C)(Edit, BlueprintVisible, NoDestructor)
	struct FSBSyntheAbilityData                   SyntheAbilityMin;                                  // 0x00C8(0x001C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_76B8[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityTextData                     FusionItemText;                                    // 0x00E8(0x0050)(Edit, BlueprintVisible)
	bool                                          bCanUseFromInventoryItemData;                      // 0x0138(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76B9[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   ItemDataManager;                                   // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76BA[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0150(0x00D0)()
	int32                                         Temp_int_Variable;                                 // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x022A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76BB[0x5];                                     // 0x022B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76BC[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0248(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76BD[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0278(0x0018)()
	bool                                          Temp_bool_Variable_3;                              // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76BE[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0298(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable_4;                              // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76BF[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x02B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76C0[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76C1[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x02E0(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable_6;                              // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76C2[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0300(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76C3[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0322(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x0323(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x0324(0x0018)(NoDestructor)
	bool                                          CallFunc_FindAbilityMaster_bIsValid;               // 0x033C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76C4[0x3];                                     // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityMasterData                   CallFunc_FindAbilityMaster_AbilityMaster;          // 0x0340(0x0048)()
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy; // 0x0388(0x001C)(NoDestructor)
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy; // 0x03A4(0x001C)(NoDestructor)
	bool                                          CallFunc_GetFusionItemTextCollection_bIsValid;     // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76C5[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityTextData                     CallFunc_GetFusionItemTextCollection_ReturnValue;  // 0x03C8(0x0050)(ConstParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0418(0x0018)()
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76C6[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x0438(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0450(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0458(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76C7[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0470(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0480(0x0018)()
	bool                                          Temp_bool_Variable_9;                              // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0499(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76C8[0x6];                                     // 0x049A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x04A0(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x04B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x04BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x04BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76C9[0x4];                                     // 0x04BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x04C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x04D0(0x0018)()
	struct FSBTextTableHash                       K2Node_Select_Default;                             // 0x04E8(0x0004)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76CA[0x4];                                     // 0x04EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue_1;                // 0x04F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0500(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76CB[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue_2;                // 0x0520(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76CC[0x7];                                     // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0538(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0550(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76CD[0x7];                                     // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemToolTipText_OutName;               // 0x0570(0x0018)()
	class FText                                   CallFunc_GetItemToolTipText_OutType;               // 0x0588(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x05A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x05A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x05A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76CE[0x4];                                     // 0x05A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue; // 0x05A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x05B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x05D0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x05E8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0628(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76CF[0x7];                                     // 0x0629(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_1; // 0x0630(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76D0[0x7];                                     // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0648(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0660(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0678(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_isInventoryItemLockedSimple_ReturnValue;  // 0x06B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76D1[0x7];                                     // 0x06B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_2; // 0x06C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76D2[0x7];                                     // 0x06D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x06D8(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x06F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76D3[0x7];                                     // 0x06F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x06F8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0738(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76D4[0x7];                                     // 0x0739(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0740(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0750(0x0018)()
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_3; // 0x0768(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_3;                           // 0x0778(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x0790(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x07A8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x07E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76D5[0x7];                                     // 0x07E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x07F0(0x0010)(ReferenceParm)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0800(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76D6[0x7];                                     // 0x0801(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0808(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0820(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0821(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76D7[0x6];                                     // 0x0822(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_5;                           // 0x0828(0x0018)()
	bool                                          CallFunc_isStorageItemLockedSimple_ReturnValue;    // 0x0840(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_6;                           // 0x0841(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0842(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76D8[0x5];                                     // 0x0843(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x0848(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_7;                           // 0x0860(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76D9[0x7];                                     // 0x0861(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x0868(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x0880(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_8;                           // 0x0881(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x0882(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0883(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0884(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0885(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0886(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0887(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0888(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0889(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x088A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_9;                           // 0x088B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_11;                             // 0x088C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_4;            // 0x088D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x088E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x088F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_10;                          // 0x0890(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76DA[0x3];                                     // 0x0891(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_11;                          // 0x0894(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_3;                    // 0x0898(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76DB[0x7];                                     // 0x0899(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_5;                          // 0x08A0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_3;                         // 0x08B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_3;        // 0x08B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_3;             // 0x08C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryItemDescription_C_SetItem) == 0x000008, "Wrong alignment on WBP_InventoryItemDescription_C_SetItem");
static_assert(sizeof(WBP_InventoryItemDescription_C_SetItem) == 0x0008D0, "Wrong size on WBP_InventoryItemDescription_C_SetItem");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Param_InventoryItemData) == 0x000000, "Member 'WBP_InventoryItemDescription_C_SetItem::Param_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Param_bStorageMode) == 0x000098, "Member 'WBP_InventoryItemDescription_C_SetItem::Param_bStorageMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, AbilityPartsName2) == 0x00009C, "Member 'WBP_InventoryItemDescription_C_SetItem::AbilityPartsName2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, AbilityPartsName1) == 0x0000A4, "Member 'WBP_InventoryItemDescription_C_SetItem::AbilityPartsName1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, SyntheAbilityMax) == 0x0000AC, "Member 'WBP_InventoryItemDescription_C_SetItem::SyntheAbilityMax' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, SyntheAbilityMin) == 0x0000C8, "Member 'WBP_InventoryItemDescription_C_SetItem::SyntheAbilityMin' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, FusionItemText) == 0x0000E8, "Member 'WBP_InventoryItemDescription_C_SetItem::FusionItemText' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, bCanUseFromInventoryItemData) == 0x000138, "Member 'WBP_InventoryItemDescription_C_SetItem::bCanUseFromInventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, ItemDataManager) == 0x000140, "Member 'WBP_InventoryItemDescription_C_SetItem::ItemDataManager' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable) == 0x000148, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable_1) == 0x000149, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x00014A, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_FindItemMaster_bIsValid) == 0x00014B, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_FindItemMaster_ItemMaster) == 0x000150, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_int_Variable) == 0x000220, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_int_Variable_1) == 0x000224, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000228, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000229, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable_2) == 0x00022A, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000230, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_byte_Variable) == 0x000240, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000248, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000260, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_byte_Variable_1) == 0x000270, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000278, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable_3) == 0x000290, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_MakeArray_Array) == 0x000298, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable_4) == 0x0002A8, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Array_Get_Item) == 0x0002B0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0002B8, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_IsEmpty_ReturnValue) == 0x0002C0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetDisplayName_ReturnValue) == 0x0002C8, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable_5) == 0x0002D8, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_MakeArray_Array_1) == 0x0002E0, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable_6) == 0x0002F0, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Array_Get_Item_1) == 0x0002F8, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000300, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_IsEmpty_ReturnValue_1) == 0x000308, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetDisplayName_ReturnValue_1) == 0x000310, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable_7) == 0x000320, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable_8) == 0x000321, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000322, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_FindFusionItemMaster_IsValid) == 0x000323, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x000324, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_FindAbilityMaster_bIsValid) == 0x00033C, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_FindAbilityMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_FindAbilityMaster_AbilityMaster) == 0x000340, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_FindAbilityMaster_AbilityMaster' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy) == 0x000388, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy) == 0x0003A4, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetFusionItemTextCollection_bIsValid) == 0x0003C0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetFusionItemTextCollection_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetFusionItemTextCollection_ReturnValue) == 0x0003C8, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetFusionItemTextCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000418, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_IsEmpty_ReturnValue_2) == 0x000430, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_MakeArray_Array_2) == 0x000438, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Array_Get_Item_2) == 0x000448, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000450, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetDisplayName_ReturnValue_2) == 0x000458, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000468, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_IntToString_ReturnValue) == 0x000470, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000480, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable_9) == 0x000498, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Not_PreBool_ReturnValue) == 0x000499, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_FloatToText_ReturnValue) == 0x0004A0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0004B8, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0004B9, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_BooleanAND_ReturnValue) == 0x0004BA, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_BooleanAND_ReturnValue_1) == 0x0004BB, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetItemText_ReturnValue) == 0x0004C0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0004D0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default) == 0x0004E8, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetItemText_ReturnValue_1) == 0x0004F0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetItemText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000500, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000518, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetItemText_ReturnValue_2) == 0x000520, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetItemText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000530, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000538, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default_1) == 0x000550, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000568, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetItemToolTipText_OutName) == 0x000570, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetItemToolTipText_OutName' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetItemToolTipText_OutType) == 0x000588, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetItemToolTipText_OutType' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x0005A0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_BooleanAND_ReturnValue_2) == 0x0005A1, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x0005A2, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default_2) == 0x0005A3, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue) == 0x0005A8, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0005B8, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0005D0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_MakeStruct_FormatArgumentData) == 0x0005E8, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000628, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue_1) == 0x000630, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000640, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000648, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000660, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_MakeStruct_FormatArgumentData_1) == 0x000678, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_isInventoryItemLockedSimple_ReturnValue) == 0x0006B8, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_isInventoryItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue_2) == 0x0006C0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0006D0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_10) == 0x0006D8, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_BooleanOR_ReturnValue) == 0x0006F0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_MakeStruct_FormatArgumentData_2) == 0x0006F8, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000738, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_MakeArray_Array_3) == 0x000740, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Format_ReturnValue) == 0x000750, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_ConvertAbilityEffectValueText_ReturnValue_3) == 0x000768, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_ConvertAbilityEffectValueText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default_3) == 0x000778, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_11) == 0x000790, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_MakeStruct_FormatArgumentData_3) == 0x0007A8, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x0007E8, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_MakeArray_Array_4) == 0x0007F0, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_BooleanOR_ReturnValue_1) == 0x000800, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Format_ReturnValue_1) == 0x000808, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000820, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default_4) == 0x000821, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default_5) == 0x000828, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_isStorageItemLockedSimple_ReturnValue) == 0x000840, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_isStorageItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default_6) == 0x000841, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Not_PreBool_ReturnValue_2) == 0x000842, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_12) == 0x000848, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default_7) == 0x000860, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_13) == 0x000868, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x000880, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default_8) == 0x000881, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x000882, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000883, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000884, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000885, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000886, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_BooleanAND_ReturnValue_3) == 0x000887, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000888, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_BooleanAND_ReturnValue_4) == 0x000889, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable_10) == 0x00088A, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default_9) == 0x00088B, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, Temp_bool_Variable_11) == 0x00088C, "Member 'WBP_InventoryItemDescription_C_SetItem::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_NotEqual_IntInt_ReturnValue_4) == 0x00088D, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_NotEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00088E, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_BooleanAND_ReturnValue_5) == 0x00088F, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default_10) == 0x000890, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_Select_Default_11) == 0x000894, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_IsEmpty_ReturnValue_3) == 0x000898, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_IsEmpty_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, K2Node_MakeArray_Array_5) == 0x0008A0, "Member 'WBP_InventoryItemDescription_C_SetItem::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_Array_Get_Item_3) == 0x0008B0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_K2_GetRootComponent_ReturnValue_3) == 0x0008B8, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_K2_GetRootComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetItem, CallFunc_GetDisplayName_ReturnValue_3) == 0x0008C0, "Member 'WBP_InventoryItemDescription_C_SetItem::CallFunc_GetDisplayName_ReturnValue_3' has a wrong offset!");

// Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.Set Register Mode
// 0x0090 (0x0090 - 0x0000)
struct WBP_InventoryItemDescription_C_Set_Register_Mode final
{
public:
	bool                                          bIsRegiserMode;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76DC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanUseItem_TypeA;                         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemUseStatus                              CallFunc_CanUseItem_ReturnValue;                   // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76DD[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76DE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76DF[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76E0[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76E1[0x2];                                     // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0087(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryItemDescription_C_Set_Register_Mode) == 0x000008, "Wrong alignment on WBP_InventoryItemDescription_C_Set_Register_Mode");
static_assert(sizeof(WBP_InventoryItemDescription_C_Set_Register_Mode) == 0x000090, "Wrong size on WBP_InventoryItemDescription_C_Set_Register_Mode");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, bIsRegiserMode) == 0x000000, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::bIsRegiserMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, Temp_bool_Variable) == 0x000003, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_GetStorage_ReturnValue) == 0x000008, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_IsItemLock_ReturnValue) == 0x000010, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_CanUseItem_TypeA) == 0x000011, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_CanUseItem_TypeA' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_CanUseItem_ReturnValue) == 0x000012, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_CanUseItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000014, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, K2Node_Select_Default) == 0x000018, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_Conv_StringToName_ReturnValue) == 0x000030, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000040, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000050, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_Not_PreBool_ReturnValue_1) == 0x000070, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_Not_PreBool_ReturnValue_2) == 0x000071, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, Temp_bool_Variable_1) == 0x000072, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_Not_PreBool_ReturnValue_3) == 0x000073, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_BooleanAND_ReturnValue) == 0x000074, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_BooleanAND_ReturnValue_1) == 0x000075, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_GetStorage_ReturnValue_1) == 0x000078, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_GetCapacity_ReturnValue) == 0x000080, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000085, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_Not_PreBool_ReturnValue_4) == 0x000086, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, K2Node_Select_Default_1) == 0x000087, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_Not_PreBool_ReturnValue_5) == 0x000088, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_BooleanAND_ReturnValue_2) == 0x000089, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_BooleanAND_ReturnValue_3) == 0x00008A, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_BooleanAND_ReturnValue_4) == 0x00008B, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_Set_Register_Mode, CallFunc_BooleanAND_ReturnValue_5) == 0x00008C, "Member 'WBP_InventoryItemDescription_C_Set_Register_Mode::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");

// Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.CheckUseItemFlag
// 0x0060 (0x0060 - 0x0000)
struct WBP_InventoryItemDescription_C_CheckUseItemFlag final
{
public:
	bool                                          NoUse;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76E2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76E3[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetPlayingDungeonId_ReturnValue;          // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76E4[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGameModeInfo                        CallFunc_GetGameModeInfo_GameModeInfo;             // 0x0028(0x0030)()
	bool                                          CallFunc_GetGameModeInfo_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryItemDescription_C_CheckUseItemFlag) == 0x000008, "Wrong alignment on WBP_InventoryItemDescription_C_CheckUseItemFlag");
static_assert(sizeof(WBP_InventoryItemDescription_C_CheckUseItemFlag) == 0x000060, "Wrong size on WBP_InventoryItemDescription_C_CheckUseItemFlag");
static_assert(offsetof(WBP_InventoryItemDescription_C_CheckUseItemFlag, NoUse) == 0x000000, "Member 'WBP_InventoryItemDescription_C_CheckUseItemFlag::NoUse' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_CheckUseItemFlag, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'WBP_InventoryItemDescription_C_CheckUseItemFlag::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_CheckUseItemFlag, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000010, "Member 'WBP_InventoryItemDescription_C_CheckUseItemFlag::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_CheckUseItemFlag, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_InventoryItemDescription_C_CheckUseItemFlag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_CheckUseItemFlag, CallFunc_GetPlayingDungeonId_ReturnValue) == 0x00001C, "Member 'WBP_InventoryItemDescription_C_CheckUseItemFlag::CallFunc_GetPlayingDungeonId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_CheckUseItemFlag, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'WBP_InventoryItemDescription_C_CheckUseItemFlag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_CheckUseItemFlag, CallFunc_GetGameModeInfo_GameModeInfo) == 0x000028, "Member 'WBP_InventoryItemDescription_C_CheckUseItemFlag::CallFunc_GetGameModeInfo_GameModeInfo' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_CheckUseItemFlag, CallFunc_GetGameModeInfo_ReturnValue) == 0x000058, "Member 'WBP_InventoryItemDescription_C_CheckUseItemFlag::CallFunc_GetGameModeInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_CheckUseItemFlag, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'WBP_InventoryItemDescription_C_CheckUseItemFlag::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.SetSwitcher
// 0x0004 (0x0004 - 0x0000)
struct WBP_InventoryItemDescription_C_SetSwitcher final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryItemDescription_C_SetSwitcher) == 0x000004, "Wrong alignment on WBP_InventoryItemDescription_C_SetSwitcher");
static_assert(sizeof(WBP_InventoryItemDescription_C_SetSwitcher) == 0x000004, "Wrong size on WBP_InventoryItemDescription_C_SetSwitcher");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetSwitcher, Param_Index) == 0x000000, "Member 'WBP_InventoryItemDescription_C_SetSwitcher::Param_Index' has a wrong offset!");

// Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.IsCanUse_ItemBox
// 0x0080 (0x0080 - 0x0000)
struct WBP_InventoryItemDescription_C_IsCanUse_ItemBox final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76E5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindItemBoxMaster_bIsValid;               // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76E6[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterItemBox                       CallFunc_FindItemBoxMaster_ItemBoxMaster;          // 0x0020(0x0020)()
	class FName                                   CallFunc_GetPlayingDungeonId_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGameModeInfo                        CallFunc_GetGameModeInfo_GameModeInfo;             // 0x0048(0x0030)()
	bool                                          CallFunc_GetGameModeInfo_ReturnValue;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox) == 0x000008, "Wrong alignment on WBP_InventoryItemDescription_C_IsCanUse_ItemBox");
static_assert(sizeof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox) == 0x000080, "Wrong size on WBP_InventoryItemDescription_C_IsCanUse_ItemBox");
static_assert(offsetof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox, Result) == 0x000000, "Member 'WBP_InventoryItemDescription_C_IsCanUse_ItemBox::Result' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'WBP_InventoryItemDescription_C_IsCanUse_ItemBox::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000010, "Member 'WBP_InventoryItemDescription_C_IsCanUse_ItemBox::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_InventoryItemDescription_C_IsCanUse_ItemBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_InventoryItemDescription_C_IsCanUse_ItemBox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox, CallFunc_FindItemBoxMaster_bIsValid) == 0x00001A, "Member 'WBP_InventoryItemDescription_C_IsCanUse_ItemBox::CallFunc_FindItemBoxMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox, CallFunc_FindItemBoxMaster_ItemBoxMaster) == 0x000020, "Member 'WBP_InventoryItemDescription_C_IsCanUse_ItemBox::CallFunc_FindItemBoxMaster_ItemBoxMaster' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox, CallFunc_GetPlayingDungeonId_ReturnValue) == 0x000040, "Member 'WBP_InventoryItemDescription_C_IsCanUse_ItemBox::CallFunc_GetPlayingDungeonId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox, CallFunc_GetGameModeInfo_GameModeInfo) == 0x000048, "Member 'WBP_InventoryItemDescription_C_IsCanUse_ItemBox::CallFunc_GetGameModeInfo_GameModeInfo' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox, CallFunc_GetGameModeInfo_ReturnValue) == 0x000078, "Member 'WBP_InventoryItemDescription_C_IsCanUse_ItemBox::CallFunc_GetGameModeInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_IsCanUse_ItemBox, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000079, "Member 'WBP_InventoryItemDescription_C_IsCanUse_ItemBox::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.SetIsIntervalTimeVisible
// 0x0005 (0x0005 - 0x0000)
struct WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible) == 0x000001, "Wrong alignment on WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible");
static_assert(sizeof(WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible) == 0x000005, "Wrong size on WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible, InIsVisible) == 0x000000, "Member 'WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible::InIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible, Temp_bool_Variable) == 0x000001, "Member 'WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible, Temp_byte_Variable) == 0x000002, "Member 'WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible, K2Node_Select_Default) == 0x000004, "Member 'WBP_InventoryItemDescription_C_SetIsIntervalTimeVisible::K2Node_Select_Default' has a wrong offset!");

// Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.UpdateIcon
// 0x0038 (0x0038 - 0x0000)
struct WBP_InventoryItemDescription_C_UpdateIcon final
{
public:
	bool                                          bCanUseFromInventoryItemData;                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUseItemWindowType                            Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_10;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_11;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_6;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanUseItem_TypeA;                         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemUseStatus                              CallFunc_CanUseItem_ReturnValue;                   // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Select_Default_1;                           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUseItemWindowType                            CallFunc_Get_Use_Item_Window_Type_WindowType;      // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76E7[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Use_Item_Window_Type_Valu;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Use_Item_Window_Type_Time;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_2;                           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryItemDescription_C_UpdateIcon) == 0x000004, "Wrong alignment on WBP_InventoryItemDescription_C_UpdateIcon");
static_assert(sizeof(WBP_InventoryItemDescription_C_UpdateIcon) == 0x000038, "Wrong size on WBP_InventoryItemDescription_C_UpdateIcon");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, bCanUseFromInventoryItemData) == 0x000000, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::bCanUseFromInventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable) == 0x000001, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable_1) == 0x000002, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable_2) == 0x000003, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_int_Variable) == 0x000004, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_int_Variable_1) == 0x000008, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_byte_Variable) == 0x00000C, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable_3) == 0x00000D, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable_4) == 0x00000E, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable_5) == 0x00000F, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable_6) == 0x000010, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable_7) == 0x000011, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable_8) == 0x000012, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable_9) == 0x000013, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_byte_Variable_1) == 0x000014, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_byte_Variable_2) == 0x000015, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable_10) == 0x000016, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_byte_Variable_3) == 0x000017, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_byte_Variable_4) == 0x000018, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_bool_Variable_11) == 0x000019, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_byte_Variable_5) == 0x00001A, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, Temp_byte_Variable_6) == 0x00001B, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, CallFunc_CanUseItem_TypeA) == 0x00001C, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::CallFunc_CanUseItem_TypeA' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, CallFunc_CanUseItem_ReturnValue) == 0x00001D, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::CallFunc_CanUseItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, CallFunc_Not_PreBool_ReturnValue) == 0x00001E, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, K2Node_Select_Default) == 0x00001F, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, K2Node_Select_Default_1) == 0x000020, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, CallFunc_Not_PreBool_ReturnValue_1) == 0x000024, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, CallFunc_Get_Use_Item_Window_Type_WindowType) == 0x000025, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::CallFunc_Get_Use_Item_Window_Type_WindowType' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, CallFunc_Get_Use_Item_Window_Type_Valu) == 0x000028, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::CallFunc_Get_Use_Item_Window_Type_Valu' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, CallFunc_Get_Use_Item_Window_Type_Time) == 0x00002C, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::CallFunc_Get_Use_Item_Window_Type_Time' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, K2Node_Select_Default_2) == 0x000030, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, CallFunc_BooleanAND_ReturnValue) == 0x000031, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, K2Node_Select_Default_3) == 0x000032, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, K2Node_Select_Default_4) == 0x000033, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, K2Node_Select_Default_5) == 0x000034, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, CallFunc_Not_PreBool_ReturnValue_2) == 0x000035, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryItemDescription_C_UpdateIcon, CallFunc_Not_PreBool_ReturnValue_3) == 0x000036, "Member 'WBP_InventoryItemDescription_C_UpdateIcon::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");

}

