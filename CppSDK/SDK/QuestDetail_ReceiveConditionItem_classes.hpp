#pragma once

 

// Package: QuestDetail_ReceiveConditionItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_ReceiveConditionItem.QuestDetail_ReceiveConditionItem_C
// 0x0010 (0x0288 - 0x0278)
class UQuestDetail_ReceiveConditionItem_C final : public UUserWidget
{
public:
	class UImage*                                 CautionIcon;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Condition;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetCondition(const class FText& InCondition, bool bIsSatisfied);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_ReceiveConditionItem_C">();
	}
	static class UQuestDetail_ReceiveConditionItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_ReceiveConditionItem_C>();
	}
};
static_assert(alignof(UQuestDetail_ReceiveConditionItem_C) == 0x000008, "Wrong alignment on UQuestDetail_ReceiveConditionItem_C");
static_assert(sizeof(UQuestDetail_ReceiveConditionItem_C) == 0x000288, "Wrong size on UQuestDetail_ReceiveConditionItem_C");
static_assert(offsetof(UQuestDetail_ReceiveConditionItem_C, CautionIcon) == 0x000278, "Member 'UQuestDetail_ReceiveConditionItem_C::CautionIcon' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ReceiveConditionItem_C, Label_Condition) == 0x000280, "Member 'UQuestDetail_ReceiveConditionItem_C::Label_Condition' has a wrong offset!");

}

