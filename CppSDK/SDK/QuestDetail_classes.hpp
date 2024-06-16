#pragma once

 

// Package: QuestDetail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "QuestDetail_ActionButtonType_structs.hpp"
#include "QuestDetail_LayoutType_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "QuestDetail_FinishStatus_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail.QuestDetail_C
// 0x01C8 (0x0478 - 0x02B0)
class UQuestDetail_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    AcceptableCountText;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   AcceptableReviveDate;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   AcceptDeadlineDate;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AlarmIcon;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgBlack;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Btn3Bg;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Btn3Grp;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnBg;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Button1SizeNew;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Button2SizeNew;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Button3SizeNew;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ButtonGrp;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CannotAcceptText;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCaptureImageScreenShotQuest_C*         CaptureImageScreenShotQuest;                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_DetailItem_C*              DetailItem_ConditionDetail;                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_237;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_InterruptQuest_Reward_C*   InterruptQuestReward;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelQuestTitle;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LabelQuestType;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            NewButton1;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            NewButton2;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            NewButton3;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestBgGrd;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_DetaiDescriptionlItem_C*   QuestDetail_DetaiDescriptionlItem;                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_ProgressItem_C*            QuestDetail_ProgressItem;                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_RewardItem_C*              QuestDetail_RewardItem;                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_StatusIcon_C*              QuestDetail_StatusIcon;                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestDetailBg03_FunctionRelease;                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestDetailBg03_KeyCharaQuest;                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestDetailBg03_MainQuest;                         // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestDetailBg03_SubQuest;                          // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestIconS_C*                          QuestIconS;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 QuestListRepeatIcon2;                              // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_ReceiveCondition_C*        ReceiveCondition;                                  // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_4;                                       // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Txt_MaxNo;                                         // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Txt_NowNo;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Txt_Slash;                                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Unlimited;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtStatus;                                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_ImageQuestGlowLine;                             // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_AcceptableCount;                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_QuestDetailBg03;                    // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Unlimited;                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         QuestIndex;                                        // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8867[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFinish;                                          // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIgnoreRemoveFromParentWhenClose;                  // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bPreviewMode;                                      // 0x0449(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bListMode;                                         // 0x044A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	EQuestDetail_ActionButtonType                 Button1Type;                                       // 0x044B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestDetail_ActionButtonType                 Button2Type;                                       // 0x044C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestDetail_LayoutType                       LayoutType;                                        // 0x044D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8868[0x2];                                     // 0x044E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      LayoutTable;                                       // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bThumbnailLoading;                                 // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8869[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           Blocker;                                           // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAfterTermReques;                                 // 0x0470(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UesPreesCancelClose;                               // 0x0471(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInQuestBoard;                                     // 0x0472(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsClosed;                                         // 0x0473(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsNextMainQuest;                                  // 0x0474(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32 Param_QuestIndex);
	void ExecuteUbergraph_QuestDetail(int32 EntryPoint);
	void BndEvt__QuestDetail_NewButton3_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__QuestDetail_NewButton2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__QuestDetail_NewButton1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void ChangeQuestInfoForQuestList(int32 InQuestIndex, bool IsEnableRouteGuideSw, bool IsClosed);
	void OnPress_Cancel();
	void ChangeQuestInfo(int32 InQuestIndex, bool IsEnableRouteGuideSw);
	void SetQuestInfo(int32 InQuestIndex, bool IsEnableRouteGuideSw);
	void FinishResultCancel();
	void SetThumbnail(int32 InQuestIndex);
	void FinishResultNone();
	void OnActionButtonClicked(EQuestDetail_ActionButtonType InType);
	void Destruct();
	void Construct();
	void OnFinish_Event_0(bool bReported);
	void ReportQuest();
	void CancelQuest();
	void CustomEvent(bool Result, int32 Param_QuestIndex);
	void OnAcceptQuestDelegate_Event_0(bool Result, const EAcceptedQuestErrorCode ErrorCode, const int32 RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo);
	void AcceptQuest();
	void OnLoaded_430FBD6944474F8D28745AB2C5A082A2(class UObject* Loaded);
	void SetQuestInfo_Internal(int32 InQuestIndex, bool IsEnableRouteGuideSw);
	void SetButton(EQuestStatus InQuestStatus, const struct FQuestMasterData& InQuestMasterData);
	void SetButtonState(EQuestDetail_ActionButtonType ButtonType1, EQuestDetail_ActionButtonType ButtonType2, bool bButtonEnable1);
	void SetButtonVisibility(ESlateVisibility InButton1, ESlateVisibility InButton2);
	void GetThumbnailId(int32 Param_QuestIndex, class FName* ThumbnailId);
	void CreateBlocker();
	void DestroyBlocker();
	void PlayActionButtonClickSound(EQuestDetail_ActionButtonType InType);
	void CheckPrecondition(int32 InQuestIndex, bool* bResult);
	void ResetButtonEnable();
	void SetPreviewMode(bool Param_bPreviewMode);
	void TermRequesTiming();
	void SetQuestStatusText(int32 InQuestIndex, EQuestStatus InQuestStatus);
	void Set_Repeat_Count_Text(int32 InQuestIndex);
	void Get_Quest_Precondition_Infos(int32 InQuestIndex, EQuestStatus InQuestStatus, TArray<struct FSBQuestPreconditionUIInfo>* OutUiInfo);
	void SetPreviewModeEx(bool InShowButton);
	void SetNextMainQuestMode(bool Flag);
	void SetActionButtonLabelCmn16(class UCmnBtn16_C* CmnBtn16, EQuestDetail_ActionButtonType InType);
	void Stop_All_Button_Click_Input_Action();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_C">();
	}
	static class UQuestDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_C>();
	}
};
static_assert(alignof(UQuestDetail_C) == 0x000008, "Wrong alignment on UQuestDetail_C");
static_assert(sizeof(UQuestDetail_C) == 0x000478, "Wrong size on UQuestDetail_C");
static_assert(offsetof(UQuestDetail_C, UberGraphFrame) == 0x0002B0, "Member 'UQuestDetail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, AcceptableCountText) == 0x0002B8, "Member 'UQuestDetail_C::AcceptableCountText' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, AcceptableReviveDate) == 0x0002C0, "Member 'UQuestDetail_C::AcceptableReviveDate' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, AcceptDeadlineDate) == 0x0002C8, "Member 'UQuestDetail_C::AcceptDeadlineDate' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, AlarmIcon) == 0x0002D0, "Member 'UQuestDetail_C::AlarmIcon' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, BgBlack) == 0x0002D8, "Member 'UQuestDetail_C::BgBlack' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Btn3Bg) == 0x0002E0, "Member 'UQuestDetail_C::Btn3Bg' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Btn3Grp) == 0x0002E8, "Member 'UQuestDetail_C::Btn3Grp' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, BtnBg) == 0x0002F0, "Member 'UQuestDetail_C::BtnBg' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Button1SizeNew) == 0x0002F8, "Member 'UQuestDetail_C::Button1SizeNew' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Button2SizeNew) == 0x000300, "Member 'UQuestDetail_C::Button2SizeNew' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Button3SizeNew) == 0x000308, "Member 'UQuestDetail_C::Button3SizeNew' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, ButtonGrp) == 0x000310, "Member 'UQuestDetail_C::ButtonGrp' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, CannotAcceptText) == 0x000318, "Member 'UQuestDetail_C::CannotAcceptText' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, CaptureImageScreenShotQuest) == 0x000320, "Member 'UQuestDetail_C::CaptureImageScreenShotQuest' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, CmnImageThrobber) == 0x000328, "Member 'UQuestDetail_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, DetailItem_ConditionDetail) == 0x000330, "Member 'UQuestDetail_C::DetailItem_ConditionDetail' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Image) == 0x000338, "Member 'UQuestDetail_C::Image' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Image_237) == 0x000340, "Member 'UQuestDetail_C::Image_237' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, InterruptQuestReward) == 0x000348, "Member 'UQuestDetail_C::InterruptQuestReward' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, LabelQuestTitle) == 0x000350, "Member 'UQuestDetail_C::LabelQuestTitle' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, LabelQuestType) == 0x000358, "Member 'UQuestDetail_C::LabelQuestType' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, NewButton1) == 0x000360, "Member 'UQuestDetail_C::NewButton1' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, NewButton2) == 0x000368, "Member 'UQuestDetail_C::NewButton2' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, NewButton3) == 0x000370, "Member 'UQuestDetail_C::NewButton3' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestBgGrd) == 0x000378, "Member 'UQuestDetail_C::QuestBgGrd' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestDetail_DetaiDescriptionlItem) == 0x000380, "Member 'UQuestDetail_C::QuestDetail_DetaiDescriptionlItem' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestDetail_ProgressItem) == 0x000388, "Member 'UQuestDetail_C::QuestDetail_ProgressItem' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestDetail_RewardItem) == 0x000390, "Member 'UQuestDetail_C::QuestDetail_RewardItem' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestDetail_StatusIcon) == 0x000398, "Member 'UQuestDetail_C::QuestDetail_StatusIcon' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestDetailBg03_FunctionRelease) == 0x0003A0, "Member 'UQuestDetail_C::QuestDetailBg03_FunctionRelease' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestDetailBg03_KeyCharaQuest) == 0x0003A8, "Member 'UQuestDetail_C::QuestDetailBg03_KeyCharaQuest' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestDetailBg03_MainQuest) == 0x0003B0, "Member 'UQuestDetail_C::QuestDetailBg03_MainQuest' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestDetailBg03_SubQuest) == 0x0003B8, "Member 'UQuestDetail_C::QuestDetailBg03_SubQuest' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestIconS) == 0x0003C0, "Member 'UQuestDetail_C::QuestIconS' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestListRepeatIcon2) == 0x0003C8, "Member 'UQuestDetail_C::QuestListRepeatIcon2' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, ReceiveCondition) == 0x0003D0, "Member 'UQuestDetail_C::ReceiveCondition' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, ScrollBox_4) == 0x0003D8, "Member 'UQuestDetail_C::ScrollBox_4' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Txt_MaxNo) == 0x0003E0, "Member 'UQuestDetail_C::Txt_MaxNo' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Txt_NowNo) == 0x0003E8, "Member 'UQuestDetail_C::Txt_NowNo' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Txt_Slash) == 0x0003F0, "Member 'UQuestDetail_C::Txt_Slash' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Txt_Unlimited) == 0x0003F8, "Member 'UQuestDetail_C::Txt_Unlimited' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, TxtStatus) == 0x000400, "Member 'UQuestDetail_C::TxtStatus' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, UI_ImageQuestGlowLine) == 0x000408, "Member 'UQuestDetail_C::UI_ImageQuestGlowLine' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, WidgetSwitcher_0) == 0x000410, "Member 'UQuestDetail_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, WidgetSwitcher_AcceptableCount) == 0x000418, "Member 'UQuestDetail_C::WidgetSwitcher_AcceptableCount' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, WidgetSwitcher_QuestDetailBg03) == 0x000420, "Member 'UQuestDetail_C::WidgetSwitcher_QuestDetailBg03' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, WidgetSwitcher_Unlimited) == 0x000428, "Member 'UQuestDetail_C::WidgetSwitcher_Unlimited' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, QuestIndex) == 0x000430, "Member 'UQuestDetail_C::QuestIndex' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, OnFinish) == 0x000438, "Member 'UQuestDetail_C::OnFinish' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, bIgnoreRemoveFromParentWhenClose) == 0x000448, "Member 'UQuestDetail_C::bIgnoreRemoveFromParentWhenClose' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, bPreviewMode) == 0x000449, "Member 'UQuestDetail_C::bPreviewMode' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, bListMode) == 0x00044A, "Member 'UQuestDetail_C::bListMode' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Button1Type) == 0x00044B, "Member 'UQuestDetail_C::Button1Type' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Button2Type) == 0x00044C, "Member 'UQuestDetail_C::Button2Type' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, LayoutType) == 0x00044D, "Member 'UQuestDetail_C::LayoutType' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, LayoutTable) == 0x000450, "Member 'UQuestDetail_C::LayoutTable' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, bThumbnailLoading) == 0x000460, "Member 'UQuestDetail_C::bThumbnailLoading' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, Blocker) == 0x000468, "Member 'UQuestDetail_C::Blocker' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, IsAfterTermReques) == 0x000470, "Member 'UQuestDetail_C::IsAfterTermReques' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, UesPreesCancelClose) == 0x000471, "Member 'UQuestDetail_C::UesPreesCancelClose' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, bInQuestBoard) == 0x000472, "Member 'UQuestDetail_C::bInQuestBoard' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, bIsClosed) == 0x000473, "Member 'UQuestDetail_C::bIsClosed' has a wrong offset!");
static_assert(offsetof(UQuestDetail_C, bIsNextMainQuest) == 0x000474, "Member 'UQuestDetail_C::bIsNextMainQuest' has a wrong offset!");

}

