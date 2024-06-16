#pragma once

 

// Package: CommonEquipment2DImageParts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonEquipment2DImageParts.CommonEquipment2DImageParts_C
// 0x0048 (0x02C0 - 0x0278)
class UCommonEquipment2DImageParts_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 EquipmentImage;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsLoadingImage;                                   // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80E7[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempEquipmentId;                                   // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     TempItemType;                                      // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        TempImagineType;                                   // 0x0291(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80E8[0x6];                                     // 0x0292(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              TempEquipment2DTexture;                            // 0x0298(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonEquipment2DImageParts(int32 EntryPoint);
	void RequestEquipment2DImageLoad(int32 InEquipmentId, EItemType InEquipmentItemType, ESBImagineCategoryType InImagineType);
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1(class UObject* Loaded);
	void SetWeapon2DImage(int32 InWeaponID);
	void SetImagine2DImage(int32 InImagineId);
	void SetItem2DImage(int32 ItemId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonEquipment2DImageParts_C">();
	}
	static class UCommonEquipment2DImageParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonEquipment2DImageParts_C>();
	}
};
static_assert(alignof(UCommonEquipment2DImageParts_C) == 0x000008, "Wrong alignment on UCommonEquipment2DImageParts_C");
static_assert(sizeof(UCommonEquipment2DImageParts_C) == 0x0002C0, "Wrong size on UCommonEquipment2DImageParts_C");
static_assert(offsetof(UCommonEquipment2DImageParts_C, UberGraphFrame) == 0x000278, "Member 'UCommonEquipment2DImageParts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonEquipment2DImageParts_C, EquipmentImage) == 0x000280, "Member 'UCommonEquipment2DImageParts_C::EquipmentImage' has a wrong offset!");
static_assert(offsetof(UCommonEquipment2DImageParts_C, bIsLoadingImage) == 0x000288, "Member 'UCommonEquipment2DImageParts_C::bIsLoadingImage' has a wrong offset!");
static_assert(offsetof(UCommonEquipment2DImageParts_C, TempEquipmentId) == 0x00028C, "Member 'UCommonEquipment2DImageParts_C::TempEquipmentId' has a wrong offset!");
static_assert(offsetof(UCommonEquipment2DImageParts_C, TempItemType) == 0x000290, "Member 'UCommonEquipment2DImageParts_C::TempItemType' has a wrong offset!");
static_assert(offsetof(UCommonEquipment2DImageParts_C, TempImagineType) == 0x000291, "Member 'UCommonEquipment2DImageParts_C::TempImagineType' has a wrong offset!");
static_assert(offsetof(UCommonEquipment2DImageParts_C, TempEquipment2DTexture) == 0x000298, "Member 'UCommonEquipment2DImageParts_C::TempEquipment2DTexture' has a wrong offset!");

}

