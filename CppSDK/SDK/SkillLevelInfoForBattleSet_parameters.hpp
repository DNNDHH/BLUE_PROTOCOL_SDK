#pragma once

 

// Package: SkillLevelInfoForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.ExecuteUbergraph_SkillLevelInfoForBattleSet
// 0x0008 (0x0008 - 0x0000)
struct SkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet) == 0x000004, "Wrong alignment on SkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet");
static_assert(sizeof(SkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet) == 0x000008, "Wrong size on SkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet");
static_assert(offsetof(SkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet, EntryPoint) == 0x000000, "Member 'SkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet, K2Node_Event_IsDesignTime) == 0x000004, "Member 'SkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillLevelInfoForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillLevelInfoForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on SkillLevelInfoForBattleSet_C_PreConstruct");
static_assert(sizeof(SkillLevelInfoForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on SkillLevelInfoForBattleSet_C_PreConstruct");
static_assert(offsetof(SkillLevelInfoForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillLevelInfoForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.SetSkillLevel
// 0x0028 (0x0028 - 0x0000)
struct SkillLevelInfoForBattleSet_C_SetSkillLevel final
{
public:
	int32                                         InSkillLevel;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E4F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillLevelText_ReturnValue;            // 0x0008(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillLevelInfoForBattleSet_C_SetSkillLevel) == 0x000008, "Wrong alignment on SkillLevelInfoForBattleSet_C_SetSkillLevel");
static_assert(sizeof(SkillLevelInfoForBattleSet_C_SetSkillLevel) == 0x000028, "Wrong size on SkillLevelInfoForBattleSet_C_SetSkillLevel");
static_assert(offsetof(SkillLevelInfoForBattleSet_C_SetSkillLevel, InSkillLevel) == 0x000000, "Member 'SkillLevelInfoForBattleSet_C_SetSkillLevel::InSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillLevelInfoForBattleSet_C_SetSkillLevel, CallFunc_GetSkillLevelText_ReturnValue) == 0x000008, "Member 'SkillLevelInfoForBattleSet_C_SetSkillLevel::CallFunc_GetSkillLevelText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillLevelInfoForBattleSet_C_SetSkillLevel, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SkillLevelInfoForBattleSet_C_SetSkillLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.SetSkillAbilityType
// 0x0028 (0x0028 - 0x0000)
struct SkillLevelInfoForBattleSet_C_SetSkillAbilityType final
{
public:
	ESBSkillAbilityType                           InSkillAbilityType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E50[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillAbillityTypeText_ReturnValue;     // 0x0008(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillLevelInfoForBattleSet_C_SetSkillAbilityType) == 0x000008, "Wrong alignment on SkillLevelInfoForBattleSet_C_SetSkillAbilityType");
static_assert(sizeof(SkillLevelInfoForBattleSet_C_SetSkillAbilityType) == 0x000028, "Wrong size on SkillLevelInfoForBattleSet_C_SetSkillAbilityType");
static_assert(offsetof(SkillLevelInfoForBattleSet_C_SetSkillAbilityType, InSkillAbilityType) == 0x000000, "Member 'SkillLevelInfoForBattleSet_C_SetSkillAbilityType::InSkillAbilityType' has a wrong offset!");
static_assert(offsetof(SkillLevelInfoForBattleSet_C_SetSkillAbilityType, CallFunc_GetSkillAbillityTypeText_ReturnValue) == 0x000008, "Member 'SkillLevelInfoForBattleSet_C_SetSkillAbilityType::CallFunc_GetSkillAbillityTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillLevelInfoForBattleSet_C_SetSkillAbilityType, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SkillLevelInfoForBattleSet_C_SetSkillAbilityType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

