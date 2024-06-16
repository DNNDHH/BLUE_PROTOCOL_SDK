#pragma once

 

// Package: WBP_BaseMultiSelectBlock

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.OnClick__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_BaseMultiSelectBlock_C_OnClick__DelegateSignature final
{
public:
	struct FInventoryItemData                     NewParam;                                          // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BaseMultiSelectBlock_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_BaseMultiSelectBlock_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_BaseMultiSelectBlock_C_OnClick__DelegateSignature) == 0x000060, "Wrong size on WBP_BaseMultiSelectBlock_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_OnClick__DelegateSignature, NewParam) == 0x000000, "Member 'WBP_BaseMultiSelectBlock_C_OnClick__DelegateSignature::NewParam' has a wrong offset!");

// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.ExecuteUbergraph_WBP_BaseMultiSelectBlock
// 0x01C8 (0x01C8 - 0x0000)
struct WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70CE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_CustomEvent_InventoryItemData;              // 0x0008(0x0060)(ConstParm, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70CF[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              K2Node_CustomEvent_InStorageListItem;              // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70D0[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0088(0x00B0)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70D1[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_CustomEvent_InventoryData;                  // 0x0140(0x0060)(HasGetValueTypeHash)
	TDelegate<void(const struct FInventoryItemData& InventoryData)> K2Node_CreateDelegate_OutputDelegate;              // 0x01A0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01B0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock) == 0x000008, "Wrong alignment on WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock");
static_assert(sizeof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock) == 0x0001C8, "Wrong size on WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, EntryPoint) == 0x000000, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, K2Node_CustomEvent_InventoryItemData) == 0x000008, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::K2Node_CustomEvent_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, K2Node_SwitchEnum_CmpSuccess) == 0x000068, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, CallFunc_GetMasterDataManager_IsValid) == 0x000069, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, K2Node_CustomEvent_InStorageListItem) == 0x000078, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::K2Node_CustomEvent_InStorageListItem' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, CallFunc_FindMasterImagineData_IsExists) == 0x000080, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, CallFunc_FindMasterImagineData_ReturnValue) == 0x000088, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, K2Node_SwitchEnum_CmpSuccess_1) == 0x000138, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, K2Node_CustomEvent_InventoryData) == 0x000140, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::K2Node_CustomEvent_InventoryData' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, K2Node_CreateDelegate_OutputDelegate) == 0x0001A0, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001B0, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0001C0, "Member 'WBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.CustomEvent_1
// 0x0060 (0x0060 - 0x0000)
struct WBP_BaseMultiSelectBlock_C_CustomEvent_1 final
{
public:
	struct FInventoryItemData                     Param_InventoryData;                               // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BaseMultiSelectBlock_C_CustomEvent_1) == 0x000008, "Wrong alignment on WBP_BaseMultiSelectBlock_C_CustomEvent_1");
static_assert(sizeof(WBP_BaseMultiSelectBlock_C_CustomEvent_1) == 0x000060, "Wrong size on WBP_BaseMultiSelectBlock_C_CustomEvent_1");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_CustomEvent_1, Param_InventoryData) == 0x000000, "Member 'WBP_BaseMultiSelectBlock_C_CustomEvent_1::Param_InventoryData' has a wrong offset!");

// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.SetStorageItem
// 0x0008 (0x0008 - 0x0000)
struct WBP_BaseMultiSelectBlock_C_SetStorageItem final
{
public:
	class UWBP_StorageRowListItem_C*              InStorageListItem;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BaseMultiSelectBlock_C_SetStorageItem) == 0x000008, "Wrong alignment on WBP_BaseMultiSelectBlock_C_SetStorageItem");
static_assert(sizeof(WBP_BaseMultiSelectBlock_C_SetStorageItem) == 0x000008, "Wrong size on WBP_BaseMultiSelectBlock_C_SetStorageItem");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_SetStorageItem, InStorageListItem) == 0x000000, "Member 'WBP_BaseMultiSelectBlock_C_SetStorageItem::InStorageListItem' has a wrong offset!");

// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.SetOneItem
// 0x0060 (0x0060 - 0x0000)
struct WBP_BaseMultiSelectBlock_C_SetOneItem final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BaseMultiSelectBlock_C_SetOneItem) == 0x000008, "Wrong alignment on WBP_BaseMultiSelectBlock_C_SetOneItem");
static_assert(sizeof(WBP_BaseMultiSelectBlock_C_SetOneItem) == 0x000060, "Wrong size on WBP_BaseMultiSelectBlock_C_SetOneItem");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_SetOneItem, InventoryItemData) == 0x000000, "Member 'WBP_BaseMultiSelectBlock_C_SetOneItem::InventoryItemData' has a wrong offset!");

// Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.Get Price
// 0x002C (0x002C - 0x0000)
struct WBP_BaseMultiSelectBlock_C_Get_Price final
{
public:
	bool                                          LockExcluded;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70D2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Price;                                             // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLockExcluded;                                     // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLockedSimple_ReturnValue;  // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLockedSimple_ReturnValue;    // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue_1;   // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_1;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLockedSimple_ReturnValue_1; // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLockedSimple_ReturnValue_1;  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70D3[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70D4[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price_1;      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70D5[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BaseMultiSelectBlock_C_Get_Price) == 0x000004, "Wrong alignment on WBP_BaseMultiSelectBlock_C_Get_Price");
static_assert(sizeof(WBP_BaseMultiSelectBlock_C_Get_Price) == 0x00002C, "Wrong size on WBP_BaseMultiSelectBlock_C_Get_Price");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, LockExcluded) == 0x000000, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::LockExcluded' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, Price) == 0x000004, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::Price' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, bLockExcluded) == 0x000008, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::bLockExcluded' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_GetVisibility_ReturnValue) == 0x000009, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_Not_PreBool_ReturnValue) == 0x00000B, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x00000C, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_IsEquipmentItem_ReturnValue) == 0x00000D, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_isInventoryItemLockedSimple_ReturnValue) == 0x00000E, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_isInventoryItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_isStorageItemLockedSimple_ReturnValue) == 0x00000F, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_isStorageItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, Temp_bool_Variable) == 0x000010, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_IsInventoryStorageNumber_ReturnValue_1) == 0x000011, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_IsInventoryStorageNumber_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_IsEquipmentItem_ReturnValue_1) == 0x000012, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_IsEquipmentItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_isInventoryItemLockedSimple_ReturnValue_1) == 0x000013, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_isInventoryItemLockedSimple_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_isStorageItemLockedSimple_ReturnValue_1) == 0x000014, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_isStorageItemLockedSimple_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, K2Node_Select_Default) == 0x000015, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_BooleanOR_ReturnValue) == 0x000016, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000018, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, Temp_bool_Variable_1) == 0x00001C, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, K2Node_Select_Default_1) == 0x00001D, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_BooleanOR_ReturnValue_1) == 0x00001E, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_Get_Item_Player_Sale_Price__Price_1) == 0x000020, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_Get_Item_Player_Sale_Price__Price_1' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BaseMultiSelectBlock_C_Get_Price, CallFunc_Multiply_IntInt_ReturnValue) == 0x000028, "Member 'WBP_BaseMultiSelectBlock_C_Get_Price::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

}

