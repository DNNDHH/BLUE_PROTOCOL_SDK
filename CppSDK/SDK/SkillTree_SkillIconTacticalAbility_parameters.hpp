#pragma once

 

// Package: SkillTree_SkillIconTacticalAbility

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.ExecuteUbergraph_SkillTree_SkillIconTacticalAbility
// 0x0024 (0x0024 - 0x0000)
struct SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreeAbilityType                         Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C51[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreeAbilityType                         K2Node_CustomEvent_AbilityType;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C52[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility) == 0x000004, "Wrong alignment on SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility");
static_assert(sizeof(SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility) == 0x000024, "Wrong size on SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility");
static_assert(offsetof(SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility, EntryPoint) == 0x000000, "Member 'SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility, Temp_byte_Variable) == 0x000004, "Member 'SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility, Temp_int_Variable) == 0x000008, "Member 'SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility, Temp_int_Variable_1) == 0x00000C, "Member 'SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility, Temp_int_Variable_2) == 0x000010, "Member 'SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility, Temp_int_Variable_3) == 0x000014, "Member 'SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility, Temp_int_Variable_4) == 0x000018, "Member 'SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility, K2Node_CustomEvent_AbilityType) == 0x00001C, "Member 'SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility::K2Node_CustomEvent_AbilityType' has a wrong offset!");
static_assert(offsetof(SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility, K2Node_Select_Default) == 0x000020, "Member 'SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility::K2Node_Select_Default' has a wrong offset!");

// Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.SelectActiveAbility
// 0x0001 (0x0001 - 0x0000)
struct SkillTree_SkillIconTacticalAbility_C_SelectActiveAbility final
{
public:
	ESkillTreeAbilityType                         AbilityType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTree_SkillIconTacticalAbility_C_SelectActiveAbility) == 0x000001, "Wrong alignment on SkillTree_SkillIconTacticalAbility_C_SelectActiveAbility");
static_assert(sizeof(SkillTree_SkillIconTacticalAbility_C_SelectActiveAbility) == 0x000001, "Wrong size on SkillTree_SkillIconTacticalAbility_C_SelectActiveAbility");
static_assert(offsetof(SkillTree_SkillIconTacticalAbility_C_SelectActiveAbility, AbilityType) == 0x000000, "Member 'SkillTree_SkillIconTacticalAbility_C_SelectActiveAbility::AbilityType' has a wrong offset!");

}

