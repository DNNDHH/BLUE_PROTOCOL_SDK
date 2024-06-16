#pragma once

 

// Package: AchievementRankIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function AchievementRankIcon.AchievementRankIcon_C.ExecuteUbergraph_AchievementRankIcon
// 0x0008 (0x0008 - 0x0000)
struct AchievementRankIcon_C_ExecuteUbergraph_AchievementRankIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AchievementRankIcon_C_ExecuteUbergraph_AchievementRankIcon) == 0x000004, "Wrong alignment on AchievementRankIcon_C_ExecuteUbergraph_AchievementRankIcon");
static_assert(sizeof(AchievementRankIcon_C_ExecuteUbergraph_AchievementRankIcon) == 0x000008, "Wrong size on AchievementRankIcon_C_ExecuteUbergraph_AchievementRankIcon");
static_assert(offsetof(AchievementRankIcon_C_ExecuteUbergraph_AchievementRankIcon, EntryPoint) == 0x000000, "Member 'AchievementRankIcon_C_ExecuteUbergraph_AchievementRankIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(AchievementRankIcon_C_ExecuteUbergraph_AchievementRankIcon, K2Node_Event_IsDesignTime) == 0x000004, "Member 'AchievementRankIcon_C_ExecuteUbergraph_AchievementRankIcon::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function AchievementRankIcon.AchievementRankIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AchievementRankIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AchievementRankIcon_C_PreConstruct) == 0x000001, "Wrong alignment on AchievementRankIcon_C_PreConstruct");
static_assert(sizeof(AchievementRankIcon_C_PreConstruct) == 0x000001, "Wrong size on AchievementRankIcon_C_PreConstruct");
static_assert(offsetof(AchievementRankIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AchievementRankIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function AchievementRankIcon.AchievementRankIcon_C.SetRank
// 0x0004 (0x0004 - 0x0000)
struct AchievementRankIcon_C_SetRank final
{
public:
	int32                                         Param_RankId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AchievementRankIcon_C_SetRank) == 0x000004, "Wrong alignment on AchievementRankIcon_C_SetRank");
static_assert(sizeof(AchievementRankIcon_C_SetRank) == 0x000004, "Wrong size on AchievementRankIcon_C_SetRank");
static_assert(offsetof(AchievementRankIcon_C_SetRank, Param_RankId) == 0x000000, "Member 'AchievementRankIcon_C_SetRank::Param_RankId' has a wrong offset!");

}

