#pragma once

 

// Package: KeyGuideHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"
#include "EKeyGuideType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyGuideHUD.KeyGuideHUD_C
// 0x0078 (0x02F8 - 0x0280)
class UKeyGuideHUD_C final : public USBKeyGuideHUDWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnim;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UKeyGuide_C*                            KeyGuide_95;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeyGuide2_C*                           KeyGuide2_53;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    KeyGuide_GamepadTitleText;                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    KeyGuide_KBTitleText;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 KeyGuideBaseImage;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           KeyGuideNaviPanel;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_106;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextKeyIcon_C*                       TxtKey;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherTitle;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsDesignTime;                                      // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOldMount;                                        // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOldCheerful;                                     // 0x02DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEditMode;                                        // 0x02DB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsInitialize;                                      // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ED9[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           KeyGuide2VisibilityEventTimerHandle;               // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           KeyGuideVisibilityEventTimerHandle;                // 0x02E8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUIVisibileSettingChangeEnvet;                    // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_KeyGuideHUD(int32 EntryPoint);
	void UIVisibleSettingChangeEnvet(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void Construct();
	void RetryKeyGuideVisibilityEvent();
	void RetryKeyGuide2VisibilityEvent();
	void BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_0_OnChangeKeyGuideVisibilityEvent__DelegateSignature();
	void BndEvt__KeyGuideHUD_KeyGuide_95_K2Node_ComponentBoundEvent_4_OnChangeKeyGuideVisibilityEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature(bool IsCheerfulItem);
	void OnReset();
	void OnPlayAnim(bool bOpen);
	void CustomEvent_0(bool Result);
	void BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature(bool IsMount);
	void SetEditMode(bool IsEdit);
	void PreConstruct(bool Param_IsDesignTime);
	void Initialize();
	void ChangeKeyGuideVisibility();
	void ChangeKeyGuide2Visibility();
	struct FVector2D GetKeyGuideSize();
	struct FVector2D GetKeyGuide2Size();
	void ChangeKeyGuide(EKeyGuideType InKeyGuideType);
	void ChangeKeyGuide2(EKeyGuideType InKeyGuideType);
	void Is_Key_Guide_Animation(bool* Result);
	void Reset();
	void SetKeyGuideTextVisible(ESkillActionPosition SkillActionPosition, bool Param_IsVisible);
	void Is_Key_Input_BP(bool* Result);
	void GetPlayerCharacter(bool* Result, class ASBPlayerCharacter** AsSBPlayer_Character);
	void GetKBPressed(class ASBPlayerCharacter* _____, bool* Result);
	void GetGamepadPressed(class ASBPlayerCharacter* _____, bool* Result);
	struct FSBPlayerClassKeyConfigData GetClassKeyConfig(class ASBPlayerCharacter* _____);
	void UpdateKeyGuide();
	void SetKeyGuideNaviVisibility(ESlateVisibility InVisibility);
	bool IsPlayAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyGuideHUD_C">();
	}
	static class UKeyGuideHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyGuideHUD_C>();
	}
};
static_assert(alignof(UKeyGuideHUD_C) == 0x000008, "Wrong alignment on UKeyGuideHUD_C");
static_assert(sizeof(UKeyGuideHUD_C) == 0x0002F8, "Wrong size on UKeyGuideHUD_C");
static_assert(offsetof(UKeyGuideHUD_C, UberGraphFrame) == 0x000280, "Member 'UKeyGuideHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, InAnim) == 0x000288, "Member 'UKeyGuideHUD_C::InAnim' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, KeyGuide_95) == 0x000290, "Member 'UKeyGuideHUD_C::KeyGuide_95' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, KeyGuide2_53) == 0x000298, "Member 'UKeyGuideHUD_C::KeyGuide2_53' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, KeyGuide_GamepadTitleText) == 0x0002A0, "Member 'UKeyGuideHUD_C::KeyGuide_GamepadTitleText' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, KeyGuide_KBTitleText) == 0x0002A8, "Member 'UKeyGuideHUD_C::KeyGuide_KBTitleText' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, KeyGuideBaseImage) == 0x0002B0, "Member 'UKeyGuideHUD_C::KeyGuideBaseImage' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, KeyGuideNaviPanel) == 0x0002B8, "Member 'UKeyGuideHUD_C::KeyGuideNaviPanel' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, Overlay_106) == 0x0002C0, "Member 'UKeyGuideHUD_C::Overlay_106' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, TxtKey) == 0x0002C8, "Member 'UKeyGuideHUD_C::TxtKey' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, WidgetSwitcherTitle) == 0x0002D0, "Member 'UKeyGuideHUD_C::WidgetSwitcherTitle' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, IsDesignTime) == 0x0002D8, "Member 'UKeyGuideHUD_C::IsDesignTime' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, IsOldMount) == 0x0002D9, "Member 'UKeyGuideHUD_C::IsOldMount' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, IsOldCheerful) == 0x0002DA, "Member 'UKeyGuideHUD_C::IsOldCheerful' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, IsEditMode) == 0x0002DB, "Member 'UKeyGuideHUD_C::IsEditMode' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, IsInitialize) == 0x0002DC, "Member 'UKeyGuideHUD_C::IsInitialize' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, KeyGuide2VisibilityEventTimerHandle) == 0x0002E0, "Member 'UKeyGuideHUD_C::KeyGuide2VisibilityEventTimerHandle' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, KeyGuideVisibilityEventTimerHandle) == 0x0002E8, "Member 'UKeyGuideHUD_C::KeyGuideVisibilityEventTimerHandle' has a wrong offset!");
static_assert(offsetof(UKeyGuideHUD_C, IsUIVisibileSettingChangeEnvet) == 0x0002F0, "Member 'UKeyGuideHUD_C::IsUIVisibileSettingChangeEnvet' has a wrong offset!");

}

