#pragma once

 

// Package: InventoryUsed

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InventoryUsed.InventoryUsed_C
// 0x0008 (0x0280 - 0x0278)
class UInventoryUsed_C final : public UUserWidget
{
public:
	class UWidgetSwitcher*                        SwitchUsed;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetUsed(bool bUsed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InventoryUsed_C">();
	}
	static class UInventoryUsed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryUsed_C>();
	}
};
static_assert(alignof(UInventoryUsed_C) == 0x000008, "Wrong alignment on UInventoryUsed_C");
static_assert(sizeof(UInventoryUsed_C) == 0x000280, "Wrong size on UInventoryUsed_C");
static_assert(offsetof(UInventoryUsed_C, SwitchUsed) == 0x000278, "Member 'UInventoryUsed_C::SwitchUsed' has a wrong offset!");

}

