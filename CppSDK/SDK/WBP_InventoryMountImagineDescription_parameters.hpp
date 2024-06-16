#pragma once

 

// Package: WBP_InventoryMountImagineDescription

#include "Basic.hpp"

#include "InventoryData_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "DescripionButtonType_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryMountImagineDescription_C_OnButtonClicked__DelegateSignature final
{
public:
	EDescripionButtonType                         ButtonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryMountImagineDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on WBP_InventoryMountImagineDescription_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(WBP_InventoryMountImagineDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on WBP_InventoryMountImagineDescription_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_OnButtonClicked__DelegateSignature, ButtonType) == 0x000000, "Member 'WBP_InventoryMountImagineDescription_C_OnButtonClicked__DelegateSignature::ButtonType' has a wrong offset!");

// Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.ExecuteUbergraph_WBP_InventoryMountImagineDescription
// 0x0008 (0x0008 - 0x0000)
struct WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDescripionButtonType                         Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDescripionButtonType                         Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDescripionButtonType                         K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription) == 0x000004, "Wrong alignment on WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription");
static_assert(sizeof(WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription) == 0x000008, "Wrong size on WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription, EntryPoint) == 0x000000, "Member 'WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription, Temp_bool_Variable) == 0x000004, "Member 'WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription, Temp_byte_Variable) == 0x000005, "Member 'WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription, K2Node_Select_Default) == 0x000007, "Member 'WBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription::K2Node_Select_Default' has a wrong offset!");

// Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.SetItem
// 0x03E0 (0x03E0 - 0x0000)
struct WBP_InventoryMountImagineDescription_C_SetItem final
{
public:
	struct FInventoryData                         Param_InventoryItemData;                           // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          Param_bStorageMode;                                // 0x0098(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bBagStorageViewMode;                         // 0x0099(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76A6[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StackNum;                                          // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           OwnItem;                                           // 0x00A0(0x0118)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   ItemDataManager;                                   // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76A7[0x5];                                     // 0x01C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterMountImagineData_bOutExist;  // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76A8[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_BP_FindMasterMountImagineData_ReturnValue; // 0x01E0(0x0070)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0250(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76A9[0x6];                                     // 0x0272(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterMountImagineText_ReturnValue;    // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0290(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidMountStackB_ReturnValue;             // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFangExpeditionUsing_ReturnValue;        // 0x02AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x02AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x02AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76AA[0x2];                                     // 0x02AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76AB[0x6];                                     // 0x02BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x02C0(0x0118)(ConstParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x03D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x03DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x03DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryMountImagineDescription_C_SetItem) == 0x000008, "Wrong alignment on WBP_InventoryMountImagineDescription_C_SetItem");
static_assert(sizeof(WBP_InventoryMountImagineDescription_C_SetItem) == 0x0003E0, "Wrong size on WBP_InventoryMountImagineDescription_C_SetItem");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, Param_InventoryItemData) == 0x000000, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::Param_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, Param_bStorageMode) == 0x000098, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::Param_bStorageMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, Param_bBagStorageViewMode) == 0x000099, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::Param_bBagStorageViewMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, StackNum) == 0x00009C, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::StackNum' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, OwnItem) == 0x0000A0, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::OwnItem' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, ItemDataManager) == 0x0001B8, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::ItemDataManager' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, Temp_bool_Variable) == 0x0001C0, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x0001C1, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x0001C2, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_Conv_IntToString_ReturnValue) == 0x0001C8, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_BP_FindMasterMountImagineData_bOutExist) == 0x0001D8, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_BP_FindMasterMountImagineData_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_BP_FindMasterMountImagineData_ReturnValue) == 0x0001E0, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_BP_FindMasterMountImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_Concat_StrStr_ReturnValue) == 0x000250, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000260, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, Temp_bool_Variable_1) == 0x000270, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_GetMasterDataManager_IsValid) == 0x000271, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000278, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_GetMasterMountImagineText_ReturnValue) == 0x000280, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_GetMasterMountImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000290, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0002A8, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_ValidMountStackB_ReturnValue) == 0x0002A9, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_ValidMountStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_IsFangExpeditionUsing_ReturnValue) == 0x0002AA, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_IsFangExpeditionUsing_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x0002AB, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0002AC, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, K2Node_Select_Default) == 0x0002AD, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_GetStorage_ReturnValue) == 0x0002B0, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_IsValid_ReturnValue) == 0x0002B8, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0002B9, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0002C0, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0003D8, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0003D9, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, CallFunc_IsUsedItem_bUse) == 0x0003DA, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetItem, K2Node_Select_Default_1) == 0x0003DB, "Member 'WBP_InventoryMountImagineDescription_C_SetItem::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.IsEquip
// 0x0020 (0x0020 - 0x0000)
struct WBP_InventoryMountImagineDescription_C_IsEquip final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Equip_Flag;                                        // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76AC[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipInfo                        CallFunc_GetEquipInfo_ReturnValue;                 // 0x0008(0x0010)()
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryMountImagineDescription_C_IsEquip) == 0x000008, "Wrong alignment on WBP_InventoryMountImagineDescription_C_IsEquip");
static_assert(sizeof(WBP_InventoryMountImagineDescription_C_IsEquip) == 0x000020, "Wrong size on WBP_InventoryMountImagineDescription_C_IsEquip");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_IsEquip, Param_Index) == 0x000000, "Member 'WBP_InventoryMountImagineDescription_C_IsEquip::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_IsEquip, Equip_Flag) == 0x000004, "Member 'WBP_InventoryMountImagineDescription_C_IsEquip::Equip_Flag' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_IsEquip, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'WBP_InventoryMountImagineDescription_C_IsEquip::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_IsEquip, CallFunc_GetEquipInfo_ReturnValue) == 0x000008, "Member 'WBP_InventoryMountImagineDescription_C_IsEquip::CallFunc_GetEquipInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_IsEquip, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'WBP_InventoryMountImagineDescription_C_IsEquip::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_IsEquip, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_InventoryMountImagineDescription_C_IsEquip::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.RefleshButtonAction
// 0x0050 (0x0050 - 0x0000)
struct WBP_InventoryMountImagineDescription_C_RefleshButtonAction final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_76AD[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76AE[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76AF[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76B0[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isStorageItemLockedSimple_ReturnValue;    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_1;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLockedSimple_ReturnValue;  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76B1[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction) == 0x000008, "Wrong alignment on WBP_InventoryMountImagineDescription_C_RefleshButtonAction");
static_assert(sizeof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction) == 0x000050, "Wrong size on WBP_InventoryMountImagineDescription_C_RefleshButtonAction");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, Temp_bool_Variable) == 0x000000, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, Temp_int_Variable) == 0x000004, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_GetStorage_ReturnValue) == 0x000010, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_IsItemLock_ReturnValue) == 0x000018, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue_1) == 0x000019, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, Temp_bool_Variable_1) == 0x00001A, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue_2) == 0x00001B, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_IsEquipmentItem_ReturnValue) == 0x00001C, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_GetStorage_ReturnValue_1) == 0x000020, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue_3) == 0x000028, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_GetCapacity_ReturnValue) == 0x00002C, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_isStorageItemLockedSimple_ReturnValue) == 0x000030, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_isStorageItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_IsEquipmentItem_ReturnValue_1) == 0x000031, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_IsEquipmentItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_isInventoryItemLockedSimple_ReturnValue) == 0x000032, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_isInventoryItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue_4) == 0x000033, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, K2Node_Select_Default) == 0x000034, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue_5) == 0x000035, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_BooleanAND_ReturnValue) == 0x000036, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_BooleanAND_ReturnValue_1) == 0x000037, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, Temp_int_Variable_1) == 0x000038, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_BooleanAND_ReturnValue_2) == 0x00003C, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, Temp_bool_Variable_2) == 0x00003D, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, Temp_bool_Variable_3) == 0x00003E, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, K2Node_Select_Default_1) == 0x000040, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, K2Node_Select_Default_2) == 0x000044, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000045, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_Less_IntInt_ReturnValue) == 0x000046, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_Less_IntInt_ReturnValue_1) == 0x000047, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_BooleanAND_ReturnValue_3) == 0x000048, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_BooleanAND_ReturnValue_4) == 0x000049, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00004A, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_RefleshButtonAction, K2Node_Select_Default_3) == 0x00004B, "Member 'WBP_InventoryMountImagineDescription_C_RefleshButtonAction::K2Node_Select_Default_3' has a wrong offset!");

// Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.SetModelCaptureImageVisibility
// 0x0005 (0x0005 - 0x0000)
struct WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility) == 0x000001, "Wrong alignment on WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility");
static_assert(sizeof(WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility) == 0x000005, "Wrong size on WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility, InIsVisible) == 0x000000, "Member 'WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility, Temp_bool_Variable) == 0x000001, "Member 'WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility, Temp_byte_Variable) == 0x000002, "Member 'WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility, K2Node_Select_Default) == 0x000004, "Member 'WBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.SetSwitcher
// 0x0004 (0x0004 - 0x0000)
struct WBP_InventoryMountImagineDescription_C_SetSwitcher final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryMountImagineDescription_C_SetSwitcher) == 0x000004, "Wrong alignment on WBP_InventoryMountImagineDescription_C_SetSwitcher");
static_assert(sizeof(WBP_InventoryMountImagineDescription_C_SetSwitcher) == 0x000004, "Wrong size on WBP_InventoryMountImagineDescription_C_SetSwitcher");
static_assert(offsetof(WBP_InventoryMountImagineDescription_C_SetSwitcher, Param_Index) == 0x000000, "Member 'WBP_InventoryMountImagineDescription_C_SetSwitcher::Param_Index' has a wrong offset!");

}

