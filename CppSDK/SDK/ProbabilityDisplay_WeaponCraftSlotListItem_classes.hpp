#pragma once

 

// Package: ProbabilityDisplay_WeaponCraftSlotListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_WeaponCraftSlotListItem.ProbabilityDisplay_WeaponCraftSlotListItem_C
// 0x0038 (0x02B0 - 0x0278)
class UProbabilityDisplay_WeaponCraftSlotListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base3;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GreatSuccessRateText;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SlotNumText;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SuccessRateText;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ProbabilityDisplay_WeaponCraftSlotListItem(int32 EntryPoint);
	void Setup(int32 SlotNum, int32 GreatSuccessRate, int32 SuccessRate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_WeaponCraftSlotListItem_C">();
	}
	static class UProbabilityDisplay_WeaponCraftSlotListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_WeaponCraftSlotListItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_WeaponCraftSlotListItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_WeaponCraftSlotListItem_C");
static_assert(sizeof(UProbabilityDisplay_WeaponCraftSlotListItem_C) == 0x0002B0, "Wrong size on UProbabilityDisplay_WeaponCraftSlotListItem_C");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftSlotListItem_C, UberGraphFrame) == 0x000278, "Member 'UProbabilityDisplay_WeaponCraftSlotListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftSlotListItem_C, Base1) == 0x000280, "Member 'UProbabilityDisplay_WeaponCraftSlotListItem_C::Base1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftSlotListItem_C, Base2) == 0x000288, "Member 'UProbabilityDisplay_WeaponCraftSlotListItem_C::Base2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftSlotListItem_C, Base3) == 0x000290, "Member 'UProbabilityDisplay_WeaponCraftSlotListItem_C::Base3' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftSlotListItem_C, GreatSuccessRateText) == 0x000298, "Member 'UProbabilityDisplay_WeaponCraftSlotListItem_C::GreatSuccessRateText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftSlotListItem_C, SlotNumText) == 0x0002A0, "Member 'UProbabilityDisplay_WeaponCraftSlotListItem_C::SlotNumText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftSlotListItem_C, SuccessRateText) == 0x0002A8, "Member 'UProbabilityDisplay_WeaponCraftSlotListItem_C::SuccessRateText' has a wrong offset!");

}

