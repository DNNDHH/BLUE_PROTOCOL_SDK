#pragma once

 

// Package: WeaponCustomListitem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponCustomListitem.WeaponCustomListitem_C.OnSelect__DelegateSignature
// 0x0120 (0x0120 - 0x0000)
struct WeaponCustomListitem_C_OnSelect__DelegateSignature final
{
public:
	struct FOwnItemInfo                           OnSelectWeapn;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWeaponCustomListitem_C*                Select;                                            // 0x0118(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomListitem_C_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on WeaponCustomListitem_C_OnSelect__DelegateSignature");
static_assert(sizeof(WeaponCustomListitem_C_OnSelect__DelegateSignature) == 0x000120, "Wrong size on WeaponCustomListitem_C_OnSelect__DelegateSignature");
static_assert(offsetof(WeaponCustomListitem_C_OnSelect__DelegateSignature, OnSelectWeapn) == 0x000000, "Member 'WeaponCustomListitem_C_OnSelect__DelegateSignature::OnSelectWeapn' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_OnSelect__DelegateSignature, Select) == 0x000118, "Member 'WeaponCustomListitem_C_OnSelect__DelegateSignature::Select' has a wrong offset!");

// Function WeaponCustomListitem.WeaponCustomListitem_C.ExecuteUbergraph_WeaponCustomListitem
// 0x0004 (0x0004 - 0x0000)
struct WeaponCustomListitem_C_ExecuteUbergraph_WeaponCustomListitem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomListitem_C_ExecuteUbergraph_WeaponCustomListitem) == 0x000004, "Wrong alignment on WeaponCustomListitem_C_ExecuteUbergraph_WeaponCustomListitem");
static_assert(sizeof(WeaponCustomListitem_C_ExecuteUbergraph_WeaponCustomListitem) == 0x000004, "Wrong size on WeaponCustomListitem_C_ExecuteUbergraph_WeaponCustomListitem");
static_assert(offsetof(WeaponCustomListitem_C_ExecuteUbergraph_WeaponCustomListitem, EntryPoint) == 0x000000, "Member 'WeaponCustomListitem_C_ExecuteUbergraph_WeaponCustomListitem::EntryPoint' has a wrong offset!");

// Function WeaponCustomListitem.WeaponCustomListitem_C.SetWeaponData
// 0x0248 (0x0248 - 0x0000)
struct WeaponCustomListitem_C_SetWeaponData final
{
public:
	struct FOwnItemInfo                           WeaponData;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D1F[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0120(0x00B0)()
	class FString                                 CallFunc_GetWeaponTypeText_ReturnValue;            // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D20[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01E8(0x0018)()
	bool                                          CallFunc_IsPlayerPresetEquipItem_ReturnValue;      // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D21[0x6];                                     // 0x0202(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0208(0x0018)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0230(0x0018)()
};
static_assert(alignof(WeaponCustomListitem_C_SetWeaponData) == 0x000008, "Wrong alignment on WeaponCustomListitem_C_SetWeaponData");
static_assert(sizeof(WeaponCustomListitem_C_SetWeaponData) == 0x000248, "Wrong size on WeaponCustomListitem_C_SetWeaponData");
static_assert(offsetof(WeaponCustomListitem_C_SetWeaponData, WeaponData) == 0x000000, "Member 'WeaponCustomListitem_C_SetWeaponData::WeaponData' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetWeaponData, CallFunc_FindWeaponMaster_bIsValid) == 0x000118, "Member 'WeaponCustomListitem_C_SetWeaponData::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetWeaponData, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000120, "Member 'WeaponCustomListitem_C_SetWeaponData::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetWeaponData, CallFunc_GetWeaponTypeText_ReturnValue) == 0x0001D0, "Member 'WeaponCustomListitem_C_SetWeaponData::CallFunc_GetWeaponTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetWeaponData, CallFunc_Not_PreBool_ReturnValue) == 0x0001E0, "Member 'WeaponCustomListitem_C_SetWeaponData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetWeaponData, CallFunc_Conv_StringToText_ReturnValue) == 0x0001E8, "Member 'WeaponCustomListitem_C_SetWeaponData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetWeaponData, CallFunc_IsPlayerPresetEquipItem_ReturnValue) == 0x000200, "Member 'WeaponCustomListitem_C_SetWeaponData::CallFunc_IsPlayerPresetEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetWeaponData, CallFunc_IsEquipmentItem_ReturnValue) == 0x000201, "Member 'WeaponCustomListitem_C_SetWeaponData::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetWeaponData, CallFunc_Conv_IntToText_ReturnValue) == 0x000208, "Member 'WeaponCustomListitem_C_SetWeaponData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetWeaponData, CallFunc_GetWeaponText_ReturnValue) == 0x000220, "Member 'WeaponCustomListitem_C_SetWeaponData::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetWeaponData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000230, "Member 'WeaponCustomListitem_C_SetWeaponData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function WeaponCustomListitem.WeaponCustomListitem_C.SetSelected
// 0x0005 (0x0005 - 0x0000)
struct WeaponCustomListitem_C_SetSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponCustomListitem_C_SetSelected) == 0x000001, "Wrong alignment on WeaponCustomListitem_C_SetSelected");
static_assert(sizeof(WeaponCustomListitem_C_SetSelected) == 0x000005, "Wrong size on WeaponCustomListitem_C_SetSelected");
static_assert(offsetof(WeaponCustomListitem_C_SetSelected, bSelected) == 0x000000, "Member 'WeaponCustomListitem_C_SetSelected::bSelected' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetSelected, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'WeaponCustomListitem_C_SetSelected::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetSelected, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'WeaponCustomListitem_C_SetSelected::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetSelected, Temp_bool_Variable) == 0x000003, "Member 'WeaponCustomListitem_C_SetSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponCustomListitem_C_SetSelected, K2Node_Select_Default) == 0x000004, "Member 'WeaponCustomListitem_C_SetSelected::K2Node_Select_Default' has a wrong offset!");

}

