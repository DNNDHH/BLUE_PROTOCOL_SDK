#pragma once

 

// Package: CommonToolTip_AbilityPerk

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C
// 0x0018 (0x0290 - 0x0278)
class UCommonToolTip_AbilityPerk_C final : public UUserWidget
{
public:
	class UImage*                                 Image_line;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAbilityDesc;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAbilityName;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetAbilityNameText(const class FText& InText);
	void SetAbilityDescText(const class FText& InText);
	void SetAbilityPerkID(int32 PerkId);
	void SetWeaponPerkData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonToolTip_AbilityPerk_C">();
	}
	static class UCommonToolTip_AbilityPerk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonToolTip_AbilityPerk_C>();
	}
};
static_assert(alignof(UCommonToolTip_AbilityPerk_C) == 0x000008, "Wrong alignment on UCommonToolTip_AbilityPerk_C");
static_assert(sizeof(UCommonToolTip_AbilityPerk_C) == 0x000290, "Wrong size on UCommonToolTip_AbilityPerk_C");
static_assert(offsetof(UCommonToolTip_AbilityPerk_C, Image_line) == 0x000278, "Member 'UCommonToolTip_AbilityPerk_C::Image_line' has a wrong offset!");
static_assert(offsetof(UCommonToolTip_AbilityPerk_C, TxtAbilityDesc) == 0x000280, "Member 'UCommonToolTip_AbilityPerk_C::TxtAbilityDesc' has a wrong offset!");
static_assert(offsetof(UCommonToolTip_AbilityPerk_C, TxtAbilityName) == 0x000288, "Member 'UCommonToolTip_AbilityPerk_C::TxtAbilityName' has a wrong offset!");

}

