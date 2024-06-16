#pragma once

 

// Package: ST_TutorialExtendDataMain

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_TutorialExtendDataMain.ST_TutorialExtendDataMain
// 0x000C (0x000C - 0x0000)
struct FST_TutorialExtendDataMain final
{
public:
	ESBClassType                                  ClassType_2_1E1AADFD4E729B6BC54C6592C792A26A;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C91[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TutorialHelpId_5_4DB175AD4024A59B4A90AE878035637A; // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_TutorialExtendDataMain) == 0x000004, "Wrong alignment on FST_TutorialExtendDataMain");
static_assert(sizeof(FST_TutorialExtendDataMain) == 0x00000C, "Wrong size on FST_TutorialExtendDataMain");
static_assert(offsetof(FST_TutorialExtendDataMain, ClassType_2_1E1AADFD4E729B6BC54C6592C792A26A) == 0x000000, "Member 'FST_TutorialExtendDataMain::ClassType_2_1E1AADFD4E729B6BC54C6592C792A26A' has a wrong offset!");
static_assert(offsetof(FST_TutorialExtendDataMain, TutorialHelpId_5_4DB175AD4024A59B4A90AE878035637A) == 0x000004, "Member 'FST_TutorialExtendDataMain::TutorialHelpId_5_4DB175AD4024A59B4A90AE878035637A' has a wrong offset!");

}

