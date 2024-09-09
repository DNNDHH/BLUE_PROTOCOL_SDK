#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass KeyGuideHUD.KeyGuideHUD_C
	 * Size -> 0x0071 (FullSize[0x02F1] - InheritedSize[0x0280])
	 */
	class UKeyGuideHUD_C : public USBKeyGuideHUDWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InAnim;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UKeyGuide_C*                                         KeyGuide_96;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide2_C*                                        KeyGuide2_54;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 KeyGuide_GamepadTitleText;                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 KeyGuide_KBTitleText;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              KeyGuideBaseImage;                                       // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        KeyGuideNaviPanel;                                       // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_107;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextKeyIcon_C*                                    txtKey;                                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcherTitle;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsDesignTime;                                            // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOldMount;                                              // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOldCheerful;                                           // 0x02DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEditMode;                                              // 0x02DB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInitialize;                                            // 0x02DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PMLD[0x3];                                   // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        KeyGuide2VisibilityEventTimerHandle;                     // 0x02E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        KeyGuideVisibilityEventTimerHandle;                      // 0x02E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsUIVisibileSettingChangeEnvet;                          // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsPlayAnimation();
		void SetKeyGuideNaviVisibility(ESlateVisibility InVisibility);
		void UpdateKeyGuide();
		struct FSBPlayerClassKeyConfigData GetClassKeyConfig(class ASBPlayerCharacter* );
		void GetGamepadPressed(class ASBPlayerCharacter* , bool* Result);
		void GetKBPressed(class ASBPlayerCharacter* , bool* Result);
		void GetPlayerCharacter(bool* Result, class ASBPlayerCharacter** AsSBPlayerCharacter);
		void IsKeyInputBP(bool* Result);
		void SetKeyGuideTextVisible(ESkillActionPosition SkillActionPosition, bool IsVisible);
		void Reset();
		void IsKeyGuideAnimation(bool* Result);
		void ChangeKeyGuide2(EKeyGuideType InKeyGuideType);
		void ChangeKeyGuide(EKeyGuideType InKeyGuideType);
		struct FVector2D GetKeyGuide2Size();
		struct FVector2D GetKeyGuideSize();
		void ChangeKeyGuide2Visibility();
		void ChangeKeyGuideVisibility();
		void Initialize();
		void PreConstruct(bool IsDesignTime);
		void SetEditMode(bool IsEdit);
		void BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature(bool IsMount);
		void CustomEvent_1(bool Result);
		void OnPlayAnim(bool bOpen);
		void OnReset();
		void BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature(bool IsCheerfulItem);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BndEvt__KeyGuideHUD_KeyGuide_95_K2Node_ComponentBoundEvent_4_OnChangeKeyGuideVisibilityEvent__DelegateSignature();
		void BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_0_OnChangeKeyGuideVisibilityEvent__DelegateSignature();
		void RetryKeyGuide2VisibilityEvent();
		void RetryKeyGuideVisibilityEvent();
		void Construct();
		void UIVisibleSettingChangeEnvet(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void ExecuteUbergraph_KeyGuideHUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
