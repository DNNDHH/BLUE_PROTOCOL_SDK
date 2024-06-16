#pragma once

 

// Package: GeneralConfigCS

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "EKeyGuideType_structs.hpp"


namespace SDK::Params
{

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GeneralConfigCS_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ratio;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature) == 0x000004, "Wrong alignment on GeneralConfigCS_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature) == 0x000008, "Wrong size on GeneralConfigCS_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature, Value) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature::Value' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature, Ratio) == 0x000004, "Member 'GeneralConfigCS_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature::Ratio' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfigCS_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GeneralConfigCS_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GeneralConfigCS_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GeneralConfigCS_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfigCS_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GeneralConfigCS_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GeneralConfigCS_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GeneralConfigCS_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfigCS_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GeneralConfigCS_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GeneralConfigCS_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GeneralConfigCS_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 SelectedItem;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature, SelectedItem) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature::SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'GeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.SetTitleMenuMode
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_SetTitleMenuMode final
{
public:
	bool                                          bInIsEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_SetTitleMenuMode) == 0x000001, "Wrong alignment on GeneralConfigCS_C_SetTitleMenuMode");
static_assert(sizeof(GeneralConfigCS_C_SetTitleMenuMode) == 0x000001, "Wrong size on GeneralConfigCS_C_SetTitleMenuMode");
static_assert(offsetof(GeneralConfigCS_C_SetTitleMenuMode, bInIsEnabled) == 0x000000, "Member 'GeneralConfigCS_C_SetTitleMenuMode::bInIsEnabled' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__GeneralConfigCS_Chk_PSOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__GeneralConfigCS_Chk_PSOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__GeneralConfigCS_Chk_PSOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__GeneralConfigCS_Chk_PSOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__GeneralConfigCS_Chk_PSOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__GeneralConfigCS_Chk_PSOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__GeneralConfigCS_Chk_PSOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__GeneralConfigCS_Chk_PSOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.ExecuteUbergraph_GeneralConfigCS
// 0x0308 (0x0308 - 0x0000)
struct GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EKeyGuideType                                 Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_11;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                Temp_byte_Variable_2;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_10;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                Temp_byte_Variable_3;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_In_Result;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5357[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5358[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5359[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_535A[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_535B[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_535C[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_535D[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_3;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_535E[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_3;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowScreenshotNotifications_ReturnValue; // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHideHudAtScreenshot_ReturnValue;        // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDontDisplayThePhotoModeQuitConfirmDialog_ReturnValue; // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUseCheckDialogActive_ReturnValue;       // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShortcutRingCloseMode_ReturnValue;      // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShortcutRingAutoCommand_ReturnValue;    // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowDemoCaption_ReturnValue;            // 0x00AF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetGamepadUISpeed_ReturnValue;            // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadMacheneCache_ReturnValue;             // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedMachineCache_ReturnValue;         // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSilentInterruptDialog_ReturnValue;      // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSilentBalloon_ReturnValue;              // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue_1;             // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_4;           // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_535F[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_4;       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue;        // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_9;           // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_8;           // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5360[0x5];                                     // 0x00DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EKeyGuideType                                 Temp_byte_Variable_4;                              // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5361[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_Value;                  // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Ratio;                  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5362[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                K2Node_Select_Default;                             // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5363[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_4;         // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_4;        // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_5;                              // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSSLogoPosition                             CallFunc_Map_Find_Value;                           // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_7;           // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                Temp_byte_Variable_6;                              // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5364[0x2];                                     // 0x0126(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_3;         // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_3;        // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBShortcutRingMode                           CallFunc_Map_Find_Value_1;                         // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                K2Node_Select_Default_1;                           // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_6;           // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                Temp_byte_Variable_7;                              // 0x014E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_5;           // 0x014F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_4;           // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_3;           // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5365[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_2;                // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_3;                // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_2;         // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_2;        // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_8;                              // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponVisibleType                          CallFunc_Map_Find_Value_2;                         // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_2;                   // 0x018B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5366[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_4;                // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                K2Node_Select_Default_2;                           // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5367[0x6];                                     // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType_1;        // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5368[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_Value_3;                         // 0x01D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue_3;                   // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_Value_4;                         // 0x01D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue_4;                   // 0x01D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5369[0x1];                                     // 0x01D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_5;                // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_6;                // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_9;                              // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_10;                             // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                Temp_byte_Variable_11;                             // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 K2Node_Select_Default_3;                           // 0x01FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_5;           // 0x01FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_536A[0x2];                                     // 0x01FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_5;       // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_1;      // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                K2Node_Select_Default_4;                           // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue;    // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_6;           // 0x020B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_536B[0x4];                                     // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_6;       // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_7;           // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_536C[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_7;       // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_2;      // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_3;      // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_1;  // 0x022A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_2;  // 0x022B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                Temp_byte_Variable_12;                             // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_8;           // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_536D[0x2];                                     // 0x022E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_8;       // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_3;  // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_4;      // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_9;           // 0x023A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_536E[0x5];                                     // 0x023B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_9;       // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_13;                             // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_5;      // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_4;  // 0x024A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_10;          // 0x024B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_536F[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_10;      // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_11;          // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5370[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_11;      // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_6;      // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_7;      // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_5;  // 0x026A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_6;  // 0x026B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_8;      // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_7;  // 0x026D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_12;          // 0x026E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5371[0x1];                                     // 0x026F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_12;      // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_13;          // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5372[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_13;      // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveMacheneCache_ReturnValue;             // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5373[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SetGamepadUISpeed_ReturnValue;            // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_LoadMacheneCache_ReturnValue_1;           // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedMachineCache_ReturnValue_1;       // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_14;          // 0x0292(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5374[0x5];                                     // 0x0293(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_14;      // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_2;           // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_15;          // 0x02A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5375[0x6];                                     // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_15;      // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_8;  // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                K2Node_Select_Default_5;                           // 0x02B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5376[0x5];                                     // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_7;                // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_9;      // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x02CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_16;          // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5377[0x3];                                     // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_16;      // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_8;                // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModifyGeneralConfigSave_ReturnValue_9;  // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue_10;     // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCSPlatform_ReturnValue;                 // 0x02EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlatformId                                 CallFunc_GetCurrentPlatformId_ReturnValue;         // 0x02EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5378[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x02F0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bInIsEnabled;                   // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0302(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS) == 0x000008, "Wrong alignment on GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS");
static_assert(sizeof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS) == 0x000308, "Wrong size on GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, EntryPoint) == 0x000000, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::EntryPoint' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable) == 0x000006, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_1) == 0x000007, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked_11) == 0x000008, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked_11' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_2) == 0x000009, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked_10) == 0x00000A, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked_10' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_3) == 0x00000B, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_CustomEvent_In_Result) == 0x00000C, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_CustomEvent_In_Result' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsLocallyControlled_ReturnValue) == 0x000021, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetHUD_ReturnValue) == 0x000030, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000038, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerController_ReturnValue_1) == 0x000050, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_CustomEvent_Result) == 0x000058, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000060, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_DynamicCast_bSuccess_2) == 0x000068, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid) == 0x000069, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000070, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetOperateMode_ReturnValue) == 0x000078, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000079, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000080, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_2) == 0x000088, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x000090, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_3) == 0x000098, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_3) == 0x0000A0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsShowScreenshotNotifications_ReturnValue) == 0x0000A8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsShowScreenshotNotifications_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsHideHudAtScreenshot_ReturnValue) == 0x0000A9, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsHideHudAtScreenshot_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsDontDisplayThePhotoModeQuitConfirmDialog_ReturnValue) == 0x0000AA, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsDontDisplayThePhotoModeQuitConfirmDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsUseCheckDialogActive_ReturnValue) == 0x0000AB, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsUseCheckDialogActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Not_PreBool_ReturnValue) == 0x0000AC, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsShortcutRingCloseMode_ReturnValue) == 0x0000AD, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsShortcutRingCloseMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsShortcutRingAutoCommand_ReturnValue) == 0x0000AE, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsShortcutRingAutoCommand_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsShowDemoCaption_ReturnValue) == 0x0000AF, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsShowDemoCaption_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetGamepadUISpeed_ReturnValue) == 0x0000B0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetGamepadUISpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_LoadMacheneCache_ReturnValue) == 0x0000B4, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_LoadMacheneCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsLoadedMachineCache_ReturnValue) == 0x0000B5, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsLoadedMachineCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsSilentInterruptDialog_ReturnValue) == 0x0000B6, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsSilentInterruptDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsSilentBalloon_ReturnValue) == 0x0000B7, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsSilentBalloon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetOperateMode_ReturnValue_1) == 0x0000B8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetOperateMode_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_4) == 0x0000B9, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_4) == 0x0000C0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerId_ReturnValue) == 0x0000C8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveGeneralConfigData_ReturnValue) == 0x0000D8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveGeneralConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked_9) == 0x0000D9, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked_9' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked_8) == 0x0000DA, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked_8' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerController_ReturnValue_2) == 0x0000E0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0000E8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_DynamicCast_bSuccess_3) == 0x0000F0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_4) == 0x0000F1, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_Value) == 0x0000F4, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_Ratio) == 0x0000F8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_Ratio' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetSBPlayerController_ReturnValue) == 0x000100, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_bool_Variable) == 0x000108, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000109, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_Select_Default) == 0x00010A, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00010B, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_SelectedItem_4) == 0x000110, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_SelectedItem_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_SelectionType_4) == 0x000120, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_SelectionType_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_5) == 0x000121, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Map_Find_Value) == 0x000122, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Map_Find_ReturnValue) == 0x000123, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked_7) == 0x000124, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked_7' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_6) == 0x000125, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerId_ReturnValue_1) == 0x000128, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_SelectedItem_3) == 0x000138, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_SelectedItem_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_SelectionType_3) == 0x000148, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_SelectionType_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_bool_Variable_1) == 0x000149, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Map_Find_Value_1) == 0x00014A, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Map_Find_ReturnValue_1) == 0x00014B, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_Select_Default_1) == 0x00014C, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked_6) == 0x00014D, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked_6' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_7) == 0x00014E, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked_5) == 0x00014F, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked_5' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked_4) == 0x000150, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked_3) == 0x000151, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerId_ReturnValue_2) == 0x000158, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerId_ReturnValue_3) == 0x000168, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerId_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_SelectedItem_2) == 0x000178, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_SelectedItem_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_SelectionType_2) == 0x000188, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_SelectionType_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_8) == 0x000189, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Map_Find_Value_2) == 0x00018A, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Map_Find_ReturnValue_2) == 0x00018B, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerId_ReturnValue_4) == 0x000190, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerId_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_bool_Variable_2) == 0x0001A0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_Select_Default_2) == 0x0001A1, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_SelectedItem_1) == 0x0001A8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_SelectionType_1) == 0x0001B8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_SelectionType_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_SelectedItem) == 0x0001C0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_SelectionType) == 0x0001D0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0001D1, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0001D2, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Map_Find_Value_3) == 0x0001D3, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Map_Find_Value_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Map_Find_ReturnValue_3) == 0x0001D4, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Map_Find_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Map_Find_Value_4) == 0x0001D5, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Map_Find_Value_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Map_Find_ReturnValue_4) == 0x0001D6, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Map_Find_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerId_ReturnValue_5) == 0x0001D8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerId_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerId_ReturnValue_6) == 0x0001E8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerId_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_9) == 0x0001F8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_10) == 0x0001F9, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_11) == 0x0001FA, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_Select_Default_3) == 0x0001FB, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_bool_Variable_3) == 0x0001FC, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_5) == 0x0001FD, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_5' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_5) == 0x000200, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveGeneralConfigData_ReturnValue_1) == 0x000208, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveGeneralConfigData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_Select_Default_4) == 0x000209, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsModifyGeneralConfigSave_ReturnValue) == 0x00020A, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsModifyGeneralConfigSave_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_6) == 0x00020B, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_6' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_6) == 0x000210, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_7) == 0x000218, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_7' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_7) == 0x000220, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveGeneralConfigData_ReturnValue_2) == 0x000228, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveGeneralConfigData_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveGeneralConfigData_ReturnValue_3) == 0x000229, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveGeneralConfigData_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsModifyGeneralConfigSave_ReturnValue_1) == 0x00022A, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsModifyGeneralConfigSave_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsModifyGeneralConfigSave_ReturnValue_2) == 0x00022B, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsModifyGeneralConfigSave_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_12) == 0x00022C, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_8) == 0x00022D, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_8' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_8) == 0x000230, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsModifyGeneralConfigSave_ReturnValue_3) == 0x000238, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsModifyGeneralConfigSave_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveGeneralConfigData_ReturnValue_4) == 0x000239, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveGeneralConfigData_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_9) == 0x00023A, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_9' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_9) == 0x000240, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_byte_Variable_13) == 0x000248, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveGeneralConfigData_ReturnValue_5) == 0x000249, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveGeneralConfigData_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsModifyGeneralConfigSave_ReturnValue_4) == 0x00024A, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsModifyGeneralConfigSave_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_10) == 0x00024B, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_10' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_10) == 0x000250, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_11) == 0x000258, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_11' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_11) == 0x000260, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveGeneralConfigData_ReturnValue_6) == 0x000268, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveGeneralConfigData_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveGeneralConfigData_ReturnValue_7) == 0x000269, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveGeneralConfigData_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsModifyGeneralConfigSave_ReturnValue_5) == 0x00026A, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsModifyGeneralConfigSave_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsModifyGeneralConfigSave_ReturnValue_6) == 0x00026B, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsModifyGeneralConfigSave_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveGeneralConfigData_ReturnValue_8) == 0x00026C, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveGeneralConfigData_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsModifyGeneralConfigSave_ReturnValue_7) == 0x00026D, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsModifyGeneralConfigSave_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_12) == 0x00026E, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_12' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_12) == 0x000270, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_13) == 0x000278, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_13' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_13) == 0x000280, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveMacheneCache_ReturnValue) == 0x000288, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveMacheneCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SetGamepadUISpeed_ReturnValue) == 0x00028C, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SetGamepadUISpeed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_LoadMacheneCache_ReturnValue_1) == 0x000290, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_LoadMacheneCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsLoadedMachineCache_ReturnValue_1) == 0x000291, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsLoadedMachineCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_14) == 0x000292, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_14' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_14) == 0x000298, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked_2) == 0x0002A0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_15) == 0x0002A1, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_15' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_15) == 0x0002A8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, Temp_bool_Variable_4) == 0x0002B0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsModifyGeneralConfigSave_ReturnValue_8) == 0x0002B1, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsModifyGeneralConfigSave_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_Select_Default_5) == 0x0002B2, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerId_ReturnValue_7) == 0x0002B8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerId_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0002C8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveGeneralConfigData_ReturnValue_9) == 0x0002C9, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveGeneralConfigData_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked_1) == 0x0002CA, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002CB, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_IsValid_16) == 0x0002CC, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_IsValid_16' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetConfigSaveManager_ReturnValue_16) == 0x0002D0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetConfigSaveManager_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetPlayerId_ReturnValue_8) == 0x0002D8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetPlayerId_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsModifyGeneralConfigSave_ReturnValue_9) == 0x0002E8, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsModifyGeneralConfigSave_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_SaveGeneralConfigData_ReturnValue_10) == 0x0002E9, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_SaveGeneralConfigData_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_IsCSPlatform_ReturnValue) == 0x0002EA, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_IsCSPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_GetCurrentPlatformId_ReturnValue) == 0x0002EB, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_GetCurrentPlatformId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0002EC, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_CreateDelegate_OutputDelegate) == 0x0002F0, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_CustomEvent_bInIsEnabled) == 0x000300, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_CustomEvent_bInIsEnabled' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, K2Node_ComponentBoundEvent_bIsChecked) == 0x000301, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000302, "Member 'GeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.ShowDialogPSOnly
// 0x0020 (0x0020 - 0x0000)
struct GeneralConfigCS_C_ShowDialogPSOnly final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5379[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_PSOnlyDialog_C*                    CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_ShowDialogPSOnly) == 0x000008, "Wrong alignment on GeneralConfigCS_C_ShowDialogPSOnly");
static_assert(sizeof(GeneralConfigCS_C_ShowDialogPSOnly) == 0x000020, "Wrong size on GeneralConfigCS_C_ShowDialogPSOnly");
static_assert(offsetof(GeneralConfigCS_C_ShowDialogPSOnly, bVisible) == 0x000000, "Member 'GeneralConfigCS_C_ShowDialogPSOnly::bVisible' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ShowDialogPSOnly, CallFunc_Create_ReturnValue) == 0x000008, "Member 'GeneralConfigCS_C_ShowDialogPSOnly::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_ShowDialogPSOnly, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GeneralConfigCS_C_ShowDialogPSOnly::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_LogoPosition_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0");
static_assert(sizeof(GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_PadKeyView_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0");
static_assert(sizeof(GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_LockTargetType_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0");
static_assert(sizeof(GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_AutoTarget_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0");
static_assert(sizeof(GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_WeaponVisibility_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0");
static_assert(sizeof(GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_ShortcutRingMode_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0) == 0x000008, "Wrong alignment on GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0");
static_assert(sizeof(GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0) == 0x000038, "Wrong size on GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0, Item) == 0x000000, "Member 'GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'GeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.GenerateLockTargetType
// 0x0048 (0x0048 - 0x0000)
struct GeneralConfigCS_C_GenerateLockTargetType final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0002(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_537A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAutoTargetEnable_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_537B[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfigCS_C_GenerateLockTargetType) == 0x000008, "Wrong alignment on GeneralConfigCS_C_GenerateLockTargetType");
static_assert(sizeof(GeneralConfigCS_C_GenerateLockTargetType) == 0x000048, "Wrong size on GeneralConfigCS_C_GenerateLockTargetType");
static_assert(offsetof(GeneralConfigCS_C_GenerateLockTargetType, Temp_bool_Variable) == 0x000000, "Member 'GeneralConfigCS_C_GenerateLockTargetType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLockTargetType, Temp_bool_Variable_1) == 0x000001, "Member 'GeneralConfigCS_C_GenerateLockTargetType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLockTargetType, Temp_bool_Variable_2) == 0x000002, "Member 'GeneralConfigCS_C_GenerateLockTargetType::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLockTargetType, CallFunc_GetConfigSaveManager_IsValid) == 0x000003, "Member 'GeneralConfigCS_C_GenerateLockTargetType::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLockTargetType, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'GeneralConfigCS_C_GenerateLockTargetType::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLockTargetType, CallFunc_GetAutoTargetEnable_ReturnValue) == 0x000010, "Member 'GeneralConfigCS_C_GenerateLockTargetType::CallFunc_GetAutoTargetEnable_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLockTargetType, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'GeneralConfigCS_C_GenerateLockTargetType::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLockTargetType, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000028, "Member 'GeneralConfigCS_C_GenerateLockTargetType::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLockTargetType, K2Node_Select_Default) == 0x000038, "Member 'GeneralConfigCS_C_GenerateLockTargetType::K2Node_Select_Default' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.GenerateAutoTarget
// 0x0038 (0x0038 - 0x0000)
struct GeneralConfigCS_C_GenerateAutoTarget final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_537C[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAutoTargetSightFocus_ReturnValue;      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_537D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GeneralConfigCS_C_GenerateAutoTarget) == 0x000008, "Wrong alignment on GeneralConfigCS_C_GenerateAutoTarget");
static_assert(sizeof(GeneralConfigCS_C_GenerateAutoTarget) == 0x000038, "Wrong size on GeneralConfigCS_C_GenerateAutoTarget");
static_assert(offsetof(GeneralConfigCS_C_GenerateAutoTarget, Temp_bool_Variable) == 0x000000, "Member 'GeneralConfigCS_C_GenerateAutoTarget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateAutoTarget, Temp_bool_Variable_1) == 0x000001, "Member 'GeneralConfigCS_C_GenerateAutoTarget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateAutoTarget, CallFunc_GetConfigSaveManager_IsValid) == 0x000002, "Member 'GeneralConfigCS_C_GenerateAutoTarget::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateAutoTarget, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'GeneralConfigCS_C_GenerateAutoTarget::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateAutoTarget, CallFunc_GetAutoTargetSightFocus_ReturnValue) == 0x000010, "Member 'GeneralConfigCS_C_GenerateAutoTarget::CallFunc_GetAutoTargetSightFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateAutoTarget, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'GeneralConfigCS_C_GenerateAutoTarget::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateAutoTarget, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000028, "Member 'GeneralConfigCS_C_GenerateAutoTarget::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.GenerateWeaponVisible
// 0x0068 (0x0068 - 0x0000)
struct GeneralConfigCS_C_GenerateWeaponVisible final
{
public:
	class FString                                 AddValue;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBWeaponVisibleType                          Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_537E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x001C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0020(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_537F[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5380[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5381[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponVisibleType                          CallFunc_GetWeaponVisibleType_ReturnValue;         // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_GenerateWeaponVisible) == 0x000008, "Wrong alignment on GeneralConfigCS_C_GenerateWeaponVisible");
static_assert(sizeof(GeneralConfigCS_C_GenerateWeaponVisible) == 0x000068, "Wrong size on GeneralConfigCS_C_GenerateWeaponVisible");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, AddValue) == 0x000000, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::AddValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, Temp_byte_Variable) == 0x000010, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, Temp_int_Variable) == 0x000014, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, Temp_int_Variable_1) == 0x000018, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, Temp_int_Variable_2) == 0x00001C, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, Temp_int_Variable_3) == 0x000020, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, Temp_int_Variable_4) == 0x000024, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, Temp_int_Variable_5) == 0x000028, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_Conv_IntToByte_ReturnValue) == 0x00002C, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_GetValidValue_ReturnValue) == 0x000034, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000035, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000036, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, K2Node_Select_Default) == 0x000038, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_GetConfigSaveManager_IsValid) == 0x000050, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000058, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_MakeLiteralInt_ReturnValue) == 0x000060, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_GetWeaponVisibleType_ReturnValue) == 0x000064, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_GetWeaponVisibleType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_Less_IntInt_ReturnValue) == 0x000065, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateWeaponVisible, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000066, "Member 'GeneralConfigCS_C_GenerateWeaponVisible::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.GenerateShortcutRingMode
// 0x0068 (0x0068 - 0x0000)
struct GeneralConfigCS_C_GenerateShortcutRingMode final
{
public:
	class FString                                 Menu;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	ESBShortcutRingMode                           Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5382[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5383[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5384[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5385[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBShortcutRingMode                           CallFunc_GetShortcutRingMode_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5386[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_GenerateShortcutRingMode) == 0x000008, "Wrong alignment on GeneralConfigCS_C_GenerateShortcutRingMode");
static_assert(sizeof(GeneralConfigCS_C_GenerateShortcutRingMode) == 0x000068, "Wrong size on GeneralConfigCS_C_GenerateShortcutRingMode");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, Menu) == 0x000000, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::Menu' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, Temp_byte_Variable) == 0x000010, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, Temp_int_Variable) == 0x000014, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, Temp_int_Variable_1) == 0x000018, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, Temp_int_Variable_2) == 0x00001C, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, Temp_int_Variable_3) == 0x000020, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_Conv_IntToByte_ReturnValue) == 0x000024, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_GetValidValue_ReturnValue) == 0x00002C, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00002D, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00002E, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, K2Node_Select_Default) == 0x000030, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000034, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_GetConfigSaveManager_IsValid) == 0x000048, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000050, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_GetShortcutRingMode_ReturnValue) == 0x000058, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_GetShortcutRingMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000059, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_MakeLiteralInt_ReturnValue) == 0x00005C, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateShortcutRingMode, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'GeneralConfigCS_C_GenerateShortcutRingMode::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.GenerateLogoPos
// 0x0070 (0x0070 - 0x0000)
struct GeneralConfigCS_C_GenerateLogoPos final
{
public:
	class FString                                 AddSTR;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x001C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSSLogoPosition                             Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5387[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5388[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5389[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_538A[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSSLogoPosition                             CallFunc_GetSSLogoPosition_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_538B[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_GenerateLogoPos) == 0x000008, "Wrong alignment on GeneralConfigCS_C_GenerateLogoPos");
static_assert(sizeof(GeneralConfigCS_C_GenerateLogoPos) == 0x000070, "Wrong size on GeneralConfigCS_C_GenerateLogoPos");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, AddSTR) == 0x000000, "Member 'GeneralConfigCS_C_GenerateLogoPos::AddSTR' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, Temp_int_Variable) == 0x000010, "Member 'GeneralConfigCS_C_GenerateLogoPos::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, Temp_int_Variable_1) == 0x000014, "Member 'GeneralConfigCS_C_GenerateLogoPos::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, Temp_int_Variable_2) == 0x000018, "Member 'GeneralConfigCS_C_GenerateLogoPos::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, Temp_int_Variable_3) == 0x00001C, "Member 'GeneralConfigCS_C_GenerateLogoPos::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, Temp_byte_Variable) == 0x000020, "Member 'GeneralConfigCS_C_GenerateLogoPos::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, Temp_int_Variable_4) == 0x000024, "Member 'GeneralConfigCS_C_GenerateLogoPos::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, Temp_int_Variable_5) == 0x000028, "Member 'GeneralConfigCS_C_GenerateLogoPos::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_Conv_IntToByte_ReturnValue) == 0x00002C, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_GetValidValue_ReturnValue) == 0x000034, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000035, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000036, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, K2Node_Select_Default) == 0x000038, "Member 'GeneralConfigCS_C_GenerateLogoPos::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_GetConfigSaveManager_IsValid) == 0x000050, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000058, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_GetSSLogoPosition_ReturnValue) == 0x000060, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_GetSSLogoPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000061, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_MakeLiteralInt_ReturnValue) == 0x000064, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GenerateLogoPos, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'GeneralConfigCS_C_GenerateLogoPos::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.GeneratePadKeyView
// 0x0050 (0x0050 - 0x0000)
struct GeneralConfigCS_C_GeneratePadKeyView final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_538C[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_538D[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_538E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_GeneratePadKeyView) == 0x000008, "Wrong alignment on GeneralConfigCS_C_GeneratePadKeyView");
static_assert(sizeof(GeneralConfigCS_C_GeneratePadKeyView) == 0x000050, "Wrong size on GeneralConfigCS_C_GeneratePadKeyView");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, Temp_int_Variable) == 0x000000, "Member 'GeneralConfigCS_C_GeneratePadKeyView::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, Temp_int_Variable_1) == 0x000004, "Member 'GeneralConfigCS_C_GeneratePadKeyView::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, CallFunc_Conv_IntToByte_ReturnValue) == 0x000008, "Member 'GeneralConfigCS_C_GeneratePadKeyView::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GeneralConfigCS_C_GeneratePadKeyView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, CallFunc_GetValidValue_ReturnValue) == 0x000010, "Member 'GeneralConfigCS_C_GeneratePadKeyView::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000011, "Member 'GeneralConfigCS_C_GeneratePadKeyView::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000018, "Member 'GeneralConfigCS_C_GeneratePadKeyView::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000028, "Member 'GeneralConfigCS_C_GeneratePadKeyView::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x000030, "Member 'GeneralConfigCS_C_GeneratePadKeyView::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000040, "Member 'GeneralConfigCS_C_GeneratePadKeyView::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, CallFunc_MakeLiteralInt_ReturnValue) == 0x000044, "Member 'GeneralConfigCS_C_GeneratePadKeyView::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, CallFunc_Map_Contains_ReturnValue) == 0x000048, "Member 'GeneralConfigCS_C_GeneratePadKeyView::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_GeneratePadKeyView, CallFunc_Less_IntInt_ReturnValue) == 0x000049, "Member 'GeneralConfigCS_C_GeneratePadKeyView::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.IsLoadedGeneralSave
// 0x00A8 (0x00A8 - 0x0000)
struct GeneralConfigCS_C_IsLoadedGeneralSave final
{
public:
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_538F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedGeneralConfigSave_ReturnValue;    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBConfigSaveDataResult                       CallFunc_LoadGeneralConfigData_Result;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5390[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBConfigureSaveData_General           CallFunc_LoadGeneralConfigData_ReturnValue;        // 0x0028(0x0080)()
};
static_assert(alignof(GeneralConfigCS_C_IsLoadedGeneralSave) == 0x000008, "Wrong alignment on GeneralConfigCS_C_IsLoadedGeneralSave");
static_assert(sizeof(GeneralConfigCS_C_IsLoadedGeneralSave) == 0x0000A8, "Wrong size on GeneralConfigCS_C_IsLoadedGeneralSave");
static_assert(offsetof(GeneralConfigCS_C_IsLoadedGeneralSave, CallFunc_GetPlayerId_ReturnValue) == 0x000000, "Member 'GeneralConfigCS_C_IsLoadedGeneralSave::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_IsLoadedGeneralSave, CallFunc_GetConfigSaveManager_IsValid) == 0x000010, "Member 'GeneralConfigCS_C_IsLoadedGeneralSave::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_IsLoadedGeneralSave, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'GeneralConfigCS_C_IsLoadedGeneralSave::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_IsLoadedGeneralSave, CallFunc_IsLoadedGeneralConfigSave_ReturnValue) == 0x000020, "Member 'GeneralConfigCS_C_IsLoadedGeneralSave::CallFunc_IsLoadedGeneralConfigSave_ReturnValue' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_IsLoadedGeneralSave, CallFunc_LoadGeneralConfigData_Result) == 0x000021, "Member 'GeneralConfigCS_C_IsLoadedGeneralSave::CallFunc_LoadGeneralConfigData_Result' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_IsLoadedGeneralSave, CallFunc_LoadGeneralConfigData_ReturnValue) == 0x000028, "Member 'GeneralConfigCS_C_IsLoadedGeneralSave::CallFunc_LoadGeneralConfigData_ReturnValue' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.SetOperationModeCheckboxSeklected
// 0x0002 (0x0002 - 0x0000)
struct GeneralConfigCS_C_SetOperationModeCheckboxSeklected final
{
public:
	ESBOperateMode                                InSelected_Operate_Mode;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_SetOperationModeCheckboxSeklected) == 0x000001, "Wrong alignment on GeneralConfigCS_C_SetOperationModeCheckboxSeklected");
static_assert(sizeof(GeneralConfigCS_C_SetOperationModeCheckboxSeklected) == 0x000002, "Wrong size on GeneralConfigCS_C_SetOperationModeCheckboxSeklected");
static_assert(offsetof(GeneralConfigCS_C_SetOperationModeCheckboxSeklected, InSelected_Operate_Mode) == 0x000000, "Member 'GeneralConfigCS_C_SetOperationModeCheckboxSeklected::InSelected_Operate_Mode' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_SetOperationModeCheckboxSeklected, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'GeneralConfigCS_C_SetOperationModeCheckboxSeklected::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.OnSaveCharaConfig
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_OnSaveCharaConfig final
{
public:
	bool                                          In_Result;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_OnSaveCharaConfig) == 0x000001, "Wrong alignment on GeneralConfigCS_C_OnSaveCharaConfig");
static_assert(sizeof(GeneralConfigCS_C_OnSaveCharaConfig) == 0x000001, "Wrong size on GeneralConfigCS_C_OnSaveCharaConfig");
static_assert(offsetof(GeneralConfigCS_C_OnSaveCharaConfig, In_Result) == 0x000000, "Member 'GeneralConfigCS_C_OnSaveCharaConfig::In_Result' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.OnSaveCharaConfigDelegate
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_OnSaveCharaConfigDelegate final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_OnSaveCharaConfigDelegate) == 0x000001, "Wrong alignment on GeneralConfigCS_C_OnSaveCharaConfigDelegate");
static_assert(sizeof(GeneralConfigCS_C_OnSaveCharaConfigDelegate) == 0x000001, "Wrong size on GeneralConfigCS_C_OnSaveCharaConfigDelegate");
static_assert(offsetof(GeneralConfigCS_C_OnSaveCharaConfigDelegate, Result) == 0x000000, "Member 'GeneralConfigCS_C_OnSaveCharaConfigDelegate::Result' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GeneralConfigCS_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GeneralConfigCS_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(GeneralConfigCS_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on GeneralConfigCS_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(GeneralConfigCS_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'GeneralConfigCS_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function GeneralConfigCS.GeneralConfigCS_C.OnEndDialogPSOnly
// 0x0002 (0x0002 - 0x0000)
struct GeneralConfigCS_C_OnEndDialogPSOnly final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GeneralConfigCS_C_OnEndDialogPSOnly) == 0x000001, "Wrong alignment on GeneralConfigCS_C_OnEndDialogPSOnly");
static_assert(sizeof(GeneralConfigCS_C_OnEndDialogPSOnly) == 0x000002, "Wrong size on GeneralConfigCS_C_OnEndDialogPSOnly");
static_assert(offsetof(GeneralConfigCS_C_OnEndDialogPSOnly, Result) == 0x000000, "Member 'GeneralConfigCS_C_OnEndDialogPSOnly::Result' has a wrong offset!");
static_assert(offsetof(GeneralConfigCS_C_OnEndDialogPSOnly, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'GeneralConfigCS_C_OnEndDialogPSOnly::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

