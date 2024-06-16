#pragma once

 

// Package: CraftResultWeaponSingle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CraftResultWeaponSingle.CraftResultWeaponSingle_C
// 0x0068 (0x02E0 - 0x0278)
class UCraftResultWeaponSingle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonEquipmentStatusDescWithImageView_C* CommonEquipmentStatusDescWithImageView;            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_SlotBag;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_SlotStorage;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_64;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_242;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_360;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkSlotView_C*                        PerkSlotView;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_StorageDisp;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 UID;                                               // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CraftResultWeaponSingle(int32 EntryPoint);
	void SetUID(const class FString& Param_UID, int32 StorageNo, bool IsCritical);
	void UpdateStorageDisp(bool IsStorage);
	void UpdatePerkDisp(class USBOwnItemListContainer* Storage, bool IsCritical);
	void PlayAnimIn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CraftResultWeaponSingle_C">();
	}
	static class UCraftResultWeaponSingle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftResultWeaponSingle_C>();
	}
};
static_assert(alignof(UCraftResultWeaponSingle_C) == 0x000008, "Wrong alignment on UCraftResultWeaponSingle_C");
static_assert(sizeof(UCraftResultWeaponSingle_C) == 0x0002E0, "Wrong size on UCraftResultWeaponSingle_C");
static_assert(offsetof(UCraftResultWeaponSingle_C, UberGraphFrame) == 0x000278, "Member 'UCraftResultWeaponSingle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponSingle_C, AnimIn) == 0x000280, "Member 'UCraftResultWeaponSingle_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponSingle_C, CommonEquipmentStatusDescWithImageView) == 0x000288, "Member 'UCraftResultWeaponSingle_C::CommonEquipmentStatusDescWithImageView' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponSingle_C, HB_SlotBag) == 0x000290, "Member 'UCraftResultWeaponSingle_C::HB_SlotBag' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponSingle_C, HB_SlotStorage) == 0x000298, "Member 'UCraftResultWeaponSingle_C::HB_SlotStorage' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponSingle_C, Image_64) == 0x0002A0, "Member 'UCraftResultWeaponSingle_C::Image_64' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponSingle_C, Image_103) == 0x0002A8, "Member 'UCraftResultWeaponSingle_C::Image_103' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponSingle_C, Image_242) == 0x0002B0, "Member 'UCraftResultWeaponSingle_C::Image_242' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponSingle_C, Image_360) == 0x0002B8, "Member 'UCraftResultWeaponSingle_C::Image_360' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponSingle_C, PerkSlotView) == 0x0002C0, "Member 'UCraftResultWeaponSingle_C::PerkSlotView' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponSingle_C, WS_StorageDisp) == 0x0002C8, "Member 'UCraftResultWeaponSingle_C::WS_StorageDisp' has a wrong offset!");
static_assert(offsetof(UCraftResultWeaponSingle_C, UID) == 0x0002D0, "Member 'UCraftResultWeaponSingle_C::UID' has a wrong offset!");

}

