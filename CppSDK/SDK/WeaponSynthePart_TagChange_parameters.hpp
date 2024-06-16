#pragma once

 

// Package: WeaponSynthePart_TagChange

#include "Basic.hpp"

#include "SlotDataChangeType_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_TagChange.WeaponSynthePart_TagChange_C.Setup
// 0x0014 (0x0014 - 0x0000)
struct WeaponSynthePart_TagChange_C_Setup final
{
public:
	ESlotDataChangeType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlotDataChangeType                           Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6910[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_TagChange_C_Setup) == 0x000004, "Wrong alignment on WeaponSynthePart_TagChange_C_Setup");
static_assert(sizeof(WeaponSynthePart_TagChange_C_Setup) == 0x000014, "Wrong size on WeaponSynthePart_TagChange_C_Setup");
static_assert(offsetof(WeaponSynthePart_TagChange_C_Setup, Type) == 0x000000, "Member 'WeaponSynthePart_TagChange_C_Setup::Type' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TagChange_C_Setup, Temp_byte_Variable) == 0x000001, "Member 'WeaponSynthePart_TagChange_C_Setup::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TagChange_C_Setup, Temp_int_Variable) == 0x000004, "Member 'WeaponSynthePart_TagChange_C_Setup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TagChange_C_Setup, Temp_int_Variable_1) == 0x000008, "Member 'WeaponSynthePart_TagChange_C_Setup::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TagChange_C_Setup, Temp_int_Variable_2) == 0x00000C, "Member 'WeaponSynthePart_TagChange_C_Setup::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_TagChange_C_Setup, K2Node_Select_Default) == 0x000010, "Member 'WeaponSynthePart_TagChange_C_Setup::K2Node_Select_Default' has a wrong offset!");

}

