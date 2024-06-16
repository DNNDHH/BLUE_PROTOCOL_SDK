#pragma once

 

// Package: QuestConfirmationMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuestDetail_FinishStatus_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestConfirmationMenu.QuestConfirmationMenu_C
// 0x0040 (0x02B8 - 0x0278)
class UQuestConfirmationMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutAnim;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UQuestDetail_C*                         QuestDetail;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         QuestIndex;                                        // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_7EA4[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFinish;                                          // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bPreviewMode;                                      // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	EQuestDetail_FinishStatus                     Finish_Status;                                     // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EA5[0x2];                                     // 0x02B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Quest_Index;                                       // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32 Param_QuestIndex);
	void ExecuteUbergraph_QuestConfirmationMenu(int32 EntryPoint);
	void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_0();
	void BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32 Param_QuestIndex);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestConfirmationMenu_C">();
	}
	static class UQuestConfirmationMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestConfirmationMenu_C>();
	}
};
static_assert(alignof(UQuestConfirmationMenu_C) == 0x000008, "Wrong alignment on UQuestConfirmationMenu_C");
static_assert(sizeof(UQuestConfirmationMenu_C) == 0x0002B8, "Wrong size on UQuestConfirmationMenu_C");
static_assert(offsetof(UQuestConfirmationMenu_C, UberGraphFrame) == 0x000278, "Member 'UQuestConfirmationMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestConfirmationMenu_C, OutAnim) == 0x000280, "Member 'UQuestConfirmationMenu_C::OutAnim' has a wrong offset!");
static_assert(offsetof(UQuestConfirmationMenu_C, InAnim) == 0x000288, "Member 'UQuestConfirmationMenu_C::InAnim' has a wrong offset!");
static_assert(offsetof(UQuestConfirmationMenu_C, QuestDetail) == 0x000290, "Member 'UQuestConfirmationMenu_C::QuestDetail' has a wrong offset!");
static_assert(offsetof(UQuestConfirmationMenu_C, QuestIndex) == 0x000298, "Member 'UQuestConfirmationMenu_C::QuestIndex' has a wrong offset!");
static_assert(offsetof(UQuestConfirmationMenu_C, OnFinish) == 0x0002A0, "Member 'UQuestConfirmationMenu_C::OnFinish' has a wrong offset!");
static_assert(offsetof(UQuestConfirmationMenu_C, bPreviewMode) == 0x0002B0, "Member 'UQuestConfirmationMenu_C::bPreviewMode' has a wrong offset!");
static_assert(offsetof(UQuestConfirmationMenu_C, Finish_Status) == 0x0002B1, "Member 'UQuestConfirmationMenu_C::Finish_Status' has a wrong offset!");
static_assert(offsetof(UQuestConfirmationMenu_C, Quest_Index) == 0x0002B4, "Member 'UQuestConfirmationMenu_C::Quest_Index' has a wrong offset!");

}

