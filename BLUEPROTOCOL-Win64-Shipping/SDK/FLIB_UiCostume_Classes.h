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
	 * BlueprintGeneratedClass FLIB_UiCostume.FLIB_UiCostume_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLIB_UiCostume_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetCostumeEquipTypeFromPartsLocation(ECharaPartsLocation InPartsLocation, class UObject* __WorldContext, ESBCharaEquipType* OutEquipType);
		void FindCostumeConflictingCompositeWearByEquipInfo(const struct FCharaEquipInfo& InCostumeEquipInfo, ESBCharaEquipType InCostumeEquipType, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsConflictingCompositeWear, ESBCharaEquipType* OutConflictingCostumeEquipType);
		void FindCostumeConflictingCompositeWear(TArray<int32_t>* InCostumeItemIds, ESBCharaEquipType InCostumeEquipType, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsConflictingCompositeWear, ESBCharaEquipType* OutConflictingCostumeEquipType);
		void CharaPartsLocationToProtectorCategory(ECharaPartsLocation CharaPartsLocation, class UObject* __WorldContext, EProtectorCategory* ProtectorCategory);
		void ProtectorCategoryToCharaPartsLocation(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation);
		void GetCharaPartsLocationFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation);
		void GetCostumeWearingPartsTextIdForCompositeWear(class UObject* __WorldContext, int32_t* OutTextID);
		void GetCostumeWearingPartsTextIdFromProtectorCategory(unsigned char InProtectorCategory, class UObject* __WorldContext, int32_t* OutTextID);
		class FString GetCostumeWearingPartsText(const struct FSBMasterCostume& MasterCostume, class UObject* __WorldContext);
		void GetOccupiedLocationByCostumeId(int32_t CostumeId, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* bIsValid, TArray<EProtectorCategory>* Result, struct FSBMasterCostume* MasterCostume);
		void GetOccupiedLocation(const struct FSBMasterCostume& MasterCostume, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, TArray<EProtectorCategory>* Result);
		void IsCompositeWearByCostumeId(int32_t CostumeId, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* bIsValid, bool* IsCompositeWear, TArray<ECharaPartsLocation>* OccupiedPartsLocations, struct FSBMasterCostume* MasterCostume);
		void IsCompositeWearByMasterCostume(const struct FSBMasterCostume& MasterCostume, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* OutIsCompositeWear, TArray<ECharaPartsLocation>* OutOccupiedPartsLocations);
		void CheckCostumePartsIsCompositeWear(const class FString& InCostumePartsName, EProtectorCategory InCostumePartsCategory, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsCompositeWear, TArray<ECharaPartsLocation>* OutOccupiedPartsLocations);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
