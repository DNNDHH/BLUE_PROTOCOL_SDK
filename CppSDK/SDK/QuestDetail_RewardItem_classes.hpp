#pragma once

 

// Package: QuestDetail_RewardItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_RewardItem.QuestDetail_RewardItem_C
// 0x0040 (0x02B8 - 0x0278)
class UQuestDetail_RewardItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UQuestDetail_RewardList_C*              AdditionalRewardList;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_RewardList_C*              ChoiceRewardList;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_RewardList_C*              CommonRewardList;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Title;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TitleTextId;                                       // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_41CD[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnToggleCheck_Deligate;                            // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnToggleCheck_Deligate__DelegateSignature(bool Property, class UQuestRewardIcon_C* ClickedObject);
	void ExecuteUbergraph_QuestDetail_RewardItem(int32 EntryPoint);
	void OnToggleChecked(bool IsChecked, class UQuestRewardIcon_C* CheckedItem);
	void PreConstruct(bool IsDesignTime);
	void SetTitle(int32 InTitleText);
	void SetRewardContent(struct FQuestMasterData& InQuestMasterData, bool bInChoiceRewardSelectable, bool bEnableHiddenReward);
	void IsEmptyList(bool* bIsEmpty);
	void DebugDumpRewardInfo(TArray<struct FRewardInfo>& InRewardInfo);
	void IsExistAdditionalReward(int32 InQuestIndex, bool* Ret);
	void GetSpcifiedAdditionalReward(int32 InQuestIndex, int32 InClearCount, TArray<struct FRewardInfo>* OutReward_Infos, int32* OutNextClearCount);
	void SetCoomonRewardLabelString(const class FString& InLabelString);
	void SetRewardContentByRewardId(TArray<struct FRewardInfo>& RewardInfoList);

	bool ShouldAddCommonRewardList(struct FRewardInfo& InRewardInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_RewardItem_C">();
	}
	static class UQuestDetail_RewardItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_RewardItem_C>();
	}
};
static_assert(alignof(UQuestDetail_RewardItem_C) == 0x000008, "Wrong alignment on UQuestDetail_RewardItem_C");
static_assert(sizeof(UQuestDetail_RewardItem_C) == 0x0002B8, "Wrong size on UQuestDetail_RewardItem_C");
static_assert(offsetof(UQuestDetail_RewardItem_C, UberGraphFrame) == 0x000278, "Member 'UQuestDetail_RewardItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardItem_C, AdditionalRewardList) == 0x000280, "Member 'UQuestDetail_RewardItem_C::AdditionalRewardList' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardItem_C, ChoiceRewardList) == 0x000288, "Member 'UQuestDetail_RewardItem_C::ChoiceRewardList' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardItem_C, CommonRewardList) == 0x000290, "Member 'UQuestDetail_RewardItem_C::CommonRewardList' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardItem_C, Label_Title) == 0x000298, "Member 'UQuestDetail_RewardItem_C::Label_Title' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardItem_C, TitleTextId) == 0x0002A0, "Member 'UQuestDetail_RewardItem_C::TitleTextId' has a wrong offset!");
static_assert(offsetof(UQuestDetail_RewardItem_C, OnToggleCheck_Deligate) == 0x0002A8, "Member 'UQuestDetail_RewardItem_C::OnToggleCheck_Deligate' has a wrong offset!");

}

