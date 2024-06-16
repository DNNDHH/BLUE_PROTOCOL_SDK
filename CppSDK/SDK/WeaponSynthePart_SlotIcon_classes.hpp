#pragma once

 

// Package: WeaponSynthePart_SlotIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_SlotIcon.WeaponSynthePart_SlotIcon_C
// 0x0008 (0x0280 - 0x0278)
class UWeaponSynthePart_SlotIcon_C final : public UUserWidget
{
public:
	class UWidgetSwitcher*                        WS_Icon;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetSlot(int32 SlotNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_SlotIcon_C">();
	}
	static class UWeaponSynthePart_SlotIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_SlotIcon_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_SlotIcon_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_SlotIcon_C");
static_assert(sizeof(UWeaponSynthePart_SlotIcon_C) == 0x000280, "Wrong size on UWeaponSynthePart_SlotIcon_C");
static_assert(offsetof(UWeaponSynthePart_SlotIcon_C, WS_Icon) == 0x000278, "Member 'UWeaponSynthePart_SlotIcon_C::WS_Icon' has a wrong offset!");

}

