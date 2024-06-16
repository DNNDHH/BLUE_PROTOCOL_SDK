#pragma once

 

// Package: UMG_MatchingMenu_Confirm

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C
// 0x00D0 (0x0380 - 0x02B0)
class UUMG_MatchingMenu_Confirm_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            CancelButton;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Enter;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_40;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Join;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            JoinButton;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            JoinButton_1;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    JoinButtonText;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    JoinButtonText_1;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchingMenu_JoinButtonAnim_C*         MatchingMenu_JoinButtonAnim;                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchingMenu_JoinButtonAnim_C*         MatchingMenu_JoinButtonAnim_1;                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SubtitleText_1;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherEnterOrJoin;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextRemainingMinute;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TimeLimitText;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           JoinButtonTextColorDefault;                        // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           JoinButtonTextColorHover;                          // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           JoinButtonTextColorInvalid;                        // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnter;                                            // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7491[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         Duration;                                          // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClosed__DelegateSignature();
	void ExecuteUbergraph_UMG_MatchingMenu_Confirm(int32 EntryPoint);
	void OnNoticeButtonUpdate_Event(int32 RetCode);
	void Destruct();
	void Construct();
	void OnEndDeclineDialog(const EYesNoDialogResult Result);
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature();
	void OnGetPenaltyInfo(bool bWasSuccessful, int32 PenaltyLiftedAt, int32 LeftBeforePenalty);
	void BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_199_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	class FText Get_TimeLimitText_Text_0();
	void CancelInvite();
	void IsEnableQualifyLevel(bool* Enable);
	bool Get_JoinButton_bIsEnabled_0();
	void CheckButtonEnable();
	bool Get_IsConfirmed();
	bool IsTraveling();
	class FText Get_NeedParticipantNumberText_1_Text_0();
	void SetSwitcherEnterOrJoin();
	void StartLoopAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_Confirm_C">();
	}
	static class UUMG_MatchingMenu_Confirm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_Confirm_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_Confirm_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_Confirm_C");
static_assert(sizeof(UUMG_MatchingMenu_Confirm_C) == 0x000380, "Wrong size on UUMG_MatchingMenu_Confirm_C");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_MatchingMenu_Confirm_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, CancelButton) == 0x0002B8, "Member 'UUMG_MatchingMenu_Confirm_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, Enter) == 0x0002C0, "Member 'UUMG_MatchingMenu_Confirm_C::Enter' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, HorizontalBox_40) == 0x0002C8, "Member 'UUMG_MatchingMenu_Confirm_C::HorizontalBox_40' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, Join) == 0x0002D0, "Member 'UUMG_MatchingMenu_Confirm_C::Join' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, JoinButton) == 0x0002D8, "Member 'UUMG_MatchingMenu_Confirm_C::JoinButton' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, JoinButton_1) == 0x0002E0, "Member 'UUMG_MatchingMenu_Confirm_C::JoinButton_1' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, JoinButtonText) == 0x0002E8, "Member 'UUMG_MatchingMenu_Confirm_C::JoinButtonText' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, JoinButtonText_1) == 0x0002F0, "Member 'UUMG_MatchingMenu_Confirm_C::JoinButtonText_1' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, MatchingMenu_JoinButtonAnim) == 0x0002F8, "Member 'UUMG_MatchingMenu_Confirm_C::MatchingMenu_JoinButtonAnim' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, MatchingMenu_JoinButtonAnim_1) == 0x000300, "Member 'UUMG_MatchingMenu_Confirm_C::MatchingMenu_JoinButtonAnim_1' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, SubtitleText_1) == 0x000308, "Member 'UUMG_MatchingMenu_Confirm_C::SubtitleText_1' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, SwitcherEnterOrJoin) == 0x000310, "Member 'UUMG_MatchingMenu_Confirm_C::SwitcherEnterOrJoin' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, TextRemainingMinute) == 0x000318, "Member 'UUMG_MatchingMenu_Confirm_C::TextRemainingMinute' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, TimeLimitText) == 0x000320, "Member 'UUMG_MatchingMenu_Confirm_C::TimeLimitText' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, WidgetSwitcher_0) == 0x000328, "Member 'UUMG_MatchingMenu_Confirm_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, JoinButtonTextColorDefault) == 0x000330, "Member 'UUMG_MatchingMenu_Confirm_C::JoinButtonTextColorDefault' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, JoinButtonTextColorHover) == 0x000340, "Member 'UUMG_MatchingMenu_Confirm_C::JoinButtonTextColorHover' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, JoinButtonTextColorInvalid) == 0x000350, "Member 'UUMG_MatchingMenu_Confirm_C::JoinButtonTextColorInvalid' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, bEnter) == 0x000360, "Member 'UUMG_MatchingMenu_Confirm_C::bEnter' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, OnClosed) == 0x000368, "Member 'UUMG_MatchingMenu_Confirm_C::OnClosed' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Confirm_C, Duration) == 0x000378, "Member 'UUMG_MatchingMenu_Confirm_C::Duration' has a wrong offset!");

}

