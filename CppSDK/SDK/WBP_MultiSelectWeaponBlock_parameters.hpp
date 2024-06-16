#pragma once

 

// Package: WBP_MultiSelectWeaponBlock

#include "Basic.hpp"

#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.OnClick__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectWeaponBlock_C_OnClick__DelegateSignature final
{
public:
	struct FInventoryItemData                     Param_InventoryData;                               // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectWeaponBlock_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_MultiSelectWeaponBlock_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_MultiSelectWeaponBlock_C_OnClick__DelegateSignature) == 0x000060, "Wrong size on WBP_MultiSelectWeaponBlock_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_OnClick__DelegateSignature, Param_InventoryData) == 0x000000, "Member 'WBP_MultiSelectWeaponBlock_C_OnClick__DelegateSignature::Param_InventoryData' has a wrong offset!");

// Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.ExecuteUbergraph_WBP_MultiSelectWeaponBlock
// 0x0368 (0x0368 - 0x0000)
struct WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_775E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      CallFunc_GetFindWeaponData_WeaponData;             // 0x0008(0x0050)()
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_775F[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7760[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetSlotInfo_bHasValidAbility;             // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7761[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_CustomEvent_InventoryItemData;              // 0x0080(0x0060)(ConstParm, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7762[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x00F0(0x0118)(ConstParm)
	bool                                          Temp_bool_Variable;                                // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7763[0x1];                                     // 0x020B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0210(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7764[0x6];                                     // 0x022A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0230(0x00B0)()
	int32                                         CallFunc_GetLevelStatus_ReturnValue;               // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7765[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x02E8(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7766[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0308(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0322(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0323(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7767[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x0328(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x0338(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0350(0x0018)()
};
static_assert(alignof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock) == 0x000008, "Wrong alignment on WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock");
static_assert(sizeof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock) == 0x000368, "Wrong size on WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, EntryPoint) == 0x000000, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_GetFindWeaponData_WeaponData) == 0x000008, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_GetFindWeaponData_WeaponData' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x000058, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_GetMasterDataManager_IsValid) == 0x000059, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_GetMasterDataManager_ReturnValue) == 0x000060, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_GetStorage_ReturnValue) == 0x000070, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_IsItemLock_ReturnValue) == 0x000078, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_IsUsedItem_bUse) == 0x000079, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_SetSlotInfo_bHasValidAbility) == 0x00007A, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_SetSlotInfo_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, K2Node_CustomEvent_InventoryItemData) == 0x000080, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::K2Node_CustomEvent_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_GetStorage_ReturnValue_1) == 0x0000E0, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0000E8, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0000F0, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, Temp_bool_Variable) == 0x000208, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000209, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, Temp_bool_Variable_1) == 0x00020A, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x00020C, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_Conv_IntToText_ReturnValue) == 0x000210, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_MakeLiteralByte_ReturnValue) == 0x000228, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_GetWeaponMasterData_IsExists) == 0x000229, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000230, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_GetLevelStatus_ReturnValue) == 0x0002E0, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_GetLevelStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0002E8, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000300, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000308, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, K2Node_Select_Default) == 0x000320, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000321, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000322, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, K2Node_Select_Default_1) == 0x000323, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_SetSpecialEffectText_SpecialName) == 0x000328, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_SetSpecialEffectText_SpecialValue) == 0x000338, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock, CallFunc_Conv_StringToText_ReturnValue) == 0x000350, "Member 'WBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.SetOneItem
// 0x0060 (0x0060 - 0x0000)
struct WBP_MultiSelectWeaponBlock_C_SetOneItem final
{
public:
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectWeaponBlock_C_SetOneItem) == 0x000008, "Wrong alignment on WBP_MultiSelectWeaponBlock_C_SetOneItem");
static_assert(sizeof(WBP_MultiSelectWeaponBlock_C_SetOneItem) == 0x000060, "Wrong size on WBP_MultiSelectWeaponBlock_C_SetOneItem");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_SetOneItem, InventoryItemData) == 0x000000, "Member 'WBP_MultiSelectWeaponBlock_C_SetOneItem::InventoryItemData' has a wrong offset!");

// Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.GetPrice
// 0x0014 (0x0014 - 0x0000)
struct WBP_MultiSelectWeaponBlock_C_GetPrice final
{
public:
	int32                                         Price;                                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price;        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7768[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Get_Item_Player_Sale_Price__Price_1;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MultiSelectWeaponBlock_C_GetPrice) == 0x000004, "Wrong alignment on WBP_MultiSelectWeaponBlock_C_GetPrice");
static_assert(sizeof(WBP_MultiSelectWeaponBlock_C_GetPrice) == 0x000014, "Wrong size on WBP_MultiSelectWeaponBlock_C_GetPrice");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_GetPrice, Price) == 0x000000, "Member 'WBP_MultiSelectWeaponBlock_C_GetPrice::Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price) == 0x000004, "Member 'WBP_MultiSelectWeaponBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_GetPrice, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_MultiSelectWeaponBlock_C_GetPrice::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_GetPrice, CallFunc_Get_Item_Player_Sale_Price__Price_1) == 0x00000C, "Member 'WBP_MultiSelectWeaponBlock_C_GetPrice::CallFunc_Get_Item_Player_Sale_Price__Price_1' has a wrong offset!");
static_assert(offsetof(WBP_MultiSelectWeaponBlock_C_GetPrice, CallFunc_Multiply_IntInt_ReturnValue) == 0x000010, "Member 'WBP_MultiSelectWeaponBlock_C_GetPrice::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");

}

