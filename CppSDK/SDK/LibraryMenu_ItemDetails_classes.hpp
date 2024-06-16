#pragma once

 

// Package: LibraryMenu_ItemDetails

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "EPictureBookMakeListSortType_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C
// 0x0278 (0x0520 - 0x02A8)
class ULibraryMenu_ItemDetails_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimDetailsIn;                                     // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_FusionItemEffect1;                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_FusionItemEffect2;                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DescVB;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DetailsGrp;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DetailTabButton;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EffectsVB;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            FilterSelectorBtn;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           FusionItemEffectsVB;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_1;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_6;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_116;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_WishListIcon;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Item;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemIntervalVB;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemLvVB;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MakeList;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            MakeTabButton;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_LibraryMenu_ItemDetails_C;                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NeedSlotCountVB;                                   // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ObtainRouteVB;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_108;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Sort_ComboBox;                                     // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_LibraryType;                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_MakeList;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TabIconNew;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_IntervalMax;                                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ItemLv;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_NeedSlotCountValue;                            // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc;                                           // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc_1;                                         // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtEffect_1;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectName1;                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectName2;                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectValue1;                         // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtFusionItemEffectValue2;                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtObtainRoute;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ItemId;                                            // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectTab;                                         // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemMasterData                        SelectItemData;                                    // 0x03F0(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnFilterSelectorBtn;                               // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FFilterGroup>                   FilterList;                                        // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EPictureBookMakeListSortType                  SortType;                                          // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5AEF[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChangeFilter;                                    // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDbg;                                             // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AF0[0x7];                                     // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 AddReadMakeList;                                   // 0x0500(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnMakeListAllRead;                                 // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnFilterSelectorBtn__DelegateSignature();
	void OnChangeFilter__DelegateSignature(EPictureBookMakeListSortType Param_SortType);
	void OnMakeListAllRead__DelegateSignature();
	void ExecuteUbergraph_LibraryMenu_ItemDetails(int32 EntryPoint);
	void DelayUpdateMakeListNewIcon();
	void BndEvt__LibraryMenu_ItemDetails_FilterSelectorBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void SetItemImage(int32 InItemIndex);
	void OnLoaded_809AD089417D6D92E51C08859E31E5BD(class UObject* Loaded);
	void Initialize();
	void SetDetailsVisibility(bool bVisible);
	void SetItemData(const struct FItemMasterData& InItemMasterData);
	void SetMakeData();
	void SetActiveTab(int32 Param_Index);
	void SetSortFilter(TArray<struct FFilterGroup>& Filter);
	void CheckSortFilterType(EPictureBookMakeListSortType Param_SortType, bool* Result);
	void CheckWeaponFilter(const struct FSBWeaponMasterData& Data, bool* Result);
	void CheckImagineFilter(const struct FSBMasterImagine& Data, bool* Result);
	void UpdateReadMakeList();
	void UpdateMakeListNewIcon();
	void Event_Wishlist();
	class UWidget* On_Sort_Combo_Box_Generate_Widget_0(const class FString& Item);
	void CheckTerm(const class FString& TermId, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_ItemDetails_C">();
	}
	static class ULibraryMenu_ItemDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_ItemDetails_C>();
	}
};
static_assert(alignof(ULibraryMenu_ItemDetails_C) == 0x000008, "Wrong alignment on ULibraryMenu_ItemDetails_C");
static_assert(sizeof(ULibraryMenu_ItemDetails_C) == 0x000520, "Wrong size on ULibraryMenu_ItemDetails_C");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_ItemDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, AnimDetailsIn) == 0x0002B0, "Member 'ULibraryMenu_ItemDetails_C::AnimDetailsIn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, CanvasPanel_FusionItemEffect1) == 0x0002B8, "Member 'ULibraryMenu_ItemDetails_C::CanvasPanel_FusionItemEffect1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, CanvasPanel_FusionItemEffect2) == 0x0002C0, "Member 'ULibraryMenu_ItemDetails_C::CanvasPanel_FusionItemEffect2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, CmnImageThrobber) == 0x0002C8, "Member 'ULibraryMenu_ItemDetails_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, DescVB) == 0x0002D0, "Member 'ULibraryMenu_ItemDetails_C::DescVB' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, DetailsGrp) == 0x0002D8, "Member 'ULibraryMenu_ItemDetails_C::DetailsGrp' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, DetailTabButton) == 0x0002E0, "Member 'ULibraryMenu_ItemDetails_C::DetailTabButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, EffectsVB) == 0x0002E8, "Member 'ULibraryMenu_ItemDetails_C::EffectsVB' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, FilterSelectorBtn) == 0x0002F0, "Member 'ULibraryMenu_ItemDetails_C::FilterSelectorBtn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, FusionItemEffectsVB) == 0x0002F8, "Member 'ULibraryMenu_ItemDetails_C::FusionItemEffectsVB' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, HorizontalBox) == 0x000300, "Member 'ULibraryMenu_ItemDetails_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, HorizontalBox_1) == 0x000308, "Member 'ULibraryMenu_ItemDetails_C::HorizontalBox_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, HorizontalBox_6) == 0x000310, "Member 'ULibraryMenu_ItemDetails_C::HorizontalBox_6' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, Image_116) == 0x000318, "Member 'ULibraryMenu_ItemDetails_C::Image_116' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, Image_WishListIcon) == 0x000320, "Member 'ULibraryMenu_ItemDetails_C::Image_WishListIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, Img_Item) == 0x000328, "Member 'ULibraryMenu_ItemDetails_C::Img_Item' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, ItemIntervalVB) == 0x000330, "Member 'ULibraryMenu_ItemDetails_C::ItemIntervalVB' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, ItemLvVB) == 0x000338, "Member 'ULibraryMenu_ItemDetails_C::ItemLvVB' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, MakeList) == 0x000340, "Member 'ULibraryMenu_ItemDetails_C::MakeList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, MakeTabButton) == 0x000348, "Member 'ULibraryMenu_ItemDetails_C::MakeTabButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, Name_LibraryMenu_ItemDetails_C) == 0x000350, "Member 'ULibraryMenu_ItemDetails_C::Name_LibraryMenu_ItemDetails_C' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, NeedSlotCountVB) == 0x000358, "Member 'ULibraryMenu_ItemDetails_C::NeedSlotCountVB' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, ObtainRouteVB) == 0x000360, "Member 'ULibraryMenu_ItemDetails_C::ObtainRouteVB' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, ScrollBox_108) == 0x000368, "Member 'ULibraryMenu_ItemDetails_C::ScrollBox_108' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, Sort_ComboBox) == 0x000370, "Member 'ULibraryMenu_ItemDetails_C::Sort_ComboBox' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, Switch_LibraryType) == 0x000378, "Member 'ULibraryMenu_ItemDetails_C::Switch_LibraryType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, Switch_MakeList) == 0x000380, "Member 'ULibraryMenu_ItemDetails_C::Switch_MakeList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, TabIconNew) == 0x000388, "Member 'ULibraryMenu_ItemDetails_C::TabIconNew' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, Txt_IntervalMax) == 0x000390, "Member 'ULibraryMenu_ItemDetails_C::Txt_IntervalMax' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, Txt_ItemLv) == 0x000398, "Member 'ULibraryMenu_ItemDetails_C::Txt_ItemLv' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, Txt_NeedSlotCountValue) == 0x0003A0, "Member 'ULibraryMenu_ItemDetails_C::Txt_NeedSlotCountValue' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, TxtDesc) == 0x0003A8, "Member 'ULibraryMenu_ItemDetails_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, TxtDesc_1) == 0x0003B0, "Member 'ULibraryMenu_ItemDetails_C::TxtDesc_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, TxtEffect_1) == 0x0003B8, "Member 'ULibraryMenu_ItemDetails_C::TxtEffect_1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, TxtFusionItemEffectName1) == 0x0003C0, "Member 'ULibraryMenu_ItemDetails_C::TxtFusionItemEffectName1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, TxtFusionItemEffectName2) == 0x0003C8, "Member 'ULibraryMenu_ItemDetails_C::TxtFusionItemEffectName2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, TxtFusionItemEffectValue1) == 0x0003D0, "Member 'ULibraryMenu_ItemDetails_C::TxtFusionItemEffectValue1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, TxtFusionItemEffectValue2) == 0x0003D8, "Member 'ULibraryMenu_ItemDetails_C::TxtFusionItemEffectValue2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, TxtObtainRoute) == 0x0003E0, "Member 'ULibraryMenu_ItemDetails_C::TxtObtainRoute' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, ItemId) == 0x0003E8, "Member 'ULibraryMenu_ItemDetails_C::ItemId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, SelectTab) == 0x0003EC, "Member 'ULibraryMenu_ItemDetails_C::SelectTab' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, SelectItemData) == 0x0003F0, "Member 'ULibraryMenu_ItemDetails_C::SelectItemData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, OnFilterSelectorBtn) == 0x0004C0, "Member 'ULibraryMenu_ItemDetails_C::OnFilterSelectorBtn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, FilterList) == 0x0004D0, "Member 'ULibraryMenu_ItemDetails_C::FilterList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, SortType) == 0x0004E0, "Member 'ULibraryMenu_ItemDetails_C::SortType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, OnChangeFilter) == 0x0004E8, "Member 'ULibraryMenu_ItemDetails_C::OnChangeFilter' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, IsDbg) == 0x0004F8, "Member 'ULibraryMenu_ItemDetails_C::IsDbg' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, AddReadMakeList) == 0x000500, "Member 'ULibraryMenu_ItemDetails_C::AddReadMakeList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ItemDetails_C, OnMakeListAllRead) == 0x000510, "Member 'ULibraryMenu_ItemDetails_C::OnMakeListAllRead' has a wrong offset!");

}

