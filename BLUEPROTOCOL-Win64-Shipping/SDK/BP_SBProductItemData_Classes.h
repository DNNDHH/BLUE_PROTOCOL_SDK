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
	 * BlueprintGeneratedClass BP_SBProductItemData.BP_SBProductItemData_C
	 * Size -> 0x0168 (FullSize[0x0190] - InheritedSize[0x0028])
	 */
	class UBP_SBProductItemData_C : public UObject
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                ProductName;                                             // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UBP_SBProductItemData_C*>                     ItemDataList;                                            // 0x0048(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ESBRewardItemType                                          RewardType;                                              // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A25E[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ParentData[0x10];                                        // 0x0060(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class FText                                                TypeName;                                                // 0x0070(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsItemBox;                                              // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       __bIsCostumeSet;                                         // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EItemType                                                  ItemType;                                                // 0x008A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3OF8[0x1];                                   // 0x008B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    __ItemId;                                                // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              UniqueId;                                                // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FSBItemBoxContentParam                              ItemBoxContent;                                          // 0x00A0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FSBMasterReward                                     MasterReward;                                            // 0x00C0(0x0014) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		int32_t                                                    Amount;                                                  // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmountMin;                                               // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Wight;                                                   // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESlateVisibility                                           __Visibility;                                            // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __bTrying;                                               // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JUY8[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DummyDataIndex;                                          // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChangeTrying;                                          // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bDebugForceCreateInCostumeSetItem;                       // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SOG4[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeVisibility;                                      // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      ScrollOffset;                                            // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RXZP[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_SBProductItemData_C*                             SelectedData;                                            // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, float>                                       BreakdownList;                                           // 0x0120(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    Rarity;                                                  // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RewardRank;                                              // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBSeasonPassRewardType                                    RewardPlan;                                              // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_79SF[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         TargetItem;                                              // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsConfirm;                                              // 0x0188(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanBppExchange;                                         // 0x0189(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bBonus;                                                  // 0x018A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLotteryAbility;                                         // 0x018B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    LotteryGroupsId;                                         // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		void SetLotteryId(int32_t RewardLotId);
		void SetAmount(int32_t Amount);
		void SetLotteryAbility(bool bValue);
		void SetBonus(bool bBonus);
		void GetRewardType(ESBRewardItemType* RewardType);
		void InitSeasonPassRewardExtraData(class USBSeasonPassMenuRewardItemData* InSeasonPassMenuRewardItemData);
		void IsShowRate(bool* bValue);
		void InitFromMailData(const struct FSBMailData& MailData);
		void InitFromEventShopProductData(const struct FSBEventShopProduct& ProductData);
		void GetItemIndex(int32_t* ItemIndex);
		void IsCostumeData(bool* bFlag);
		void ToItemTypeIntegerFromMasterData(int32_t Index, EItemType* ItemType);
		bool HasWight();
		void InitFromGashaReward(const struct FSBGashaReward& GashaReward);
		bool IsSetItem();
		void GetVisibility(ESlateVisibility* Visibility);
		void SetVisibility(ESlateVisibility Visibility);
		void SetTrying(bool bTrying);
		void GetTrying(bool* bTrying);
		void GetCostumeMasterData(struct FSBMasterCostume* CostumeMasterData);
		void HasRewardType(bool* bResult);
		void HasMasterReward(bool* bResult);
		void HasItemBoxContent(bool* bResult);
		void HasUniqueId(bool* bResult);
		void InitFromDummyItemBox();
		void InitFromDummyCostumeSetBox(int32_t DummyDataIndex);
		void InitFromDummyItemDataInCostumeSet(int32_t DummyCostumeSetIndex, int32_t DummyDataIndex);
		void InitFromDummyItemDataInItemBox(int32_t DummyDataIndex);
		void InitFromDummyItemData(int32_t DummyDataIndex);
		void InitFromShopItemInfo(const struct FShopItemInfo& ShopItemInfo);
		void InitIfItemBox();
		void initFromItemBoxContentParam(const struct FSBItemBoxContentParam& ItemBoxContentParam, bool bCanParentBppExchange);
		void InitFromMasterReward(const struct FSBMasterReward& MasterReward);
		void InitFromRewardData(ESBRewardItemType RewardType, int32_t ItemId, int32_t Amount, int32_t AmountMin);
		void InitFromItemData(EItemType ItemType, int32_t ItemId, int32_t Amount);
		void InitFromUniqueId(const class FString& UniqueId);
		void SetScrollOffset(float Value);
		void SetSelectedData(class UBP_SBProductItemData_C* Data);
		void ExecuteUbergraph_BP_SBProductItemData(int32_t EntryPoint);
		void OnChangeVisibility__DelegateSignature(ESlateVisibility Visibility);
		void OnChangeTrying__DelegateSignature(class UBP_SBProductItemData_C* Sender, bool bTrying);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
