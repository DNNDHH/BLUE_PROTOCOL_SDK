#pragma once

 

// Package: AppearanceWeaponStickerRemoveWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C
// 0x0090 (0x0340 - 0x02B0)
class UAppearanceWeaponStickerRemoveWindow_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmInOut;                                          // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Body;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreen;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DecideButton;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_137;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_307;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* ItemForStickerDiscard;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* ItemForStickerRemove;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHideWindowFinished;                              // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsStickerDiscardSelected;                         // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsStickerRemoveSelected;                          // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7923[0x6];                                     // 0x0322(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDecideButtonPressed;                             // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsStickerIndefinite;                              // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHaveWeaponStickerRemoveItem;                      // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnHideWindowFinished__DelegateSignature();
	void OnDecideButtonPressed__DelegateSignature(bool InIsStickerDiscardSelected);
	void ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow(int32 EntryPoint);
	void WidgetAnimationEvt_AnmInOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__AppearanceWeaponStickerRemoveWindow_CmnClose02_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature();
	void BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature(class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* InItem);
	void BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature(class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* InItem);
	void OnPress_Cancel();
	void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DecideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ShowWindow(bool InIsStickerIndefinite, bool InHaveWeaponStickerRemoveItem, int32 InWeaponStickerRemoveItemHoldNum);
	void HideWindow();
	void BlockUIInput(bool InBlockInput);
	void SetIsDecideButtonEnabled(bool InIsEnabled);
	void SetWindowPosition(const struct FVector2D& InWindowPosition);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AppearanceWeaponStickerRemoveWindow_C">();
	}
	static class UAppearanceWeaponStickerRemoveWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppearanceWeaponStickerRemoveWindow_C>();
	}
};
static_assert(alignof(UAppearanceWeaponStickerRemoveWindow_C) == 0x000008, "Wrong alignment on UAppearanceWeaponStickerRemoveWindow_C");
static_assert(sizeof(UAppearanceWeaponStickerRemoveWindow_C) == 0x000340, "Wrong size on UAppearanceWeaponStickerRemoveWindow_C");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, UberGraphFrame) == 0x0002B0, "Member 'UAppearanceWeaponStickerRemoveWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, AnmInOut) == 0x0002B8, "Member 'UAppearanceWeaponStickerRemoveWindow_C::AnmInOut' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, Bg01) == 0x0002C0, "Member 'UAppearanceWeaponStickerRemoveWindow_C::Bg01' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, Body) == 0x0002C8, "Member 'UAppearanceWeaponStickerRemoveWindow_C::Body' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, BtnScreen) == 0x0002D0, "Member 'UAppearanceWeaponStickerRemoveWindow_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, CmnClose02) == 0x0002D8, "Member 'UAppearanceWeaponStickerRemoveWindow_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, DecideButton) == 0x0002E0, "Member 'UAppearanceWeaponStickerRemoveWindow_C::DecideButton' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, Image_137) == 0x0002E8, "Member 'UAppearanceWeaponStickerRemoveWindow_C::Image_137' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, Image_307) == 0x0002F0, "Member 'UAppearanceWeaponStickerRemoveWindow_C::Image_307' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, ItemForStickerDiscard) == 0x0002F8, "Member 'UAppearanceWeaponStickerRemoveWindow_C::ItemForStickerDiscard' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, ItemForStickerRemove) == 0x000300, "Member 'UAppearanceWeaponStickerRemoveWindow_C::ItemForStickerRemove' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, UIBlocker) == 0x000308, "Member 'UAppearanceWeaponStickerRemoveWindow_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, OnHideWindowFinished) == 0x000310, "Member 'UAppearanceWeaponStickerRemoveWindow_C::OnHideWindowFinished' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, bIsStickerDiscardSelected) == 0x000320, "Member 'UAppearanceWeaponStickerRemoveWindow_C::bIsStickerDiscardSelected' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, bIsStickerRemoveSelected) == 0x000321, "Member 'UAppearanceWeaponStickerRemoveWindow_C::bIsStickerRemoveSelected' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, OnDecideButtonPressed) == 0x000328, "Member 'UAppearanceWeaponStickerRemoveWindow_C::OnDecideButtonPressed' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, bIsStickerIndefinite) == 0x000338, "Member 'UAppearanceWeaponStickerRemoveWindow_C::bIsStickerIndefinite' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerRemoveWindow_C, bHaveWeaponStickerRemoveItem) == 0x000339, "Member 'UAppearanceWeaponStickerRemoveWindow_C::bHaveWeaponStickerRemoveItem' has a wrong offset!");

}

