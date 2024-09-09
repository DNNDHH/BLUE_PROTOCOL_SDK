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
	 * WidgetBlueprintGeneratedClass ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C
	 * Size -> 0x00E8 (FullSize[0x0398] - InheritedSize[0x02B0])
	 */
	class UShopMenuDetailsSwitcher_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            ItemDetailsGrp;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsGrandchild;                                           // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bDesignCheck;                                            // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RVCE[0x2];                                   // 0x02C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LayoutType;                                              // 0x02C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DesignType;                                              // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_ItemDetailTypes                                          DetailType;                                              // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9JLP[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUserWidget*>                                 DetailWidgets;                                           // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class AActor*>                                      CaptureStudios;                                          // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    CurrHoveredProductItemId;                                // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EPXK[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEndCloseDetailAnimation;                               // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EItemType                                                  ItemType;                                                // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBRewardItemType                                          RewardType;                                              // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasRewardType;                                          // 0x0312(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NMK0[0x5];                                   // 0x0313(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueId;                                                // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    ItemIndex;                                               // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_34UD[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnShow;                                                  // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    Amount;                                                  // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmountMin;                                               // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowProduct;                                            // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q322[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        WeaponLoadTimerHandle;                                   // 0x0350(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsItemDetailShowed;                                     // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EProtectorCategory                                         SelectedProtectorCategory;                               // 0x0359(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEquipableGender                                           EquipableGender;                                         // 0x035A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasExternalDirectionalLightRotation;                    // 0x035B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            ExternalDirectionalLightRotation;                        // 0x035C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptMulticastDelegate                             OnClickZoomIn;                                           // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickItemBoxDetail;                                    // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EItemType                                                  OriginalItemType;                                        // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBRewardItemType                                          OriginalRewardType;                                      // 0x0389(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasOriginalRewardType;                                  // 0x038A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FEJO[0x1];                                   // 0x038B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OriginalItemIndex;                                       // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OriginalAmount;                                          // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OriginalAmountMin;                                       // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetLotteryGroupsId(int32_t LotteryGroupsId);
		void SetLotteryAbility(bool bLotteryAbility);
		void SetBppExchange(bool bCanBppExchange);
		void GetOriginalRewardType(ESBRewardItemType* OriginalRewardType);
		void ShowOriginal();
		void ShowProduct(ESBRewardItemType RewardType, int32_t ItemIndex);
		void SetBonus(bool bBonus);
		void ShowItemDetailsFromItemBoxContent(const struct FSBItemBoxContentParam& ItemBoxContent);
		void ShowItemDetailsFromRewardData(ESBRewardItemType RewardType, int32_t ItemIndex, int32_t Amount, int32_t AmountMin, bool bShowProduct);
		void ShowItemDetailsFromMasterRewardId(const class FName& MasterRewardId);
		void ShowItemDetailsFromMasterReward(const struct FSBMasterReward& MasterReward);
		void ShowItemDetails_Internal();
		void RewardTypeToDetailType(ESBRewardItemType RewardType, int32_t ItemIndex, bool* bValid, E_ItemDetailTypes* DetailType);
		void ItemTypeToDetailType(EItemType ItemType, int32_t ItemIndex, bool* bValid, E_ItemDetailTypes* DetailType);
		void GetCurrentItemDetailType(bool* bValid, E_ItemDetailTypes* DetailType);
		void CloseItemDetailInternal(E_ItemDetailTypes DetailType);
		void ShowItemDetails(int32_t InItemIndex, EItemType InItemType, int32_t Amount, int32_t AmountMin, const class FString& UniqueId, bool bShowProduct);
		void InitItemDetails(const class FString& InCurrMapName);
		void SpawnSceneCapture2DStudio();
		void OnShowCostumeModelCaptureImage();
		void OnLoadWeaponAsset();
		void CreateItemDetails();
		void OnEndCloseDetailAnimation_Event(class UUserWidget* InWidget);
		void DestroyItemDetails();
		void OnSelectCostumeType_Event(bool IsMaleCostumeSelected);
		void CloseItemDetail(bool bAnimation);
		void OnClickedItemBoxDetail();
		void OnClickZoomInEvent(E_SBDetailsZoomIn Type);
		void Construct();
		void Destruct();
		void PreConstruct(bool IsDesignTime);
		void SetExternalDirectionalLightRotation(const struct FRotator& Rotation);
		void ApplyExternalDirectionalLightRotation();
		void UpdateDesign();
		void Init(const class FName& LayoutType);
		void UpdateDesignAndData(const class FName& LayoutType);
		void InitInternal();
		void ExecuteUbergraph_ShopMenuDetailsSwitcher(int32_t EntryPoint);
		void OnClickItemBoxDetail__DelegateSignature();
		void OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
		void OnShow__DelegateSignature(bool bShow);
		void OnEndCloseDetailAnimation__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
