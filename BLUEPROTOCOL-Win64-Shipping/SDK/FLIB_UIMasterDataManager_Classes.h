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
	 * BlueprintGeneratedClass FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLIB_UIMasterDataManager_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetMasterImaginePerkPickTableListByImagineParamType(const class FString& ImagineParamType, class UObject* __WorldContext, bool* bIsExist, TArray<struct FMasterImaginePerkPickTable>* NewParam);
		void GetMasterImaginePerkPickTableListByImagineMaster(const struct FSBMasterImagine& ImagineMaster, class UObject* __WorldContext, bool* bIsExist, TArray<struct FMasterImaginePerkPickTable>* NewParam);
		void FindStampMaster(int32_t StampId, class UObject* __WorldContext, bool* bIsValid, struct FSBStampMasterData* StampMaster);
		struct FSBMasterAwardsData FindAwardsMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid);
		struct FSBMasterAdventureCardDecoration FindAdventureCardDecorationMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid);
		void FindShopItemSetMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid, struct FSBFlatShopItemSetMasterData* ShopItemSetMaster);
		void GetItemMasterItemIdListFromEfficacyType(EItemEfficacyType InEfficacyType, class UObject* __WorldContext, bool* IsValid, TArray<int32_t>* OutItemIdList);
		void FindAdventureBoardMaster(int32_t ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBAdventureBoardParamMasterData& AdventureBoardMaster);
		void FindRecipeSetMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid, const struct FRecipeSetMasterData& RecipeSetMaster);
		void FindRealGoodsMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid, struct FSBEventShopRealGoodsMasterData* RealGoodsMaster);
		void FindAestheCharaPartsMasterByAssetId(const class FString& InAssetId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopPartsMasterData* OutData);
		void FindAestheCharaPartsMasterByIconId(const class FString& InIconId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopPartsMasterData* OutData);
		void FindAestheShopCharaParamRestrictionMaster(const class FString& InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopCharaParamRestrictionMasterData* OutData);
		void GetDateChangeTime(class UObject* __WorldContext, struct FDateTime* DateChangeTime);
		void FindRewardMaster(const class FName& RewardId, class UObject* __WorldContext, bool* IsValid, struct FSBMasterReward* RewardMaster);
		void FindFusionItemMaster(int32_t InId, class UObject* __WorldContext, bool* IsValid, struct FSBMasterFusionItem* OutFusionItemMaster);
		void FindAbilityEffectMaster(int32_t InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAbilityEffectMasterData* AbilityEffectMaster);
		void FindAbilityMaster(int32_t InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAbilityMasterData* AbilityMaster);
		void FindLotteryReward(int32_t LotteryGroupsId, int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterRewardLotteryGroupsRewards* LotteryReward);
		void FindRewardLotteryGroupsMaster(int32_t ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBMasterRewardLotteryGroups& RewardLotteryGroupsMaster);
		void GetSkillLevelFromClassLevel(int32_t InSkillId, int32_t InClassLevel, class UObject* __WorldContext, bool* bIsValid, int32_t* OutSkillLevel);
		void GetSkillLevelMax(int32_t InSkillId, class UObject* __WorldContext, bool* bIsValid, int32_t* OutSkillLevelMax);
		void FindSkillMasteryParam(int32_t InSkillId, int32_t InLevel, class UObject* __WorldContext, bool* bIsValid, struct FSBSkillMasteryParam* OutSkillMasteryParam);
		void FindSkillDataMaster(int32_t SkillId, class UObject* __WorldContext, bool* bIsValid, struct FSBSkillDataMasterData* SkillDataMaster);
		void FindWarehouseAbilityRecipeMaster(int32_t ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBWarehouseAbilityRecipeMasterData& WarehouseAbilityRecipeMaster);
		void FindProductImagineByMaterialItem(int32_t ItemId, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster);
		void FindImagineRecipeByMaterialItem(int32_t ItemId, class UObject* __WorldContext, bool* bIsValid, struct FMasterImagineRecepi* ImagineRecipeMaster);
		void FindImagineRecipeMaster(int32_t ImagineId, class UObject* __WorldContext, bool* bIsValid, const struct FMasterImagineRecepi& ImagineRecipeMaster);
		void FindStampCategoryMasterByStampId(int32_t StampId, class UObject* __WorldContext, bool* bIsValid, const struct FSBStampCategoryMasterData& StampCategoryMaster);
		void FindStampCategoryMaster(int32_t CategoryId, class UObject* __WorldContext, bool* bIsValid, const struct FSBStampCategoryMasterData& StampCategoryMaster);
		void FindEmoteMaster(int32_t EmoteId, class UObject* __WorldContext, bool* bIsValid, const struct FSBEmoteMasterData& EmoteMaster);
		struct FSBMasterOrnament FindOrnamentMaster(int32_t ID, class UObject* __WorldContext, bool* Valid);
		void FindAchievementMaster(int32_t Index, class UObject* __WorldContext, bool* bIsValid, const struct FAchievementMasterData& AchievementMaster);
		void FindTokenMaster(int32_t InTokenId, class UObject* __WorldContext, bool* bIsValid, const struct FMasterToken& TokenMaster);
		void FindCraftMaster(int32_t RecepiId, class UObject* __WorldContext, bool* bIsValid, const struct FCraftMasterData& CraftMaster);
		void FindMountImagineMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterMountImagine* MountImagineMaster);
		void FindImagineMasterByRewardData(ESBRewardItemType RewardType, int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster);
		void FindImagineMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster);
		void FindWeaponMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBWeaponMasterData* WeaponMaster);
		void FindCostumeMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterCostume* CostumeMaster);
		void FindItemMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FItemMasterData* ItemMaster);
		void FindItemBoxMaster(int32_t ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterItemBox* ItemBoxMaster);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
