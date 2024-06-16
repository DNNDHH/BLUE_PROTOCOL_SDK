#pragma once

 

// Package: MatchingMenu_JoinButtonAnim

#include "Basic.hpp"


namespace SDK::Params
{

// Function MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C.ExecuteUbergraph_MatchingMenu_JoinButtonAnim
// 0x0030 (0x0030 - 0x0000)
struct MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C59[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim) == 0x000008, "Wrong alignment on MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim");
static_assert(sizeof(MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim) == 0x000030, "Wrong size on MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim");
static_assert(offsetof(MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim, EntryPoint) == 0x000000, "Member 'MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim::EntryPoint' has a wrong offset!");
static_assert(offsetof(MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim, CallFunc_PlayAnimation_ReturnValue_3) == 0x000020, "Member 'MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim, CallFunc_PlayAnimation_ReturnValue_4) == 0x000028, "Member 'MatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");

// Function MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C.PressAfterAnim
// 0x0008 (0x0008 - 0x0000)
struct MatchingMenu_JoinButtonAnim_C_PressAfterAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchingMenu_JoinButtonAnim_C_PressAfterAnim) == 0x000008, "Wrong alignment on MatchingMenu_JoinButtonAnim_C_PressAfterAnim");
static_assert(sizeof(MatchingMenu_JoinButtonAnim_C_PressAfterAnim) == 0x000008, "Wrong size on MatchingMenu_JoinButtonAnim_C_PressAfterAnim");
static_assert(offsetof(MatchingMenu_JoinButtonAnim_C_PressAfterAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'MatchingMenu_JoinButtonAnim_C_PressAfterAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

