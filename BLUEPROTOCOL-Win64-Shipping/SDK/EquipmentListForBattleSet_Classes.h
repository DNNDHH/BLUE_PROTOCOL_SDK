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
	 * WidgetBlueprintGeneratedClass EquipmentListForBattleSet.EquipmentListForBattleSet_C
	 * Size -> 0x0148 (FullSize[0x03C0] - InheritedSize[0x0278])
	 */
	class UEquipmentListForBattleSet_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimListIn;                                              // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BagIconSelectedImage;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnScreenForFilterSelector;                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ButtonActiveColor_Bag;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ButtonActiveColor_Storage;                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         CancelBtn;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         EquipChangeBtn;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         FilterButton_Bag;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         FilterButton_Storage;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterSelector_C*                                   FilterSelector;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         FilterSelectorBtn;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          GridForEquipmentIcons;                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 HeadingTxt;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ListBodyGrp;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 NoEquipmentIconMsgTxt;                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USortBox_C*                                          SortBox;                                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitcherForEquipmentIcons;                               // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitcherForFilterButton_Bag;                             // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_BattleSetInfoType                                        InfoType;                                                // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBCharaEquipType                                          EquipType;                                               // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBItemSortType                                            SortType;                                                // 0x0312(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QG3I[0x5];                                   // 0x0313(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilterGroup>                                SortFilter;                                              // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class USBOwnItemListContainer*                             OwnItemListContainer;                                    // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnListItemSelected;                                      // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCancelBtnPressed;                                      // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEquipChangeBtnPressed;                                 // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFilterApply;                                           // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSortTypeSelected;                                      // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsStorageMode;                                          // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFilterSelectorOpened;                                 // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFilterBtnStorageSelected;                             // 0x0382(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LO9J[0x5];                                   // 0x0383(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFilterBtnBagOrStoragePressed;                          // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              SelectedEquipmentUniqueId;                               // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		ESBItemSortType                                            DefaultSortType;                                         // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsChangingEquip;                                        // 0x03A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsLoadingSelectEquipAsset;                              // 0x03AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DEEX[0x5];                                   // 0x03AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnIsChangingEquip;                                       // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetIsChangingEquip(bool bInIsChangingEquip);
		void SetFilterPosition();
		void IsFilterSelectorAnimInfOutPlaying(bool* OutIsPlaying);
		void PlayFilterSelectorAnimInOrOut(bool InPlayAnimIn);
		void CheckIfSelectedEquipmentIsEquipped(const class FString& InEquipmentUniqueId, ESBCharaEquipType InEquipType, bool* OutIsEquipped);
		void SetEquipmentIconSelectedByUniqueId(const class FString& InEquipmentUinqueId);
		void SwitchEquipmentIconListBody(bool InIsEquipmentIconListBodyEmpty);
		void SetFilterBtnSelected(bool InIsFilterBtnStorageSelected);
		void ExtractInnerImagineEquipPositionFlagByEquipType(ESBCharaEquipType InEquipType, bool InEquipPosition1, bool InEquipPosition2, bool InEquipPosition3, bool InEquipPosition4, bool InEquipPosition5, bool* OutEquipPositionMatch);
		void GetEquipType(ESBCharaEquipType* OutEquipType);
		void SetEquipType(ESBCharaEquipType InEquipType);
		void SetInfoType(E_BattleSetInfoType InInfoType);
		void IsFilterSelectorOpened(bool* OutIsOpened);
		void ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation);
		void PlayListInAnimReverse();
		void PlayListInAnimForward();
		void SetStorageMode(bool InIsForStorage);
		void SetListVisibility(ESlateVisibility InVisibility);
		void ChangeFilterType(EFilter_Type InFilterType);
		void SetIsEquipChangeBtnEnabled(bool InIsEnabled);
		void ResetSelectedIconAll();
		void HideListItemAll();
		void SortList();
		void InitListSetting(E_BattleSetInfoType InInfoType, bool InIgnoreSortAndFilterInit);
		void CreateList(E_BattleSetInfoType InInfoType);
		void UpdateOwnItemListContainer();
		void Init(E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType, bool InIsStorageMode);
		void BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature(ESBItemSortType SortType);
		void OnItemIconBtnSelected(class UItemIconBtn_C* SelectItem);
		void Destruct();
		void BndEvt__EquipmentListForBattleSet_BtnFilter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature();
		void BndEvt__EquipmentListForBattleSet_FilterButton_Bag_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__EquipmentListForBattleSet_FilterButton_Storage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__EquipmentListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
		void BndEvt__EquipmentListForBattleSet_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_EquipmentListForBattleSet(int32_t EntryPoint);
		void OnIsChangingEquip__DelegateSignature();
		void OnCancelBtnPressed__DelegateSignature();
		void OnFilterBtnBagOrStoragePressed__DelegateSignature(bool InIsFilterBtnStoragePressed);
		void OnSortTypeSelected__DelegateSignature(ESBItemSortType InSelectedSortType);
		void OnFilterApply__DelegateSignature();
		void OnEquipChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, const class FString& InEquipmentUniqueId);
		void OnListItemSelected__DelegateSignature(class UItemIconBtn_C* InSelectedListItem);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
