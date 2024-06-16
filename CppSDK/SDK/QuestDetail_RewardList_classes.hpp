#pragma once

 

// Package: QuestDetail_RewardList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_RewardList.QuestDetail_RewardList_C
// 0x0048 (0x02C0 - 0x0278)
class UQuestDetail_RewardList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    AdditionalReward_GuideText;                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            AdditionalRewardBtn;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         AdditionalRewardGuideGrp;                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_RewardType;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RewardList;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EQuestRewardCategory                          RewardCategory;                                    // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_884F[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestDetail_AdditionalReward_C*        AdditionalRewardDialog;                            // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         QuestIndex;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuestDetail_RewardList(int32 EntryPoint);
	void OnClosedAdditionalRewards();
	void BndEvt__QuestDetail_RewardList_AdditionalRewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void AddReward(struct FRewardInfo& InRewardInfo, bool bInSelectRewardSelectable, bool bEnableHiddenReward, class UUserWidget** OutWidget);
	void ClearReward();
	void GetRewardNum(int32* Num);
	void SetEnableAdditionalButton(bool Flag);
	void SetQuestIndex(int32 InQuestIndex);
	void SetAdditionalRewardCompleted();
	void SetAdditionalRewardNotice(int32 InClearCount);
	void SetRewardTypeName(const class FString& InLabelString);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_RewardList_C">();
	}
	static class UQuestDetail_RewardList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_RewardList_C>();
	}
};
static_assert(alignof(UQuestDetail_RewardList_C) == 0x000008, "Wrong alignment on UQuestDetail_RewardList_C");
static_assert(sizeof(UQuestDetail_RewardList_C) == 0x0002C0, "Wrong size on UQuestDetail_RewardList_C");
static_assert(offsetof(UQuestDetail_RewardList_C, UberGraphFrame) == 0x000278, "Member 'UQuestDetail_RewardList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardList_C, AdditionalReward_GuideText) == 0x000280, "Member 'UQuestDetail_RewardList_C::AdditionalReward_GuideText' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardList_C, AdditionalRewardBtn) == 0x000288, "Member 'UQuestDetail_RewardList_C::AdditionalRewardBtn' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardList_C, AdditionalRewardGuideGrp) == 0x000290, "Member 'UQuestDetail_RewardList_C::AdditionalRewardGuideGrp' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardList_C, Label_RewardType) == 0x000298, "Member 'UQuestDetail_RewardList_C::Label_RewardType' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardList_C, RewardList) == 0x0002A0, "Member 'UQuestDetail_RewardList_C::RewardList' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardList_C, RewardCategory) == 0x0002A8, "Member 'UQuestDetail_RewardList_C::RewardCategory' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardList_C, AdditionalRewardDialog) == 0x0002B0, "Member 'UQuestDetail_RewardList_C::AdditionalRewardDialog' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardList_C, QuestIndex) == 0x0002B8, "Member 'UQuestDetail_RewardList_C::QuestIndex' has a wrong offset!");

}

