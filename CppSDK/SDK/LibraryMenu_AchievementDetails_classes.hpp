#pragma once

 

// Package: LibraryMenu_AchievementDetails

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C
// 0x0208 (0x0480 - 0x0278)
class ULibraryMenu_AchievementDetails_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           AchievementData_Canvas;                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        AchievementData_Switcher;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_NoSelect;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnCleared_L_C*                        CmnCleared_L;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DetailsGrp;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenuBtn3_C*                     GetRewardBtn;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconLimited;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Achievement_SwitchOnOff_C* LibraryMenu_Achievement_SwitchOnOff;               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Limited_Desc_Switcher;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              LimitedTime;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_1;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnCleared_L_C*                        NoneAchievementData_CmnCleared_L;                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoneAchievementData_IconLimited;                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        NoneAchievementData_Limited_Desc_Switcher;         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              NoneAchievementData_LimitedTime;                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   NoneAchievementData_SBDateTimeTextBlock_LimitedTime; // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NoneAchievmentData_Canvas;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RewardList;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_LimitedTime;                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchRank;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextAchievementName_1;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextConditions;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtGaugeNum;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtGaugeTotal;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtMessage1;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_261;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAchievementMasterData                 AchievementData;                                   // 0x0360(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ID;                                                // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A90[0x4];                                     // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnGetRewardItem;                                   // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMailAttachmentsAcceptWindow_C*         AttachmentListData;                                // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMasterReward>                RewardDatas;                                       // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsRequest;                                         // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A91[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMailListAttachmentAcceptedResult_C*    MailListAttachmentAcceptResultWG;                  // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSetAchievement;                                  // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickRewardIcon;                                 // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsTermEventTimeEnd;                                // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A92[0x7];                                     // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 RewardAlphaList;                                   // 0x0440(0x0010)(Edit, BlueprintVisible)
	struct FSBCharacterAchievementDataInfo        Character_Achievement_Data;                        // 0x0450(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsOverLimitDiscard;                                // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOverLimitSell;                                   // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A93[0x6];                                     // 0x046A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked_AchievementRewardsBtn;                   // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnGetRewardItem__DelegateSignature();
	void OnSetAchievement__DelegateSignature();
	void OnClickRewardIcon__DelegateSignature(const struct FSBMasterReward& InMasterReward);
	void OnClicked_AchievementRewardsBtn__DelegateSignature(TArray<struct FSBMailData>& OutRewardsData, TArray<int32>& OutRewardsIds);
	void ExecuteUbergraph_LibraryMenu_AchievementDetails(int32 EntryPoint);
	void RewardIconClick(class UQuestRewardIcon_C* Sender);
	void BndEvt__LibraryMenu_AchievementDetails_GetRewardBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void SaveAchievementSelectEvent(const bool Result);
	void BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature(bool OutIsSetAchievement);
	void Construct();
	void SetDetailsVisibility(bool Visible);
	void Set_Achievement_Id(const struct FAchievementMasterData& AchievementMasterData, const struct FSBCharacterAchievementDataInfo& CharacterAchievementData, const struct FDateTime& InLoadDateTime);
	void SetReward(bool IsEneble, TArray<class FString>& RewardIdList, bool IsRecieved);
	void SetLimitedTime(const class FString& TeamID, const struct FDateTime& InLoadDateTime);
	void GetAchievementReward(TArray<struct FSBMailData>* OutMailData);
	void SetRank(int32 InRankId);
	void SetRewardIconAlpha(float InAlpha);
	void CheckAchievementReward(TArray<struct FSBMailData>* OutMailDatas);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_AchievementDetails_C">();
	}
	static class ULibraryMenu_AchievementDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_AchievementDetails_C>();
	}
};
static_assert(alignof(ULibraryMenu_AchievementDetails_C) == 0x000008, "Wrong alignment on ULibraryMenu_AchievementDetails_C");
static_assert(sizeof(ULibraryMenu_AchievementDetails_C) == 0x000480, "Wrong size on ULibraryMenu_AchievementDetails_C");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_AchievementDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, AchievementData_Canvas) == 0x000280, "Member 'ULibraryMenu_AchievementDetails_C::AchievementData_Canvas' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, AchievementData_Switcher) == 0x000288, "Member 'ULibraryMenu_AchievementDetails_C::AchievementData_Switcher' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, CanvasPanel_NoSelect) == 0x000290, "Member 'ULibraryMenu_AchievementDetails_C::CanvasPanel_NoSelect' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, CmnCleared_L) == 0x000298, "Member 'ULibraryMenu_AchievementDetails_C::CmnCleared_L' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, DetailsGrp) == 0x0002A0, "Member 'ULibraryMenu_AchievementDetails_C::DetailsGrp' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, GetRewardBtn) == 0x0002A8, "Member 'ULibraryMenu_AchievementDetails_C::GetRewardBtn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, HorizontalBox) == 0x0002B0, "Member 'ULibraryMenu_AchievementDetails_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, IconLimited) == 0x0002B8, "Member 'ULibraryMenu_AchievementDetails_C::IconLimited' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, LibraryMenu_Achievement_SwitchOnOff) == 0x0002C0, "Member 'ULibraryMenu_AchievementDetails_C::LibraryMenu_Achievement_SwitchOnOff' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, Limited_Desc_Switcher) == 0x0002C8, "Member 'ULibraryMenu_AchievementDetails_C::Limited_Desc_Switcher' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, LimitedTime) == 0x0002D0, "Member 'ULibraryMenu_AchievementDetails_C::LimitedTime' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, Line_1) == 0x0002D8, "Member 'ULibraryMenu_AchievementDetails_C::Line_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, NoneAchievementData_CmnCleared_L) == 0x0002E0, "Member 'ULibraryMenu_AchievementDetails_C::NoneAchievementData_CmnCleared_L' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, NoneAchievementData_IconLimited) == 0x0002E8, "Member 'ULibraryMenu_AchievementDetails_C::NoneAchievementData_IconLimited' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, NoneAchievementData_Limited_Desc_Switcher) == 0x0002F0, "Member 'ULibraryMenu_AchievementDetails_C::NoneAchievementData_Limited_Desc_Switcher' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, NoneAchievementData_LimitedTime) == 0x0002F8, "Member 'ULibraryMenu_AchievementDetails_C::NoneAchievementData_LimitedTime' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, NoneAchievementData_SBDateTimeTextBlock_LimitedTime) == 0x000300, "Member 'ULibraryMenu_AchievementDetails_C::NoneAchievementData_SBDateTimeTextBlock_LimitedTime' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, NoneAchievmentData_Canvas) == 0x000308, "Member 'ULibraryMenu_AchievementDetails_C::NoneAchievmentData_Canvas' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, RewardList) == 0x000310, "Member 'ULibraryMenu_AchievementDetails_C::RewardList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, SBDateTimeTextBlock_LimitedTime) == 0x000318, "Member 'ULibraryMenu_AchievementDetails_C::SBDateTimeTextBlock_LimitedTime' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, ShowTutorialHelpBtn) == 0x000320, "Member 'ULibraryMenu_AchievementDetails_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, SwitchRank) == 0x000328, "Member 'ULibraryMenu_AchievementDetails_C::SwitchRank' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, TextAchievementName_1) == 0x000330, "Member 'ULibraryMenu_AchievementDetails_C::TextAchievementName_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, TextConditions) == 0x000338, "Member 'ULibraryMenu_AchievementDetails_C::TextConditions' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, TxtGaugeNum) == 0x000340, "Member 'ULibraryMenu_AchievementDetails_C::TxtGaugeNum' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, TxtGaugeTotal) == 0x000348, "Member 'ULibraryMenu_AchievementDetails_C::TxtGaugeTotal' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, TxtMessage1) == 0x000350, "Member 'ULibraryMenu_AchievementDetails_C::TxtMessage1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, WidgetSwitcher_261) == 0x000358, "Member 'ULibraryMenu_AchievementDetails_C::WidgetSwitcher_261' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, AchievementData) == 0x000360, "Member 'ULibraryMenu_AchievementDetails_C::AchievementData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, ID) == 0x0003D8, "Member 'ULibraryMenu_AchievementDetails_C::ID' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, OnGetRewardItem) == 0x0003E0, "Member 'ULibraryMenu_AchievementDetails_C::OnGetRewardItem' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, AttachmentListData) == 0x0003F0, "Member 'ULibraryMenu_AchievementDetails_C::AttachmentListData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, RewardDatas) == 0x0003F8, "Member 'ULibraryMenu_AchievementDetails_C::RewardDatas' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, IsRequest) == 0x000408, "Member 'ULibraryMenu_AchievementDetails_C::IsRequest' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, MailListAttachmentAcceptResultWG) == 0x000410, "Member 'ULibraryMenu_AchievementDetails_C::MailListAttachmentAcceptResultWG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, OnSetAchievement) == 0x000418, "Member 'ULibraryMenu_AchievementDetails_C::OnSetAchievement' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, OnClickRewardIcon) == 0x000428, "Member 'ULibraryMenu_AchievementDetails_C::OnClickRewardIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, IsTermEventTimeEnd) == 0x000438, "Member 'ULibraryMenu_AchievementDetails_C::IsTermEventTimeEnd' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, RewardAlphaList) == 0x000440, "Member 'ULibraryMenu_AchievementDetails_C::RewardAlphaList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, Character_Achievement_Data) == 0x000450, "Member 'ULibraryMenu_AchievementDetails_C::Character_Achievement_Data' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, IsOverLimitDiscard) == 0x000468, "Member 'ULibraryMenu_AchievementDetails_C::IsOverLimitDiscard' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, IsOverLimitSell) == 0x000469, "Member 'ULibraryMenu_AchievementDetails_C::IsOverLimitSell' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementDetails_C, OnClicked_AchievementRewardsBtn) == 0x000470, "Member 'ULibraryMenu_AchievementDetails_C::OnClicked_AchievementRewardsBtn' has a wrong offset!");

}

