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
	 * WidgetBlueprintGeneratedClass LibraryMenu_Imagine.LibraryMenu_Imagine_C
	 * Size -> 0x015A (FullSize[0x0402] - InheritedSize[0x02A8])
	 */
	class ULibraryMenu_Imagine_C : public USBLibraryMenuItemList
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButtonFullScreen_C*                               BtnScreenForFilterSelector;                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCategoryList_Type1_C*                               CategoryList_Type1;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterSelector_C*                                   FilterSelector;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         FilterSelectorBtn;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_ImagineDetails_C*                       LibraryMenu_ImagineDetails;                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_List_C*                                 LibraryMenu_List;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_Search_C*                               LibraryMenu_Search;                                      // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ListSelectTextOverlay;                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MoveAnim_2;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_C;                                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_C_357;                                          // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    SBRichTextBlock_143;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switch_Details;                                          // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_DetailsImagineBattleZoomIn_C*                   UMG_DetailsImagineBattleZoomIn;                          // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_Mark;                                     // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCharactersLogComponent*                           LogComponent;                                            // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedItemListIndex;                                   // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectCategoryId;                                        // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectCategoryListIndex;                                 // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UTH2[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBMasterImagine>                            List;                                                    // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            CategoryIdList;                                          // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBMasterImagine>                            ImagineList;                                             // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsSecret;                                                // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDbg;                                                   // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z8XK[0x2];                                   // 0x037A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SelectImagineId;                                         // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<bool>                                               ReadList;                                                // 0x0380(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ELibraryImagineType                                        ImagineType;                                             // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_OX7L[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        BattleImajineCategoryList;                               // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             AllReadImagine;                                          // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSBImagineInfo                                      SummonedInfo;                                            // 0x03B8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsFilterHyoui;                                           // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDbg_3;                                                 // 0x0401(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void UpdateFilter(TArray<struct FFilterGroup>* Filter);
		void UpdateCategoryNewIcon(int32_t InListIndex, bool IsCheckAllRead);
		void IsSecretItem(int32_t ImagineId, bool* Result);
		void CreateImagineList();
		void CreateCategoryList();
		void OnClickImagineEvent(int32_t listIndex);
		void BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam);
		void BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32_t ItemIndex);
		void BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature();
		void Construct();
		void ResetMouseCursorTypeToDefaultRequest();
		void BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void OnSubMenuUpdate(int32_t MainPage, int32_t SubPage);
		void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
		void BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_11_OnRecipeTabRead__DelegateSignature();
		void BndEvt__LibraryMenu_Imagine_LibraryMenu_ImagineDetails_K2Node_ComponentBoundEvent_12_OnClickZoomIn__DelegateSignature();
		void OnRMShopClosed();
		void OnParentTerm();
		void BndEvt__LibraryMenu_Imagine_FilterSelectorBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void BndEvt__LibraryMenu_Imagine_FilterSelector_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature();
		void BndEvt__LibraryMenu_Imagine_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void CloseFilter();
		void BndEvt__LibraryMenu_Imagine_SBButton_C_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void GetIdListCallback(bool WasSuccessful, int32_t RetCode, ESBLibraryPictureBookType Type);
		void ExecuteUbergraph_LibraryMenu_Imagine(int32_t EntryPoint);
		void AllReadImagine__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
