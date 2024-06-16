#pragma once

 

// Package: FLIB_UIMasterDataManager

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C
// 0x0000 (0x0028 - 0x0028)
class UFLIB_UIMasterDataManager_C final : public UBlueprintFunctionLibrary
{
public:
	static void FindItemBoxMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterItemBox* ItemBoxMaster);
	static void FindItemMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FItemMasterData* ItemMaster);
	static void FindCostumeMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterCostume* CostumeMaster);
	static void FindWeaponMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBWeaponMasterData* WeaponMaster);
	static void FindImagineMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster);
	static void FindImagineMasterByRewardData(ESBRewardItemType RewardType, int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster);
	static void FindMountImagineMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterMountImagine* MountImagineMaster);
	static void FindCraftMaster(int32 RecepiId, class UObject* __WorldContext, bool* bIsValid, const struct FCraftMasterData* CraftMaster);
	static void FindTokenMaster(const int32 InTokenId, class UObject* __WorldContext, bool* bIsValid, const struct FMasterToken* TokenMaster);
	static void FindAchievementMaster(const int32 Param_Index, class UObject* __WorldContext, bool* bIsValid, const struct FAchievementMasterData* AchievementMaster);
	static struct FSBMasterOrnament FindOrnamentMaster(int32 ID, class UObject* __WorldContext, bool* Valid);
	static void FindEmoteMaster(int32 EmoteId, class UObject* __WorldContext, bool* bIsValid, const struct FSBEmoteMasterData* EmoteMaster);
	static void FindStampCategoryMaster(int32 CategoryId, class UObject* __WorldContext, bool* bIsValid, const struct FSBStampCategoryMasterData* StampCategoryMaster);
	static void FindStampCategoryMasterByStampId(int32 StampId, class UObject* __WorldContext, bool* bIsValid, const struct FSBStampCategoryMasterData* StampCategoryMaster);
	static void FindImagineRecipeMaster(int32 ImagineId, class UObject* __WorldContext, bool* bIsValid, const struct FMasterImagineRecepi* ImagineRecipeMaster);
	static void FindImagineRecipeByMaterialItem(int32 ItemId, class UObject* __WorldContext, bool* bIsValid, struct FMasterImagineRecepi* ImagineRecipeMaster);
	static void FindProductImagineByMaterialItem(int32 ItemId, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster);
	static void FindWarehouseAbilityRecipeMaster(const int32 ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBWarehouseAbilityRecipeMasterData* WarehouseAbilityRecipeMaster);
	static void FindSkillDataMaster(int32 SkillId, class UObject* __WorldContext, bool* bIsValid, struct FSBSkillDataMasterData* SkillDataMaster);
	static void FindSkillMasteryParam(int32 InSkillId, int32 InLevel, class UObject* __WorldContext, bool* bIsValid, struct FSBSkillMasteryParam* OutSkillMasteryParam);
	static void GetSkillLevelMax(int32 InSkillId, class UObject* __WorldContext, bool* bIsValid, int32* OutSkillLevelMax);
	static void GetSkillLevelFromClassLevel(int32 InSkillId, int32 InClassLevel, class UObject* __WorldContext, bool* bIsValid, int32* OutSkillLevel);
	static void FindRewardLotteryGroupsMaster(const int32 ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBMasterRewardLotteryGroups* RewardLotteryGroupsMaster);
	static void Find_Lottery_Reward(int32 LotteryGroupsId, const int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterRewardLotteryGroupsRewards* LotteryReward);
	static void FindAbilityMaster(int32 InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAbilityMasterData* AbilityMaster);
	static void FindAbilityEffectMaster(int32 InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAbilityEffectMasterData* AbilityEffectMaster);
	static void FindFusionItemMaster(int32 InId, class UObject* __WorldContext, bool* IsValid, struct FSBMasterFusionItem* OutFusionItemMaster);
	static void FindRewardMaster(const class FName& RewardId, class UObject* __WorldContext, bool* IsValid, struct FSBMasterReward* RewardMaster);
	static void GetDateChangeTime(class UObject* __WorldContext, struct FDateTime* Date_Change_Time);
	static void FindAestheShopCharaParamRestrictionMaster(const class FString& InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopCharaParamRestrictionMasterData* OutData);
	static void FindAestheCharaPartsMasterByIconId(const class FString& InIconId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopPartsMasterData* OutData);
	static void FindAestheCharaPartsMasterByAssetId(const class FString& InAssetId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopPartsMasterData* OutData);
	static void FindRealGoodsMaster(int32 Param_Index, class UObject* __WorldContext, bool* bIsValid, struct FSBEventShopRealGoodsMasterData* RealGoodsMaster);
	static void FindRecipeSetMaster(int32 Param_Index, class UObject* __WorldContext, bool* bIsValid, const struct FRecipeSetMasterData* RecipeSetMaster);
	static void FindAdventureBoardMaster(int32 ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBAdventureBoardParamMasterData* AdventureBoardMaster);
	static void GetItemMasterItemIdListFromEfficacyType(EItemEfficacyType InEfficacyType, class UObject* __WorldContext, bool* IsValid, TArray<int32>* OutItemIdList);
	static void FindShopItemSetMaster(int32 Param_Index, class UObject* __WorldContext, bool* bIsValid, struct FSBFlatShopItemSetMasterData* ShopItemSetMaster);
	static const struct FSBMasterAdventureCardDecoration FindAdventureCardDecorationMaster(int32 Param_Index, class UObject* __WorldContext, bool* bIsValid);
	static struct FSBMasterAwardsData FindAwardsMaster(int32 Param_Index, class UObject* __WorldContext, bool* bIsValid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FLIB_UIMasterDataManager_C">();
	}
	static class UFLIB_UIMasterDataManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFLIB_UIMasterDataManager_C>();
	}
};
static_assert(alignof(UFLIB_UIMasterDataManager_C) == 0x000008, "Wrong alignment on UFLIB_UIMasterDataManager_C");
static_assert(sizeof(UFLIB_UIMasterDataManager_C) == 0x000028, "Wrong size on UFLIB_UIMasterDataManager_C");

}

