#pragma once

 

// Package: WeaponButtonViewPerkList

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponButtonViewPerkList.WeaponButtonViewPerkList_C
// 0x0038 (0x02B0 - 0x0278)
class UWeaponButtonViewPerkList_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           Cvs_NoSlot;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponButtonViewPerkListItem_C*        Slot1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponButtonViewPerkListItem_C*        Slot2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponButtonViewPerkListItem_C*        Slot3;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponButtonViewPerkListItem_C*        Slot4;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Slot;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_SlotView;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetPerkData(const struct FSBWeaponItemData& WeaponData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponButtonViewPerkList_C">();
	}
	static class UWeaponButtonViewPerkList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponButtonViewPerkList_C>();
	}
};
static_assert(alignof(UWeaponButtonViewPerkList_C) == 0x000008, "Wrong alignment on UWeaponButtonViewPerkList_C");
static_assert(sizeof(UWeaponButtonViewPerkList_C) == 0x0002B0, "Wrong size on UWeaponButtonViewPerkList_C");
static_assert(offsetof(UWeaponButtonViewPerkList_C, Cvs_NoSlot) == 0x000278, "Member 'UWeaponButtonViewPerkList_C::Cvs_NoSlot' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkList_C, Slot1) == 0x000280, "Member 'UWeaponButtonViewPerkList_C::Slot1' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkList_C, Slot2) == 0x000288, "Member 'UWeaponButtonViewPerkList_C::Slot2' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkList_C, Slot3) == 0x000290, "Member 'UWeaponButtonViewPerkList_C::Slot3' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkList_C, Slot4) == 0x000298, "Member 'UWeaponButtonViewPerkList_C::Slot4' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkList_C, VB_Slot) == 0x0002A0, "Member 'UWeaponButtonViewPerkList_C::VB_Slot' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkList_C, WS_SlotView) == 0x0002A8, "Member 'UWeaponButtonViewPerkList_C::WS_SlotView' has a wrong offset!");

}

