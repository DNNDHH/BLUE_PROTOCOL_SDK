#pragma once

 

// Package: Config_Graphics

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SliderSetting_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "GraphicsSliderSetting_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Config_Graphics.Config_Graphics_C
// 0x0288 (0x0538 - 0x02B0)
class UConfig_Graphics_C final : public USBOptionChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBoxCmnCheckBox01_C*             CB_AlphaOtherPCImagine;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_AlphaPartyImagine;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_AlphaPlayerImagine;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_AlwaysShowHUD;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_BattleImaginePerformance;                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_LowGPUMode;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_NamePlateOther;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_NamePlateParty;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_NamePlateTeamTag;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_UltimateSkillPerformance;                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CheckBoxShowFPS;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CheckBoxVSync;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_FPSLimit;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_ViewLimit;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGraphicsSlider_C*                      GSlider_OtherPCVFXView;                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGraphicsSlider_C*                      GSlider_PartyVFXView;                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGraphicsSlider_C*                      GSlider_PlayerVFXView;                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionVFXVisibleSelector_C*            OptionVFXVisibleSelector;                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Preset;                                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USliderContainer_C*                     SliderContainer;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FName>              PresetData;                                        // 0x0388(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSliderSetting>                 SliderSetting;                                     // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bGeneratedCustom;                                  // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_68B7[0x3];                                     // 0x03E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          BaseConfigData;                                    // 0x03EC(0x002C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSBConfigureSaveData_Graphics          TrackingConfigData;                                // 0x0418(0x002C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_68B8[0x4];                                     // 0x0444(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, ESBFrameRateLimitType>    FPSLimitData;                                      // 0x0448(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, uint8>                    EffectSelectData;                                  // 0x0498(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, ESBPlayerVisibleLimit>    ViewLimitData;                                     // 0x04E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	class UWidget* On_Cmb_ViewLimit_GenerateWidget_0(const class FString& Item);
	class UWidget* On_Preset_GenerateWidget_0(const class FString& Item);
	void InitializePlayerSave();
	void FindPresetData(class FString* Key);
	class UWidget* On_Preset_GenerateWidget_1(const class FString& Item);
	void Construct();
	void ApplySetting();
	void SelectPreset(const class FString& SelectedItem, ESelectInfo SelectionType);
	void GeneratePresetData();
	void OnChangeGraphicsSlider(int32 Value, float Ratio, EGraphicsSliderSetting Type);
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
	void BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature(int32 New_Value, float Ratio, int32 Param_Index);
	void SetTitleMode(bool bTitle);
	void Open();
	void Close();
	void BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature(int32 New_Value, float Ratio, int32 Param_Index);
	void BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature(int32 New_Value, float Ratio, int32 Param_Index);
	void BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_Config_Graphics(int32 EntryPoint);

	void IsDiffOptions(bool* bDiff) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Config_Graphics_C">();
	}
	static class UConfig_Graphics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfig_Graphics_C>();
	}
};
static_assert(alignof(UConfig_Graphics_C) == 0x000008, "Wrong alignment on UConfig_Graphics_C");
static_assert(sizeof(UConfig_Graphics_C) == 0x000538, "Wrong size on UConfig_Graphics_C");
static_assert(offsetof(UConfig_Graphics_C, UberGraphFrame) == 0x0002B0, "Member 'UConfig_Graphics_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CB_AlphaOtherPCImagine) == 0x0002B8, "Member 'UConfig_Graphics_C::CB_AlphaOtherPCImagine' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CB_AlphaPartyImagine) == 0x0002C0, "Member 'UConfig_Graphics_C::CB_AlphaPartyImagine' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CB_AlphaPlayerImagine) == 0x0002C8, "Member 'UConfig_Graphics_C::CB_AlphaPlayerImagine' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CB_AlwaysShowHUD) == 0x0002D0, "Member 'UConfig_Graphics_C::CB_AlwaysShowHUD' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CB_BattleImaginePerformance) == 0x0002D8, "Member 'UConfig_Graphics_C::CB_BattleImaginePerformance' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CB_LowGPUMode) == 0x0002E0, "Member 'UConfig_Graphics_C::CB_LowGPUMode' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CB_NamePlateOther) == 0x0002E8, "Member 'UConfig_Graphics_C::CB_NamePlateOther' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CB_NamePlateParty) == 0x0002F0, "Member 'UConfig_Graphics_C::CB_NamePlateParty' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CB_NamePlateTeamTag) == 0x0002F8, "Member 'UConfig_Graphics_C::CB_NamePlateTeamTag' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CB_UltimateSkillPerformance) == 0x000300, "Member 'UConfig_Graphics_C::CB_UltimateSkillPerformance' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CheckBoxShowFPS) == 0x000308, "Member 'UConfig_Graphics_C::CheckBoxShowFPS' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, CheckBoxVSync) == 0x000310, "Member 'UConfig_Graphics_C::CheckBoxVSync' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, Cmb_FPSLimit) == 0x000318, "Member 'UConfig_Graphics_C::Cmb_FPSLimit' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, Cmb_ViewLimit) == 0x000320, "Member 'UConfig_Graphics_C::Cmb_ViewLimit' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, GSlider_OtherPCVFXView) == 0x000328, "Member 'UConfig_Graphics_C::GSlider_OtherPCVFXView' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, GSlider_PartyVFXView) == 0x000330, "Member 'UConfig_Graphics_C::GSlider_PartyVFXView' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, GSlider_PlayerVFXView) == 0x000338, "Member 'UConfig_Graphics_C::GSlider_PlayerVFXView' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, Image_1) == 0x000340, "Member 'UConfig_Graphics_C::Image_1' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, Image_2) == 0x000348, "Member 'UConfig_Graphics_C::Image_2' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, Image_3) == 0x000350, "Member 'UConfig_Graphics_C::Image_3' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, Image_4) == 0x000358, "Member 'UConfig_Graphics_C::Image_4' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, Image_5) == 0x000360, "Member 'UConfig_Graphics_C::Image_5' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, Image_6) == 0x000368, "Member 'UConfig_Graphics_C::Image_6' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, OptionVFXVisibleSelector) == 0x000370, "Member 'UConfig_Graphics_C::OptionVFXVisibleSelector' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, Preset) == 0x000378, "Member 'UConfig_Graphics_C::Preset' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, SliderContainer) == 0x000380, "Member 'UConfig_Graphics_C::SliderContainer' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, PresetData) == 0x000388, "Member 'UConfig_Graphics_C::PresetData' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, SliderSetting) == 0x0003D8, "Member 'UConfig_Graphics_C::SliderSetting' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, bGeneratedCustom) == 0x0003E8, "Member 'UConfig_Graphics_C::bGeneratedCustom' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, BaseConfigData) == 0x0003EC, "Member 'UConfig_Graphics_C::BaseConfigData' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, TrackingConfigData) == 0x000418, "Member 'UConfig_Graphics_C::TrackingConfigData' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, FPSLimitData) == 0x000448, "Member 'UConfig_Graphics_C::FPSLimitData' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, EffectSelectData) == 0x000498, "Member 'UConfig_Graphics_C::EffectSelectData' has a wrong offset!");
static_assert(offsetof(UConfig_Graphics_C, ViewLimitData) == 0x0004E8, "Member 'UConfig_Graphics_C::ViewLimitData' has a wrong offset!");

}

