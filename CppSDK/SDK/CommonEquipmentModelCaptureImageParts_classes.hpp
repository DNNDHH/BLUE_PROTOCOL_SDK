#pragma once

 

// Package: CommonEquipmentModelCaptureImageParts

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C
// 0x0020 (0x0298 - 0x0278)
class UCommonEquipmentModelCaptureImageParts_C final : public UUserWidget
{
public:
	class UImage*                                 BattleImagineModelImage;                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WeaponModelImage;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherForModelImage;                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SwitchModelImageForWeaponOrImagine(bool InIsForWeapon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonEquipmentModelCaptureImageParts_C">();
	}
	static class UCommonEquipmentModelCaptureImageParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonEquipmentModelCaptureImageParts_C>();
	}
};
static_assert(alignof(UCommonEquipmentModelCaptureImageParts_C) == 0x000008, "Wrong alignment on UCommonEquipmentModelCaptureImageParts_C");
static_assert(sizeof(UCommonEquipmentModelCaptureImageParts_C) == 0x000298, "Wrong size on UCommonEquipmentModelCaptureImageParts_C");
static_assert(offsetof(UCommonEquipmentModelCaptureImageParts_C, BattleImagineModelImage) == 0x000278, "Member 'UCommonEquipmentModelCaptureImageParts_C::BattleImagineModelImage' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentModelCaptureImageParts_C, CmnOperationRotate) == 0x000280, "Member 'UCommonEquipmentModelCaptureImageParts_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentModelCaptureImageParts_C, WeaponModelImage) == 0x000288, "Member 'UCommonEquipmentModelCaptureImageParts_C::WeaponModelImage' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentModelCaptureImageParts_C, WidgetSwitcherForModelImage) == 0x000290, "Member 'UCommonEquipmentModelCaptureImageParts_C::WidgetSwitcherForModelImage' has a wrong offset!");

}

