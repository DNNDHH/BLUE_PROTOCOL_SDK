#pragma once

 

// Package: QuestList_RepeatCountIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestList_RepeatCountIcon.QuestList_RepeatCountIcon_C
// 0x0008 (0x0280 - 0x0278)
class UQuestList_RepeatCountIcon_C final : public UUserWidget
{
public:
	class USBRuntimeTextBlock*                    CountNum;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetRepeatCount(int32 Param_CountNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestList_RepeatCountIcon_C">();
	}
	static class UQuestList_RepeatCountIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestList_RepeatCountIcon_C>();
	}
};
static_assert(alignof(UQuestList_RepeatCountIcon_C) == 0x000008, "Wrong alignment on UQuestList_RepeatCountIcon_C");
static_assert(sizeof(UQuestList_RepeatCountIcon_C) == 0x000280, "Wrong size on UQuestList_RepeatCountIcon_C");
static_assert(offsetof(UQuestList_RepeatCountIcon_C, CountNum) == 0x000278, "Member 'UQuestList_RepeatCountIcon_C::CountNum' has a wrong offset!");

}

