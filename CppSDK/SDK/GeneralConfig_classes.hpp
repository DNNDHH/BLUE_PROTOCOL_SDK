#pragma once

 

// Package: GeneralConfig

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "EKeyGuideType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GeneralConfig.GeneralConfig_C
// 0x0398 (0x0648 - 0x02B0)
class UGeneralConfig_C final : public USBOptionChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_ResetScreenshotSaveDirectory;               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_ScreenshotSaveDirectory;                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_RingAutoClose;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             CB_RingCloseExec;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRadioBtnCmn01_C*                     CheckBox_GamepadOperate;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRadioBtnCmn01_C*                     CheckBox_MouseAndKeyboardOperate;                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             Chk_DemoCaption;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             Chk_HideBalloon;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             Chk_HideHudAtScreenshot;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             Chk_HideOthersPlayerAtFishing;                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             Chk_InterruptSilent;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             Chk_PadButtonCrossBehavior;                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             Chk_ShowConfirmQuitPhotoMode;                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             Chk_ShowScreenshotNotifications;                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             Chk_UsedCheckActive;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_AutoTarget;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_LockTargetType;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_LogoPosition;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_PadKeyView;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_ShortcutRingMode;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_WeaponVisibility;                              // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HideOthersPlayerAtFishing;                         // 0x0360(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           KeyConfigGrp;                                      // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             KeyConfigList;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USliderInput_C*                         PadUISpeedSlider;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResolutionSettingPanel_C*              ResolutionSettingPanel;                            // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_1;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ScreenshotSaveDirectory;                 // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_GamepadOperate;                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_KeyConfigGrp;                            // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_MouseAndKeyboardOperate;                 // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUsedCheckList_C*                       UsedCheckList;                                     // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBOperateMode                                Curr_OperateMode;                                  // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E01[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class URadioButton_C*>                 ComRadioH;                                         // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class URadioButton_C*>                 ComRadioV;                                         // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FString, ESBKeyGuideDisplayType>   KeyGuideSettingList;                               // 0x0410(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, ESBPadKeySkinType>        SkinTypes;                                         // 0x0460(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, ESBSSLogoPosition>        SSLogoPositionCmbs;                                // 0x04B0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, ESBShortcutRingMode>      ShortcutRingModes;                                 // 0x0500(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, ESBWeaponVisibleType>     WeaponVisibleTypes;                                // 0x0550(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, bool>                     AutoTargetFocus;                                   // 0x05A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, bool>                     AutoTargetEnable;                                  // 0x05F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bInitializeing;                                    // 0x0640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	ESlateVisibility Get_HideOthersPlayerAtFishing_Visibility_0();
	class UWidget* On_Cmb_LogoPosition_GenerateWidget_0(const class FString& Item);
	class UWidget* On_Cmb_PadKeyView_GenerateWidget_0(const class FString& Item);
	class UWidget* On_Cmb_LockTargetType_GenerateWidget_0(const class FString& Item);
	class UWidget* On_Cmb_AutoTarget_GenerateWidget_0(const class FString& Item);
	class UWidget* On_Cmb_WeaponVisibility_GenerateWidget_0(const class FString& Item);
	class UWidget* On_Cmb_ShortcutRingMode_GenerateWidget_0(const class FString& Item);
	void GenerateLockTargetType();
	void GenerateAutoTarget();
	void GenerateWeaponVisible();
	void GenerateShortcutRingMode();
	void GenerateLogoPos();
	void GeneratePadKeyView();
	void GenerateComboBox();
	void SetOperationModeCheckboxSeklected(ESBOperateMode InSelected_Operate_Mode);
	void Completed_C5B7DF9949CED661D78734AB2E938631(bool Success, const class FString& FilePath);
	void Construct();
	void BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void OnSaveCharaConfig(bool In_Result);
	void Init();
	void OnSaveCharaConfigDelegate(bool Result);
	void BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Destruct();
	void UnbindDelegates();
	void BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature(int32 Value, float Ratio);
	void BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__Button_98_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void UpdateScreenshotSaveDirectoryText();
	void BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_GeneralConfig(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GeneralConfig_C">();
	}
	static class UGeneralConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeneralConfig_C>();
	}
};
static_assert(alignof(UGeneralConfig_C) == 0x000008, "Wrong alignment on UGeneralConfig_C");
static_assert(sizeof(UGeneralConfig_C) == 0x000648, "Wrong size on UGeneralConfig_C");
static_assert(offsetof(UGeneralConfig_C, UberGraphFrame) == 0x0002B0, "Member 'UGeneralConfig_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Button_ResetScreenshotSaveDirectory) == 0x0002B8, "Member 'UGeneralConfig_C::Button_ResetScreenshotSaveDirectory' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Button_ScreenshotSaveDirectory) == 0x0002C0, "Member 'UGeneralConfig_C::Button_ScreenshotSaveDirectory' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, CB_RingAutoClose) == 0x0002C8, "Member 'UGeneralConfig_C::CB_RingAutoClose' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, CB_RingCloseExec) == 0x0002D0, "Member 'UGeneralConfig_C::CB_RingCloseExec' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, CheckBox_GamepadOperate) == 0x0002D8, "Member 'UGeneralConfig_C::CheckBox_GamepadOperate' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, CheckBox_MouseAndKeyboardOperate) == 0x0002E0, "Member 'UGeneralConfig_C::CheckBox_MouseAndKeyboardOperate' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Chk_DemoCaption) == 0x0002E8, "Member 'UGeneralConfig_C::Chk_DemoCaption' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Chk_HideBalloon) == 0x0002F0, "Member 'UGeneralConfig_C::Chk_HideBalloon' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Chk_HideHudAtScreenshot) == 0x0002F8, "Member 'UGeneralConfig_C::Chk_HideHudAtScreenshot' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Chk_HideOthersPlayerAtFishing) == 0x000300, "Member 'UGeneralConfig_C::Chk_HideOthersPlayerAtFishing' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Chk_InterruptSilent) == 0x000308, "Member 'UGeneralConfig_C::Chk_InterruptSilent' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Chk_PadButtonCrossBehavior) == 0x000310, "Member 'UGeneralConfig_C::Chk_PadButtonCrossBehavior' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Chk_ShowConfirmQuitPhotoMode) == 0x000318, "Member 'UGeneralConfig_C::Chk_ShowConfirmQuitPhotoMode' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Chk_ShowScreenshotNotifications) == 0x000320, "Member 'UGeneralConfig_C::Chk_ShowScreenshotNotifications' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Chk_UsedCheckActive) == 0x000328, "Member 'UGeneralConfig_C::Chk_UsedCheckActive' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Cmb_AutoTarget) == 0x000330, "Member 'UGeneralConfig_C::Cmb_AutoTarget' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Cmb_LockTargetType) == 0x000338, "Member 'UGeneralConfig_C::Cmb_LockTargetType' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Cmb_LogoPosition) == 0x000340, "Member 'UGeneralConfig_C::Cmb_LogoPosition' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Cmb_PadKeyView) == 0x000348, "Member 'UGeneralConfig_C::Cmb_PadKeyView' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Cmb_ShortcutRingMode) == 0x000350, "Member 'UGeneralConfig_C::Cmb_ShortcutRingMode' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Cmb_WeaponVisibility) == 0x000358, "Member 'UGeneralConfig_C::Cmb_WeaponVisibility' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, HideOthersPlayerAtFishing) == 0x000360, "Member 'UGeneralConfig_C::HideOthersPlayerAtFishing' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Image) == 0x000368, "Member 'UGeneralConfig_C::Image' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Image_0) == 0x000370, "Member 'UGeneralConfig_C::Image_0' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Image_1) == 0x000378, "Member 'UGeneralConfig_C::Image_1' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Image_2) == 0x000380, "Member 'UGeneralConfig_C::Image_2' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Image_3) == 0x000388, "Member 'UGeneralConfig_C::Image_3' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Image_4) == 0x000390, "Member 'UGeneralConfig_C::Image_4' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, KeyConfigGrp) == 0x000398, "Member 'UGeneralConfig_C::KeyConfigGrp' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, KeyConfigList) == 0x0003A0, "Member 'UGeneralConfig_C::KeyConfigList' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, PadUISpeedSlider) == 0x0003A8, "Member 'UGeneralConfig_C::PadUISpeedSlider' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, ResolutionSettingPanel) == 0x0003B0, "Member 'UGeneralConfig_C::ResolutionSettingPanel' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, TextBlock_1) == 0x0003B8, "Member 'UGeneralConfig_C::TextBlock_1' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, TextBlock_ScreenshotSaveDirectory) == 0x0003C0, "Member 'UGeneralConfig_C::TextBlock_ScreenshotSaveDirectory' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, UIBlocker_GamepadOperate) == 0x0003C8, "Member 'UGeneralConfig_C::UIBlocker_GamepadOperate' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, UIBlocker_KeyConfigGrp) == 0x0003D0, "Member 'UGeneralConfig_C::UIBlocker_KeyConfigGrp' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, UIBlocker_MouseAndKeyboardOperate) == 0x0003D8, "Member 'UGeneralConfig_C::UIBlocker_MouseAndKeyboardOperate' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, UsedCheckList) == 0x0003E0, "Member 'UGeneralConfig_C::UsedCheckList' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, Curr_OperateMode) == 0x0003E8, "Member 'UGeneralConfig_C::Curr_OperateMode' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, ComRadioH) == 0x0003F0, "Member 'UGeneralConfig_C::ComRadioH' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, ComRadioV) == 0x000400, "Member 'UGeneralConfig_C::ComRadioV' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, KeyGuideSettingList) == 0x000410, "Member 'UGeneralConfig_C::KeyGuideSettingList' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, SkinTypes) == 0x000460, "Member 'UGeneralConfig_C::SkinTypes' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, SSLogoPositionCmbs) == 0x0004B0, "Member 'UGeneralConfig_C::SSLogoPositionCmbs' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, ShortcutRingModes) == 0x000500, "Member 'UGeneralConfig_C::ShortcutRingModes' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, WeaponVisibleTypes) == 0x000550, "Member 'UGeneralConfig_C::WeaponVisibleTypes' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, AutoTargetFocus) == 0x0005A0, "Member 'UGeneralConfig_C::AutoTargetFocus' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, AutoTargetEnable) == 0x0005F0, "Member 'UGeneralConfig_C::AutoTargetEnable' has a wrong offset!");
static_assert(offsetof(UGeneralConfig_C, bInitializeing) == 0x000640, "Member 'UGeneralConfig_C::bInitializeing' has a wrong offset!");

}

