#pragma once

 

// Package: LibraryMenu_Item

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "EPictureBookMakeListSortType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Item.LibraryMenu_Item_C
// 0x00F8 (0x03A0 - 0x02A8)
class ULibraryMenu_Item_C final : public USBLibraryMenuItemList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButtonFullScreen_C*                  BtnScreenForFilterSelector;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCategoryList_Type1_C*                  CategoryList_Type1;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterSelector_C*                      FilterSelector;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_ItemDetails_C*             LibraryMenu_ItemDetails;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_List_C*                    LibraryMenu_List;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULibraryMenu_Search_C*                  LibraryMenu_Search;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ListSelectTextOverlay;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoveAnim;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_356;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       SBRichTextBlock_142;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_Details;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextLine;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectedItemListIndex;                             // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectCategoryId;                                  // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectCategoryListIndex;                           // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1474[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FItemMasterData>                List;                                              // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectItemIndex;                                   // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1475[0x4];                                     // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CategoryItemIndexList;                             // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 CategoryIdList;                                    // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  ReadList;                                          // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             AllReadItem;                                       // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FItemMasterData>                ItemList;                                          // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsCateroryAll;                                     // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSecret;                                          // 0x0399(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDbg;                                             // 0x039A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDbg_2;                                           // 0x039B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AllReadItem__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_LibraryMenu_Item(int32 EntryPoint);
	void GetIdListCallback(bool WasSuccessful, int32 RetCode, const ESBLibraryPictureBookType Type);
	void BndEvt__LibraryMenu_Item_SBButton_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_7_OnMakeListAllRead__DelegateSignature();
	void BndEvt__LibraryMenu_Item_SBButton_C_356_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature(EPictureBookMakeListSortType SortType);
	void BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_4_OnFilterSelectorBtn__DelegateSignature();
	void CloseFilter();
	void BndEvt__LibraryMenu_Item_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature();
	void BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32 ItemIndex);
	void OnParentTerm();
	void OnRMShopClosed();
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnClickEvent(int32 ListIndex);
	void BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam);
	void Construct();
	void ResetMouseCursorTypeToDefaultRequest();
	void CreateCategoryList();
	void CreateItemList();
	void UpdateListItemNewIcon(const int32& ItemIndex);
	void UpdateCategoryNewIcon(int32 InCategoryId, int32 InListIndex, bool IsCheckAllRead);
	void IsSecretItem(int32 ItemId, bool* Result);
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Item_C">();
	}
	static class ULibraryMenu_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Item_C>();
	}
};
static_assert(alignof(ULibraryMenu_Item_C) == 0x000008, "Wrong alignment on ULibraryMenu_Item_C");
static_assert(sizeof(ULibraryMenu_Item_C) == 0x0003A0, "Wrong size on ULibraryMenu_Item_C");
static_assert(offsetof(ULibraryMenu_Item_C, UberGraphFrame) == 0x0002A8, "Member 'ULibraryMenu_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, BtnScreenForFilterSelector) == 0x0002B0, "Member 'ULibraryMenu_Item_C::BtnScreenForFilterSelector' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, CategoryList_Type1) == 0x0002B8, "Member 'ULibraryMenu_Item_C::CategoryList_Type1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, FilterSelector) == 0x0002C0, "Member 'ULibraryMenu_Item_C::FilterSelector' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, LibraryMenu_ItemDetails) == 0x0002C8, "Member 'ULibraryMenu_Item_C::LibraryMenu_ItemDetails' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, LibraryMenu_List) == 0x0002D0, "Member 'ULibraryMenu_Item_C::LibraryMenu_List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, LibraryMenu_Search) == 0x0002D8, "Member 'ULibraryMenu_Item_C::LibraryMenu_Search' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, ListSelectTextOverlay) == 0x0002E0, "Member 'ULibraryMenu_Item_C::ListSelectTextOverlay' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, MoveAnim) == 0x0002E8, "Member 'ULibraryMenu_Item_C::MoveAnim' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, SBButton_C) == 0x0002F0, "Member 'ULibraryMenu_Item_C::SBButton_C' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, SBButton_C_356) == 0x0002F8, "Member 'ULibraryMenu_Item_C::SBButton_C_356' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, SBRichTextBlock_142) == 0x000300, "Member 'ULibraryMenu_Item_C::SBRichTextBlock_142' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, Switch_Details) == 0x000308, "Member 'ULibraryMenu_Item_C::Switch_Details' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, TextLine) == 0x000310, "Member 'ULibraryMenu_Item_C::TextLine' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, UIBlocker) == 0x000318, "Member 'ULibraryMenu_Item_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, SelectedItemListIndex) == 0x000320, "Member 'ULibraryMenu_Item_C::SelectedItemListIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, SelectCategoryId) == 0x000324, "Member 'ULibraryMenu_Item_C::SelectCategoryId' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, SelectCategoryListIndex) == 0x000328, "Member 'ULibraryMenu_Item_C::SelectCategoryListIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, List) == 0x000330, "Member 'ULibraryMenu_Item_C::List' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, SelectItemIndex) == 0x000340, "Member 'ULibraryMenu_Item_C::SelectItemIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, CategoryItemIndexList) == 0x000348, "Member 'ULibraryMenu_Item_C::CategoryItemIndexList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, CategoryIdList) == 0x000358, "Member 'ULibraryMenu_Item_C::CategoryIdList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, ReadList) == 0x000368, "Member 'ULibraryMenu_Item_C::ReadList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, AllReadItem) == 0x000378, "Member 'ULibraryMenu_Item_C::AllReadItem' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, ItemList) == 0x000388, "Member 'ULibraryMenu_Item_C::ItemList' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, IsCateroryAll) == 0x000398, "Member 'ULibraryMenu_Item_C::IsCateroryAll' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, IsSecret) == 0x000399, "Member 'ULibraryMenu_Item_C::IsSecret' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, IsDbg) == 0x00039A, "Member 'ULibraryMenu_Item_C::IsDbg' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Item_C, IsDbg_2) == 0x00039B, "Member 'ULibraryMenu_Item_C::IsDbg_2' has a wrong offset!");

}

