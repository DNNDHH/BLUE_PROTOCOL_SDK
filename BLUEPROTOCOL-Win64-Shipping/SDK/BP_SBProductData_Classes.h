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
	 * BlueprintGeneratedClass BP_SBProductData.BP_SBProductData_C
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UBP_SBProductData_C : public UObject
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		E_SBProductDetailType                                      __DetailType;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1UG4[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ProductName;                                             // 0x0038(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UBP_SBProductItemData_C*                             BaseItemData;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UBP_SBProductItemData_C*>                     ItemDataList;                                            // 0x0058(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ProductDescription;                                      // 0x0068(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    PurchaseRestrictionCount;                                // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PurchaseRestrictionCountMax;                             // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDateTime                                           PurchasePeriod;                                          // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Price;                                                   // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RankPoint;                                               // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ProductIcon[0x28];                                       // 0x0098(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UBP_SBProductItemData_C*                             SelectedData;                                            // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScrollOffset;                                            // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHideList;                                               // 0x00CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bSelectFirstItem;                                        // 0x00CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTryingFirstItem;                                        // 0x00CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bPaidOnly;                                               // 0x00CF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableCoupon;                                            // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YHKL[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WorldStockNum;                                           // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetItemBoxDepthIndex(int32_t* Index);
		void IsItemBox(bool* bReturnValue);
		void GetIconItemData(class UBP_SBProductItemData_C** ItemData);
		void IsCostumeSet(bool* bReturnValue);
		void GetDetailType(E_SBProductDetailType* DetailType);
		void GetSelectedData(class UBP_SBProductItemData_C** Data);
		TArray<class UBP_SBProductItemData_C*> GetItemDataList();
		float GetScrollOffset();
		void GetParentData(bool* bIsValid);
		void InitFromDetailMenuByDropTreasureData(ESBRewardItemType RewardType, int32_t ItemId, int32_t Amount, bool bBonus, int32_t RewardLotId);
		bool IsSoldOut();
		void SetPrice(int32_t Price);
		void InitDungeonSupply_Internal(const struct FSBDungeonSupply& DungeonSupply);
		bool IsTryingFirstItem();
		void InitMasterReward_Internal(const struct FSBMasterReward& MasterReward);
		void InitFromDetailMenuByRewardData(ESBRewardItemType RewardType, int32_t ItemId, int32_t Amount, bool bBonus);
		void InitFromDetailMenuByUniqueId(const class FString& UniqueId, int32_t OverrideAmount);
		void InitFromDetailMenuByMailDatas(TArray<struct FSBMailData>* MailDatas);
		void InitFromDetailMenuByDungeonSupply(const struct FSBDungeonSupply& DungeonSupply);
		void InitFromDetailMenuByMasterReward(const struct FSBMasterReward& MasterReward);
		void InitFromDetailMenu(class UBP_SBProductItemData_C* Data);
		bool IsSelectFirstItem();
		bool IsHideList();
		void InitFromAdventureBoard(const struct FSBMasterReward& MasterReward);
		struct FDateTime GetPurchasePeriod();
		void InitFromGashaRewardList(const class FText& Title, const class FText& Description, TArray<struct FSBGashaReward>* GashaRewardList);
		void InitFromSeasonPassRewardItemData(class USBSeasonPassMenuRewardItemData* Data);
		void InitFromSeasonRankPointShopProductData(const struct FSBProductData& ProductData);
		void InitFromFlatShopProductData(const struct FSBProductData& ProductData);
		void InitFromDummyItemBox();
		void InitFromRoseOrbShopItemMaster(const struct FSBRoseOrbShopItemMasterData& RoseOrbShopItemMaster);
		void InitFromShopItemInfoList(const class FText& Description, TArray<struct FShopItemInfo>* ShopItemInfoList, ESBRmShopMenuType ShopType);
		class FText GetPurchasePeriodText();
		class FText GetPurchaseRestrictionCountText();
		void SetShopType(ESBRmShopMenuType ShopType);
		void SetDetailType(E_SBProductDetailType Type);
		bool HasPurchaseRestriction();
		void GetProductIconItemData(class UBP_SBProductItemData_C** ItemData);
		bool HasPurchasePeriod();
		void CreateItemBoxDummyData();
		void CreateDummyData2();
		void CreateDummyData();
		void SetScrollOffset(float Value);
		void SetSelectedData(class UBP_SBProductItemData_C* Data);
		void ExecuteUbergraph_BP_SBProductData(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
