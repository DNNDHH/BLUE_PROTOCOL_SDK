#pragma once

 

// Package: WeaponSynthePart_ButtonLock

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C
// 0x0098 (0x0310 - 0x0278)
class UWeaponSynthePart_ButtonLock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnLock;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnUnLock;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Lock;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_UnLock;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Lock;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          M_IsLock;                                          // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6911[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            ColorGray;                                         // 0x02C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            ColorWhite;                                        // 0x02E8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClicked__DelegateSignature(bool Param_IsLock);
	void ExecuteUbergraph_WeaponSynthePart_ButtonLock(int32 EntryPoint);
	void BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetLock(bool Param_IsLock);
	void SetLocking();

	void IsLock(bool* Param_IsLock) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_ButtonLock_C">();
	}
	static class UWeaponSynthePart_ButtonLock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_ButtonLock_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_ButtonLock_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_ButtonLock_C");
static_assert(sizeof(UWeaponSynthePart_ButtonLock_C) == 0x000310, "Wrong size on UWeaponSynthePart_ButtonLock_C");
static_assert(offsetof(UWeaponSynthePart_ButtonLock_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_ButtonLock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonLock_C, BtnLock) == 0x000280, "Member 'UWeaponSynthePart_ButtonLock_C::BtnLock' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonLock_C, BtnUnLock) == 0x000288, "Member 'UWeaponSynthePart_ButtonLock_C::BtnUnLock' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonLock_C, Txt_Lock) == 0x000290, "Member 'UWeaponSynthePart_ButtonLock_C::Txt_Lock' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonLock_C, Txt_UnLock) == 0x000298, "Member 'UWeaponSynthePart_ButtonLock_C::Txt_UnLock' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonLock_C, WS_Lock) == 0x0002A0, "Member 'UWeaponSynthePart_ButtonLock_C::WS_Lock' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonLock_C, OnClicked) == 0x0002A8, "Member 'UWeaponSynthePart_ButtonLock_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonLock_C, M_IsLock) == 0x0002B8, "Member 'UWeaponSynthePart_ButtonLock_C::M_IsLock' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonLock_C, ColorGray) == 0x0002C0, "Member 'UWeaponSynthePart_ButtonLock_C::ColorGray' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_ButtonLock_C, ColorWhite) == 0x0002E8, "Member 'UWeaponSynthePart_ButtonLock_C::ColorWhite' has a wrong offset!");

}

