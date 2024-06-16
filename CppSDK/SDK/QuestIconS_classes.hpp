#pragma once

 

// Package: QuestIconS

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestIconS.QuestIconS_C
// 0x0020 (0x0298 - 0x0278)
class UQuestIconS_C final : public UUserWidget
{
public:
	class UImage*                                 Icon;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ListComplete;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ListProgress;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchIcon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetIcon(EQuestStatus InQuestStatus, EQuestCategory2 InQuestCategory2, bool bInAllowProceed);
	void Set_Icon_by_Quest_Index(int32 InQuestIndex);
	void SetIconForStepList(int32 InQuestIndex);
	void SetIconForQuestHistory(int32 InQuestIndex);
	void GetQuestStatusForSetIcon(int32 InQuestIndex, EQuestStatus* OutQuestStatus, EQuestCategory2* OutCategory2, bool* OutIsAllowProceed);
	void GetNextMainQuestIndex(int32 CurrentQuestIndex, int32* NextMainQuest);
	void SetWishListIcon(EQuestStatus InQuestStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestIconS_C">();
	}
	static class UQuestIconS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestIconS_C>();
	}
};
static_assert(alignof(UQuestIconS_C) == 0x000008, "Wrong alignment on UQuestIconS_C");
static_assert(sizeof(UQuestIconS_C) == 0x000298, "Wrong size on UQuestIconS_C");
static_assert(offsetof(UQuestIconS_C, Icon) == 0x000278, "Member 'UQuestIconS_C::Icon' has a wrong offset!");
static_assert(offsetof(UQuestIconS_C, ListComplete) == 0x000280, "Member 'UQuestIconS_C::ListComplete' has a wrong offset!");
static_assert(offsetof(UQuestIconS_C, ListProgress) == 0x000288, "Member 'UQuestIconS_C::ListProgress' has a wrong offset!");
static_assert(offsetof(UQuestIconS_C, SwitchIcon) == 0x000290, "Member 'UQuestIconS_C::SwitchIcon' has a wrong offset!");

}

