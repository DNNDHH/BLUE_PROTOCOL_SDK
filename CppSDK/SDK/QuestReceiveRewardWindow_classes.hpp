#pragma once

 

// Package: QuestReceiveRewardWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "EAcceptWindowType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestReceiveRewardWindow.QuestReceiveRewardWindow_C
// 0x01A8 (0x0420 - 0x0278)
class UQuestReceiveRewardWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnCancel;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            BtnReport;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CannotRecieveExpText;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       LabelQuestTitle;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_RewardItem_C*              QuestDetail_RewardItem;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         QuestIndex;                                        // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_1661[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFinish;                                          // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bHasSelectReward;                                  // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1662[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     SelectReward;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestContributionRank                        ContributionRank;                                  // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_1663[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           Blocker;                                           // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAutoDeliveryQuest;                                // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1664[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSeasonPassQuestItemData             SeasonPassQuetItemData;                            // 0x0318(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          CancelLock;                                        // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1665[0x7];                                     // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailAttachmentsAcceptWindow_C*         MailAttachmentWindow;                              // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMailData>                    QuestRewardMailData;                               // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMailListAttachmentAcceptedResult_C*    MailListAttachmentResult;                          // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsUseMailRewardWindow;                            // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnFinish__DelegateSignature(bool bReported);
	void ExecuteUbergraph_QuestReceiveRewardWindow(int32 EntryPoint);
	void OnPressedCancel();
	void OnCancelConfirmEnd(const EYesNoDialogResult Result);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_57_EventOnClicked__DelegateSignature();
	void BndEvt__Btn2_K2Node_ComponentBoundEvent_46_EventOnClicked__DelegateSignature();
	void Close(bool bReported, bool bEnableBlocker);
	void CustomEvent_0();
	void OnToggleCheck_Event_0(bool IsCheck, class UQuestRewardIcon_C* Widget);
	void Destruct();
	void Construct();
	void OnCloseMailAttachmentResult();
	void Event_AcceptedQuestReport(bool bIsLimitDiscard, bool bIsLimitSell);
	void Event_UnbindCompleteQuestDelegate();
	void CustomEvent_1(EDialogResult Result);
	void Event_OnCompleteQuest_Completed(int32 RetCode, int32 Param_QuestIndex, EQuestCompleteResult CompleteResult, const struct FSBMailRewardData& MailRewardData);
	void _________2();
	void _________1();
	void Event_AcceptedQuestReportMailWinodw();
	void SetQuestInfo(int32 InQuestIndex);
	void HasSelectReward(TArray<struct FRewardInfo>& InRewards, bool* bRet);
	void OnChangeSelectReward(bool bInCheck, class UQuestRewardIcon_C* bInWidget);
	void GetThumbnailId(int32 Param_QuestIndex, class FName* ThumbnailId);
	void DestroyBlocker();
	void Is_Quest_Board_Quest(bool* bIsQuestBoard);

	void GetSelectRewardIndex(int32* OutRewardIndex) const;
	void ShouldAddCommonRewardList(struct FRewardInfo& RewardInfo, bool* bResult) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestReceiveRewardWindow_C">();
	}
	static class UQuestReceiveRewardWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestReceiveRewardWindow_C>();
	}
};
static_assert(alignof(UQuestReceiveRewardWindow_C) == 0x000008, "Wrong alignment on UQuestReceiveRewardWindow_C");
static_assert(sizeof(UQuestReceiveRewardWindow_C) == 0x000420, "Wrong size on UQuestReceiveRewardWindow_C");
static_assert(offsetof(UQuestReceiveRewardWindow_C, UberGraphFrame) == 0x000278, "Member 'UQuestReceiveRewardWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, AnimOut) == 0x000280, "Member 'UQuestReceiveRewardWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, AnimIn) == 0x000288, "Member 'UQuestReceiveRewardWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, Bg1) == 0x000290, "Member 'UQuestReceiveRewardWindow_C::Bg1' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, BtnCancel) == 0x000298, "Member 'UQuestReceiveRewardWindow_C::BtnCancel' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, BtnReport) == 0x0002A0, "Member 'UQuestReceiveRewardWindow_C::BtnReport' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, CannotRecieveExpText) == 0x0002A8, "Member 'UQuestReceiveRewardWindow_C::CannotRecieveExpText' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, CmnImageThrobber) == 0x0002B0, "Member 'UQuestReceiveRewardWindow_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, LabelQuestTitle) == 0x0002B8, "Member 'UQuestReceiveRewardWindow_C::LabelQuestTitle' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, Line1) == 0x0002C0, "Member 'UQuestReceiveRewardWindow_C::Line1' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, QuestDetail_RewardItem) == 0x0002C8, "Member 'UQuestReceiveRewardWindow_C::QuestDetail_RewardItem' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, UIBlocker) == 0x0002D0, "Member 'UQuestReceiveRewardWindow_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, QuestIndex) == 0x0002D8, "Member 'UQuestReceiveRewardWindow_C::QuestIndex' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, OnFinish) == 0x0002E0, "Member 'UQuestReceiveRewardWindow_C::OnFinish' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, bHasSelectReward) == 0x0002F0, "Member 'UQuestReceiveRewardWindow_C::bHasSelectReward' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, SelectReward) == 0x0002F8, "Member 'UQuestReceiveRewardWindow_C::SelectReward' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, ContributionRank) == 0x000300, "Member 'UQuestReceiveRewardWindow_C::ContributionRank' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, Blocker) == 0x000308, "Member 'UQuestReceiveRewardWindow_C::Blocker' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, bAutoDeliveryQuest) == 0x000310, "Member 'UQuestReceiveRewardWindow_C::bAutoDeliveryQuest' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, SeasonPassQuetItemData) == 0x000318, "Member 'UQuestReceiveRewardWindow_C::SeasonPassQuetItemData' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, CancelLock) == 0x0003F0, "Member 'UQuestReceiveRewardWindow_C::CancelLock' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, MailAttachmentWindow) == 0x0003F8, "Member 'UQuestReceiveRewardWindow_C::MailAttachmentWindow' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, QuestRewardMailData) == 0x000400, "Member 'UQuestReceiveRewardWindow_C::QuestRewardMailData' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, MailListAttachmentResult) == 0x000410, "Member 'UQuestReceiveRewardWindow_C::MailListAttachmentResult' has a wrong offset!");
static_assert(offsetof(UQuestReceiveRewardWindow_C, bIsUseMailRewardWindow) == 0x000418, "Member 'UQuestReceiveRewardWindow_C::bIsUseMailRewardWindow' has a wrong offset!");

}

