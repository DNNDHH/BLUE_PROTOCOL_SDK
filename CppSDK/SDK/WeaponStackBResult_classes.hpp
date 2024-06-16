#pragma once

 

// Package: WeaponStackBResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponStackBResult.WeaponStackBResult_C
// 0x0248 (0x04C0 - 0x0278)
class UWeaponStackBResult_C final : public UUserWidget
{
public:
	class UCommonEquipmentStatusDescWithImageView_C* CommonEquipmentStatusDescWithImageView;            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_637;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_PerkSlotBox_C*        WeaponSynthePart_PerkSlotBox;                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           beforeData;                                        // 0x0290(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FOwnItemInfo                           AfterData;                                         // 0x03A8(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetBeforeData(const struct FOwnItemInfo& Param_beforeData);
	void SetAfterData(const struct FOwnItemInfo& Param_AfterData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponStackBResult_C">();
	}
	static class UWeaponStackBResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponStackBResult_C>();
	}
};
static_assert(alignof(UWeaponStackBResult_C) == 0x000008, "Wrong alignment on UWeaponStackBResult_C");
static_assert(sizeof(UWeaponStackBResult_C) == 0x0004C0, "Wrong size on UWeaponStackBResult_C");
static_assert(offsetof(UWeaponStackBResult_C, CommonEquipmentStatusDescWithImageView) == 0x000278, "Member 'UWeaponStackBResult_C::CommonEquipmentStatusDescWithImageView' has a wrong offset!");
static_assert(offsetof(UWeaponStackBResult_C, Image_637) == 0x000280, "Member 'UWeaponStackBResult_C::Image_637' has a wrong offset!");
static_assert(offsetof(UWeaponStackBResult_C, WeaponSynthePart_PerkSlotBox) == 0x000288, "Member 'UWeaponStackBResult_C::WeaponSynthePart_PerkSlotBox' has a wrong offset!");
static_assert(offsetof(UWeaponStackBResult_C, beforeData) == 0x000290, "Member 'UWeaponStackBResult_C::beforeData' has a wrong offset!");
static_assert(offsetof(UWeaponStackBResult_C, AfterData) == 0x0003A8, "Member 'UWeaponStackBResult_C::AfterData' has a wrong offset!");

}

