#pragma once

 

// Package: Config_GraphicsCS

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SliderSetting_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "GraphicsSliderSetting_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Config_GraphicsCS.Config_GraphicsCS_C
// 0x0210 (0x04C0 - 0x02B0)
class UConfig_GraphicsCS_C final : public USBOptionChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBoxCmnCheckBox01_C*             CB_AlwaysShowHUD;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_BattleImaginePerformance;                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_NamePlateOther;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_NamePlateParty;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_NamePlateTeamTag;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_UltimateSkillPerformance;                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_ViewLimit;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionVFXVisibleSelector_C*            OptionVFXVisibleSelector;                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FName>              PresetData;                                        // 0x0310(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSliderSetting>                 SliderSetting;                                     // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bGeneratedCustom;                                  // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_857A[0x3];                                     // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_Graphics          BaseConfigData;                                    // 0x0374(0x002C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSBConfigureSaveData_Graphics          TrackingConfigData;                                // 0x03A0(0x002C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_857B[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, ESBFrameRateLimitType>    FPSLimitData;                                      // 0x03D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, uint8>                    EffectSelectData;                                  // 0x0420(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, ESBPlayerVisibleLimit>    ViewLimitData;                                     // 0x0470(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	class UWidget* On_Cmb_ViewLimit_GenerateWidget_0(const class FString& Item);
	class UWidget* On_Preset_GenerateWidget_0(const class FString& Item);
	void InitializePlayerSave();
	void FindPresetData(class FString* Key);
	class UWidget* On_Preset_GenerateWidget_1(const class FString& Item);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ApplySetting();
	void SelectPreset(const class FString& SelectedItem, ESelectInfo SelectionType);
	void GeneratePresetData();
	void OnChangeGraphicsSlider(int32 Value, float Ratio, EGraphicsSliderSetting Type);
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
	void ExecuteUbergraph_Config_GraphicsCS(int32 EntryPoint);

	void IsDiffOptions(bool* bDiff) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Config_GraphicsCS_C">();
	}
	static class UConfig_GraphicsCS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfig_GraphicsCS_C>();
	}
};
static_assert(alignof(UConfig_GraphicsCS_C) == 0x000008, "Wrong alignment on UConfig_GraphicsCS_C");
static_assert(sizeof(UConfig_GraphicsCS_C) == 0x0004C0, "Wrong size on UConfig_GraphicsCS_C");
static_assert(offsetof(UConfig_GraphicsCS_C, UberGraphFrame) == 0x0002B0, "Member 'UConfig_GraphicsCS_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, CB_AlwaysShowHUD) == 0x0002B8, "Member 'UConfig_GraphicsCS_C::CB_AlwaysShowHUD' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, CB_BattleImaginePerformance) == 0x0002C0, "Member 'UConfig_GraphicsCS_C::CB_BattleImaginePerformance' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, CB_NamePlateOther) == 0x0002C8, "Member 'UConfig_GraphicsCS_C::CB_NamePlateOther' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, CB_NamePlateParty) == 0x0002D0, "Member 'UConfig_GraphicsCS_C::CB_NamePlateParty' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, CB_NamePlateTeamTag) == 0x0002D8, "Member 'UConfig_GraphicsCS_C::CB_NamePlateTeamTag' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, CB_UltimateSkillPerformance) == 0x0002E0, "Member 'UConfig_GraphicsCS_C::CB_UltimateSkillPerformance' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, Cmb_ViewLimit) == 0x0002E8, "Member 'UConfig_GraphicsCS_C::Cmb_ViewLimit' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, Image) == 0x0002F0, "Member 'UConfig_GraphicsCS_C::Image' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, Image_3) == 0x0002F8, "Member 'UConfig_GraphicsCS_C::Image_3' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, Image_6) == 0x000300, "Member 'UConfig_GraphicsCS_C::Image_6' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, OptionVFXVisibleSelector) == 0x000308, "Member 'UConfig_GraphicsCS_C::OptionVFXVisibleSelector' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, PresetData) == 0x000310, "Member 'UConfig_GraphicsCS_C::PresetData' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, SliderSetting) == 0x000360, "Member 'UConfig_GraphicsCS_C::SliderSetting' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, bGeneratedCustom) == 0x000370, "Member 'UConfig_GraphicsCS_C::bGeneratedCustom' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, BaseConfigData) == 0x000374, "Member 'UConfig_GraphicsCS_C::BaseConfigData' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, TrackingConfigData) == 0x0003A0, "Member 'UConfig_GraphicsCS_C::TrackingConfigData' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, FPSLimitData) == 0x0003D0, "Member 'UConfig_GraphicsCS_C::FPSLimitData' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, EffectSelectData) == 0x000420, "Member 'UConfig_GraphicsCS_C::EffectSelectData' has a wrong offset!");
static_assert(offsetof(UConfig_GraphicsCS_C, ViewLimitData) == 0x000470, "Member 'UConfig_GraphicsCS_C::ViewLimitData' has a wrong offset!");

}

