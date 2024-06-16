#pragma once

 

// Package: Desc_WeaponSynthe

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Desc_WeaponSynthe.Desc_WeaponSynthe_C
// 0x0018 (0x0290 - 0x0278)
class UDesc_WeaponSynthe_C final : public UUserWidget
{
public:
	class UPerkSlotView_C*                        PerkSlotView;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextInfomation;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_WindowWeaponStatus_C* WeaponSynthePart_WindowWeaponStatus;               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetWeapon(const struct FOwnItemInfo& WeaponInfos);
	void SetFusionItem(int32 ItemId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Desc_WeaponSynthe_C">();
	}
	static class UDesc_WeaponSynthe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDesc_WeaponSynthe_C>();
	}
};
static_assert(alignof(UDesc_WeaponSynthe_C) == 0x000008, "Wrong alignment on UDesc_WeaponSynthe_C");
static_assert(sizeof(UDesc_WeaponSynthe_C) == 0x000290, "Wrong size on UDesc_WeaponSynthe_C");
static_assert(offsetof(UDesc_WeaponSynthe_C, PerkSlotView) == 0x000278, "Member 'UDesc_WeaponSynthe_C::PerkSlotView' has a wrong offset!");
static_assert(offsetof(UDesc_WeaponSynthe_C, TextInfomation) == 0x000280, "Member 'UDesc_WeaponSynthe_C::TextInfomation' has a wrong offset!");
static_assert(offsetof(UDesc_WeaponSynthe_C, WeaponSynthePart_WindowWeaponStatus) == 0x000288, "Member 'UDesc_WeaponSynthe_C::WeaponSynthePart_WindowWeaponStatus' has a wrong offset!");

}

