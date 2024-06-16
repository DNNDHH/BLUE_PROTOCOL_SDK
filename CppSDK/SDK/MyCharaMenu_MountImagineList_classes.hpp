#pragma once

 

// Package: MyCharaMenu_MountImagineList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C
// 0x0120 (0x03D0 - 0x02B0)
class UMyCharaMenu_MountImagineList_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnChange;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnRemove;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreen;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreenForFilterSelector;                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterSelector_C*                      FilterSelector;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            FilterSelectorBtn;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_ImagineIcon;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ImagineListGrp;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USortBox_C*                             SortBox;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchArrow;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             MountImagineChangeClicked;                         // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CandidateItemCnt;                                  // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C4A[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                Inventory;                                         // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemIconBtn_C*                         SelectedItemBtn;                                   // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Equipped_ImagineUniqueId;                          // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             MountImagineChangeRequest;                         // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHideWindow;                                      // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHideFinished;                                    // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsChangeRequested;                                // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBItemSortType                               SortType;                                          // 0x0391(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFilterSelectorOpened;                           // 0x0392(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C4B[0x5];                                     // 0x0393(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   SortFilters;                                       // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnMountImagineSelectReleased;                      // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 SelectedImagineUniqueId;                           // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsImagineSelectReleased;                          // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBItemSortType                               DefaultSortType;                                   // 0x03C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void MountImagineChangeClicked__DelegateSignature(const class FString& InUEquipniqueId);
	void MountImagineChangeRequest__DelegateSignature(const class FString& UniqueId);
	void OnHideWindow__DelegateSignature();
	void OnHideFinished__DelegateSignature(bool IsChangeRequest);
	void OnMountImagineSelectReleased__DelegateSignature();
	void ExecuteUbergraph_MyCharaMenu_MountImagineList(int32 EntryPoint);
	void Destruct();
	void BndEvt__MyCharaMenu_MountImagineList_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature();
	void BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void BndEvt__MyCharaMenu_MountImagineList_FilterSelectorBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MyCharaMenu_MountImagineList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature();
	void EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult);
	void BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType);
	void OnPress_Cancel();
	void BndEvt__BtnRemove_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void OnSelect_ItemIcon(class UItemIconBtn_C* SelectIcon);
	void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__BtnChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Construct();
	void ShowUsingUnusedEquipConfirmDialog();
	void ShowImagineUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue);
	void ShowWindow(const class FString& InUniqueId);
	void HideWindow();
	void CreateSlotList();
	void SelectAll(bool InIsSelected, bool InDoToAllCreatedItems);
	void CreateItemList(class USBOwnItemListContainer* InInventory, ESBItemSortType InSortType, TArray<struct FFilterGroup>& InSortFilters);
	void IsAddMountImagine(const struct FInventoryData& InInventoryData, bool* IsAdd);
	void SetItemIconBtn(const struct FInventoryData& InInventoryData, int32 InSlotItemId, bool* OutIsIconSet);
	void CreateInventoryData(const struct FOwnItemInfo& InItemInfo, struct FInventoryData* OutInventryData, bool* OutIsAdd);
	void Update_RemoveBtn(const class FString& InUniqueId);
	void Update_ChangeBtn(const class FString& InUniqueId);
	void ChangeMountImagine(bool IsEquip, bool InIgnoreUnsusedEquipConfirm);
	void IsCloseAnimePlaying(bool* IsPlaying);
	void IsChangeEquip(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues* Result);
	void ChangeEquip(bool IsEquip);
	void InitSortBox();
	void SortList(class USBOwnItemListContainer* InOwnItemListContainer, ESBItemSortType InSortType, TArray<struct FFilterGroup>& InSortFilters, int32* OutCandidateItemCnt);
	void HideAllSlotListItem();
	void ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation);
	void PlayFilterSelectorAnimInOrOut(bool InPlayAnimIn);
	void ClearSlotList();
	void SetBtnChangeEnabled(bool bInIsEnabled);
	void SetBtnRemoveEnabled(bool bInIsEnabled);
	void ResetUiSupportKye();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_MountImagineList_C">();
	}
	static class UMyCharaMenu_MountImagineList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_MountImagineList_C>();
	}
};
static_assert(alignof(UMyCharaMenu_MountImagineList_C) == 0x000008, "Wrong alignment on UMyCharaMenu_MountImagineList_C");
static_assert(sizeof(UMyCharaMenu_MountImagineList_C) == 0x0003D0, "Wrong size on UMyCharaMenu_MountImagineList_C");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_MountImagineList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, AnimOut) == 0x0002B8, "Member 'UMyCharaMenu_MountImagineList_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, AnimIn) == 0x0002C0, "Member 'UMyCharaMenu_MountImagineList_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, BtnChange) == 0x0002C8, "Member 'UMyCharaMenu_MountImagineList_C::BtnChange' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, BtnRemove) == 0x0002D0, "Member 'UMyCharaMenu_MountImagineList_C::BtnRemove' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, BtnScreen) == 0x0002D8, "Member 'UMyCharaMenu_MountImagineList_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, BtnScreenForFilterSelector) == 0x0002E0, "Member 'UMyCharaMenu_MountImagineList_C::BtnScreenForFilterSelector' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, CmnClose02) == 0x0002E8, "Member 'UMyCharaMenu_MountImagineList_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, FilterSelector) == 0x0002F0, "Member 'UMyCharaMenu_MountImagineList_C::FilterSelector' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, FilterSelectorBtn) == 0x0002F8, "Member 'UMyCharaMenu_MountImagineList_C::FilterSelectorBtn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, GridPanel_ImagineIcon) == 0x000300, "Member 'UMyCharaMenu_MountImagineList_C::GridPanel_ImagineIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, ImagineListGrp) == 0x000308, "Member 'UMyCharaMenu_MountImagineList_C::ImagineListGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, SortBox) == 0x000310, "Member 'UMyCharaMenu_MountImagineList_C::SortBox' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, SwitchArrow) == 0x000318, "Member 'UMyCharaMenu_MountImagineList_C::SwitchArrow' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, UIBlocker) == 0x000320, "Member 'UMyCharaMenu_MountImagineList_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, MountImagineChangeClicked) == 0x000328, "Member 'UMyCharaMenu_MountImagineList_C::MountImagineChangeClicked' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, CandidateItemCnt) == 0x000338, "Member 'UMyCharaMenu_MountImagineList_C::CandidateItemCnt' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, Inventory) == 0x000340, "Member 'UMyCharaMenu_MountImagineList_C::Inventory' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, SelectedItemBtn) == 0x000348, "Member 'UMyCharaMenu_MountImagineList_C::SelectedItemBtn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, Equipped_ImagineUniqueId) == 0x000350, "Member 'UMyCharaMenu_MountImagineList_C::Equipped_ImagineUniqueId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, MountImagineChangeRequest) == 0x000360, "Member 'UMyCharaMenu_MountImagineList_C::MountImagineChangeRequest' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, OnHideWindow) == 0x000370, "Member 'UMyCharaMenu_MountImagineList_C::OnHideWindow' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, OnHideFinished) == 0x000380, "Member 'UMyCharaMenu_MountImagineList_C::OnHideFinished' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, bIsChangeRequested) == 0x000390, "Member 'UMyCharaMenu_MountImagineList_C::bIsChangeRequested' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, SortType) == 0x000391, "Member 'UMyCharaMenu_MountImagineList_C::SortType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, bIsFilterSelectorOpened) == 0x000392, "Member 'UMyCharaMenu_MountImagineList_C::bIsFilterSelectorOpened' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, SortFilters) == 0x000398, "Member 'UMyCharaMenu_MountImagineList_C::SortFilters' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, OnMountImagineSelectReleased) == 0x0003A8, "Member 'UMyCharaMenu_MountImagineList_C::OnMountImagineSelectReleased' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, SelectedImagineUniqueId) == 0x0003B8, "Member 'UMyCharaMenu_MountImagineList_C::SelectedImagineUniqueId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, bIsImagineSelectReleased) == 0x0003C8, "Member 'UMyCharaMenu_MountImagineList_C::bIsImagineSelectReleased' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_MountImagineList_C, DefaultSortType) == 0x0003C9, "Member 'UMyCharaMenu_MountImagineList_C::DefaultSortType' has a wrong offset!");

}

