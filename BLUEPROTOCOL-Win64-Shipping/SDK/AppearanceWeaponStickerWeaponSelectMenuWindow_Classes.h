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
	 * WidgetBlueprintGeneratedClass AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C
	 * Size -> 0x00FA (FullSize[0x03AA] - InheritedSize[0x02B0])
	 */
	class UAppearanceWeaponStickerWeaponSelectMenuWindow_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimListIn;                                              // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnDecide;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         BtnFilter;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnScreen;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose02_C*                                       CmnClose02;                                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterSelector_C*                                   FilterSelector;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          GridWeapon;                                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USortBox_C*                                          SortBox;                                                 // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        WeaponListGrp;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        WindowGrp;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bSortAsc;                                                // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IFPM[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBOwnItemListContainer*                             Inventory;                                               // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UItemIconBtn_C*                                      SelectedItemBtn;                                         // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CandidateItemCnt;                                        // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2672[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDecide;                                                // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHideWindowEnd;                                         // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsHideWindowCalledByDecide;                             // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N772[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilterGroup>                                SortFilter;                                              // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ESBWeaponType                                              WeaponType;                                              // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBItemSortType                                            SortType;                                                // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J2JB[0x6];                                   // 0x037A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrSelectedWeaponItemUniqueId;                          // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              TempOldItemUniqueId;                                     // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class ASBPlayerController*                                 TempSBPlayerController;                                  // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsFilterSelectorOpen;                                   // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBItemSortType                                            DefaultSortType;                                         // 0x03A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetWndPos(const struct FVector2D& WndPos);
		void HideAllSlotListItem();
		void SortList(class USBOwnItemListContainer* InOwnItemListContainer, ESBItemSortType InSortType, TArray<struct FFilterGroup>* InSortFilterGroup, ESBWeaponType InWeaponType, int32_t* OutCandidateItemCount);
		void ChangeActiveWindow(bool bInActivateListWindow, bool bInUseAnimation);
		void SelectAll(bool InIsSelected);
		void CreateEmptySlotList();
		void HideWindow();
		void ShowWindow(ESBWeaponType InWeaponType);
		void ShowWeaponUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue);
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BndEvt__BtnSearch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnChange_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature();
		void OnPress_Cancel();
		void OnSelect_ItemIcon(class UItemIconBtn_C* InSelectedIcon);
		void UiInputBlock(bool InIsBlock);
		void BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void BndEvt__FilterSelector_K2Node_ComponentBoundEvent_21_OnClose__DelegateSignature();
		void BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature(ESBItemSortType SortType);
		void OnWeaponIconSelected_(class UItemIconBtn_C* InSelectedItemIconBtn);
		void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__AppearanceWeaponStickerWeaponSelectMenuWindow_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature();
		void ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow(int32_t EntryPoint);
		void OnHideWindowEnd__DelegateSignature(bool InIsHideWindowCalledByDecide);
		void OnDecide__DelegateSignature(const class FString& InSelectedWeaponUniqueItemId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
