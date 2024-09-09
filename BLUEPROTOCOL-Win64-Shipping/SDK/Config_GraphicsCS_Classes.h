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
	 * WidgetBlueprintGeneratedClass Config_GraphicsCS.Config_GraphicsCS_C
	 * Size -> 0x0210 (FullSize[0x04C0] - InheritedSize[0x02B0])
	 */
	class UConfig_GraphicsCS_C : public USBOptionChildBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBCheckBoxCmnCheckBox01_C*                          CB_AlwaysShowHUD;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_BattleImaginePerformance;                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_NamePlateOther;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_NamePlateParty;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_NamePlateTeamTag;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBoxCmnCheckBox01_C*                          CB_UltimateSkillPerformance;                             // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBComboBoxCmn01_C*                                  Cmb_ViewLimit;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_4;                                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_7;                                                 // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionVFXVisibleSelector_C*                         OptionVFXVisibleSelector;                                // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FString, class FName>                           PresetData;                                              // 0x0310(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSliderSetting>                              SliderSetting;                                           // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bGeneratedCustom;                                        // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8MR3[0x3];                                   // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBConfigureSaveData_Graphics                       BaseConfigData;                                          // 0x0374(0x002C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FSBConfigureSaveData_Graphics                       TrackingConfigData;                                      // 0x03A0(0x002C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_UVAH[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, ESBFrameRateLimitType>                 FPSLimitData;                                            // 0x03D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, unsigned char>                         EffectSelectData;                                        // 0x0420(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ESBPlayerVisibleLimit>                 ViewLimitData;                                           // 0x0470(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsDiffOptions(bool* bDiff);
		class UWidget* On_Cmb_ViewLimit_GenerateWidget_1(const class FString& item);
		class UWidget* On_Preset_GenerateWidget_1(const class FString& item);
		void InitializePlayerSave();
		void FindPresetData(class FString* Key);
		class UWidget* On_Preset_GenerateWidget_2(const class FString& item);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ApplySetting();
		void SelectPreset(const class FString& SelectedItem, ESelectInfo SelectionType);
		void GeneratePresetData();
		void OnChangeGraphicsSlider(int32_t Value, float Ratio, EGraphicsSliderSetting Type);
		void LoadGraphicsSaveData();
		void ApplyBaseData();
		void GenerateFPSLimit();
		void Save();
		void BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void GenerateViewLimit();
		void BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void Destruct();
		void Open();
		void Close();
		void ExecuteUbergraph_Config_GraphicsCS(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
