#pragma once

 

// Package: CommonEquipmentImagePartsBase

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C
// 0x0020 (0x0298 - 0x0278)
class UCommonEquipmentImagePartsBase_C final : public UUserWidget
{
public:
	class UCommonEquipment2DImageParts_C*         Equipment2DImageParts;                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentModelCaptureImageParts_C* EquipmentModelCaptureImageParts;                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForEquipmentImage;                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsImageType2D;                                    // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SwitchImageType(bool InIs2DImage);
	void SwitchModelTypeWeaponOrImagine(bool InIsWeapon);
	void SetWeapon2DImage(int32 InWeaponID);
	void SetImagine2DImage(int32 InImagineId);
	void SetModelCaptureImageVisibility(bool InIsVisible);
	void SetItem2DImage(int32 ItemId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonEquipmentImagePartsBase_C">();
	}
	static class UCommonEquipmentImagePartsBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonEquipmentImagePartsBase_C>();
	}
};
static_assert(alignof(UCommonEquipmentImagePartsBase_C) == 0x000008, "Wrong alignment on UCommonEquipmentImagePartsBase_C");
static_assert(sizeof(UCommonEquipmentImagePartsBase_C) == 0x000298, "Wrong size on UCommonEquipmentImagePartsBase_C");
static_assert(offsetof(UCommonEquipmentImagePartsBase_C, Equipment2DImageParts) == 0x000278, "Member 'UCommonEquipmentImagePartsBase_C::Equipment2DImageParts' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentImagePartsBase_C, EquipmentModelCaptureImageParts) == 0x000280, "Member 'UCommonEquipmentImagePartsBase_C::EquipmentModelCaptureImageParts' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentImagePartsBase_C, SwitcherForEquipmentImage) == 0x000288, "Member 'UCommonEquipmentImagePartsBase_C::SwitcherForEquipmentImage' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentImagePartsBase_C, bIsImageType2D) == 0x000290, "Member 'UCommonEquipmentImagePartsBase_C::bIsImageType2D' has a wrong offset!");

}

