#pragma once

 

// Package: FocusTarget

#include "Basic.hpp"


namespace SDK::Params
{

// Function FocusTarget.FocusTarget_C.ExecuteUbergraph_FocusTarget
// 0x0028 (0x0028 - 0x0000)
struct FocusTarget_C_ExecuteUbergraph_FocusTarget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayAnimOut_ReturnValue;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_745F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class ASBEnemyCharacter*                      K2Node_Event_InEnemyCharacter_1;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      K2Node_Event_InEnemyCharacter;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FocusTarget_C_ExecuteUbergraph_FocusTarget) == 0x000008, "Wrong alignment on FocusTarget_C_ExecuteUbergraph_FocusTarget");
static_assert(sizeof(FocusTarget_C_ExecuteUbergraph_FocusTarget) == 0x000028, "Wrong size on FocusTarget_C_ExecuteUbergraph_FocusTarget");
static_assert(offsetof(FocusTarget_C_ExecuteUbergraph_FocusTarget, EntryPoint) == 0x000000, "Member 'FocusTarget_C_ExecuteUbergraph_FocusTarget::EntryPoint' has a wrong offset!");
static_assert(offsetof(FocusTarget_C_ExecuteUbergraph_FocusTarget, CallFunc_IsPlayAnimOut_ReturnValue) == 0x000004, "Member 'FocusTarget_C_ExecuteUbergraph_FocusTarget::CallFunc_IsPlayAnimOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(FocusTarget_C_ExecuteUbergraph_FocusTarget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'FocusTarget_C_ExecuteUbergraph_FocusTarget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FocusTarget_C_ExecuteUbergraph_FocusTarget, K2Node_Event_InEnemyCharacter_1) == 0x000018, "Member 'FocusTarget_C_ExecuteUbergraph_FocusTarget::K2Node_Event_InEnemyCharacter_1' has a wrong offset!");
static_assert(offsetof(FocusTarget_C_ExecuteUbergraph_FocusTarget, K2Node_Event_InEnemyCharacter) == 0x000020, "Member 'FocusTarget_C_ExecuteUbergraph_FocusTarget::K2Node_Event_InEnemyCharacter' has a wrong offset!");

// Function FocusTarget.FocusTarget_C.OnUnbindFadeOutDeath
// 0x0008 (0x0008 - 0x0000)
struct FocusTarget_C_OnUnbindFadeOutDeath final
{
public:
	class ASBEnemyCharacter*                      InEnemyCharacter;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FocusTarget_C_OnUnbindFadeOutDeath) == 0x000008, "Wrong alignment on FocusTarget_C_OnUnbindFadeOutDeath");
static_assert(sizeof(FocusTarget_C_OnUnbindFadeOutDeath) == 0x000008, "Wrong size on FocusTarget_C_OnUnbindFadeOutDeath");
static_assert(offsetof(FocusTarget_C_OnUnbindFadeOutDeath, InEnemyCharacter) == 0x000000, "Member 'FocusTarget_C_OnUnbindFadeOutDeath::InEnemyCharacter' has a wrong offset!");

// Function FocusTarget.FocusTarget_C.OnBindFadeOutDeath
// 0x0008 (0x0008 - 0x0000)
struct FocusTarget_C_OnBindFadeOutDeath final
{
public:
	class ASBEnemyCharacter*                      InEnemyCharacter;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FocusTarget_C_OnBindFadeOutDeath) == 0x000008, "Wrong alignment on FocusTarget_C_OnBindFadeOutDeath");
static_assert(sizeof(FocusTarget_C_OnBindFadeOutDeath) == 0x000008, "Wrong size on FocusTarget_C_OnBindFadeOutDeath");
static_assert(offsetof(FocusTarget_C_OnBindFadeOutDeath, InEnemyCharacter) == 0x000000, "Member 'FocusTarget_C_OnBindFadeOutDeath::InEnemyCharacter' has a wrong offset!");

// Function FocusTarget.FocusTarget_C.OnPlayAnimIn
// 0x0018 (0x0018 - 0x0000)
struct FocusTarget_C_OnPlayAnimIn final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7460[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FocusTarget_C_OnPlayAnimIn) == 0x000008, "Wrong alignment on FocusTarget_C_OnPlayAnimIn");
static_assert(sizeof(FocusTarget_C_OnPlayAnimIn) == 0x000018, "Wrong size on FocusTarget_C_OnPlayAnimIn");
static_assert(offsetof(FocusTarget_C_OnPlayAnimIn, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'FocusTarget_C_OnPlayAnimIn::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(FocusTarget_C_OnPlayAnimIn, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'FocusTarget_C_OnPlayAnimIn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FocusTarget_C_OnPlayAnimIn, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'FocusTarget_C_OnPlayAnimIn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function FocusTarget.FocusTarget_C.OnStopAnimIn
// 0x0001 (0x0001 - 0x0000)
struct FocusTarget_C_OnStopAnimIn final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FocusTarget_C_OnStopAnimIn) == 0x000001, "Wrong alignment on FocusTarget_C_OnStopAnimIn");
static_assert(sizeof(FocusTarget_C_OnStopAnimIn) == 0x000001, "Wrong size on FocusTarget_C_OnStopAnimIn");
static_assert(offsetof(FocusTarget_C_OnStopAnimIn, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'FocusTarget_C_OnStopAnimIn::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function FocusTarget.FocusTarget_C.OnPlayAnimOut
// 0x0018 (0x0018 - 0x0000)
struct FocusTarget_C_OnPlayAnimOut final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7461[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FocusTarget_C_OnPlayAnimOut) == 0x000008, "Wrong alignment on FocusTarget_C_OnPlayAnimOut");
static_assert(sizeof(FocusTarget_C_OnPlayAnimOut) == 0x000018, "Wrong size on FocusTarget_C_OnPlayAnimOut");
static_assert(offsetof(FocusTarget_C_OnPlayAnimOut, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'FocusTarget_C_OnPlayAnimOut::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(FocusTarget_C_OnPlayAnimOut, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'FocusTarget_C_OnPlayAnimOut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FocusTarget_C_OnPlayAnimOut, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'FocusTarget_C_OnPlayAnimOut::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function FocusTarget.FocusTarget_C.OnStopAnimOut
// 0x0001 (0x0001 - 0x0000)
struct FocusTarget_C_OnStopAnimOut final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FocusTarget_C_OnStopAnimOut) == 0x000001, "Wrong alignment on FocusTarget_C_OnStopAnimOut");
static_assert(sizeof(FocusTarget_C_OnStopAnimOut) == 0x000001, "Wrong size on FocusTarget_C_OnStopAnimOut");
static_assert(offsetof(FocusTarget_C_OnStopAnimOut, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'FocusTarget_C_OnStopAnimOut::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}

