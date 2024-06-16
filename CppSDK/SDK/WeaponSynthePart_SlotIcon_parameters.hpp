#pragma once

 

// Package: WeaponSynthePart_SlotIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_SlotIcon.WeaponSynthePart_SlotIcon_C.SetSlot
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_SlotIcon_C_SetSlot final
{
public:
	int32                                         SlotNum;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_SlotIcon_C_SetSlot) == 0x000004, "Wrong alignment on WeaponSynthePart_SlotIcon_C_SetSlot");
static_assert(sizeof(WeaponSynthePart_SlotIcon_C_SetSlot) == 0x000008, "Wrong size on WeaponSynthePart_SlotIcon_C_SetSlot");
static_assert(offsetof(WeaponSynthePart_SlotIcon_C_SetSlot, SlotNum) == 0x000000, "Member 'WeaponSynthePart_SlotIcon_C_SetSlot::SlotNum' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_SlotIcon_C_SetSlot, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000004, "Member 'WeaponSynthePart_SlotIcon_C_SetSlot::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_SlotIcon_C_SetSlot, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000005, "Member 'WeaponSynthePart_SlotIcon_C_SetSlot::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_SlotIcon_C_SetSlot, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000006, "Member 'WeaponSynthePart_SlotIcon_C_SetSlot::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");

}

