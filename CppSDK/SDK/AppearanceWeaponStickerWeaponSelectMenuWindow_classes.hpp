#pragma once

 

// Package: AppearanceWeaponStickerWeaponSelectMenuWindow

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C
// 0x0100 (0x03B0 - 0x02B0)
class UAppearanceWeaponStickerWeaponSelectMenuWindow_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimListIn;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnDecide;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnFilter;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreen;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterSelector_C*                      FilterSelector;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridWeapon;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USortBox_C*                             SortBox;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           WeaponListGrp;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           WindowGrp;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bSortAsc;                                          // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BA5[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                Inventory;                                         // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         SelectedItemBtn;                                   // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CandidateItemCnt;                                  // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BA6[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDecide;                                          // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHideWindowEnd;                                   // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsHideWindowCalledByDecide;                       // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BA7[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   SortFilter;                                        // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBWeaponType                                 WeaponType;                                        // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BA8[0x6];                                     // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrSelectedWeaponItemUniqueId;                    // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 TempOldItemUniqueId;                               // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ASBPlayerController*                    TempSBPlayerController;                            // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFilterSelectorOpen;                             // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBItemSortType                               DefaultSortType;                                   // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnDecide__DelegateSignature(const class FString& InSelectedWeaponUniqueItemId);
	void OnHideWindowEnd__DelegateSignature(bool InIsHideWindowCalledByDecide);
	void ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow(int32 EntryPoint);
	void BndEvt__AppearanceWeaponStickerWeaponSelectMenuWindow_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature();
	void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void OnWeaponIconSelected_____(class UItemIconBtn_C* InSelectedItemIconBtn);
	void BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType);
	void BndEvt__FilterSelector_K2Node_ComponentBoundEvent_21_OnClose__DelegateSignature();
	void BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void UiInputBlock(bool InIsBlock);
	void OnSelect_ItemIcon(class UItemIconBtn_C* InSelectedIcon);
	void OnPress_Cancel();
	void BndEvt__BtnChange_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature();
	void BndEvt__BtnSearch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void ShowWeaponUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue);
	void ShowWindow(ESBWeaponType InWeaponType);
	void HideWindow();
	void CreateEmptySlotList();
	void SelectAll(bool InIsSelected);
	void ChangeActiveWindow(bool bInActivateListWindow, bool bInUseAnimation);
	void SortList(class USBOwnItemListContainer* InOwnItemListContainer, ESBItemSortType InSortType, TArray<struct FFilterGroup>& InSortFilterGroup, ESBWeaponType InWeaponType, int32* OutCandidateItemCount);
	void HideAllSlotListItem();
	void SetWndPos(const struct FVector2D& WndPos);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AppearanceWeaponStickerWeaponSelectMenuWindow_C">();
	}
	static class UAppearanceWeaponStickerWeaponSelectMenuWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAppearanceWeaponStickerWeaponSelectMenuWindow_C>();
	}
};
static_assert(alignof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C) == 0x000008, "Wrong alignment on UAppearanceWeaponStickerWeaponSelectMenuWindow_C");
static_assert(sizeof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C) == 0x0003B0, "Wrong size on UAppearanceWeaponStickerWeaponSelectMenuWindow_C");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, UberGraphFrame) == 0x0002B0, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, AnimListIn) == 0x0002B8, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::AnimListIn' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, AnimOut) == 0x0002C0, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, AnimIn) == 0x0002C8, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, BtnDecide) == 0x0002D0, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BtnDecide' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, BtnFilter) == 0x0002D8, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BtnFilter' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, BtnScreen) == 0x0002E0, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, CmnClose02) == 0x0002E8, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, FilterSelector) == 0x0002F0, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::FilterSelector' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, GridWeapon) == 0x0002F8, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::GridWeapon' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, SortBox) == 0x000300, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::SortBox' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, UIBlocker) == 0x000308, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, WeaponListGrp) == 0x000310, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::WeaponListGrp' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, WindowGrp) == 0x000318, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::WindowGrp' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, bSortAsc) == 0x000320, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::bSortAsc' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, Inventory) == 0x000328, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::Inventory' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, SelectedItemBtn) == 0x000330, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::SelectedItemBtn' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, CandidateItemCnt) == 0x000338, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::CandidateItemCnt' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, OnDecide) == 0x000340, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnDecide' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, OnHideWindowEnd) == 0x000350, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnHideWindowEnd' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, bIsHideWindowCalledByDecide) == 0x000360, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::bIsHideWindowCalledByDecide' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, SortFilter) == 0x000368, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::SortFilter' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, WeaponType) == 0x000378, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::WeaponType' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, SortType) == 0x000379, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::SortType' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, CurrSelectedWeaponItemUniqueId) == 0x000380, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::CurrSelectedWeaponItemUniqueId' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, TempOldItemUniqueId) == 0x000390, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::TempOldItemUniqueId' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, TempSBPlayerController) == 0x0003A0, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::TempSBPlayerController' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, bIsFilterSelectorOpen) == 0x0003A8, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::bIsFilterSelectorOpen' has a wrong offset!");
static_assert(offsetof(UAppearanceWeaponStickerWeaponSelectMenuWindow_C, DefaultSortType) == 0x0003A9, "Member 'UAppearanceWeaponStickerWeaponSelectMenuWindow_C::DefaultSortType' has a wrong offset!");

}

