#pragma once

 

// Package: MyCharaMenu_EquipRingHandSelectDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_EquipRingHandSelectDialog.MyCharaMenu_EquipRingHandSelectDialog_C
// 0x0078 (0x0328 - 0x02B0)
class UMyCharaMenu_EquipRingHandSelectDialog_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg01;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnLeftHand;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnRightHand;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreen;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtLeftHand;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtRightHand;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUIBlocker_C*                           EndBlocker;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void OnSelected__DelegateSignature(bool InIsLeftHand);
	void ExecuteUbergraph_MyCharaMenu_EquipRingHandSelectDialog(int32 EntryPoint);
	void BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnRightHand_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnRightHand_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnLeftHand_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MyCharaMenu_EquipRingHandSelectDialog_BtnLeftHand_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MyCharaMenu_EquipRingHandSelectDialog_CmnClose02_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature();
	void EventClose();
	void BndEvt__BtnLeftHand_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnPress_Cancel();
	void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BtnRightHand_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Show();
	void Hide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_EquipRingHandSelectDialog_C">();
	}
	static class UMyCharaMenu_EquipRingHandSelectDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_EquipRingHandSelectDialog_C>();
	}
};
static_assert(alignof(UMyCharaMenu_EquipRingHandSelectDialog_C) == 0x000008, "Wrong alignment on UMyCharaMenu_EquipRingHandSelectDialog_C");
static_assert(sizeof(UMyCharaMenu_EquipRingHandSelectDialog_C) == 0x000328, "Wrong size on UMyCharaMenu_EquipRingHandSelectDialog_C");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, Bg01) == 0x0002B8, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::Bg01' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, BtnLeftHand) == 0x0002C0, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::BtnLeftHand' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, BtnRightHand) == 0x0002C8, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::BtnRightHand' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, BtnScreen) == 0x0002D0, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, CmnClose02) == 0x0002D8, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, LineImage) == 0x0002E0, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::LineImage' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, TxtLeftHand) == 0x0002E8, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::TxtLeftHand' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, TxtRightHand) == 0x0002F0, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::TxtRightHand' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, UIBlocker) == 0x0002F8, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, OnClose) == 0x000300, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::OnClose' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, EndBlocker) == 0x000310, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::EndBlocker' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EquipRingHandSelectDialog_C, OnSelected) == 0x000318, "Member 'UMyCharaMenu_EquipRingHandSelectDialog_C::OnSelected' has a wrong offset!");

}

