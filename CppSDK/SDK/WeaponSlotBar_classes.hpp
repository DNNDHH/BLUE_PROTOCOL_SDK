#pragma once

 

// Package: WeaponSlotBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "WeaponSlotType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSlotBar.WeaponSlotBar_C
// 0x0040 (0x02B8 - 0x0278)
class UWeaponSlotBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWeaponSlotItem_C*                      Slot1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSlotItem_C*                      Slot2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSlotItem_C*                      Slot3;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSlotItem_C*                      Slot4;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWeaponSlotItem_C*>              SlotList;                                          // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         OpenSlot;                                          // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UseSlot;                                           // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponSlotBar(int32 EntryPoint);
	void SetSlotData(int32 Param_OpenSlot, int32 Param_UseSlot);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSlotBar_C">();
	}
	static class UWeaponSlotBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSlotBar_C>();
	}
};
static_assert(alignof(UWeaponSlotBar_C) == 0x000008, "Wrong alignment on UWeaponSlotBar_C");
static_assert(sizeof(UWeaponSlotBar_C) == 0x0002B8, "Wrong size on UWeaponSlotBar_C");
static_assert(offsetof(UWeaponSlotBar_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSlotBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSlotBar_C, Slot1) == 0x000280, "Member 'UWeaponSlotBar_C::Slot1' has a wrong offset!");
static_assert(offsetof(UWeaponSlotBar_C, Slot2) == 0x000288, "Member 'UWeaponSlotBar_C::Slot2' has a wrong offset!");
static_assert(offsetof(UWeaponSlotBar_C, Slot3) == 0x000290, "Member 'UWeaponSlotBar_C::Slot3' has a wrong offset!");
static_assert(offsetof(UWeaponSlotBar_C, Slot4) == 0x000298, "Member 'UWeaponSlotBar_C::Slot4' has a wrong offset!");
static_assert(offsetof(UWeaponSlotBar_C, SlotList) == 0x0002A0, "Member 'UWeaponSlotBar_C::SlotList' has a wrong offset!");
static_assert(offsetof(UWeaponSlotBar_C, OpenSlot) == 0x0002B0, "Member 'UWeaponSlotBar_C::OpenSlot' has a wrong offset!");
static_assert(offsetof(UWeaponSlotBar_C, UseSlot) == 0x0002B4, "Member 'UWeaponSlotBar_C::UseSlot' has a wrong offset!");

}

