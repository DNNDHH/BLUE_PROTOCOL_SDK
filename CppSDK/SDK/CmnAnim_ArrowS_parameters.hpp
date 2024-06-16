#pragma once

 

// Package: CmnAnim_ArrowS

#include "Basic.hpp"


namespace SDK::Params
{

// Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.ExecuteUbergraph_CmnAnim_ArrowS
// 0x0004 (0x0004 - 0x0000)
struct CmnAnim_ArrowS_C_ExecuteUbergraph_CmnAnim_ArrowS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnAnim_ArrowS_C_ExecuteUbergraph_CmnAnim_ArrowS) == 0x000004, "Wrong alignment on CmnAnim_ArrowS_C_ExecuteUbergraph_CmnAnim_ArrowS");
static_assert(sizeof(CmnAnim_ArrowS_C_ExecuteUbergraph_CmnAnim_ArrowS) == 0x000004, "Wrong size on CmnAnim_ArrowS_C_ExecuteUbergraph_CmnAnim_ArrowS");
static_assert(offsetof(CmnAnim_ArrowS_C_ExecuteUbergraph_CmnAnim_ArrowS, EntryPoint) == 0x000000, "Member 'CmnAnim_ArrowS_C_ExecuteUbergraph_CmnAnim_ArrowS::EntryPoint' has a wrong offset!");

// Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.PlayArrowAnim
// 0x0010 (0x0010 - 0x0000)
struct CmnAnim_ArrowS_C_PlayArrowAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnAnim_ArrowS_C_PlayArrowAnim) == 0x000008, "Wrong alignment on CmnAnim_ArrowS_C_PlayArrowAnim");
static_assert(sizeof(CmnAnim_ArrowS_C_PlayArrowAnim) == 0x000010, "Wrong size on CmnAnim_ArrowS_C_PlayArrowAnim");
static_assert(offsetof(CmnAnim_ArrowS_C_PlayArrowAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'CmnAnim_ArrowS_C_PlayArrowAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnAnim_ArrowS_C_PlayArrowAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'CmnAnim_ArrowS_C_PlayArrowAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function CmnAnim_ArrowS.CmnAnim_ArrowS_C.StopArrowAnim
// 0x0008 (0x0008 - 0x0000)
struct CmnAnim_ArrowS_C_StopArrowAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnAnim_ArrowS_C_StopArrowAnim) == 0x000008, "Wrong alignment on CmnAnim_ArrowS_C_StopArrowAnim");
static_assert(sizeof(CmnAnim_ArrowS_C_StopArrowAnim) == 0x000008, "Wrong size on CmnAnim_ArrowS_C_StopArrowAnim");
static_assert(offsetof(CmnAnim_ArrowS_C_StopArrowAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'CmnAnim_ArrowS_C_StopArrowAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

