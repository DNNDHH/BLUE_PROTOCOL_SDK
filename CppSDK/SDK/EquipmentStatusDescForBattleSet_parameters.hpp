#pragma once

 

// Package: EquipmentStatusDescForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InventoryData_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "InventoryItemData_structs.hpp"


namespace SDK::Params
{

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.OnRequestWeaponModelLoad__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_OnRequestWeaponModelLoad__DelegateSignature final
{
public:
	struct FInventoryItemData                     InWeaponInventoryItemData;                         // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_OnRequestWeaponModelLoad__DelegateSignature) == 0x000008, "Wrong alignment on EquipmentStatusDescForBattleSet_C_OnRequestWeaponModelLoad__DelegateSignature");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_OnRequestWeaponModelLoad__DelegateSignature) == 0x000060, "Wrong size on EquipmentStatusDescForBattleSet_C_OnRequestWeaponModelLoad__DelegateSignature");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_OnRequestWeaponModelLoad__DelegateSignature, InWeaponInventoryItemData) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_OnRequestWeaponModelLoad__DelegateSignature::InWeaponInventoryItemData' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.OnRequestBattleImagineModelLoad__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_OnRequestBattleImagineModelLoad__DelegateSignature final
{
public:
	struct FInventoryItemData                     InBattleImagineInventoryItemData;                  // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_OnRequestBattleImagineModelLoad__DelegateSignature) == 0x000008, "Wrong alignment on EquipmentStatusDescForBattleSet_C_OnRequestBattleImagineModelLoad__DelegateSignature");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_OnRequestBattleImagineModelLoad__DelegateSignature) == 0x000060, "Wrong size on EquipmentStatusDescForBattleSet_C_OnRequestBattleImagineModelLoad__DelegateSignature");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_OnRequestBattleImagineModelLoad__DelegateSignature, InBattleImagineInventoryItemData) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_OnRequestBattleImagineModelLoad__DelegateSignature::InBattleImagineInventoryItemData' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.ExecuteUbergraph_EquipmentStatusDescForBattleSet
// 0x0010 (0x0010 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45CC[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet) == 0x000004, "Wrong alignment on EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet) == 0x000010, "Wrong size on EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet, EntryPoint) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet, K2Node_Event_IsDesignTime) == 0x000004, "Member 'EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet, CallFunc_BreakVector2D_X) == 0x000008, "Member 'EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet, CallFunc_BreakVector2D_Y) == 0x00000C, "Member 'EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet::CallFunc_BreakVector2D_Y' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on EquipmentStatusDescForBattleSet_C_PreConstruct");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on EquipmentStatusDescForBattleSet_C_PreConstruct");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.UpdateDesc
// 0x0028 (0x0028 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_UpdateDesc final
{
public:
	class FString                                 InEquipmentUniqueId;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalEquipmentUniqueId;                            // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_UpdateDesc) == 0x000008, "Wrong alignment on EquipmentStatusDescForBattleSet_C_UpdateDesc");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_UpdateDesc) == 0x000028, "Wrong size on EquipmentStatusDescForBattleSet_C_UpdateDesc");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateDesc, InEquipmentUniqueId) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_UpdateDesc::InEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateDesc, LocalEquipmentUniqueId) == 0x000010, "Member 'EquipmentStatusDescForBattleSet_C_UpdateDesc::LocalEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateDesc, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000020, "Member 'EquipmentStatusDescForBattleSet_C_UpdateDesc::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateDesc, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'EquipmentStatusDescForBattleSet_C_UpdateDesc::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateDesc, K2Node_SwitchEnum_CmpSuccess) == 0x000022, "Member 'EquipmentStatusDescForBattleSet_C_UpdateDesc::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.UpdateWeaponDesc
// 0x06E0 (0x06E0 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc final
{
public:
	class FString                                 InWeaponUniqueId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0010(0x0118)(Edit, BlueprintVisible)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0128(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSBWeaponMasterData                    LocalWeaponMaster;                                 // 0x0188(0x00B0)(Edit, BlueprintVisible)
	struct FSBWeaponItemData                      LocalWeaponItemData;                               // 0x0238(0x0050)(Edit, BlueprintVisible)
	class FString                                 LocalWeaponUniqueId;                               // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x029A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x029B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45CD[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x02A0(0x0060)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45CE[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45CF[0x6];                                     // 0x0312(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0318(0x0118)(ConstParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0431(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0432(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45D0[0x5];                                     // 0x0433(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0438(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45D1[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x0450(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x04E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x04EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x04EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x04EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetSlotInfo_bHasValidAbility;             // 0x04ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x04EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x04EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45D2[0x7];                                     // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0509(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45D3[0x6];                                     // 0x050A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0510(0x00B0)()
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x05C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45D4[0x7];                                     // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x05C8(0x0118)(ConstParm)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc) == 0x000008, "Wrong alignment on EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc) == 0x0006E0, "Wrong size on EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, InWeaponUniqueId) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, LocalOwnItemInfo) == 0x000010, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, LocalInventoryItemData) == 0x000128, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, LocalWeaponMaster) == 0x000188, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::LocalWeaponMaster' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, LocalWeaponItemData) == 0x000238, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::LocalWeaponItemData' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, LocalWeaponUniqueId) == 0x000288, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::LocalWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_IsValid_ReturnValue) == 0x000298, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_IsValid_ReturnValue_1) == 0x000299, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, Temp_bool_Variable) == 0x00029A, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_NotEqual_StrStr_ReturnValue) == 0x00029B, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, K2Node_MakeStruct_InventoryItemData) == 0x0002A0, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_Greater_IntInt_ReturnValue) == 0x000300, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_GetCharacterStorage_ReturnValue) == 0x000308, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_IsValid_ReturnValue_2) == 0x000310, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000311, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000318, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_MakeLiteralByte_ReturnValue) == 0x000430, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_IsValid_ReturnValue_3) == 0x000431, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_IsValid_ReturnValue_4) == 0x000432, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_GetWeaponText_ReturnValue) == 0x000438, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_IsValid_ReturnValue_5) == 0x000448, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_CreateInventoryData_InventoryData) == 0x000450, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_CreateInventoryData_IsSuccess) == 0x0004E8, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_IsValid_ReturnValue_6) == 0x0004E9, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_IsValid_ReturnValue_7) == 0x0004EA, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_IsValid_ReturnValue_8) == 0x0004EB, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_IsValid_ReturnValue_9) == 0x0004EC, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_SetSlotInfo_bHasValidAbility) == 0x0004ED, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_SetSlotInfo_bHasValidAbility' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0004EE, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, K2Node_Select_Default) == 0x0004EF, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_GetEquipmentBag_ReturnValue) == 0x0004F0, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_GetMasterDataManager_IsValid) == 0x0004F8, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_GetMasterDataManager_ReturnValue) == 0x000500, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_IsValid_ReturnValue_10) == 0x000508, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_GetWeaponMasterData_IsExists) == 0x000509, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000510, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x0005C0, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x0005C8, "Member 'EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.UpdateImagineDesc
// 0x0658 (0x0658 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_UpdateImagineDesc final
{
public:
	class FString                                 InImagineUniqueId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalAbilityEffectId;                              // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45D5[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalImagineArts;                                  // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0028(0x0118)(Edit, BlueprintVisible)
	struct FInventoryItemData                     LocalInventoryItemData;                            // 0x0140(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	ESBAttribute                                  LocalImagineAttribute;                             // 0x01A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45D6[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       LocalImagineMaster;                                // 0x01A8(0x00B0)(Edit, BlueprintVisible)
	int32                                         LocalAbilityId;                                    // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalImagineId;                                    // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTextTableHash                       LocalImagineNameTextId;                            // 0x0260(0x0004)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        LocalImagineType;                                  // 0x0264(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45D7[0x3];                                     // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalImagineUniqueId;                              // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x027A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x027B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45D8[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45D9[0x6];                                     // 0x028A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0290(0x0118)(ConstParm)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x03B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x03B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45DA[0x5];                                     // 0x03B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x03B8(0x0118)(ConstParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x04D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x04D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45DB[0x5];                                     // 0x04D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x04D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x04E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x04EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x04EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x04EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x04ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x04EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x04EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x04F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x04F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x04F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x04F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x04F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45DC[0x2];                                     // 0x04F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryData                         CallFunc_CreateInventoryData_InventoryData;        // 0x04F8(0x0098)(HasGetValueTypeHash)
	bool                                          CallFunc_CreateInventoryData_IsSuccess;            // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0591(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45DD[0x6];                                     // 0x0592(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0598(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45DE[0x7];                                     // 0x05A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x05A8(0x00B0)()
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc) == 0x000008, "Wrong alignment on EquipmentStatusDescForBattleSet_C_UpdateImagineDesc");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc) == 0x000658, "Wrong size on EquipmentStatusDescForBattleSet_C_UpdateImagineDesc");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, InImagineUniqueId) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::InImagineUniqueId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, LocalAbilityEffectId) == 0x000010, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::LocalAbilityEffectId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, LocalImagineArts) == 0x000018, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::LocalImagineArts' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, LocalOwnItemInfo) == 0x000028, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, LocalInventoryItemData) == 0x000140, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::LocalInventoryItemData' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, LocalImagineAttribute) == 0x0001A0, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::LocalImagineAttribute' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, LocalImagineMaster) == 0x0001A8, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::LocalImagineMaster' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, LocalAbilityId) == 0x000258, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::LocalAbilityId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, LocalImagineId) == 0x00025C, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::LocalImagineId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, LocalImagineNameTextId) == 0x000260, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::LocalImagineNameTextId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, LocalImagineType) == 0x000264, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::LocalImagineType' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, LocalImagineUniqueId) == 0x000268, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::LocalImagineUniqueId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, Temp_bool_Variable) == 0x000278, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue) == 0x000279, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, Temp_byte_Variable) == 0x00027A, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, Temp_byte_Variable_1) == 0x00027B, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, Temp_bool_Variable_1) == 0x00027C, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_GetCharacterStorage_ReturnValue) == 0x000280, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue_1) == 0x000288, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000289, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000290, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_GetEquipmentBag_ReturnValue) == 0x0003A8, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue_2) == 0x0003B0, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue_3) == 0x0003B1, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x0003B2, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x0003B8, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_MakeLiteralByte_ReturnValue) == 0x0004D0, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue_4) == 0x0004D1, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue_5) == 0x0004D2, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_GetMasterImagineText_ReturnValue) == 0x0004D8, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue_6) == 0x0004E8, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue_7) == 0x0004E9, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_Greater_IntInt_ReturnValue) == 0x0004EA, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue_8) == 0x0004EB, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue_9) == 0x0004EC, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0004ED, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue_10) == 0x0004EE, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, K2Node_Select_Default) == 0x0004EF, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0004F0, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0004F1, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_IsValid_ReturnValue_11) == 0x0004F2, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0004F3, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0004F4, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, K2Node_Select_Default_1) == 0x0004F5, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_CreateInventoryData_InventoryData) == 0x0004F8, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_CreateInventoryData_InventoryData' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_CreateInventoryData_IsSuccess) == 0x000590, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_CreateInventoryData_IsSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_GetMasterDataManager_IsValid) == 0x000591, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_GetMasterDataManager_ReturnValue) == 0x000598, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_FindMasterImagineData_IsExists) == 0x0005A0, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_UpdateImagineDesc, CallFunc_FindMasterImagineData_ReturnValue) == 0x0005A8, "Member 'EquipmentStatusDescForBattleSet_C_UpdateImagineDesc::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SwitchStatusType
// 0x0020 (0x0020 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_SwitchStatusType final
{
public:
	int32                                         InStatusTypeId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45DF[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45E0[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_SwitchStatusType) == 0x000004, "Wrong alignment on EquipmentStatusDescForBattleSet_C_SwitchStatusType");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_SwitchStatusType) == 0x000020, "Wrong size on EquipmentStatusDescForBattleSet_C_SwitchStatusType");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchStatusType, InStatusTypeId) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_SwitchStatusType::InStatusTypeId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchStatusType, Temp_int_Variable) == 0x000004, "Member 'EquipmentStatusDescForBattleSet_C_SwitchStatusType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchStatusType, Temp_bool_Variable) == 0x000008, "Member 'EquipmentStatusDescForBattleSet_C_SwitchStatusType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchStatusType, CallFunc_GetChildrenCount_ReturnValue) == 0x00000C, "Member 'EquipmentStatusDescForBattleSet_C_SwitchStatusType::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchStatusType, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'EquipmentStatusDescForBattleSet_C_SwitchStatusType::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchStatusType, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'EquipmentStatusDescForBattleSet_C_SwitchStatusType::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchStatusType, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'EquipmentStatusDescForBattleSet_C_SwitchStatusType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchStatusType, K2Node_Select_Default) == 0x000018, "Member 'EquipmentStatusDescForBattleSet_C_SwitchStatusType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchStatusType, CallFunc_Clamp_ReturnValue) == 0x00001C, "Member 'EquipmentStatusDescForBattleSet_C_SwitchStatusType::CallFunc_Clamp_ReturnValue' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetUsingEquipmentImage2Dor3D
