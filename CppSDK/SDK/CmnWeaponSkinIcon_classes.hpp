#pragma once

 

// Package: CmnWeaponSkinIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnWeaponSkinIcon.CmnWeaponSkinIcon_C
// 0x0068 (0x02E0 - 0x0278)
class UCmnWeaponSkinIcon_C final : public UUserWidget
{
public:
	class UImage*                                 LimitedMarkIcon;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WeaponSkinIcon;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBWeaponItemData                      WeaponItemData;                                    // 0x0288(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUserWidget*                            CachedToolTipWidget;                               // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetWeaponSkinInfo(const struct FSBWeaponItemData& InWeaponItemData);
	void CreateTooltipWidget(bool InIsSkinAttached, int32 InWeaponSkinId, bool InIsTermLimited, const struct FDateTime& InExpiryDateTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnWeaponSkinIcon_C">();
	}
	static class UCmnWeaponSkinIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnWeaponSkinIcon_C>();
	}
};
static_assert(alignof(UCmnWeaponSkinIcon_C) == 0x000008, "Wrong alignment on UCmnWeaponSkinIcon_C");
static_assert(sizeof(UCmnWeaponSkinIcon_C) == 0x0002E0, "Wrong size on UCmnWeaponSkinIcon_C");
static_assert(offsetof(UCmnWeaponSkinIcon_C, LimitedMarkIcon) == 0x000278, "Member 'UCmnWeaponSkinIcon_C::LimitedMarkIcon' has a wrong offset!");
static_assert(offsetof(UCmnWeaponSkinIcon_C, WeaponSkinIcon) == 0x000280, "Member 'UCmnWeaponSkinIcon_C::WeaponSkinIcon' has a wrong offset!");
static_assert(offsetof(UCmnWeaponSkinIcon_C, WeaponItemData) == 0x000288, "Member 'UCmnWeaponSkinIcon_C::WeaponItemData' has a wrong offset!");
static_assert(offsetof(UCmnWeaponSkinIcon_C, CachedToolTipWidget) == 0x0002D8, "Member 'UCmnWeaponSkinIcon_C::CachedToolTipWidget' has a wrong offset!");

}

