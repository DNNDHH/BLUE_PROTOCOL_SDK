#pragma once

 

// Package: AdventurerRank_AnmArrow

#include "Basic.hpp"


namespace SDK::Params
{

// Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.ExecuteUbergraph_AdventurerRank_AnmArrow
// 0x0004 (0x0004 - 0x0000)
struct AdventurerRank_AnmArrow_C_ExecuteUbergraph_AdventurerRank_AnmArrow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventurerRank_AnmArrow_C_ExecuteUbergraph_AdventurerRank_AnmArrow) == 0x000004, "Wrong alignment on AdventurerRank_AnmArrow_C_ExecuteUbergraph_AdventurerRank_AnmArrow");
static_assert(sizeof(AdventurerRank_AnmArrow_C_ExecuteUbergraph_AdventurerRank_AnmArrow) == 0x000004, "Wrong size on AdventurerRank_AnmArrow_C_ExecuteUbergraph_AdventurerRank_AnmArrow");
static_assert(offsetof(AdventurerRank_AnmArrow_C_ExecuteUbergraph_AdventurerRank_AnmArrow, EntryPoint) == 0x000000, "Member 'AdventurerRank_AnmArrow_C_ExecuteUbergraph_AdventurerRank_AnmArrow::EntryPoint' has a wrong offset!");

// Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.PlayArrowAnim
// 0x0010 (0x0010 - 0x0000)
struct AdventurerRank_AnmArrow_C_PlayArrowAnim final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88FA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventurerRank_AnmArrow_C_PlayArrowAnim) == 0x000008, "Wrong alignment on AdventurerRank_AnmArrow_C_PlayArrowAnim");
static_assert(sizeof(AdventurerRank_AnmArrow_C_PlayArrowAnim) == 0x000010, "Wrong size on AdventurerRank_AnmArrow_C_PlayArrowAnim");
static_assert(offsetof(AdventurerRank_AnmArrow_C_PlayArrowAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'AdventurerRank_AnmArrow_C_PlayArrowAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_AnmArrow_C_PlayArrowAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'AdventurerRank_AnmArrow_C_PlayArrowAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.StopArrowAnim
// 0x0008 (0x0008 - 0x0000)
struct AdventurerRank_AnmArrow_C_StopArrowAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventurerRank_AnmArrow_C_StopArrowAnim) == 0x000008, "Wrong alignment on AdventurerRank_AnmArrow_C_StopArrowAnim");
static_assert(sizeof(AdventurerRank_AnmArrow_C_StopArrowAnim) == 0x000008, "Wrong size on AdventurerRank_AnmArrow_C_StopArrowAnim");
static_assert(offsetof(AdventurerRank_AnmArrow_C_StopArrowAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'AdventurerRank_AnmArrow_C_StopArrowAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

