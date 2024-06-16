#pragma once

 

// Package: ResolutionSettingPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ResolutionSettingPanel.ResolutionSettingPanel_C
// 0x00C0 (0x0338 - 0x0278)
class UResolutionSettingPanel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBComboBoxCmn01_C*                     Cmb_Resolution;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadioButtons_C*                        RadioButtons;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           Timer;                                             // 0x0290(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              DefaultSize;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Sec;                                               // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6757[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           Dialog;                                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   DialogText;                                        // 0x02B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FIntPoint>                      SIzes;                                             // 0x02C8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	EWindowMode                                   WinMode;                                           // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6758[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              ApplySize;                                         // 0x02DC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWindowMode                                   NextWinMode;                                       // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6759[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, struct FIntPoint>         Viewports;                                         // 0x02E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetupResolutionList();
	void AddOptionByCustomSize(const struct FIntPoint& Size);
	void AddOptionBySize(const struct FIntPoint& Size);
	void FindNearySupportedPoint(const struct FIntPoint& Resolutions, struct FIntPoint* Finded);
	void GetFilteredResolutions(TArray<struct FIntPoint>* FilterdResolutions);
	class UWidget* On_Cmb_Resolution_GenerateWidget_0(const class FString& Item);
	void ExecuteResolution_Point(const struct FIntPoint& Size);
	void Execure_Resolution_Str(const class FString& ResStr);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
	void TimerEvt();
	void WindowMode(bool IsChecked, class URadioButton_C* RadioButton, int32 Param_Index);
	void ShowConfirmDialog();
	void ExecuteUbergraph_ResolutionSettingPanel(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ResolutionSettingPanel_C">();
	}
	static class UResolutionSettingPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResolutionSettingPanel_C>();
	}
};
static_assert(alignof(UResolutionSettingPanel_C) == 0x000008, "Wrong alignment on UResolutionSettingPanel_C");
static_assert(sizeof(UResolutionSettingPanel_C) == 0x000338, "Wrong size on UResolutionSettingPanel_C");
static_assert(offsetof(UResolutionSettingPanel_C, UberGraphFrame) == 0x000278, "Member 'UResolutionSettingPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, Cmb_Resolution) == 0x000280, "Member 'UResolutionSettingPanel_C::Cmb_Resolution' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, RadioButtons) == 0x000288, "Member 'UResolutionSettingPanel_C::RadioButtons' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, Timer) == 0x000290, "Member 'UResolutionSettingPanel_C::Timer' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, DefaultSize) == 0x000298, "Member 'UResolutionSettingPanel_C::DefaultSize' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, Sec) == 0x0002A0, "Member 'UResolutionSettingPanel_C::Sec' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, Dialog) == 0x0002A8, "Member 'UResolutionSettingPanel_C::Dialog' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, DialogText) == 0x0002B0, "Member 'UResolutionSettingPanel_C::DialogText' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, SIzes) == 0x0002C8, "Member 'UResolutionSettingPanel_C::SIzes' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, WinMode) == 0x0002D8, "Member 'UResolutionSettingPanel_C::WinMode' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, ApplySize) == 0x0002DC, "Member 'UResolutionSettingPanel_C::ApplySize' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, NextWinMode) == 0x0002E4, "Member 'UResolutionSettingPanel_C::NextWinMode' has a wrong offset!");
static_assert(offsetof(UResolutionSettingPanel_C, Viewports) == 0x0002E8, "Member 'UResolutionSettingPanel_C::Viewports' has a wrong offset!");

}

