#pragma once

 

// Package: AppearanceWeaponStickerRemoveWindowItemForStickerDiscard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C
// 0x0030 (0x02A8 - 0x0278)
class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BtnBg;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnItem;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconDiscardSticker;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ItemSelected;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ItemSelected__DelegateSignature(class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* InItem);
	void ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard(int32 EntryPoint);
	void BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetBtnSelected(bool bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C">();
	}
	static class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C>();
	}
};
static_assert(alignof(UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C) == 0x000008, "Wrong alignment on UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C");
static_assert(sizeof(UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C) == 0x0002A8, "Wrong size on UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C, UberGraphFrame) == 0x000278, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C, BtnBg) == 0x000280, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::BtnBg' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C, BtnItem) == 0x000288, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::BtnItem' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C, IconDiscardSticker) == 0x000290, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::IconDiscardSticker' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C, ItemSelected) == 0x000298, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::ItemSelected' has a wrong offset!");

}

