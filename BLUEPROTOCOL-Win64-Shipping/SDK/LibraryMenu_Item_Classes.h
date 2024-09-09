#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass LibraryMenu_Item.LibraryMenu_Item_C
	 * Size -> 0x00F4 (FullSize[0x039C] - InheritedSize[0x02A8])
	 */
	class ULibraryMenu_Item_C : public USBLibraryMenuItemList
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButtonFullScreen_C*                               BtnScreenForFilterSelector;                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCategoryList_Type1_C*                               CategoryList_Type1;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterSelector_C*                                   FilterSelector;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_ItemDetails_C*                          LibraryMenu_ItemDetails;                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_List_C*                                 LibraryMenu_List;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_Search_C*                               LibraryMenu_Search;                                      // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ListSelectTextOverlay;                                   // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MoveAnim;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_C;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_C_357;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    SBRichTextBlock_143;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switch_Details;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TextLine;                                                // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SelectedItemListIndex;                                   // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectCategoryId;                                        // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectCategoryListIndex;                                 // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W6PN[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemMasterData>                             List;                                                    // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SelectItemIndex;                                         // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_68VB[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            CategoryItemIndexList;                                   // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            CategoryIdList;                                          // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               ReadList;                                                // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             AllReadItem;                                             // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FItemMasterData>                             ItemList;                                                // 0x0388(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsCateroryAll;                                           // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSecret;                                                // 0x0399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDbg;                                                   // 0x039A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDbg_3;                                                 // 0x039B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void IsSecretItem(int32_t ItemId, bool* Result);
		void UpdateCategoryNewIcon(int32_t InCategoryId, int32_t InListIndex, bool IsCheckAllRead);
		void UpdateListItemNewIcon(int32_t ItemIndex);
		void CreateItemList();
		void CreateCategoryList();
		void ResetMouseCursorTypeToDefaultRequest();
		void Construct();
		void BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam);
		void OnClickEvent(int32_t listIndex);
		void OnSubMenuUpdate(int32_t MainPage, int32_t SubPage);
		void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
		void OnRMShopClosed();
		void OnParentTerm();
		void BndEvt__LibraryMenu_Item_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32_t ItemIndex);
		void BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_1_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void BndEvt__LibraryMenu_Item_FilterSelector_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature();
		void BndEvt__LibraryMenu_Item_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void CloseFilter();
		void BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_4_OnFilterSelectorBtn__DelegateSignature();
		void BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_6_OnChangeFilter__DelegateSignature(EPictureBookMakeListSortType SortType);
		void BndEvt__LibraryMenu_Item_SBButton_C_356_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__LibraryMenu_Item_LibraryMenu_ItemDetails_K2Node_ComponentBoundEvent_7_OnMakeListAllRead__DelegateSignature();
		void BndEvt__LibraryMenu_Item_SBButton_C_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void GetIdListCallback(bool WasSuccessful, int32_t RetCode, ESBLibraryPictureBookType Type);
		void ExecuteUbergraph_LibraryMenu_Item(int32_t EntryPoint);
		void AllReadItem__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
