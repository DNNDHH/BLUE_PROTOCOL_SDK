#pragma once

 

// Package: QuestDetail_ReceiveCondition

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C
// 0x0030 (0x02A8 - 0x0278)
class UQuestDetail_ReceiveCondition_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    CautionText;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CautionTxtMessage;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ConditionList;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_ReceiveConditionItem_C*    QuestDetail_ReceiveConditionItem;                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_ReceiveConditionItem_C*    QuestDetail_ReceiveConditionItem_0;                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuestDetail_ReceiveCondition(int32 EntryPoint);
	void Construct();
	void SetCondition(TArray<struct FSBQuestPreconditionUIInfo>& InConditions);
	void SelectCautionText(bool IsProceeding);
	void SetConditionForNextMainQuest(const struct FSBQuestPreconditionUIInfo& InInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_ReceiveCondition_C">();
	}
	static class UQuestDetail_ReceiveCondition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_ReceiveCondition_C>();
	}
};
static_assert(alignof(UQuestDetail_ReceiveCondition_C) == 0x000008, "Wrong alignment on UQuestDetail_ReceiveCondition_C");
static_assert(sizeof(UQuestDetail_ReceiveCondition_C) == 0x0002A8, "Wrong size on UQuestDetail_ReceiveCondition_C");
static_assert(offsetof(UQuestDetail_ReceiveCondition_C, UberGraphFrame) == 0x000278, "Member 'UQuestDetail_ReceiveCondition_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ReceiveCondition_C, CautionText) == 0x000280, "Member 'UQuestDetail_ReceiveCondition_C::CautionText' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ReceiveCondition_C, CautionTxtMessage) == 0x000288, "Member 'UQuestDetail_ReceiveCondition_C::CautionTxtMessage' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ReceiveCondition_C, ConditionList) == 0x000290, "Member 'UQuestDetail_ReceiveCondition_C::ConditionList' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ReceiveCondition_C, QuestDetail_ReceiveConditionItem) == 0x000298, "Member 'UQuestDetail_ReceiveCondition_C::QuestDetail_ReceiveConditionItem' has a wrong offset!");
static_assert(offsetof(UQuestDetail_ReceiveCondition_C, QuestDetail_ReceiveConditionItem_0) == 0x0002A0, "Member 'UQuestDetail_ReceiveCondition_C::QuestDetail_ReceiveConditionItem_0' has a wrong offset!");

}

