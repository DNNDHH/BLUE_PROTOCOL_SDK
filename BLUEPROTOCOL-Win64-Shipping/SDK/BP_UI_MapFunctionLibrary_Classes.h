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
	 * BlueprintGeneratedClass BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_UI_MapFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetMapSymbolIconTextureByMapId(const class FString& InMapId, class UObject* __WorldContext);
		bool IsPublicDungeon(const class FString& SearchIn, class UObject* __WorldContext);
		void SetNpcFacilityIconTexture(ESBFacilityType FacilityType, class UImage** Image, class UObject* __WorldContext, bool* IsFound, bool* IsEnable);
		void GetMapIconInfo_ByCharacterProfileData(ESBFacilityType InCharaProfileDataFacilityType, const class FName& InCharaProfileDataRowName, const struct FSBCharacterProfileLocationData& InCharacterProfileLocationData, class UObject* __WorldContext, bool* IsMapIconValid, class UTexture2D** OutIconTexture, int32_t* OutIconPriority, struct FVector2D* OutIconWorldPosition, class FString* OutIconTooltipText);
		void GetMapIconInfobyLocationInfo(const struct FSBLocationInfo& InLocationInfo, class UObject* In, class UObject* NewParam, class UObject* __WorldContext, bool* IsMapIconValid, EMapSymbolIconType* OutIconType, int32_t* OutIconPriority, struct FVector2D* OutIconWorldPosition, class FString* OutIconTooltipText, class FString* OutTermId);
		void GetMapSymbolIconTexture(EMapSymbolIconType InSymbolIconType, class UObject* __WorldContext, class UTexture2D** OutSymbolIconTexture);
		void GetMapUIErrorMessageText(int32_t InTextId, class UObject* __WorldContext, class FText* OutText);
		void CheckIfIconPositionCoincide(TArray<struct FVector2D>* InRegisteredPositionList, const struct FVector2D& InNewPosition, class UObject* __WorldContext, bool* DoesCoincide, int32_t* OutCoincideIconRegId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
