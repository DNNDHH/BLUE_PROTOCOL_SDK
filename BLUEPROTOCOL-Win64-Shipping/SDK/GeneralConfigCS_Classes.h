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
	 * WidgetBlueprintGeneratedClass GeneralConfigCS.GeneralConfigCS_C
	 * Size -> 0x0380 (FullSize[0x0630] - InheritedSize[0x02B0])
	 */
	class UGeneralConfigCS_C : public USBOptionChildBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USizeBox*                                            Box_SSTitle;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_RingAutoClose;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_RingCloseExec;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRadioBtnCmn01_C*                                  CheckBox_GamepadOperate;                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRadioBtnCmn01_C*                                  CheckBox_MouseAndKeyboardOperate;                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          Chk_DemoCaption;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          Chk_HideBalloon;                                         // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          Chk_HideHudAtScreenshot;                                 // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          Chk_InterruptSilent;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          Chk_PSOnly;                                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          Chk_ShowConfirmQuitPhotoMode;                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          Chk_ShowScreenshotNotifications;                         // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          Chk_UsedCheckActive;                                     // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_AutoTarget;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_LockTargetType;                                      // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_LogoPosition;                                        // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_ShortcutRingMode;                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_WeaponVisibility;                                    // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_4;                                                 // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_5;                                                 // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        KeyConfigGrp;                                            // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          KeyConfigList;                                           // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USliderInput_C*                                      PadUISpeedSlider;                                        // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PSOnlyCheck;                                             // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        SSHudInvisible;                                          // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        SSInfo;                                                  // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        SSLogoPos;                                               // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        SSSaveFold;                                              // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_GamepadOperate;                                // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_KeyConfigGrp;                                  // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_MouseAndKeyboardOperate;                       // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESBOperateMode                                             CurrOperateMode;                                         // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XOPX[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class URadioButton_C*>                              ComRadioH;                                               // 0x03D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class URadioButton_C*>                              ComRadioV;                                               // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class FString, ESBKeyGuideDisplayType>                KeyGuideSettingList;                                     // 0x03F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ESBPadKeySkinType>                     SkinTypes;                                               // 0x0440(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ESBSSLogoPosition>                     SSLogoPositionCmbs;                                      // 0x0490(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ESBShortcutRingMode>                   ShortcutRingModes;                                       // 0x04E0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ESBWeaponVisibleType>                  WeaponVisibleTypes;                                      // 0x0530(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, bool>                                  AutoTargetFocus;                                         // 0x0580(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, bool>                                  AutoTargetEnable;                                        // 0x05D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bInitializeing;                                          // 0x0620(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8IAT[0x7];                                   // 0x0621(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_PSOnlyDialog_C*                                 PSOnlyDialog;                                            // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnEndDialogPSOnly(bool Result);
		void ShowDialogPSOnly(bool bVisible);
		class UWidget* On_Cmb_LogoPosition_GenerateWidget_1(const class FString& item);
		class UWidget* On_Cmb_PadKeyView_GenerateWidget_1(const class FString& item);
		class UWidget* On_Cmb_LockTargetType_GenerateWidget_1(const class FString& item);
		class UWidget* On_Cmb_AutoTarget_GenerateWidget_1(const class FString& item);
		class UWidget* On_Cmb_WeaponVisibility_GenerateWidget_1(const class FString& item);
		class UWidget* On_Cmb_ShortcutRingMode_GenerateWidget_1(const class FString& item);
		void GenerateLockTargetType();
		void GenerateAutoTarget();
		void GenerateWeaponVisible();
		void GenerateShortcutRingMode();
		void GenerateLogoPos();
		void GeneratePadKeyView();
		void GenerateComboBox();
		void IsLoadedGeneralSave();
		void SetOperationModeCheckboxSeklected(ESBOperateMode InSelectedOperateMode);
		void Construct();
		void BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void OnSaveCharaConfig(bool InResult);
		void Init();
		void OnSaveCharaConfigDelegate(bool Result);
		void BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void Destruct();
		void UnbindDelegates();
		void BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature(int32_t Value, float Ratio);
		void BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void SetTitleMenuMode(bool bInIsEnabled);
		void BndEvt__GeneralConfigCS_Chk_PSOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void ExecuteUbergraph_GeneralConfigCS(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