// 0x0003 (0x0003 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D final
{
public:
	bool                                          InUse3D;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D) == 0x000001, "Wrong alignment on EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D) == 0x000003, "Wrong size on EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D, InUse3D) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D::InUse3D' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SwitchDescType
// 0x0018 (0x0018 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_SwitchDescType final
{
public:
	bool                                          InIsDescDefault;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsDescDefault;                                // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45E1[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45E2[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_SwitchDescType) == 0x000004, "Wrong alignment on EquipmentStatusDescForBattleSet_C_SwitchDescType");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_SwitchDescType) == 0x000018, "Wrong size on EquipmentStatusDescForBattleSet_C_SwitchDescType");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchDescType, InIsDescDefault) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_SwitchDescType::InIsDescDefault' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchDescType, LocalIsDescDefault) == 0x000001, "Member 'EquipmentStatusDescForBattleSet_C_SwitchDescType::LocalIsDescDefault' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchDescType, Temp_int_Variable) == 0x000004, "Member 'EquipmentStatusDescForBattleSet_C_SwitchDescType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchDescType, Temp_int_Variable_1) == 0x000008, "Member 'EquipmentStatusDescForBattleSet_C_SwitchDescType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchDescType, Temp_bool_Variable) == 0x00000C, "Member 'EquipmentStatusDescForBattleSet_C_SwitchDescType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchDescType, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'EquipmentStatusDescForBattleSet_C_SwitchDescType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchDescType, K2Node_Select_Default) == 0x000010, "Member 'EquipmentStatusDescForBattleSet_C_SwitchDescType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchDescType, CallFunc_IsValid_ReturnValue_1) == 0x000014, "Member 'EquipmentStatusDescForBattleSet_C_SwitchDescType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetInfoType
// 0x0003 (0x0003 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_SetInfoType final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_SetInfoType) == 0x000001, "Wrong alignment on EquipmentStatusDescForBattleSet_C_SetInfoType");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_SetInfoType) == 0x000003, "Wrong size on EquipmentStatusDescForBattleSet_C_SetInfoType");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetInfoType, InInfoType) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_SetInfoType::InInfoType' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetInfoType, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'EquipmentStatusDescForBattleSet_C_SetInfoType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetInfoType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'EquipmentStatusDescForBattleSet_C_SetInfoType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetStorageMode
// 0x00E8 (0x00E8 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_SetStorageMode final
{
public:
	bool                                          InIsForStorage;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45E3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalEquipmentTextId;                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45E4[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45E5[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0088(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45E6[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_SetStorageMode) == 0x000008, "Wrong alignment on EquipmentStatusDescForBattleSet_C_SetStorageMode");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_SetStorageMode) == 0x0000E8, "Wrong size on EquipmentStatusDescForBattleSet_C_SetStorageMode");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, InIsForStorage) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::InIsForStorage' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, LocalEquipmentTextId) == 0x000004, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::LocalEquipmentTextId' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, Temp_int_Variable) == 0x000008, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, Temp_int_Variable_1) == 0x00000C, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, Temp_bool_Variable) == 0x000010, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, Temp_byte_Variable) == 0x000011, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, Temp_byte_Variable_1) == 0x000012, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, Temp_bool_Variable_1) == 0x000028, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, K2Node_Select_Default) == 0x000088, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, K2Node_MakeArray_Array) == 0x000090, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000A0, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B0, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, K2Node_SwitchEnum_CmpSuccess) == 0x0000E0, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetStorageMode, K2Node_Select_Default_1) == 0x0000E1, "Member 'EquipmentStatusDescForBattleSet_C_SetStorageMode::K2Node_Select_Default_1' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetEquipmentModelCaptureImageVisibility
