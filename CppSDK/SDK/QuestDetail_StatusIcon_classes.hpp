#pragma once

 

// Package: QuestDetail_StatusIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_StatusIcon.QuestDetail_StatusIcon_C
// 0x0008 (0x0280 - 0x0278)
class UQuestDetail_StatusIcon_C final : public UUserWidget
{
public:
	class UCmnCleared_L_C*                        CmnCleared_L;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetStatus(EQuestStatus InStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_StatusIcon_C">();
	}
	static class UQuestDetail_StatusIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_StatusIcon_C>();
	}
};
static_assert(alignof(UQuestDetail_StatusIcon_C) == 0x000008, "Wrong alignment on UQuestDetail_StatusIcon_C");
static_assert(sizeof(UQuestDetail_StatusIcon_C) == 0x000280, "Wrong size on UQuestDetail_StatusIcon_C");
static_assert(offsetof(UQuestDetail_StatusIcon_C, CmnCleared_L) == 0x000278, "Member 'UQuestDetail_StatusIcon_C::CmnCleared_L' has a wrong offset!");

}

