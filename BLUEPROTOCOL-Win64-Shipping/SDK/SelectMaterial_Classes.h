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
	 * WidgetBlueprintGeneratedClass SelectMaterial.SelectMaterial_C
	 * Size -> 0x0303 (FullSize[0x057B] - InheritedSize[0x0278])
	 */
	class USelectMaterial_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    OutAnim;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    InAnim;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UContainerGridView_C*                                BagGrid;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn08Effect_C*                                   Btn_Selected;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBCheckBox_C*                                       CB_MaterialTicketUse;                                    // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose03_C*                                       CmnClose03;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HB_SelectAlert;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_896;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1406;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1792;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1907;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageVLineWhite01;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageVLineWhite01_2;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Lock;                                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UItemDropInfo_C*                                     ItemDropInfo;                                            // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UContainerGridView_C*                                MaterialGrid;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyWalletWidget_C*                                   MyWalletWidget;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFilterButton_C*                                     StorageFilter;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UContainerGridView_C*                                StorageGrid;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonPagerWidget_C*                                StoragePager;                                            // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USortBox_C*                                          StorageSort;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_HasAmount;                                           // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_Luno;                                                // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_NeedNum;                                             // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_NeedSupportNum;                                      // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_NowSelectNum;                                        // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_SupportItemName;                                     // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_TicketHas;                                           // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_TicketNeed;                                          // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_TicketNum;                                           // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FOwnItemInfo                                        TargetItem;                                              // 0x0378(0x0150) Edit, BlueprintVisible, ExposeOnSpawn
		class USBTemporallyStorage*                                MaterialStorage;                                         // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBStackBMasterData                                 StackBoostMasterData;                                    // 0x04D0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelected;                                              // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSBStackBTicketData                                 MaterialToken;                                           // 0x0520(0x001C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FSBStackBUseTicket                                  SBStackBUseTicket;                                       // 0x053C(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_3A6T[0x4];                                   // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         Dialog;                                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              AlertText;                                               // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bDisplayAlert;                                           // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bItemMaterialLocked;                                     // 0x0561(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWeaponMaterialLocked;                                   // 0x0562(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IXJR[0x5];                                   // 0x0563(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOwnItemInfo>                                BeginSelectedMaterials;                                  // 0x0568(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       bBeginUseTicket;                                         // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bSelectedMaterialState;                                  // 0x0579(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCloseState;                                             // 0x057A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateSelectAlert();
		class UWidget* Get_HB_SelectAlert_ToolTipWidget_1();
		void UpdateText();
		void IsMoneyAmount(bool* isAmount);
		void RequestWalletShow();
		void SetFilterType(EFilter_Type FilterType);
		void CalculateLiquidMemoryMoneyDiscount(int32_t BaseMoney, int32_t* CalclatedMoney);
		void CalculateRewardBoostMoney(int32_t SupportItemId, int32_t BasicNeedLuno, int32_t* CalculatedMoney);
		void CalclateRewardBoostSupportItemNum(int32_t BaseAmount, int32_t SupportItemId, int32_t* CalculatedAmount);
		bool IsNeedMoreMaterial();
		TArray<struct FOwnItemInfo> GenerateUIDs();
		void Update();
		void UpdateSelectButton();
		void IsMaterialFull(bool* IsOk);
		void TicketTextUpdate();
		void UpdateTicketData();
		void CacheTicketData();
		void InitializeTickets();
		void TextInitialize();
		void RemoveMaterial(const struct FOwnItemInfo& OwnItemInfo);
		void HasMaterialStorage(const struct FOwnItemInfo& ItemInfo, bool* bOutExist);
		void UpdateMaterialView();
		void Initialize();
		void BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void OnEndDialog(EDialogResult Result);
		void BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters);
		void OnSectedLockedItems(EDialogResult Result);
		void BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
		void BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
		void BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
		void OnEndBattleContains(EDialogResult Result);
		void Construct();
		void RequestClose();
		void Destruct();
		void BndEvt__SelectMaterial_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature();
		void OnCloseDialog(EDialogResult Result);
		void BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature(int32_t PageCurrent);
		void BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void EventOnBeginSelectedMaterial();
		void EventOnEndSelectedMaterial();
		void EventOnAbortSelectedMaterial();
		void BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature(ESBItemSortType SortType);
		void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1();
		void ExecuteUbergraph_SelectMaterial(int32_t EntryPoint);
		void OnSelected__DelegateSignature(TArray<struct FOwnItemInfo>* Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
