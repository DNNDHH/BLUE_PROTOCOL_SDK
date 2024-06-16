#pragma once

 

// Package: IconChallengeQuest

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconChallengeQuest.IconChallengeQuest_C
// 0x0008 (0x02B0 - 0x02A8)
class UIconChallengeQuest_C final : public USBMapQuestIcon
{
public:
	class UWidgetSwitcher*                        Root;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Setup(int32 QuestIndex);
	void OnSetInside(bool IsInSide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconChallengeQuest_C">();
	}
	static class UIconChallengeQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconChallengeQuest_C>();
	}
};
static_assert(alignof(UIconChallengeQuest_C) == 0x000008, "Wrong alignment on UIconChallengeQuest_C");
static_assert(sizeof(UIconChallengeQuest_C) == 0x0002B0, "Wrong size on UIconChallengeQuest_C");
static_assert(offsetof(UIconChallengeQuest_C, Root) == 0x0002A8, "Member 'UIconChallengeQuest_C::Root' has a wrong offset!");

}

