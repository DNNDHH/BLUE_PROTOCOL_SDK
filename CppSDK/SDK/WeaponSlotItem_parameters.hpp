#pragma once

 

// Package: WeaponSlotItem

#include "Basic.hpp"

#include "WeaponSlotType_structs.hpp"


namespace SDK::Params
{

// Function WeaponSlotItem.WeaponSlotItem_C.ExecuteUbergraph_WeaponSlotItem
// 0x0010 (0x0010 - 0x0000)
struct WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponSlotType                               Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponSlotType                               K2Node_CustomEvent_ViewType;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C58[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem) == 0x000008, "Wrong alignment on WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem");
static_assert(sizeof(WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem) == 0x000010, "Wrong size on WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem");
static_assert(offsetof(WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem, EntryPoint) == 0x000000, "Member 'WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem, Temp_byte_Variable) == 0x000004, "Member 'WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem, K2Node_CustomEvent_ViewType) == 0x000005, "Member 'WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem::K2Node_CustomEvent_ViewType' has a wrong offset!");
static_assert(offsetof(WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem, K2Node_Select_Default) == 0x000008, "Member 'WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSlotItem.WeaponSlotItem_C.SetViewMode
// 0x0001 (0x0001 - 0x0000)
struct WeaponSlotItem_C_SetViewMode final
{
public:
	EWeaponSlotType                               ViewType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSlotItem_C_SetViewMode) == 0x000001, "Wrong alignment on WeaponSlotItem_C_SetViewMode");
static_assert(sizeof(WeaponSlotItem_C_SetViewMode) == 0x000001, "Wrong size on WeaponSlotItem_C_SetViewMode");
static_assert(offsetof(WeaponSlotItem_C_SetViewMode, ViewType) == 0x000000, "Member 'WeaponSlotItem_C_SetViewMode::ViewType' has a wrong offset!");

}

