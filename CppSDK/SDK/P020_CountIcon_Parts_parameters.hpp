#pragma once

 

// Package: P020_CountIcon_Parts

#include "Basic.hpp"


namespace SDK::Params
{

// Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.ExecuteUbergraph_P020_CountIcon_Parts
// 0x0008 (0x0008 - 0x0000)
struct P020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bON;                                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts) == 0x000004, "Wrong alignment on P020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts");
static_assert(sizeof(P020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts) == 0x000008, "Wrong size on P020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts");
static_assert(offsetof(P020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts, EntryPoint) == 0x000000, "Member 'P020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts::EntryPoint' has a wrong offset!");
static_assert(offsetof(P020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts, K2Node_Event_bON) == 0x000004, "Member 'P020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts::K2Node_Event_bON' has a wrong offset!");

// Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.OnSetONOFF
// 0x0001 (0x0001 - 0x0000)
struct P020_CountIcon_Parts_C_OnSetONOFF final
{
public:
	bool                                          bOn;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P020_CountIcon_Parts_C_OnSetONOFF) == 0x000001, "Wrong alignment on P020_CountIcon_Parts_C_OnSetONOFF");
static_assert(sizeof(P020_CountIcon_Parts_C_OnSetONOFF) == 0x000001, "Wrong size on P020_CountIcon_Parts_C_OnSetONOFF");
static_assert(offsetof(P020_CountIcon_Parts_C_OnSetONOFF, bOn) == 0x000000, "Member 'P020_CountIcon_Parts_C_OnSetONOFF::bOn' has a wrong offset!");

// Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.SetONOFF
// 0x0018 (0x0018 - 0x0000)
struct P020_CountIcon_Parts_C_SetONOFF final
{
public:
	bool                                          bOn;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_671A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P020_CountIcon_Parts_C_SetONOFF) == 0x000008, "Wrong alignment on P020_CountIcon_Parts_C_SetONOFF");
static_assert(sizeof(P020_CountIcon_Parts_C_SetONOFF) == 0x000018, "Wrong size on P020_CountIcon_Parts_C_SetONOFF");
static_assert(offsetof(P020_CountIcon_Parts_C_SetONOFF, bOn) == 0x000000, "Member 'P020_CountIcon_Parts_C_SetONOFF::bOn' has a wrong offset!");
static_assert(offsetof(P020_CountIcon_Parts_C_SetONOFF, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'P020_CountIcon_Parts_C_SetONOFF::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(P020_CountIcon_Parts_C_SetONOFF, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'P020_CountIcon_Parts_C_SetONOFF::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.EffectAnim
// 0x0008 (0x0008 - 0x0000)
struct P020_CountIcon_Parts_C_EffectAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P020_CountIcon_Parts_C_EffectAnim) == 0x000008, "Wrong alignment on P020_CountIcon_Parts_C_EffectAnim");
static_assert(sizeof(P020_CountIcon_Parts_C_EffectAnim) == 0x000008, "Wrong size on P020_CountIcon_Parts_C_EffectAnim");
static_assert(offsetof(P020_CountIcon_Parts_C_EffectAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'P020_CountIcon_Parts_C_EffectAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

