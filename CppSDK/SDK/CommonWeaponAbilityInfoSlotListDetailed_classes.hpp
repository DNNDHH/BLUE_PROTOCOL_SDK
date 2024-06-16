#pragma once

 

// Package: CommonWeaponAbilityInfoSlotListDetailed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C
// 0x0038 (0x02B0 - 0x0278)
class UCommonWeaponAbilityInfoSlotListDetailed_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonWeaponAbilityInfoSlotDetailed_C* SlotDetailed1;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotDetailed_C* SlotDetailed2;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotDetailed_C* SlotDetailed3;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotDetailed_C* SlotDetailed4;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_SlotDetailed;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SlotNumMax;                                        // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void InitAllSlot();
	void GetSlot(int32 InSlotId, bool* IsValid, class UCommonWeaponAbilityInfoSlotDetailed_C** OutSlot);
	void SetSlotInfo(const struct FSBWeaponItemData& InWeaponItemData);
	void SetSlotEmpty(int32 InSlotId, bool InIsEmpty);
	void SetSlotOccupancy(int32 InSlotId, int32 InOccupancyNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonWeaponAbilityInfoSlotListDetailed_C">();
	}
	static class UCommonWeaponAbilityInfoSlotListDetailed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonWeaponAbilityInfoSlotListDetailed_C>();
	}
};
static_assert(alignof(UCommonWeaponAbilityInfoSlotListDetailed_C) == 0x000008, "Wrong alignment on UCommonWeaponAbilityInfoSlotListDetailed_C");
static_assert(sizeof(UCommonWeaponAbilityInfoSlotListDetailed_C) == 0x0002B0, "Wrong size on UCommonWeaponAbilityInfoSlotListDetailed_C");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotListDetailed_C, UberGraphFrame) == 0x000278, "Member 'UCommonWeaponAbilityInfoSlotListDetailed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotListDetailed_C, SlotDetailed1) == 0x000280, "Member 'UCommonWeaponAbilityInfoSlotListDetailed_C::SlotDetailed1' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotListDetailed_C, SlotDetailed2) == 0x000288, "Member 'UCommonWeaponAbilityInfoSlotListDetailed_C::SlotDetailed2' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotListDetailed_C, SlotDetailed3) == 0x000290, "Member 'UCommonWeaponAbilityInfoSlotListDetailed_C::SlotDetailed3' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotListDetailed_C, SlotDetailed4) == 0x000298, "Member 'UCommonWeaponAbilityInfoSlotListDetailed_C::SlotDetailed4' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotListDetailed_C, VBox_SlotDetailed) == 0x0002A0, "Member 'UCommonWeaponAbilityInfoSlotListDetailed_C::VBox_SlotDetailed' has a wrong offset!");
static_assert(offsetof(UCommonWeaponAbilityInfoSlotListDetailed_C, SlotNumMax) == 0x0002A8, "Member 'UCommonWeaponAbilityInfoSlotListDetailed_C::SlotNumMax' has a wrong offset!");

}

