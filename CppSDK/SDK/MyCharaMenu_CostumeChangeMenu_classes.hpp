#pragma once

 

// Package: MyCharaMenu_CostumeChangeMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "E_MyCharaMenu_CostumeCategory_structs.hpp"
#include "UMG_structs.hpp"
#include "E_MyCharaMenu_AccessoryCategory_structs.hpp"
#include "CharaParts_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C
// 0x0170 (0x0420 - 0x02B0)
class UMyCharaMenu_CostumeChangeMenu_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIconIn;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C* AccessoryCategoryTab;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgImage;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgImage_1;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgImage_2;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Body;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnFilter;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreen;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_CostumeChangeCategoryTab_C* CostumeCategoryTab;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterSelector_C*                      FilterSelectorAccessory;                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterSelector_C*                      FilterSelectorCostume;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_0;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage1;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage1_1;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage1_2;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage1_3;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage1_4;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage1_5;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ListGrp;                                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USortBox_C*                             SortBox;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtSelectedCostumeCategory;                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBOwnItemListContainer*                Inventory;                                         // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	ESBCharaEquipType                             CostumeType;                                       // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            GenderType;                                        // 0x0399(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x039A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDetachingAfterCheckingChangeable;               // 0x039B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         UnchangeableTextId_Condition;                      // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UnchangeableTextId_Target;                         // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x03A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_898B[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   SortFilterForCostume;                              // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFilterGroup>                   SortFilterForAccessory;                            // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsFilterSelectorOpen;                             // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_MyCharaMenu_CostumeCategory                 SelectedCostumeCategory;                           // 0x03C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               SelectedAccesoryCategory;                          // 0x03CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_CostumeCategory                 TempSelectedCostumeCategory;                       // 0x03CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_AccessoryCategory               TempSelectedAccesoryCategory;                      // 0x03CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_898C[0x3];                                     // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOpenEquipRingHandSelectDialog;                   // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UItemIconBtn_C*                         TempSelectedIcon;                                  // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOpenUsingUnusedEquipConfirmDialog;               // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEndUsingUnusedEquipConfirmDialog;                // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FCharaEquipInfo                        TempEquipInfo;                                     // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsColoringShop;                                    // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_898D[0x3];                                     // 0x0419(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempChildCnt;                                      // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSelected__DelegateSignature(const class FString& InItemUniqueId);
	void OnOpenEquipRingHandSelectDialog__DelegateSignature(const class FString& InRingUniqueId);
	void OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature();
	void OnEndUsingUnusedEquipConfirmDialog__DelegateSignature();
	void ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu(int32 EntryPoint);
	void EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult);
	void BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
	void OnPress_Cancel();
	void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_CostumeCategory InCostumeCategory);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType);
	void BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_7_OnClose__DelegateSignature();
	void BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature();
	void BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void BndEvt__BtnFilter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnSelect_CandidateItemIcon(class UItemIconBtn_C* InSelectedIcon);
	void Destruct();
	void Construct();
	void ShowUsingUnusedEquipConfirmDialog();
	void ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, bool InIsAccessory);
	void Close();
	void CreateEmptySlotList();
	void Setup_List(ESBItemSortType InSortType, ESBCharaEquipType InEquipType, ESBCharacterGender InGenderType, ESBClassType InClassType, TArray<struct FFilterGroup>& InSortFilters, E_MyCharaMenu_CostumeCategory InCostumeCategory, E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
	void CreateInventoryItemData(const struct FOwnItemInfo& InOwnItemInfo, struct FInventoryItemData* OutInventoryItemData);
	void HideAllSlotListItem();
	void IsCostumeTypeAccessory(ESBCharaEquipType InEquipType, bool* OutIsAccessory);
	void SetInventory(class USBOwnItemListContainer* InOwnItemListContainer);
	void GetCurrentSortType(ESBItemSortType* OutSortType);
	void Get_Filter(ESBCharaEquipType InCostumeType, TArray<struct FFilterGroup>* OutSortFilter);
	void InitSortBox();
	void ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation);
	void SetSelectedCostumeCategory(E_MyCharaMenu_CostumeCategory InCostumeCategory);
	void GetSelectedCostumeCategory(E_MyCharaMenu_CostumeCategory* OutCostumeCategory);
	void GetCostumeTypeFromProtectorCategory(EProtectorCategory InProtectorCategory, bool* IsValid, ESBCharaEquipType* OutCostumeType);
	void GetAccessoryCostumeTypeFromAccessoryCategory(E_MyCharaMenu_AccessoryCategory InAccessoryCategory, bool* IsValid, ESBCharaEquipType* OutCostumeType);
	void SetSelectedCostumeCategoryTitleText(E_MyCharaMenu_CostumeCategory InCostumeCategory, E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
	void UpdateIconSelected(const struct FCharaEquipInfo& EquipInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_CostumeChangeMenu_C">();
	}
	static class UMyCharaMenu_CostumeChangeMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_CostumeChangeMenu_C>();
	}
};
static_assert(alignof(UMyCharaMenu_CostumeChangeMenu_C) == 0x000008, "Wrong alignment on UMyCharaMenu_CostumeChangeMenu_C");
static_assert(sizeof(UMyCharaMenu_CostumeChangeMenu_C) == 0x000420, "Wrong size on UMyCharaMenu_CostumeChangeMenu_C");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_CostumeChangeMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, AnimIconIn) == 0x0002B8, "Member 'UMyCharaMenu_CostumeChangeMenu_C::AnimIconIn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, AnimOut) == 0x0002C0, "Member 'UMyCharaMenu_CostumeChangeMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, AnimIn) == 0x0002C8, "Member 'UMyCharaMenu_CostumeChangeMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, AccessoryCategoryTab) == 0x0002D0, "Member 'UMyCharaMenu_CostumeChangeMenu_C::AccessoryCategoryTab' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, BgImage) == 0x0002D8, "Member 'UMyCharaMenu_CostumeChangeMenu_C::BgImage' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, BgImage_1) == 0x0002E0, "Member 'UMyCharaMenu_CostumeChangeMenu_C::BgImage_1' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, BgImage_2) == 0x0002E8, "Member 'UMyCharaMenu_CostumeChangeMenu_C::BgImage_2' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, Body) == 0x0002F0, "Member 'UMyCharaMenu_CostumeChangeMenu_C::Body' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, BtnFilter) == 0x0002F8, "Member 'UMyCharaMenu_CostumeChangeMenu_C::BtnFilter' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, BtnScreen) == 0x000300, "Member 'UMyCharaMenu_CostumeChangeMenu_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, CostumeCategoryTab) == 0x000308, "Member 'UMyCharaMenu_CostumeChangeMenu_C::CostumeCategoryTab' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, FilterSelectorAccessory) == 0x000310, "Member 'UMyCharaMenu_CostumeChangeMenu_C::FilterSelectorAccessory' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, FilterSelectorCostume) == 0x000318, "Member 'UMyCharaMenu_CostumeChangeMenu_C::FilterSelectorCostume' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, GridPanel_0) == 0x000320, "Member 'UMyCharaMenu_CostumeChangeMenu_C::GridPanel_0' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, LineImage1) == 0x000328, "Member 'UMyCharaMenu_CostumeChangeMenu_C::LineImage1' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, LineImage1_1) == 0x000330, "Member 'UMyCharaMenu_CostumeChangeMenu_C::LineImage1_1' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, LineImage1_2) == 0x000338, "Member 'UMyCharaMenu_CostumeChangeMenu_C::LineImage1_2' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, LineImage1_3) == 0x000340, "Member 'UMyCharaMenu_CostumeChangeMenu_C::LineImage1_3' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, LineImage1_4) == 0x000348, "Member 'UMyCharaMenu_CostumeChangeMenu_C::LineImage1_4' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, LineImage1_5) == 0x000350, "Member 'UMyCharaMenu_CostumeChangeMenu_C::LineImage1_5' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, ListGrp) == 0x000358, "Member 'UMyCharaMenu_CostumeChangeMenu_C::ListGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, ScrollBox) == 0x000360, "Member 'UMyCharaMenu_CostumeChangeMenu_C::ScrollBox' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, SortBox) == 0x000368, "Member 'UMyCharaMenu_CostumeChangeMenu_C::SortBox' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, TxtSelectedCostumeCategory) == 0x000370, "Member 'UMyCharaMenu_CostumeChangeMenu_C::TxtSelectedCostumeCategory' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, UIBlocker) == 0x000378, "Member 'UMyCharaMenu_CostumeChangeMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, OnSelected) == 0x000380, "Member 'UMyCharaMenu_CostumeChangeMenu_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, Inventory) == 0x000390, "Member 'UMyCharaMenu_CostumeChangeMenu_C::Inventory' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, CostumeType) == 0x000398, "Member 'UMyCharaMenu_CostumeChangeMenu_C::CostumeType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, GenderType) == 0x000399, "Member 'UMyCharaMenu_CostumeChangeMenu_C::GenderType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, ClassType) == 0x00039A, "Member 'UMyCharaMenu_CostumeChangeMenu_C::ClassType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, bIsDetachingAfterCheckingChangeable) == 0x00039B, "Member 'UMyCharaMenu_CostumeChangeMenu_C::bIsDetachingAfterCheckingChangeable' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, UnchangeableTextId_Condition) == 0x00039C, "Member 'UMyCharaMenu_CostumeChangeMenu_C::UnchangeableTextId_Condition' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, UnchangeableTextId_Target) == 0x0003A0, "Member 'UMyCharaMenu_CostumeChangeMenu_C::UnchangeableTextId_Target' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, SortType) == 0x0003A4, "Member 'UMyCharaMenu_CostumeChangeMenu_C::SortType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, SortFilterForCostume) == 0x0003A8, "Member 'UMyCharaMenu_CostumeChangeMenu_C::SortFilterForCostume' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, SortFilterForAccessory) == 0x0003B8, "Member 'UMyCharaMenu_CostumeChangeMenu_C::SortFilterForAccessory' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, bIsFilterSelectorOpen) == 0x0003C8, "Member 'UMyCharaMenu_CostumeChangeMenu_C::bIsFilterSelectorOpen' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, SelectedCostumeCategory) == 0x0003C9, "Member 'UMyCharaMenu_CostumeChangeMenu_C::SelectedCostumeCategory' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, SelectedAccesoryCategory) == 0x0003CA, "Member 'UMyCharaMenu_CostumeChangeMenu_C::SelectedAccesoryCategory' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, TempSelectedCostumeCategory) == 0x0003CB, "Member 'UMyCharaMenu_CostumeChangeMenu_C::TempSelectedCostumeCategory' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, TempSelectedAccesoryCategory) == 0x0003CC, "Member 'UMyCharaMenu_CostumeChangeMenu_C::TempSelectedAccesoryCategory' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, OnOpenEquipRingHandSelectDialog) == 0x0003D0, "Member 'UMyCharaMenu_CostumeChangeMenu_C::OnOpenEquipRingHandSelectDialog' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, TempSelectedIcon) == 0x0003E0, "Member 'UMyCharaMenu_CostumeChangeMenu_C::TempSelectedIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, OnOpenUsingUnusedEquipConfirmDialog) == 0x0003E8, "Member 'UMyCharaMenu_CostumeChangeMenu_C::OnOpenUsingUnusedEquipConfirmDialog' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, OnEndUsingUnusedEquipConfirmDialog) == 0x0003F8, "Member 'UMyCharaMenu_CostumeChangeMenu_C::OnEndUsingUnusedEquipConfirmDialog' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, TempEquipInfo) == 0x000408, "Member 'UMyCharaMenu_CostumeChangeMenu_C::TempEquipInfo' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, IsColoringShop) == 0x000418, "Member 'UMyCharaMenu_CostumeChangeMenu_C::IsColoringShop' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_CostumeChangeMenu_C, TempChildCnt) == 0x00041C, "Member 'UMyCharaMenu_CostumeChangeMenu_C::TempChildCnt' has a wrong offset!");

}