// 0x0002 (0x0002 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_SetEquipmentModelCaptureImageVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_SetEquipmentModelCaptureImageVisibility) == 0x000001, "Wrong alignment on EquipmentStatusDescForBattleSet_C_SetEquipmentModelCaptureImageVisibility");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_SetEquipmentModelCaptureImageVisibility) == 0x000002, "Wrong size on EquipmentStatusDescForBattleSet_C_SetEquipmentModelCaptureImageVisibility");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipmentModelCaptureImageVisibility, InIsVisible) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipmentModelCaptureImageVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipmentModelCaptureImageVisibility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipmentModelCaptureImageVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetDescToDefault
// 0x0008 (0x0008 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_SetDescToDefault final
{
public:
	bool                                          InIsDescDefault;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsDescDefault;                                // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_SetDescToDefault) == 0x000001, "Wrong alignment on EquipmentStatusDescForBattleSet_C_SetDescToDefault");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_SetDescToDefault) == 0x000008, "Wrong size on EquipmentStatusDescForBattleSet_C_SetDescToDefault");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetDescToDefault, InIsDescDefault) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_SetDescToDefault::InIsDescDefault' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetDescToDefault, LocalIsDescDefault) == 0x000001, "Member 'EquipmentStatusDescForBattleSet_C_SetDescToDefault::LocalIsDescDefault' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetDescToDefault, Temp_byte_Variable) == 0x000002, "Member 'EquipmentStatusDescForBattleSet_C_SetDescToDefault::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetDescToDefault, Temp_byte_Variable_1) == 0x000003, "Member 'EquipmentStatusDescForBattleSet_C_SetDescToDefault::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetDescToDefault, Temp_bool_Variable) == 0x000004, "Member 'EquipmentStatusDescForBattleSet_C_SetDescToDefault::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetDescToDefault, K2Node_Select_Default) == 0x000005, "Member 'EquipmentStatusDescForBattleSet_C_SetDescToDefault::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetDescToDefault, CallFunc_IsValid_ReturnValue) == 0x000006, "Member 'EquipmentStatusDescForBattleSet_C_SetDescToDefault::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetDescToDefault, CallFunc_IsValid_ReturnValue_1) == 0x000007, "Member 'EquipmentStatusDescForBattleSet_C_SetDescToDefault::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SwitchBaseBgType
// 0x0002 (0x0002 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_SwitchBaseBgType final
{
public:
	bool                                          InIsNormalType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_SwitchBaseBgType) == 0x000001, "Wrong alignment on EquipmentStatusDescForBattleSet_C_SwitchBaseBgType");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_SwitchBaseBgType) == 0x000002, "Wrong size on EquipmentStatusDescForBattleSet_C_SwitchBaseBgType");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchBaseBgType, InIsNormalType) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_SwitchBaseBgType::InIsNormalType' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SwitchBaseBgType, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'EquipmentStatusDescForBattleSet_C_SwitchBaseBgType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetImagineRemoveBtnVisibility
