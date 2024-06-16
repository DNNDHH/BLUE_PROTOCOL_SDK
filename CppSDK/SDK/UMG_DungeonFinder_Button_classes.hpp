#pragma once

 

// Package: UMG_DungeonFinder_Button

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C
// 0x0100 (0x0378 - 0x0278)
class UUMG_DungeonFinder_Button_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimUnHovered;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimHovered;                                       // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimUnSelected;                                    // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimSelected;                                      // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_MissionEffect1_C*          CommandMenu_MissionEffect1;                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MissionEffect1_C*          CommandMenu_MissionEffect1_50;                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MissionEffect2_C*          CommandMenu_MissionEffect2;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ConfirmGrp;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ContentButton;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconNew;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MatchingGrp;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MatchingText;                                      // 0x02D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MaxConfirmCountText1;                              // 0x02E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NeedParticipantSizeText;                           // 0x02E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NeedParticipantSizeText2;                          // 0x02F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NormalGrp;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NowConfirmCountText1;                              // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NowParticipantSizeText;                            // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NowParticipantSizeText2;                           // 0x0310(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PartyMemberIsInMissionGrp;                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ServerWaitText;                                    // 0x0320(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMessage;                                     // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           WaitingGrp;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOpenMatchingMenu;                                // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bActive;                                           // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78DC[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOpenDungeonMatchingMenu;                         // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bCurrentMatchimaking;                              // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bMatched;                                          // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78DD[0x6];                                     // 0x0362(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMatchingState;                                   // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnOpenMatchingMenu__DelegateSignature();
	void OnOpenDungeonMatchingMenu__DelegateSignature();
	void OnMatchingState__DelegateSignature(bool IsStart);
	void ExecuteUbergraph_UMG_DungeonFinder_Button(int32 EntryPoint);
	void BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ResetButtonState();
	class FText Get_NowParticipantSizeText_Text_0();
	ESlateVisibility Get_ServerWaitText_Visibility_0();
	class FText Get_NeedParticipantSizeText_Text_0();
	ESlateVisibility Get_MatchingText_Visibility_0();
	class FText Get_MaxConfirmCountText_Text_0();
	class FText Get_NowConfirmCountText_Text_0();
	void PlayBtnAnim(bool bInActive);
	void IsUpdateMatch(bool* Ret);
	void SetBtn(bool Param_bActive);
	void UpdateExclamation(bool IsShow);

	void IsParticipantNumberCompleted(bool* bCompleted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_DungeonFinder_Button_C">();
	}
	static class UUMG_DungeonFinder_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_DungeonFinder_Button_C>();
	}
};
static_assert(alignof(UUMG_DungeonFinder_Button_C) == 0x000008, "Wrong alignment on UUMG_DungeonFinder_Button_C");
static_assert(sizeof(UUMG_DungeonFinder_Button_C) == 0x000378, "Wrong size on UUMG_DungeonFinder_Button_C");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, UberGraphFrame) == 0x000278, "Member 'UUMG_DungeonFinder_Button_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, AnimUnHovered) == 0x000280, "Member 'UUMG_DungeonFinder_Button_C::AnimUnHovered' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, AnimHovered) == 0x000288, "Member 'UUMG_DungeonFinder_Button_C::AnimHovered' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, AnimUnSelected) == 0x000290, "Member 'UUMG_DungeonFinder_Button_C::AnimUnSelected' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, AnimSelected) == 0x000298, "Member 'UUMG_DungeonFinder_Button_C::AnimSelected' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, CommandMenu_MissionEffect1) == 0x0002A0, "Member 'UUMG_DungeonFinder_Button_C::CommandMenu_MissionEffect1' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, CommandMenu_MissionEffect1_50) == 0x0002A8, "Member 'UUMG_DungeonFinder_Button_C::CommandMenu_MissionEffect1_50' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, CommandMenu_MissionEffect2) == 0x0002B0, "Member 'UUMG_DungeonFinder_Button_C::CommandMenu_MissionEffect2' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, ConfirmGrp) == 0x0002B8, "Member 'UUMG_DungeonFinder_Button_C::ConfirmGrp' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, ContentButton) == 0x0002C0, "Member 'UUMG_DungeonFinder_Button_C::ContentButton' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, IconNew) == 0x0002C8, "Member 'UUMG_DungeonFinder_Button_C::IconNew' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, MatchingGrp) == 0x0002D0, "Member 'UUMG_DungeonFinder_Button_C::MatchingGrp' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, MatchingText) == 0x0002D8, "Member 'UUMG_DungeonFinder_Button_C::MatchingText' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, MaxConfirmCountText1) == 0x0002E0, "Member 'UUMG_DungeonFinder_Button_C::MaxConfirmCountText1' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, NeedParticipantSizeText) == 0x0002E8, "Member 'UUMG_DungeonFinder_Button_C::NeedParticipantSizeText' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, NeedParticipantSizeText2) == 0x0002F0, "Member 'UUMG_DungeonFinder_Button_C::NeedParticipantSizeText2' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, NormalGrp) == 0x0002F8, "Member 'UUMG_DungeonFinder_Button_C::NormalGrp' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, NowConfirmCountText1) == 0x000300, "Member 'UUMG_DungeonFinder_Button_C::NowConfirmCountText1' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, NowParticipantSizeText) == 0x000308, "Member 'UUMG_DungeonFinder_Button_C::NowParticipantSizeText' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, NowParticipantSizeText2) == 0x000310, "Member 'UUMG_DungeonFinder_Button_C::NowParticipantSizeText2' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, PartyMemberIsInMissionGrp) == 0x000318, "Member 'UUMG_DungeonFinder_Button_C::PartyMemberIsInMissionGrp' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, ServerWaitText) == 0x000320, "Member 'UUMG_DungeonFinder_Button_C::ServerWaitText' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, SwitchMessage) == 0x000328, "Member 'UUMG_DungeonFinder_Button_C::SwitchMessage' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, WaitingGrp) == 0x000330, "Member 'UUMG_DungeonFinder_Button_C::WaitingGrp' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, OnOpenMatchingMenu) == 0x000338, "Member 'UUMG_DungeonFinder_Button_C::OnOpenMatchingMenu' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, bActive) == 0x000348, "Member 'UUMG_DungeonFinder_Button_C::bActive' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, OnOpenDungeonMatchingMenu) == 0x000350, "Member 'UUMG_DungeonFinder_Button_C::OnOpenDungeonMatchingMenu' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, bCurrentMatchimaking) == 0x000360, "Member 'UUMG_DungeonFinder_Button_C::bCurrentMatchimaking' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, bMatched) == 0x000361, "Member 'UUMG_DungeonFinder_Button_C::bMatched' has a wrong offset!");
static_assert(offsetof(UUMG_DungeonFinder_Button_C, OnMatchingState) == 0x000368, "Member 'UUMG_DungeonFinder_Button_C::OnMatchingState' has a wrong offset!");

}

