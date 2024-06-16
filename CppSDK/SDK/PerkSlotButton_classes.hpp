#pragma once

 

// Package: PerkSlotButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PerkSlotButton.PerkSlotButton_C
// 0x0038 (0x02B0 - 0x0278)
class UPerkSlotButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Bdr_SlotDeficiency;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Select;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_selected;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponCustomPerkSlotItem_C*            WeaponCustomPerkSlotItem;                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectedItem;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelectedItem__DelegateSignature(class UPerkSlotButton_C* SelectedButton);
	void ExecuteUbergraph_PerkSlotButton(int32 EntryPoint);
	void BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetData(const struct FSBCharacterWeaponPerkData& SBCharacter_Weapon_Perk_Data);
	void SetSelected(bool bSelected);
	void SetSlotDeficiency(bool bDeficiency);

	void GetData(struct FSBCharacterWeaponPerkData* Data) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PerkSlotButton_C">();
	}
	static class UPerkSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerkSlotButton_C>();
	}
};
static_assert(alignof(UPerkSlotButton_C) == 0x000008, "Wrong alignment on UPerkSlotButton_C");
static_assert(sizeof(UPerkSlotButton_C) == 0x0002B0, "Wrong size on UPerkSlotButton_C");
static_assert(offsetof(UPerkSlotButton_C, UberGraphFrame) == 0x000278, "Member 'UPerkSlotButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPerkSlotButton_C, Bdr_SlotDeficiency) == 0x000280, "Member 'UPerkSlotButton_C::Bdr_SlotDeficiency' has a wrong offset!");
static_assert(offsetof(UPerkSlotButton_C, Btn_Select) == 0x000288, "Member 'UPerkSlotButton_C::Btn_Select' has a wrong offset!");
static_assert(offsetof(UPerkSlotButton_C, Img_selected) == 0x000290, "Member 'UPerkSlotButton_C::Img_selected' has a wrong offset!");
static_assert(offsetof(UPerkSlotButton_C, WeaponCustomPerkSlotItem) == 0x000298, "Member 'UPerkSlotButton_C::WeaponCustomPerkSlotItem' has a wrong offset!");
static_assert(offsetof(UPerkSlotButton_C, OnSelectedItem) == 0x0002A0, "Member 'UPerkSlotButton_C::OnSelectedItem' has a wrong offset!");

}

