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
	 * WidgetBlueprintGeneratedClass Config_Graphics.Config_Graphics_C
	 * Size -> 0x0420 (FullSize[0x06D0] - InheritedSize[0x02B0])
	 */
	class UConfig_Graphics_C : public USBOptionChildBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        BattleScoreWeaponEffect;                                 // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_AlphaOtherPCImagine;                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_AlphaPartyImagine;                                    // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_AlphaPlayerImagine;                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_AlwaysShowHUD;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_BattleImaginePerformance;                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_LowGPUMode;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_NamePlateOther;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_NamePlateParty;                                       // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_NamePlateTeamTag;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_UltimateSkillPerformance;                             // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CheckBoxShowFPS;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CheckBoxThroughCameraNear;                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CheckBoxVSync;                                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_BSWeaponEffectOthers;                                // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_BSWeaponEffectSelfs;                                 // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_BSWeaponEffectToOthers;                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_CameraShakeLevel;                                    // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_FPSLimit;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_ViewLimit;                                           // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGraphicsSlider_C*                                   GSlider_OtherPCVFXView;                                  // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGraphicsSlider_C*                                   GSlider_PartyVFXView;                                    // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGraphicsSlider_C*                                   GSlider_PlayerVFXView;                                   // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_5;                                         // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_6;                                         // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_7;                                         // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_8;                                         // 0x0388(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_4;                                                 // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_5;                                                 // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_6;                                                 // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_7;                                                 // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionVFXVisibleSelector_C*                         OptionVFXVisibleSelector;                                // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Preset;                                                  // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USliderContainer_C*                                  SliderContainer;                                         // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FString, class FName>                           PresetData;                                              // 0x03E0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSliderSetting>                              SliderSetting;                                           // 0x0430(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bGeneratedCustom;                                        // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X6SI[0x3];                                   // 0x0441(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBConfigureSaveData_Graphics                       BaseConfigData;                                          // 0x0444(0x002C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FSBConfigureSaveData_Graphics                       TrackingConfigData;                                      // 0x0470(0x002C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_AVXO[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, ESBFrameRateLimitType>                 FPSLimitData;                                            // 0x04A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, unsigned char>                         EffectSelectData;                                        // 0x04F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ESBPlayerVisibleLimit>                 ViewLimitData;                                           // 0x0540(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ESBCameraShakeLevel>                   CameraShakeLevels;                                       // 0x0590(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ESBBattleScoreWeaponEffectVisibleType> BSWeaponEffectSelfs;                                     // 0x05E0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ESBBattleScoreWeaponEffectVisibleType> BSWeaponEffectOthers;                                    // 0x0630(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ESBBattleScoreWeaponEffectVisibleType> BSWeaponEffectToOthers;                                  // 0x0680(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		ESlateVisibility Get_BattleScoreWeaponEffect_Visibility_1();
		class UWidget* On_Cmb_BSWeaponEffectToOthers_GenerateWidget_1(const class FString& item);
		class UWidget* On_Cmb_BSWeaponEffectOthers_GenerateWidget_1(const class FString& item);
		class UWidget* On_Cmb_BSWeaponEffectSelfs_GenerateWidget_1(const class FString& item);
		void GenerateBSWeaponEffects();
		void GenerateCameraShakeLevel();
		ESlateVisibility GetVisibilityCameraShakeLevel();
		void IsDiffOptions(bool* bDiff);
		class UWidget* On_Cmb_CameraShakeLevel_GenerateWidget_1(const class FString& item);
		class UWidget* On_Cmb_ViewLimit_GenerateWidget_1(const class FString& item);
		class UWidget* On_Preset_GenerateWidget_1(const class FString& item);
		void InitializePlayerSave();
		void FindPresetData(class FString* Key);
		class UWidget* On_Preset_GenerateWidget_2(const class FString& item);
		void Construct();
		void ApplySetting();
		void SelectPreset(const class FString& SelectedItem, ESelectInfo SelectionType);
		void GeneratePresetData();
		void OnChangeGraphicsSlider(int32_t Value, float Ratio, EGraphicsSliderSetting Type);
		void LoadGraphicsSaveData();
		void ApplyBaseData();
		void BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void GenerateFPSLimit();
		void BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void Save();
		void BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void GenerateViewLimit();
		void BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void Destruct();
		void BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature(int32_t NewValue, float Ratio, int32_t Index);
		void SetTitleMode(bool bTitle);
		void Open();
		void Close();
		void BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature(int32_t NewValue, float Ratio, int32_t Index);
		void BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature(int32_t NewValue, float Ratio, int32_t Index);
		void BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Config_Graphics_Cmb_CameraShakeLevel_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__Config_Graphics_Cmb_BSWeaponEffectSelfs_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__Config_Graphics_Cmb_BSWeaponEffectOthers_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__Config_Graphics_Cmb_BSWeaponEffectToOthers_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__Config_Graphics_CheckBoxThroughCameraNear_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void ExecuteUbergraph_Config_Graphics(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
