#pragma once

 

// Package: PlayerNamePlate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerNamePlate.PlayerNamePlate_C
// 0x0130 (0x0428 - 0x02F8)
class UPlayerNamePlate_C final : public USBPlayerNamePlateWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnimation;                                       // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CursorInOut;                                       // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             AchievementNameLabel;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_2;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Name;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildTag_C*                            GuildTag;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPBg;                                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPCur;                                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPCurSize;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPLossSize;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPPrevSize;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJointGestureIcon_C*                    JointGestureIcon;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NameGrp;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameLabel;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObjectSelectCursor_C*                  ObjectSelectCursor;                                // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyIcon_C*                           PartyIcon;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTensionTagIcon_C*                      TensionTagIcon;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_OptionRoot;                                     // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WizardRecoverUI;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeDrawSize;                                  // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         WidgetScaleDuringHealChain;                        // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LifeGaugeCurDefaultColor;                          // 0x03C4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LifeGaugeCurHealChainColor;                        // 0x03D4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentScale;                                      // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowTargetCursor;                                 // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsHealChainUIVisible;                              // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_450F[0x6];                                     // 0x03EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChangeScale;                                     // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 CurrentName;                                       // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         HpGaugeDefaultWidth;                               // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrHpGaugeWidthRate;                              // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       HPSlot;                                            // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IntaractEffectVisible;                             // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnChangeDrawSize__DelegateSignature(const struct FVector2D& DrawSize);
	void OnChangeScale__DelegateSignature(float Scale);
	void ExecuteUbergraph_PlayerNamePlate(int32 EntryPoint);
	void UpdateTension(ESBTensionTagType InTensionTagId);
	void OnUpdatenSimplycityPartyOn();
	void CustomEvent_2(const TArray<struct FPlayerProfileSummaryData>& PlayerProfileSummaryData);
	void CustomEvent_1(const ESBTensionTagType TensionTag);
	void PlayerStateRelationshipSetting();
	void CustomEvent();
	void PlayerStateSettingAfter();
	void OnDisplayStart();
	void SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset);
	void SetInteractionTargetVisibility(const bool bInVisibility);
	void UnbindVisibleSettingChangeDelegate();
	void UnbindOnClientRecieveBattleStatusDelegete();
	void UnbindPlayerCommunicateDelegate();
	void OnFinishedFadeAnime(bool IsFadeIn);
	void AutoChangeVisible();
	void AutoChangeInvisible();
	void SetChargeMax();
	void SetDepth(const float InDepth);
	void Destruct();
	void SetHpGaugeWidthRate(const float InWidthRate);
	void SetHpGaugeVisibility(const bool bInVisibility);
	void SetNameVisibility(const bool bInVisibility);
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void SetInitialHpRate(const float HPRate);
	void SetHostility(const ESBHostility Hostility);
	void SetCharacter_Internal(class ASBCharacter* InCharacter);
	void SetTeamNumber(const int32 TeamNumber);
	void OnChangeLifeGaugeColor(bool IsHealChainColor);
	void OnSetHealChainUIVisibility(bool Param_IsVisible);
	void SetHpRate(const float HPRate);
	void SetName(const class FString& Param_Name);
	void Construct();
	void OnUpdateNameColor(bool bParty);
	void UnbindAwakeInterruptQuestDelegete();
	void PartyUnbindDelegates();
	void BeginBind_Party();
	void Update_Prog(class USBPlayerInterruptQuestComponent* InComponent);
	void SucInterruptQuest(const class FName& InQuestId, bool InSuccess);
	void RepTeam();
	void Repinterrupt(const struct FSBInterruptQuestPlayInfo& InPlayInfo);
	void Leaveout(const class FName& InQuestId);
	void JoinIninterrupt(class USBPlayerInterruptQuestComponent* InComponent, const bool bInFirst);
	void InAwake(const class FName& InQuestId);
	void SetAchievementSelected(const int32 InAchievementSelected);
	void Bind_TeamTag(const bool bIsShow);
	void InitOptions();
	void UpdateOptionNamePlate();
	void InitOptionValue();
	void OnChangeNamePlateOption(const bool bIsShow);
	void TermOptionConnect();
	void InitOptionConnect();
	void Update_Prev_Life_Gauge_BP(float DeltaTime);
	void SetLifeGaugeCurTintColor(const struct FLinearColor& TintColor);
	void CursorInOutAnim(bool bin);
	void IsInteractionUIVisibility(bool* IsVisibilty);
	void UpdateFriendIcon(TArray<struct FPlayerProfileSummaryData>& InPlayerProfileSummaryData);
	void SetupBuffIcon(class ASBCharacter* InCharacter);
	void ResetBuffIcon();

	void Get_Resurrection_Remain_Time_Rate(float* Rate) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerNamePlate_C">();
	}
	static class UPlayerNamePlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerNamePlate_C>();
	}
};
static_assert(alignof(UPlayerNamePlate_C) == 0x000008, "Wrong alignment on UPlayerNamePlate_C");
static_assert(sizeof(UPlayerNamePlate_C) == 0x000428, "Wrong size on UPlayerNamePlate_C");
static_assert(offsetof(UPlayerNamePlate_C, UberGraphFrame) == 0x0002F8, "Member 'UPlayerNamePlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, InAnimation) == 0x000300, "Member 'UPlayerNamePlate_C::InAnimation' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, CursorInOut) == 0x000308, "Member 'UPlayerNamePlate_C::CursorInOut' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, AchievementNameLabel) == 0x000310, "Member 'UPlayerNamePlate_C::AchievementNameLabel' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, CanvasPanel_2) == 0x000318, "Member 'UPlayerNamePlate_C::CanvasPanel_2' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, CanvasPanel_Name) == 0x000320, "Member 'UPlayerNamePlate_C::CanvasPanel_Name' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, GuildTag) == 0x000328, "Member 'UPlayerNamePlate_C::GuildTag' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, HPBg) == 0x000330, "Member 'UPlayerNamePlate_C::HPBg' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, HPCur) == 0x000338, "Member 'UPlayerNamePlate_C::HPCur' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, HPCurSize) == 0x000340, "Member 'UPlayerNamePlate_C::HPCurSize' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, HPLossSize) == 0x000348, "Member 'UPlayerNamePlate_C::HPLossSize' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, HPPrevSize) == 0x000350, "Member 'UPlayerNamePlate_C::HPPrevSize' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, JointGestureIcon) == 0x000358, "Member 'UPlayerNamePlate_C::JointGestureIcon' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, NameGrp) == 0x000360, "Member 'UPlayerNamePlate_C::NameGrp' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, NameLabel) == 0x000368, "Member 'UPlayerNamePlate_C::NameLabel' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, ObjectSelectCursor) == 0x000370, "Member 'UPlayerNamePlate_C::ObjectSelectCursor' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, Overlay_0) == 0x000378, "Member 'UPlayerNamePlate_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, PartyIcon) == 0x000380, "Member 'UPlayerNamePlate_C::PartyIcon' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, RetainerBox_0) == 0x000388, "Member 'UPlayerNamePlate_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, TensionTagIcon) == 0x000390, "Member 'UPlayerNamePlate_C::TensionTagIcon' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, VB_OptionRoot) == 0x000398, "Member 'UPlayerNamePlate_C::VB_OptionRoot' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, VerticalBox_0) == 0x0003A0, "Member 'UPlayerNamePlate_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, WizardRecoverUI) == 0x0003A8, "Member 'UPlayerNamePlate_C::WizardRecoverUI' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, OnChangeDrawSize) == 0x0003B0, "Member 'UPlayerNamePlate_C::OnChangeDrawSize' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, WidgetScaleDuringHealChain) == 0x0003C0, "Member 'UPlayerNamePlate_C::WidgetScaleDuringHealChain' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, LifeGaugeCurDefaultColor) == 0x0003C4, "Member 'UPlayerNamePlate_C::LifeGaugeCurDefaultColor' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, LifeGaugeCurHealChainColor) == 0x0003D4, "Member 'UPlayerNamePlate_C::LifeGaugeCurHealChainColor' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, CurrentScale) == 0x0003E4, "Member 'UPlayerNamePlate_C::CurrentScale' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, bShowTargetCursor) == 0x0003E8, "Member 'UPlayerNamePlate_C::bShowTargetCursor' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, IsHealChainUIVisible) == 0x0003E9, "Member 'UPlayerNamePlate_C::IsHealChainUIVisible' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, OnChangeScale) == 0x0003F0, "Member 'UPlayerNamePlate_C::OnChangeScale' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, CurrentName) == 0x000400, "Member 'UPlayerNamePlate_C::CurrentName' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, HpGaugeDefaultWidth) == 0x000410, "Member 'UPlayerNamePlate_C::HpGaugeDefaultWidth' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, CurrHpGaugeWidthRate) == 0x000414, "Member 'UPlayerNamePlate_C::CurrHpGaugeWidthRate' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, HPSlot) == 0x000418, "Member 'UPlayerNamePlate_C::HPSlot' has a wrong offset!");
static_assert(offsetof(UPlayerNamePlate_C, IntaractEffectVisible) == 0x000420, "Member 'UPlayerNamePlate_C::IntaractEffectVisible' has a wrong offset!");

}

