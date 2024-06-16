#pragma once

 

// Package: WBP_InventoryMountImagineDispatched

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryMountImagineDispatched.WBP_InventoryMountImagineDispatched_C
// 0x0010 (0x0288 - 0x0278)
class UWBP_InventoryMountImagineDispatched_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           Dispatched;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconPlay;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryMountImagineDispatched_C">();
	}
	static class UWBP_InventoryMountImagineDispatched_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryMountImagineDispatched_C>();
	}
};
static_assert(alignof(UWBP_InventoryMountImagineDispatched_C) == 0x000008, "Wrong alignment on UWBP_InventoryMountImagineDispatched_C");
static_assert(sizeof(UWBP_InventoryMountImagineDispatched_C) == 0x000288, "Wrong size on UWBP_InventoryMountImagineDispatched_C");
static_assert(offsetof(UWBP_InventoryMountImagineDispatched_C, Dispatched) == 0x000278, "Member 'UWBP_InventoryMountImagineDispatched_C::Dispatched' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryMountImagineDispatched_C, IconPlay) == 0x000280, "Member 'UWBP_InventoryMountImagineDispatched_C::IconPlay' has a wrong offset!");

}

