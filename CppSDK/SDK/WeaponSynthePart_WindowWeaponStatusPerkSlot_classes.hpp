#pragma once

 

// Package: WeaponSynthePart_WindowWeaponStatusPerkSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C
// 0x0058 (0x02D0 - 0x0278)
class UWeaponSynthePart_WindowWeaponStatusPerkSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWeaponSynthePart_PerkSlotBox_C*        PerkSlotBox;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_WindowWeaponStatus_C* WeaponStatus;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_BG;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedPerkSlot;                                 // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnProtectNumChanged;                               // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsTopTextVisible;                                  // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CB8[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTextTableAsset*                      TopTextTable;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TopTextID;                                         // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnProtectNumChanged__DelegateSignature(int32 ProtectNum);
	void OnClickedPerkSlot__DelegateSignature(int32 SlotNo);
	void ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot(int32 EntryPoint);
	void BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature(int32 SlotNo);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature(int32 ProtectNum);
	void SetupSynthe(const struct FOwnItemInfo& WeaponData);
	void SetupRebuilder(const struct FOwnItemInfo& WeaponData);
	void SetupRemove(const struct FOwnItemInfo& WeaponData);
	void SetupExtender(const struct FOwnItemInfo& WeaponData);
	void GetPerkSlotBox(class UWeaponSynthePart_PerkSlotBox_C** Param_PerkSlotBox);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_WindowWeaponStatusPerkSlot_C">();
	}
	static class UWeaponSynthePart_WindowWeaponStatusPerkSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_WindowWeaponStatusPerkSlot_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_WindowWeaponStatusPerkSlot_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_WindowWeaponStatusPerkSlot_C");
static_assert(sizeof(UWeaponSynthePart_WindowWeaponStatusPerkSlot_C) == 0x0002D0, "Wrong size on UWeaponSynthePart_WindowWeaponStatusPerkSlot_C");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatusPerkSlot_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatusPerkSlot_C, PerkSlotBox) == 0x000280, "Member 'UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::PerkSlotBox' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatusPerkSlot_C, WeaponStatus) == 0x000288, "Member 'UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::WeaponStatus' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatusPerkSlot_C, WS_BG) == 0x000290, "Member 'UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::WS_BG' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatusPerkSlot_C, OnClickedPerkSlot) == 0x000298, "Member 'UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::OnClickedPerkSlot' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatusPerkSlot_C, OnProtectNumChanged) == 0x0002A8, "Member 'UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::OnProtectNumChanged' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatusPerkSlot_C, IsTopTextVisible) == 0x0002B8, "Member 'UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::IsTopTextVisible' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatusPerkSlot_C, TopTextTable) == 0x0002C0, "Member 'UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::TopTextTable' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowWeaponStatusPerkSlot_C, TopTextID) == 0x0002C8, "Member 'UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::TopTextID' has a wrong offset!");

}

