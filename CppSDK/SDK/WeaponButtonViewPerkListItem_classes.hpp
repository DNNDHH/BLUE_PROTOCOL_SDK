#pragma once

 

// Package: WeaponButtonViewPerkListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C
// 0x0060 (0x02D8 - 0x0278)
class UWeaponButtonViewPerkListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Item1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Item2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Item3;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Item4;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Slot1;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Slot2;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Slot3;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Slot4;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBPerkRarityView_C*                StackBPerkRarityView;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_PerkName;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Sizer;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponButtonViewPerkListItem(int32 EntryPoint);
	void Set_Perk_Data(const struct FSBCharacterWeaponPerkData& PerkData);
	void Set_EmptySlot();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponButtonViewPerkListItem_C">();
	}
	static class UWeaponButtonViewPerkListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponButtonViewPerkListItem_C>();
	}
};
static_assert(alignof(UWeaponButtonViewPerkListItem_C) == 0x000008, "Wrong alignment on UWeaponButtonViewPerkListItem_C");
static_assert(sizeof(UWeaponButtonViewPerkListItem_C) == 0x0002D8, "Wrong size on UWeaponButtonViewPerkListItem_C");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, UberGraphFrame) == 0x000278, "Member 'UWeaponButtonViewPerkListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, Item1) == 0x000280, "Member 'UWeaponButtonViewPerkListItem_C::Item1' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, Item2) == 0x000288, "Member 'UWeaponButtonViewPerkListItem_C::Item2' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, Item3) == 0x000290, "Member 'UWeaponButtonViewPerkListItem_C::Item3' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, Item4) == 0x000298, "Member 'UWeaponButtonViewPerkListItem_C::Item4' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, Slot1) == 0x0002A0, "Member 'UWeaponButtonViewPerkListItem_C::Slot1' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, Slot2) == 0x0002A8, "Member 'UWeaponButtonViewPerkListItem_C::Slot2' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, Slot3) == 0x0002B0, "Member 'UWeaponButtonViewPerkListItem_C::Slot3' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, Slot4) == 0x0002B8, "Member 'UWeaponButtonViewPerkListItem_C::Slot4' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, StackBPerkRarityView) == 0x0002C0, "Member 'UWeaponButtonViewPerkListItem_C::StackBPerkRarityView' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, Txt_PerkName) == 0x0002C8, "Member 'UWeaponButtonViewPerkListItem_C::Txt_PerkName' has a wrong offset!");
static_assert(offsetof(UWeaponButtonViewPerkListItem_C, WS_Sizer) == 0x0002D0, "Member 'UWeaponButtonViewPerkListItem_C::WS_Sizer' has a wrong offset!");

}

