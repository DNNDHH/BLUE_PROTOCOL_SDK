#pragma once

 

// Package: FLIB_UiCostume

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CharaParts_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FLIB_UiCostume.FLIB_UiCostume_C
// 0x0000 (0x0028 - 0x0028)
class UFLIB_UiCostume_C final : public UBlueprintFunctionLibrary
{
public:
	static void CheckCostumePartsIsCompositeWear(const class FString& InCostumePartsName, EProtectorCategory InCostumePartsCategory, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsCompositeWear, TArray<ECharaPartsLocation>* OutOccupiedPartsLocations);
	static void IsCompositeWearByMasterCostume(const struct FSBMasterCostume& MasterCostume, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* OutIsCompositeWear, TArray<ECharaPartsLocation>* OutOccupiedPartsLocations);
	static void IsCompositeWearByCostumeId(int32 CostumeId, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* bIsValid, bool* IsCompositeWear, TArray<ECharaPartsLocation>* OccupiedPartsLocations, struct FSBMasterCostume* MasterCostume);
	static void GetOccupiedLocation(const struct FSBMasterCostume& MasterCostume, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, TArray<EProtectorCategory>* Result);
	static void GetOccupiedLocationByCostumeId(int32 CostumeId, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* bIsValid, TArray<EProtectorCategory>* Result, struct FSBMasterCostume* MasterCostume);
	static class FString GetCostumeWearingPartsText(const struct FSBMasterCostume& MasterCostume, class UObject* __WorldContext);
	static void GetCostumeWearingPartsTextIdFromProtectorCategory(uint8 InProtectorCategory, class UObject* __WorldContext, int32* OutTextId);
	static void GetCostumeWearingPartsTextIdForCompositeWear(class UObject* __WorldContext, int32* OutTextId);
	static void GetCharaPartsLocationFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation);
	static void ProtectorCategoryToCharaPartsLocation(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation);
	static void CharaPartsLocationToProtectorCategory(ECharaPartsLocation CharaPartsLocation, class UObject* __WorldContext, EProtectorCategory* ProtectorCategory);
	static void FindCostumeConflictingCompositeWear(TArray<int32>& InCostumeItemIds, ESBCharaEquipType InCostumeEquipType, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsConflictingCompositeWear, ESBCharaEquipType* OutConflictingCostumeEquipType);
	static void FindCostumeConflictingCompositeWearByEquipInfo(const struct FCharaEquipInfo& InCostumeEquipInfo, ESBCharaEquipType InCostumeEquipType, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsConflictingCompositeWear, ESBCharaEquipType* OutConflictingCostumeEquipType);
	static void GetCostumeEquipTypeFromPartsLocation(ECharaPartsLocation InPartsLocation, class UObject* __WorldContext, ESBCharaEquipType* OutEquipType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FLIB_UiCostume_C">();
	}
	static class UFLIB_UiCostume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFLIB_UiCostume_C>();
	}
};
static_assert(alignof(UFLIB_UiCostume_C) == 0x000008, "Wrong alignment on UFLIB_UiCostume_C");
static_assert(sizeof(UFLIB_UiCostume_C) == 0x000028, "Wrong size on UFLIB_UiCostume_C");

}

