#pragma once

 

// Package: ProbabilityDisplay_WeaponCraftSlotTopItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_WeaponCraftSlotTopItem.ProbabilityDisplay_WeaponCraftSlotTopItem_C
// 0x0018 (0x0290 - 0x0278)
class UProbabilityDisplay_WeaponCraftSlotTopItem_C final : public UUserWidget
{
public:
	class UImage*                                 Base1;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base2;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base3;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_WeaponCraftSlotTopItem_C">();
	}
	static class UProbabilityDisplay_WeaponCraftSlotTopItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_WeaponCraftSlotTopItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_WeaponCraftSlotTopItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_WeaponCraftSlotTopItem_C");
static_assert(sizeof(UProbabilityDisplay_WeaponCraftSlotTopItem_C) == 0x000290, "Wrong size on UProbabilityDisplay_WeaponCraftSlotTopItem_C");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftSlotTopItem_C, Base1) == 0x000278, "Member 'UProbabilityDisplay_WeaponCraftSlotTopItem_C::Base1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftSlotTopItem_C, Base2) == 0x000280, "Member 'UProbabilityDisplay_WeaponCraftSlotTopItem_C::Base2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_WeaponCraftSlotTopItem_C, Base3) == 0x000288, "Member 'UProbabilityDisplay_WeaponCraftSlotTopItem_C::Base3' has a wrong offset!");

}

