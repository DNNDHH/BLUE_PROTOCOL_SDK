#pragma once

 

// Package: AppearanceWeaponStickerDescColumn2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C
// 0x0058 (0x02D0 - 0x0278)
class UAppearanceWeaponStickerDescColumn2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonIcon_C*                          IconSticker;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LimitedMerk;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_StickerReleaseTime;            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtStickerIndefinite;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtStickerName;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtnOnOff02_C*                       WeaponStickerInUseBtn;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtnOnOff02_C*                       WeaponStickerRemoveBtn;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherStickerReleaseTime;                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryWeaponDescription_C*      InventoryWeaponDescription;                        // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StickerUse;                                        // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsStickerIndefinite;                               // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AppearanceWeaponStickerDescColumn2(int32 EntryPoint);
	void BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerInUseBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetWeaponStickerDesc(const struct FSBWeaponItemData& InWeaponData);
	void SetIsStickerIndefinite(bool InIsIndefinite);
	void SetStickerBtn(bool bOn);
	void GetStickerUse(bool* OutIsStickerUse);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AppearanceWeaponStickerDescColumn2_C">();
	}
	static class UAppearanceWeaponStickerDescColumn2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppearanceWeaponStickerDescColumn2_C>();
	}
};
static_assert(alignof(UAppearanceWeaponStickerDescColumn2_C) == 0x000008, "Wrong alignment on UAppearanceWeaponStickerDescColumn2_C");
static_assert(sizeof(UAppearanceWeaponStickerDescColumn2_C) == 0x0002D0, "Wrong size on UAppearanceWeaponStickerDescColumn2_C");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, UberGraphFrame) == 0x000278, "Member 'UAppearanceWeaponStickerDescColumn2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, IconSticker) == 0x000280, "Member 'UAppearanceWeaponStickerDescColumn2_C::IconSticker' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, Image_LimitedMerk) == 0x000288, "Member 'UAppearanceWeaponStickerDescColumn2_C::Image_LimitedMerk' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, SBDateTimeTextBlock_StickerReleaseTime) == 0x000290, "Member 'UAppearanceWeaponStickerDescColumn2_C::SBDateTimeTextBlock_StickerReleaseTime' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, TxtStickerIndefinite) == 0x000298, "Member 'UAppearanceWeaponStickerDescColumn2_C::TxtStickerIndefinite' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, TxtStickerName) == 0x0002A0, "Member 'UAppearanceWeaponStickerDescColumn2_C::TxtStickerName' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, WeaponStickerInUseBtn) == 0x0002A8, "Member 'UAppearanceWeaponStickerDescColumn2_C::WeaponStickerInUseBtn' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, WeaponStickerRemoveBtn) == 0x0002B0, "Member 'UAppearanceWeaponStickerDescColumn2_C::WeaponStickerRemoveBtn' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, WidgetSwitcherStickerReleaseTime) == 0x0002B8, "Member 'UAppearanceWeaponStickerDescColumn2_C::WidgetSwitcherStickerReleaseTime' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, InventoryWeaponDescription) == 0x0002C0, "Member 'UAppearanceWeaponStickerDescColumn2_C::InventoryWeaponDescription' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, StickerUse) == 0x0002C8, "Member 'UAppearanceWeaponStickerDescColumn2_C::StickerUse' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerDescColumn2_C, IsStickerIndefinite) == 0x0002C9, "Member 'UAppearanceWeaponStickerDescColumn2_C::IsStickerIndefinite' has a wrong offset!");

}

