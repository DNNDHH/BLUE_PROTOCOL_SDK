#pragma once

 

// Package: CommonIconToolTipContent_SkillUnleashed

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_SkillUnleashed.CommonIconToolTipContent_SkillUnleashed_C.SetInfo
// 0x0050 (0x0050 - 0x0000)
struct CommonIconToolTipContent_SkillUnleashed_C_SetInfo final
{
public:
	class FText                                   ClassLevel;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Conditions01;                                      // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Conditions02;                                      // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_SkillUnleashed_C_SetInfo) == 0x000008, "Wrong alignment on CommonIconToolTipContent_SkillUnleashed_C_SetInfo");
static_assert(sizeof(CommonIconToolTipContent_SkillUnleashed_C_SetInfo) == 0x000050, "Wrong size on CommonIconToolTipContent_SkillUnleashed_C_SetInfo");
static_assert(offsetof(CommonIconToolTipContent_SkillUnleashed_C_SetInfo, ClassLevel) == 0x000000, "Member 'CommonIconToolTipContent_SkillUnleashed_C_SetInfo::ClassLevel' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_SkillUnleashed_C_SetInfo, Conditions01) == 0x000018, "Member 'CommonIconToolTipContent_SkillUnleashed_C_SetInfo::Conditions01' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_SkillUnleashed_C_SetInfo, Conditions02) == 0x000030, "Member 'CommonIconToolTipContent_SkillUnleashed_C_SetInfo::Conditions02' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_SkillUnleashed_C_SetInfo, CallFunc_MakeLiteralByte_ReturnValue) == 0x000048, "Member 'CommonIconToolTipContent_SkillUnleashed_C_SetInfo::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_SkillUnleashed_C_SetInfo, CallFunc_TextIsEmpty_ReturnValue) == 0x000049, "Member 'CommonIconToolTipContent_SkillUnleashed_C_SetInfo::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_SkillUnleashed_C_SetInfo, CallFunc_Not_PreBool_ReturnValue) == 0x00004A, "Member 'CommonIconToolTipContent_SkillUnleashed_C_SetInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_SkillUnleashed_C_SetInfo, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00004B, "Member 'CommonIconToolTipContent_SkillUnleashed_C_SetInfo::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_SkillUnleashed_C_SetInfo, Temp_bool_Variable) == 0x00004C, "Member 'CommonIconToolTipContent_SkillUnleashed_C_SetInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_SkillUnleashed_C_SetInfo, K2Node_Select_Default) == 0x00004D, "Member 'CommonIconToolTipContent_SkillUnleashed_C_SetInfo::K2Node_Select_Default' has a wrong offset!");

}

