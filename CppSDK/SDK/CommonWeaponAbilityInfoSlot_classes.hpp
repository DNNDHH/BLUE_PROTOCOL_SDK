#pragma once

 

// Package: CommonWeaponAbilityInfoSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C
// 0x0080 (0x02F8 - 0x0278)
class UCommonWeaponAbilityInfoSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 FusionItem1;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FusionItem2;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FusionItem3;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FusionItem4;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FusionItemNameTxt;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityView_C*                      PerkRarity;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Slot;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotOccupancyParts1;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotOccupancyParts2;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotOccupancyParts3;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotOccupancyParts4;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_SlotOccupancyParts;                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UImage*>                         SlotOccupancyPartsArray;                           // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         SlotWidth;                                         // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonWeaponAbilityInfoSlot(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetIsSlotEmpty(bool InIsEmpty);
	void SetSlotOccupancy(int32 InOccupancyNum);
	void SetFusionItemName(const class FString& InName);
	void SetPerkRarity(int32 InRarity);
	void SetSlotWidth(float InSlotWidth);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonWeaponAbilityInfoSlot_C">();
	}
	static class UCommonWeaponAbilityInfoSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonWeaponAbilityInfoSlot_C>();
	}
};
static_assert(alignof(UCommonWeaponAbilityInfoSlot_C) == 0x000008, "Wrong alignment on UCommonWeaponAbilityInfoSlot_C");
static_assert(sizeof(UCommonWeaponAbilityInfoSlot_C) == 0x0002F8, "Wrong size on UCommonWeaponAbilityInfoSlot_C");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, UberGraphFrame) == 0x000278, "Member 'UCommonWeaponAbilityInfoSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, FusionItem1) == 0x000280, "Member 'UCommonWeaponAbilityInfoSlot_C::FusionItem1' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, FusionItem2) == 0x000288, "Member 'UCommonWeaponAbilityInfoSlot_C::FusionItem2' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, FusionItem3) == 0x000290, "Member 'UCommonWeaponAbilityInfoSlot_C::FusionItem3' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, FusionItem4) == 0x000298, "Member 'UCommonWeaponAbilityInfoSlot_C::FusionItem4' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, FusionItemNameTxt) == 0x0002A0, "Member 'UCommonWeaponAbilityInfoSlot_C::FusionItemNameTxt' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, PerkRarity) == 0x0002A8, "Member 'UCommonWeaponAbilityInfoSlot_C::PerkRarity' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, SizeBox_Slot) == 0x0002B0, "Member 'UCommonWeaponAbilityInfoSlot_C::SizeBox_Slot' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, SlotOccupancyParts1) == 0x0002B8, "Member 'UCommonWeaponAbilityInfoSlot_C::SlotOccupancyParts1' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, SlotOccupancyParts2) == 0x0002C0, "Member 'UCommonWeaponAbilityInfoSlot_C::SlotOccupancyParts2' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, SlotOccupancyParts3) == 0x0002C8, "Member 'UCommonWeaponAbilityInfoSlot_C::SlotOccupancyParts3' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, SlotOccupancyParts4) == 0x0002D0, "Member 'UCommonWeaponAbilityInfoSlot_C::SlotOccupancyParts4' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, Switcher_SlotOccupancyParts) == 0x0002D8, "Member 'UCommonWeaponAbilityInfoSlot_C::Switcher_SlotOccupancyParts' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, SlotOccupancyPartsArray) == 0x0002E0, "Member 'UCommonWeaponAbilityInfoSlot_C::SlotOccupancyPartsArray' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlot_C, SlotWidth) == 0x0002F0, "Member 'UCommonWeaponAbilityInfoSlot_C::SlotWidth' has a wrong offset!");

}

