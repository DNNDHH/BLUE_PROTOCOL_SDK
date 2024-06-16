#pragma once

 

// Package: ST_StunReaction

#include "Basic.hpp"

#include "ST_StunDirectionReaction_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_StunReaction.ST_StunReaction
// 0x000C (0x000C - 0x0000)
struct FST_StunReaction final
{
public:
	struct FST_StunDirectionReaction              StunLv1_17_0E26CC764DB6EA426D3EEC888E76460A;       // 0x0000(0x0003)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_StunDirectionReaction              StunLv2_18_AE98D6CB4DAF3EC1FA2234B892BD9FF7;       // 0x0003(0x0003)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_StunDirectionReaction              StunLv3_19_F006AE1B497C286A27D1ABBCC676FC7B;       // 0x0006(0x0003)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_StunDirectionReaction              StunLv4_21_A5EA96914551ECF0D20151B110E9B626;       // 0x0009(0x0003)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_StunReaction) == 0x000001, "Wrong alignment on FST_StunReaction");
static_assert(sizeof(FST_StunReaction) == 0x00000C, "Wrong size on FST_StunReaction");
static_assert(offsetof(FST_StunReaction, StunLv1_17_0E26CC764DB6EA426D3EEC888E76460A) == 0x000000, "Member 'FST_StunReaction::StunLv1_17_0E26CC764DB6EA426D3EEC888E76460A' has a wrong offset!");
static_assert(offsetof(FST_StunReaction, StunLv2_18_AE98D6CB4DAF3EC1FA2234B892BD9FF7) == 0x000003, "Member 'FST_StunReaction::StunLv2_18_AE98D6CB4DAF3EC1FA2234B892BD9FF7' has a wrong offset!");
static_assert(offsetof(FST_StunReaction, StunLv3_19_F006AE1B497C286A27D1ABBCC676FC7B) == 0x000006, "Member 'FST_StunReaction::StunLv3_19_F006AE1B497C286A27D1ABBCC676FC7B' has a wrong offset!");
static_assert(offsetof(FST_StunReaction, StunLv4_21_A5EA96914551ECF0D20151B110E9B626) == 0x000009, "Member 'FST_StunReaction::StunLv4_21_A5EA96914551ECF0D20151B110E9B626' has a wrong offset!");

}

