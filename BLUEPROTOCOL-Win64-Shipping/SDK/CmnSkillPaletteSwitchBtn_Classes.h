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
	 * WidgetBlueprintGeneratedClass CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C
	 * Size -> 0x0043 (FullSize[0x02BB] - InheritedSize[0x0278])
	 */
	class UCmnSkillPaletteSwitchBtn_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     BtnEnableSwitcher;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         ButtonForMainSkillPaletteSwitchReleased;                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         ButtonForSubSkillPaletteSwitchReleased;                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher03;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUserWidget*                                         CachedToolTipWidget;                                     // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTooltipCreated;                                       // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsSubPaletteReleased;                                   // 0x02B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsTooltipDisabled;                                      // 0x02BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetIsTooltipEnable(bool bInIsTooltipEnabled);
		void SetActiveSwitchBtn(int32_t InActiveSwitchBtnId);
		void CreateTooltip(bool InIsNoTooltip);
		void SetIsSubPaletteReleased(bool bInIsReleased);
		void Construct();
		void Destruct();
		void BndEvt__CmnSkillPaletteSwitchBtn_ButtonForMainSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CmnSkillPaletteSwitchBtn_ButtonForSubSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_CmnSkillPaletteSwitchBtn(int32_t EntryPoint);
		void OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
