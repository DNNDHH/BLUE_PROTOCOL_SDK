#pragma once

 

// Package: GuildActivityList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildActivityList.GuildActivityList_C
// 0x0028 (0x02A0 - 0x0278)
class UGuildActivityList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VB_DayActivities;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_HourActivities;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_MinActivities;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsProfileLoading;                                  // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GuildActivityList(int32 EntryPoint);
	void OnClosePlayerCard();
	void OnCompleteProfileLoaded(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void OnRequestPlayerCard(const class FString& UserId, const class FString& CharacterId, const class FString& Param_Name);
	void GenerateActivities();
	void OnComplete_RequestGetGuildActivity(const int32 RetCode);
	void BindInit();
	void Construct();
	class USBPlayerGuildComponent* GetGuildComp();
	void GenerateGuildActivities();
	void CreateWidgets(const struct FGuildActivity& Activity, class USBUIGuildActivityUMGBase** AsSBUIGuild_Activity_UMGBase);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildActivityList_C">();
	}
	static class UGuildActivityList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildActivityList_C>();
	}
};
static_assert(alignof(UGuildActivityList_C) == 0x000008, "Wrong alignment on UGuildActivityList_C");
static_assert(sizeof(UGuildActivityList_C) == 0x0002A0, "Wrong size on UGuildActivityList_C");
static_assert(offsetof(UGuildActivityList_C, UberGraphFrame) == 0x000278, "Member 'UGuildActivityList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildActivityList_C, VB_DayActivities) == 0x000280, "Member 'UGuildActivityList_C::VB_DayActivities' has a wrong offset!");
static_assert(offsetof(UGuildActivityList_C, VB_HourActivities) == 0x000288, "Member 'UGuildActivityList_C::VB_HourActivities' has a wrong offset!");
static_assert(offsetof(UGuildActivityList_C, VB_MinActivities) == 0x000290, "Member 'UGuildActivityList_C::VB_MinActivities' has a wrong offset!");
static_assert(offsetof(UGuildActivityList_C, IsProfileLoading) == 0x000298, "Member 'UGuildActivityList_C::IsProfileLoading' has a wrong offset!");

}

