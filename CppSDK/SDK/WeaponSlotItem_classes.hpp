#pragma once

 

// Package: WeaponSlotItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "WeaponSlotType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSlotItem.WeaponSlotItem_C
// 0x0028 (0x02A0 - 0x0278)
class UWeaponSlotItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_Close;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Open;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Used;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_SlotData;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponSlotItem(int32 EntryPoint);
	void SetViewMode(EWeaponSlotType ViewType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSlotItem_C">();
	}
	static class UWeaponSlotItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSlotItem_C>();
	}
};
static_assert(alignof(UWeaponSlotItem_C) == 0x000008, "Wrong alignment on UWeaponSlotItem_C");
static_assert(sizeof(UWeaponSlotItem_C) == 0x0002A0, "Wrong size on UWeaponSlotItem_C");
static_assert(offsetof(UWeaponSlotItem_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSlotItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSlotItem_C, Img_Close) == 0x000280, "Member 'UWeaponSlotItem_C::Img_Close' has a wrong offset!");
static_assert(offsetof(UWeaponSlotItem_C, Img_Open) == 0x000288, "Member 'UWeaponSlotItem_C::Img_Open' has a wrong offset!");
static_assert(offsetof(UWeaponSlotItem_C, Img_Used) == 0x000290, "Member 'UWeaponSlotItem_C::Img_Used' has a wrong offset!");
static_assert(offsetof(UWeaponSlotItem_C, WS_SlotData) == 0x000298, "Member 'UWeaponSlotItem_C::WS_SlotData' has a wrong offset!");

}

