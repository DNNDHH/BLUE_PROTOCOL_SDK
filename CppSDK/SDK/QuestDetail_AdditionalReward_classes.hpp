#pragma once

 

// Package: QuestDetail_AdditionalReward

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_AdditionalReward.QuestDetail_AdditionalReward_C
// 0x0080 (0x02F8 - 0x0278)
class UQuestDetail_AdditionalReward_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_61;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_242;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_RewardList_C*              RewardList1;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_RewardList_C*              RewardList2;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_RewardList_C*              RewardList3;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_RewardList_C*              RewardList4;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_RewardList_C*              RewardList5;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RewardListBox;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                TransParentButton;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         QuestIndex;                                        // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnClosed__DelegateSignature();
	void ExecuteUbergraph_QuestDetail_AdditionalReward(int32 EntryPoint);
	void CloseByCancel();
	void BndEvt__QuestDetail_AdditionalReward_TransParentButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__QuestDetail_AdditionalReward_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void Construct();
	void InitializeAdditionalRewards();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_AdditionalReward_C">();
	}
	static class UQuestDetail_AdditionalReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_AdditionalReward_C>();
	}
};
static_assert(alignof(UQuestDetail_AdditionalReward_C) == 0x000008, "Wrong alignment on UQuestDetail_AdditionalReward_C");
static_assert(sizeof(UQuestDetail_AdditionalReward_C) == 0x0002F8, "Wrong size on UQuestDetail_AdditionalReward_C");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, UberGraphFrame) == 0x000278, "Member 'UQuestDetail_AdditionalReward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, CmnClose01) == 0x000280, "Member 'UQuestDetail_AdditionalReward_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, Image) == 0x000288, "Member 'UQuestDetail_AdditionalReward_C::Image' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, Image_61) == 0x000290, "Member 'UQuestDetail_AdditionalReward_C::Image_61' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, Image_242) == 0x000298, "Member 'UQuestDetail_AdditionalReward_C::Image_242' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, RewardList1) == 0x0002A0, "Member 'UQuestDetail_AdditionalReward_C::RewardList1' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, RewardList2) == 0x0002A8, "Member 'UQuestDetail_AdditionalReward_C::RewardList2' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, RewardList3) == 0x0002B0, "Member 'UQuestDetail_AdditionalReward_C::RewardList3' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, RewardList4) == 0x0002B8, "Member 'UQuestDetail_AdditionalReward_C::RewardList4' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, RewardList5) == 0x0002C0, "Member 'UQuestDetail_AdditionalReward_C::RewardList5' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, RewardListBox) == 0x0002C8, "Member 'UQuestDetail_AdditionalReward_C::RewardListBox' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, TransParentButton) == 0x0002D0, "Member 'UQuestDetail_AdditionalReward_C::TransParentButton' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, UIBlocker) == 0x0002D8, "Member 'UQuestDetail_AdditionalReward_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, OnClosed) == 0x0002E0, "Member 'UQuestDetail_AdditionalReward_C::OnClosed' has a wrong offset!");
static_assert(offsetof(UQuestDetail_AdditionalReward_C, QuestIndex) == 0x0002F0, "Member 'UQuestDetail_AdditionalReward_C::QuestIndex' has a wrong offset!");

}

