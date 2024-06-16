#pragma once

 

// Package: HUDConfigMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HUDConfigMode.HUDConfigMode_C
// 0x00F0 (0x0368 - 0x0278)
class UHUDConfigMode_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBComboBoxCmn01_C*                     Cmb_BasePlate;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_HelpDisplay;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LayoutEditDesc;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn17_C*                            StartEdit;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtHelpMsgLabel;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             StartEditMode;                                     // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FString, bool>                     CheckData;                                         // 0x02C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, ESBKeyGuideDisplayType>   KeyData;                                           // 0x0318(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	class UWidget* On_Cmb_HelpDisplay_GenerateWidget_0(const class FString& Item);
	class UWidget* On_Cmb_BasePlate_GenerateWidget_0(const class FString& Item);
	void GenerateCmbBox();
	void Construct();
	void EndEdit();
	void bEditMode(bool bisEditMode);
	void BndEvt__StartEdit_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void SyncKeyGuide();
	void ExecuteUbergraph_HUDConfigMode(int32 EntryPoint);
	void StartEditMode__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUDConfigMode_C">();
	}
	static class UHUDConfigMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUDConfigMode_C>();
	}
};
static_assert(alignof(UHUDConfigMode_C) == 0x000008, "Wrong alignment on UHUDConfigMode_C");
static_assert(sizeof(UHUDConfigMode_C) == 0x000368, "Wrong size on UHUDConfigMode_C");
static_assert(offsetof(UHUDConfigMode_C, UberGraphFrame) == 0x000278, "Member 'UHUDConfigMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHUDConfigMode_C, Cmb_BasePlate) == 0x000280, "Member 'UHUDConfigMode_C::Cmb_BasePlate' has a wrong offset!");
static_assert(offsetof(UHUDConfigMode_C, Cmb_HelpDisplay) == 0x000288, "Member 'UHUDConfigMode_C::Cmb_HelpDisplay' has a wrong offset!");
static_assert(offsetof(UHUDConfigMode_C, Image_0) == 0x000290, "Member 'UHUDConfigMode_C::Image_0' has a wrong offset!");
static_assert(offsetof(UHUDConfigMode_C, Image_1) == 0x000298, "Member 'UHUDConfigMode_C::Image_1' has a wrong offset!");
static_assert(offsetof(UHUDConfigMode_C, LayoutEditDesc) == 0x0002A0, "Member 'UHUDConfigMode_C::LayoutEditDesc' has a wrong offset!");
static_assert(offsetof(UHUDConfigMode_C, StartEdit) == 0x0002A8, "Member 'UHUDConfigMode_C::StartEdit' has a wrong offset!");
static_assert(offsetof(UHUDConfigMode_C, TxtHelpMsgLabel) == 0x0002B0, "Member 'UHUDConfigMode_C::TxtHelpMsgLabel' has a wrong offset!");
static_assert(offsetof(UHUDConfigMode_C, StartEditMode) == 0x0002B8, "Member 'UHUDConfigMode_C::StartEditMode' has a wrong offset!");
static_assert(offsetof(UHUDConfigMode_C, CheckData) == 0x0002C8, "Member 'UHUDConfigMode_C::CheckData' has a wrong offset!");
static_assert(offsetof(UHUDConfigMode_C, KeyData) == 0x000318, "Member 'UHUDConfigMode_C::KeyData' has a wrong offset!");

}

