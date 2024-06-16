#pragma once

 

// Package: WeaponSynthePart_TagChange

#include "Basic.hpp"

#include "SlotDataChangeType_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_TagChange.WeaponSynthePart_TagChange_C
// 0x0008 (0x0280 - 0x0278)
class UWeaponSynthePart_TagChange_C final : public UUserWidget
{
public:
	class UWidgetSwitcher*                        WS_Change;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Setup(ESlotDataChangeType Type);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_TagChange_C">();
	}
	static class UWeaponSynthePart_TagChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_TagChange_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_TagChange_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_TagChange_C");
static_assert(sizeof(UWeaponSynthePart_TagChange_C) == 0x000280, "Wrong size on UWeaponSynthePart_TagChange_C");
static_assert(offsetof(UWeaponSynthePart_TagChange_C, WS_Change) == 0x000278, "Member 'UWeaponSynthePart_TagChange_C::WS_Change' has a wrong offset!");

}

