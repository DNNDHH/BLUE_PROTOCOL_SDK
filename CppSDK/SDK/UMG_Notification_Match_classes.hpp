#pragma once

 

// Package: UMG_Notification_Match

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_Notification_Match.UMG_Notification_Match_C
// 0x00F8 (0x0370 - 0x0278)
class UUMG_Notification_Match_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Applying_CurNumText;                               // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Applying_MaxNumText;                               // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNotificatin_BrightAnim_C*              Notificatin_BrightAnim;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMatching;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtAccepted;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtAccepting;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAcceptingCount;                                 // 0x02B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtApplying;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtPartyMemberParticipating;                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPlaySE;                                          // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D63[0x6];                                     // 0x02D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   KeyConfigText;                                     // 0x02D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsMouseMode;                                       // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D64[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   TxtAcceptedCopy;                                   // 0x02F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   TxtAcceptingCopy;                                  // 0x0310(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   TxtApplyingCopy;                                   // 0x0328(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   TxtPartyMemberParticipatingCopy;                   // 0x0340(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ConfirmLimitTime_Pre;                              // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConfirmLimitTime_Now;                              // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ParticipantNumber_Pre;                             // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ParticipantNumber_Now;                             // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowSystemMessage;                                // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UMG_Notification_Match(int32 EntryPoint);
	void Destruct();
	void ChangeKeyGuide();
	void OnUpdateKeyConfig();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Init();
	class FText Get_Applying_CurNumText_Text_0();
	class FText Get_Applying_MaxNumText_Text_0();
	class FText Get_Accepting_CountText_Text_0();
	void GetQuickAccessKeyText();
	void GetOperateMode();
	void SetMatchingText(class UTextBlock* OutText, const class FText& BaseText);
	void PlayAnimationForwardIfNotVisible();
	void ShowBright();
	void HideBright();
	void UpdateConfirmTime();
	void UpdateParticipantNumber();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_Notification_Match_C">();
	}
	static class UUMG_Notification_Match_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_Notification_Match_C>();
	}
};
static_assert(alignof(UUMG_Notification_Match_C) == 0x000008, "Wrong alignment on UUMG_Notification_Match_C");
static_assert(sizeof(UUMG_Notification_Match_C) == 0x000370, "Wrong size on UUMG_Notification_Match_C");
static_assert(offsetof(UUMG_Notification_Match_C, UberGraphFrame) == 0x000278, "Member 'UUMG_Notification_Match_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, AnimIn) == 0x000280, "Member 'UUMG_Notification_Match_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, Applying_CurNumText) == 0x000288, "Member 'UUMG_Notification_Match_C::Applying_CurNumText' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, Applying_MaxNumText) == 0x000290, "Member 'UUMG_Notification_Match_C::Applying_MaxNumText' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, Notificatin_BrightAnim) == 0x000298, "Member 'UUMG_Notification_Match_C::Notificatin_BrightAnim' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, SwitchMatching) == 0x0002A0, "Member 'UUMG_Notification_Match_C::SwitchMatching' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, TxtAccepted) == 0x0002A8, "Member 'UUMG_Notification_Match_C::TxtAccepted' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, TxtAccepting) == 0x0002B0, "Member 'UUMG_Notification_Match_C::TxtAccepting' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, TxtAcceptingCount) == 0x0002B8, "Member 'UUMG_Notification_Match_C::TxtAcceptingCount' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, TxtApplying) == 0x0002C0, "Member 'UUMG_Notification_Match_C::TxtApplying' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, TxtPartyMemberParticipating) == 0x0002C8, "Member 'UUMG_Notification_Match_C::TxtPartyMemberParticipating' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, bVisible) == 0x0002D0, "Member 'UUMG_Notification_Match_C::bVisible' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, IsPlaySE) == 0x0002D1, "Member 'UUMG_Notification_Match_C::IsPlaySE' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, KeyConfigText) == 0x0002D8, "Member 'UUMG_Notification_Match_C::KeyConfigText' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, IsMouseMode) == 0x0002F0, "Member 'UUMG_Notification_Match_C::IsMouseMode' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, TxtAcceptedCopy) == 0x0002F8, "Member 'UUMG_Notification_Match_C::TxtAcceptedCopy' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, TxtAcceptingCopy) == 0x000310, "Member 'UUMG_Notification_Match_C::TxtAcceptingCopy' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, TxtApplyingCopy) == 0x000328, "Member 'UUMG_Notification_Match_C::TxtApplyingCopy' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, TxtPartyMemberParticipatingCopy) == 0x000340, "Member 'UUMG_Notification_Match_C::TxtPartyMemberParticipatingCopy' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, ConfirmLimitTime_Pre) == 0x000358, "Member 'UUMG_Notification_Match_C::ConfirmLimitTime_Pre' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, ConfirmLimitTime_Now) == 0x00035C, "Member 'UUMG_Notification_Match_C::ConfirmLimitTime_Now' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, ParticipantNumber_Pre) == 0x000360, "Member 'UUMG_Notification_Match_C::ParticipantNumber_Pre' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, ParticipantNumber_Now) == 0x000364, "Member 'UUMG_Notification_Match_C::ParticipantNumber_Now' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Match_C, bShowSystemMessage) == 0x000368, "Member 'UUMG_Notification_Match_C::bShowSystemMessage' has a wrong offset!");

}

