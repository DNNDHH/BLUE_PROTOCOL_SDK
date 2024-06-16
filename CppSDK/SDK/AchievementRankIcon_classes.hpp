#pragma once

 

// Package: AchievementRankIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AchievementRankIcon.AchievementRankIcon_C
// 0x0018 (0x0290 - 0x0278)
class UAchievementRankIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        SwitchRank;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         RankId;                                            // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AchievementRankIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetRank(int32 Param_RankId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AchievementRankIcon_C">();
	}
	static class UAchievementRankIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAchievementRankIcon_C>();
	}
};
static_assert(alignof(UAchievementRankIcon_C) == 0x000008, "Wrong alignment on UAchievementRankIcon_C");
static_assert(sizeof(UAchievementRankIcon_C) == 0x000290, "Wrong size on UAchievementRankIcon_C");
static_assert(offsetof(UAchievementRankIcon_C, UberGraphFrame) == 0x000278, "Member 'UAchievementRankIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAchievementRankIcon_C, SwitchRank) == 0x000280, "Member 'UAchievementRankIcon_C::SwitchRank' has a wrong offset!");
static_assert(offsetof(UAchievementRankIcon_C, RankId) == 0x000288, "Member 'UAchievementRankIcon_C::RankId' has a wrong offset!");

}

