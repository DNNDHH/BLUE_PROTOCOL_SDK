#pragma once

 

// Package: AppearanceWeaponStickerRemoveWindowItemForStickerRemove

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C
// 0x0048 (0x02C0 - 0x0278)
class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BtnBg;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnItem;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          IconSticker;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtDiscardStickerDesc1;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtDiscardStickerDesc2;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHoldNumberValue;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ItemSelected;                                      // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ItemSelected__DelegateSignature(class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* InItem);
	void ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove(int32 EntryPoint);
	void BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetupItem(bool InIsStickerIndefinite, bool InIsSelectable, int32 InStickerRemoveItemId, int32 InStickerRemoveItemHoldNum);
	void SetIsSelectable(bool InIsSelectable);
	void SetBtnSelected(bool bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C">();
	}
	static class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C>();
	}
};
static_assert(alignof(UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C) == 0x000008, "Wrong alignment on UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C");
static_assert(sizeof(UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C) == 0x0002C0, "Wrong size on UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C, UberGraphFrame) == 0x000278, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C, BtnBg) == 0x000280, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::BtnBg' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C, BtnItem) == 0x000288, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::BtnItem' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C, IconSticker) == 0x000290, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::IconSticker' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C, TxtDiscardStickerDesc1) == 0x000298, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::TxtDiscardStickerDesc1' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C, TxtDiscardStickerDesc2) == 0x0002A0, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::TxtDiscardStickerDesc2' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C, TxtHoldNumberValue) == 0x0002A8, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::TxtHoldNumberValue' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C, ItemSelected) == 0x0002B0, "Member 'UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::ItemSelected' has a wrong offset!");

}

