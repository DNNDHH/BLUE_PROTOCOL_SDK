#pragma once

 

// Package: UMG_PhotoModePlayerListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoModePlayerListItem.UMG_PhotoModePlayerListItem_C
// 0x00C0 (0x0340 - 0x0280)
class UUMG_PhotoModePlayerListItem_C final : public USBPhotoModePlayerListItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBTextButton_C*                        Btn1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCaptureImagePhotoMode_C*               CaptureImagePhotoMode;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLoop;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerNameText;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_MotionStop;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Sync;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Unsync;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Visible;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButtonCmnBtn27_C*      SBSelectableTextButtonCmnBtn27_DebugHidePc;        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButtonCmnBtn27_C*      SBSelectableTextButtonCmnBtn27_DebugWeaponVisible; // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButtonCmnBtn27_C*      SBSelectableTextButtonCmnBtn27_FixEye;             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButtonCmnBtn27_C*      SBSelectableTextButtonCmnBtn27_FixHead;            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButtonCmnBtn27_C*      SBSelectableTextButtonCmnBtn27_LookAtActive;       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBSelectableTextButtonCmnBtn27_C*      SBSelectableTextButtonCmnBtn27_LookAtEyeActive;    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_DebugHidePc;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_DebugWeaponVisible;                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Icon;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_MotionStop;                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Name;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Sync;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Visible;                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bAllItem;                                          // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B5C[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPhotoModeController*                 PhotoModeCtrl;                                     // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_PhotoModePlayerListItem(int32 EntryPoint);
	void BndEvt__UMG_PhotoModePlayerListItem_SBSelectableTextButtonCmnBtn27_DebugWeaponVisible_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__UMG_PhotoModePlayerListItem_SBButton_Unsync_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UMG_PhotoModePlayerListItem_SBSelectableTextButtonCmnBtn27_DebugHidePc_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModePlayerListItem_SBSelectableTextButtonCmnBtn27_FixEye_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModePlayerListItem_SBSelectableTextButtonCmnBtn27_LookAtEyeActive_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModePlayerListItem_SBSelectableTextButtonCmnBtn27_FixHead_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModePlayerListItem_SBSelectableTextButtonCmnBtn27_LookAtActive_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModePlayerListItem_SBButton_MotionStop_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModePlayerListItem_SBButton_Sync_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModePlayerListItem_SBButton_Visible_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BP_OnUpdateData();
	void BP_SetData(class USBPhotoModePlayerControlData* InData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoModePlayerListItem_C">();
	}
	static class UUMG_PhotoModePlayerListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoModePlayerListItem_C>();
	}
};
static_assert(alignof(UUMG_PhotoModePlayerListItem_C) == 0x000008, "Wrong alignment on UUMG_PhotoModePlayerListItem_C");
static_assert(sizeof(UUMG_PhotoModePlayerListItem_C) == 0x000340, "Wrong size on UUMG_PhotoModePlayerListItem_C");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, UberGraphFrame) == 0x000280, "Member 'UUMG_PhotoModePlayerListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, Btn1) == 0x000288, "Member 'UUMG_PhotoModePlayerListItem_C::Btn1' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, CaptureImagePhotoMode) == 0x000290, "Member 'UUMG_PhotoModePlayerListItem_C::CaptureImagePhotoMode' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, ImageLoop) == 0x000298, "Member 'UUMG_PhotoModePlayerListItem_C::ImageLoop' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, PlayerNameText) == 0x0002A0, "Member 'UUMG_PhotoModePlayerListItem_C::PlayerNameText' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SBButton_MotionStop) == 0x0002A8, "Member 'UUMG_PhotoModePlayerListItem_C::SBButton_MotionStop' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SBButton_Sync) == 0x0002B0, "Member 'UUMG_PhotoModePlayerListItem_C::SBButton_Sync' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SBButton_Unsync) == 0x0002B8, "Member 'UUMG_PhotoModePlayerListItem_C::SBButton_Unsync' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SBButton_Visible) == 0x0002C0, "Member 'UUMG_PhotoModePlayerListItem_C::SBButton_Visible' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SBSelectableTextButtonCmnBtn27_DebugHidePc) == 0x0002C8, "Member 'UUMG_PhotoModePlayerListItem_C::SBSelectableTextButtonCmnBtn27_DebugHidePc' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SBSelectableTextButtonCmnBtn27_DebugWeaponVisible) == 0x0002D0, "Member 'UUMG_PhotoModePlayerListItem_C::SBSelectableTextButtonCmnBtn27_DebugWeaponVisible' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SBSelectableTextButtonCmnBtn27_FixEye) == 0x0002D8, "Member 'UUMG_PhotoModePlayerListItem_C::SBSelectableTextButtonCmnBtn27_FixEye' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SBSelectableTextButtonCmnBtn27_FixHead) == 0x0002E0, "Member 'UUMG_PhotoModePlayerListItem_C::SBSelectableTextButtonCmnBtn27_FixHead' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SBSelectableTextButtonCmnBtn27_LookAtActive) == 0x0002E8, "Member 'UUMG_PhotoModePlayerListItem_C::SBSelectableTextButtonCmnBtn27_LookAtActive' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SBSelectableTextButtonCmnBtn27_LookAtEyeActive) == 0x0002F0, "Member 'UUMG_PhotoModePlayerListItem_C::SBSelectableTextButtonCmnBtn27_LookAtEyeActive' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SizeBox_DebugHidePc) == 0x0002F8, "Member 'UUMG_PhotoModePlayerListItem_C::SizeBox_DebugHidePc' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, SizeBox_DebugWeaponVisible) == 0x000300, "Member 'UUMG_PhotoModePlayerListItem_C::SizeBox_DebugWeaponVisible' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, WidgetSwitcher_Icon) == 0x000308, "Member 'UUMG_PhotoModePlayerListItem_C::WidgetSwitcher_Icon' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, WidgetSwitcher_MotionStop) == 0x000310, "Member 'UUMG_PhotoModePlayerListItem_C::WidgetSwitcher_MotionStop' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, WidgetSwitcher_Name) == 0x000318, "Member 'UUMG_PhotoModePlayerListItem_C::WidgetSwitcher_Name' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, WidgetSwitcher_Sync) == 0x000320, "Member 'UUMG_PhotoModePlayerListItem_C::WidgetSwitcher_Sync' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, WidgetSwitcher_Visible) == 0x000328, "Member 'UUMG_PhotoModePlayerListItem_C::WidgetSwitcher_Visible' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, bAllItem) == 0x000330, "Member 'UUMG_PhotoModePlayerListItem_C::bAllItem' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerListItem_C, PhotoModeCtrl) == 0x000338, "Member 'UUMG_PhotoModePlayerListItem_C::PhotoModeCtrl' has a wrong offset!");

}

