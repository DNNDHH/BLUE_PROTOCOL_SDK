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
	 * WidgetBlueprintGeneratedClass WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C
	 * Size -> 0x0098 (FullSize[0x0348] - InheritedSize[0x02B0])
	 */
	class UWBP_ShopMenuDetailsTags_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_ExpiryDateTime;                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnOperationRotate_C*                               CmnOperationRotate;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInventoryTag_C*                                     InventoryTagBPP;                                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInventoryTag_C*                                     InventoryTagSale;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInventoryTag_C*                                     InventoryTagStackB;                                      // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ModelRotationIconGrp;                                    // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_ViewIllustImagine;                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_ZoomIn;                                         // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ShopMenuDetailsExpiryDateTime_C*                WBP_ShopMenuDetailsExpiryDateTime;                       // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bShowRotateIcon;                                         // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6Z9A[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickZoomIn;                                           // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bShowZoomInButton;                                       // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JND0[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickShowProduct;                                      // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickReturnDisplay;                                    // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bShowViewIllustImagineButton;                            // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3PDH[0x3];                                   // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemIndex;                                               // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetOwnItemByUniqueIdForInventoryTagStackB(const class FString& InUniqueId);
		void SetLotteryGroupsId(int32_t InLotteryGroupsId);
		void SetBppExchange(bool bCanBppExchange);
		bool IsBppIrredeemable();
		bool IsVisibieShowProductForCurrency(ESBRewardItemType RewardType, int32_t ItemIndex);
		void GetEventTermDataForCurrency(ESBRewardItemType RewardType, int32_t ItemIndex, class FString* EventTermId, int32_t* DurationMinutes);
		void BndEvt__WBP_ShopMenuDetailsTags_SBButton_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__WBP_ShopMenuDetailsTags_SBButton_IllustImagineView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void SetCostumeData(const struct FSBMasterCostume& MasterCostume);
		void SetWeaponData(const struct FSBWeaponMasterData& WeaponMaster, bool bSell, const class FString& InUniqueId, int32_t InRecipeId);
		void PreConstruct(bool IsDesignTime);
		void SetImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId);
		void SetMountImagineData(const struct FSBMasterMountImagine& MasterMountImagine);
		void SetCurrencyData(ESBRewardItemType RewardType, int32_t ItemIndex);
		void ShowZoomInButton(bool bShow);
		void ShowRotateIcon(bool bShow);
		void ShowViewIllustImagineButton(bool bShow);
		void SetItemData(const struct FItemMasterData& ItemMaster);
		void SetAchievementData(const struct FAchievementMasterData& AchievementMaster);
		void SetEmoteData(const struct FSBEmoteMasterData& EmoteMaster);
		void SetStampData(const struct FSBStampMasterData& StampMasterData);
		void SetDateTimeTextColor(const struct FLinearColor& LimitTimeColor, const struct FLinearColor& DescColor);
		void BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
		void SetStampDataByCategory(const struct FSBStampCategoryMasterData& StampCategoryMaster);
		void SetDefault();
		void SetOrnamentData(const struct FSBMasterOrnament& InOrnamentData);
		void ExecuteUbergraph_WBP_ShopMenuDetailsTags(int32_t EntryPoint);
		void OnClickReturnDisplay__DelegateSignature();
		void OnClickShowProduct__DelegateSignature();
		void OnClickZoomIn__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
