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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C
	 * Size -> 0x011A (FullSize[0x03CA] - InheritedSize[0x02B0])
	 */
	class UMyCharaMenu_MountImagineList_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnChange;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnRemove;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnScreen;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnScreenForFilterSelector;                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose02_C*                                       CmnClose02;                                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterSelector_C*                                   FilterSelector;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         FilterSelectorBtn;                                       // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          GridPanel_ImagineIcon;                                   // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ImagineListGrp;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USortBox_C*                                          SortBox;                                                 // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchArrow;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             MountImagineChangeClicked;                               // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    CandidateItemCnt;                                        // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_THWW[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBOwnItemListContainer*                             Inventory;                                               // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UItemIconBtn_C*                                      SelectedItemBtn;                                         // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Equipped_ImagineUniqueId;                                // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             MountImagineChangeRequest;                               // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHideWindow;                                            // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHideFinished;                                          // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsChangeRequested;                                      // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBItemSortType                                            SortType;                                                // 0x0391(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsFilterSelectorOpened;                                 // 0x0392(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7G50[0x5];                                   // 0x0393(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilterGroup>                                SortFilters;                                             // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnMountImagineSelectReleased;                            // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              SelectedImagineUniqueId;                                 // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsImagineSelectReleased;                                // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBItemSortType                                            DefaultSortType;                                         // 0x03C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ResetUiSupportKye();
		void SetBtnRemoveEnabled(bool bInIsEnabled);
		void SetBtnChangeEnabled(bool bInIsEnabled);
		void ClearSlotList();
		void PlayFilterSelectorAnimInOrOut(bool InPlayAnimIn);
		void ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation);
		void HideAllSlotListItem();
		void SortList(class USBOwnItemListContainer* InOwnItemListContainer, ESBItemSortType InSortType, TArray<struct FFilterGroup>* InSortFilters, int32_t* OutCandidateItemCnt);
		void InitSortBox();
		void ChangeEquip(bool IsEquip);
		void IsChangeEquip(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues* Result);
		void IsCloseAnimePlaying(bool* IsPlaying);
		void ChangeMountImagine(bool IsEquip, bool InIgnoreUnsusedEquipConfirm);
		void Update_ChangeBtn(const class FString& InUniqueId);
		void Update_RemoveBtn(const class FString& InUniqueId);
		void CreateInventoryData(const struct FOwnItemInfo& InItemInfo, struct FInventoryData* OutInventryData, bool* OutIsAdd);
		void SetItemIconBtn(const struct FInventoryData& InInventoryData, int32_t InSlotItemId, bool* OutIsIconSet);
		void IsAddMountImagine(const struct FInventoryData& InInventoryData, bool* IsAdd);
		void CreateItemList(class USBOwnItemListContainer* InInventory, ESBItemSortType InSortType, TArray<struct FFilterGroup>* InSortFilters);
		void SelectAll(bool InIsSelected, bool InDoToAllCreatedItems);
		void CreateSlotList();
		void HideWindow();
		void ShowWindow(const class FString& InUniqueId);
		void ShowImagineUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue);
		void ShowUsingUnusedEquipConfirmDialog();
		void Construct();
		void BndEvt__BtnChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
		void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnSelect_ItemIcon(class UItemIconBtn_C* SelectIcon);
		void BndEvt__BtnRemove_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
		void OnPress_Cancel();
		void BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature(ESBItemSortType SortType);
		void EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult);
		void BndEvt__MyCharaMenu_MountImagineList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature();
		void BndEvt__MyCharaMenu_MountImagineList_FilterSelectorBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature();
		void BndEvt__MyCharaMenu_MountImagineList_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void Destruct();
		void ExecuteUbergraph_MyCharaMenu_MountImagineList(int32_t EntryPoint);
		void OnMountImagineSelectReleased__DelegateSignature();
		void OnHideFinished__DelegateSignature(bool IsChangeRequest);
		void OnHideWindow__DelegateSignature();
		void MountImagineChangeRequest__DelegateSignature(const class FString& UniqueId);
		void MountImagineChangeClicked__DelegateSignature(const class FString& InUEquipniqueId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