// 0x0006 (0x0006 - 0x0000)
struct EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility) == 0x000001, "Wrong alignment on EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility) == 0x000006, "Wrong size on EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility, InIsVisible) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility, Temp_byte_Variable) == 0x000001, "Member 'EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility, Temp_bool_Variable) == 0x000003, "Member 'EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility, K2Node_Select_Default) == 0x000004, "Member 'EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetEquipType
// 0x000B (0x000B - 0x0000)
struct EquipmentStatusDescForBattleSet_C_SetEquipType final
{
public:
	ESBCharaEquipType                             InEquipType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EquipmentStatusDescForBattleSet_C_SetEquipType) == 0x000001, "Wrong alignment on EquipmentStatusDescForBattleSet_C_SetEquipType");
static_assert(sizeof(EquipmentStatusDescForBattleSet_C_SetEquipType) == 0x00000B, "Wrong size on EquipmentStatusDescForBattleSet_C_SetEquipType");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipType, InEquipType) == 0x000000, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipType::InEquipType' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipType, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipType, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipType::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipType, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000004, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipType::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipType, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000005, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipType::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipType, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000006, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipType::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipType, CallFunc_BooleanOR_ReturnValue) == 0x000007, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipType, CallFunc_BooleanOR_ReturnValue_1) == 0x000008, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipType::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipType, CallFunc_BooleanOR_ReturnValue_2) == 0x000009, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipType::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EquipmentStatusDescForBattleSet_C_SetEquipType, CallFunc_BooleanOR_ReturnValue_3) == 0x00000A, "Member 'EquipmentStatusDescForBattleSet_C_SetEquipType::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");

}

