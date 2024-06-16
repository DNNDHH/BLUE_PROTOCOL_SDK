#pragma once

 

// Package: BP_UI_MapFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_UI_MapFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void CheckIfIconPositionCoincide(TArray<struct FVector2D>& InRegisteredPositionList, const struct FVector2D& InNewPosition, class UObject* __WorldContext, bool* DoesCoincide, int32* OutCoincideIconRegId);
	static void GetMapUIErrorMessageText(int32 InTextID, class UObject* __WorldContext, class FText* OutText);
	static void GetMapSymbolIconTexture(EMapSymbolIconType InSymbolIconType, class UObject* __WorldContext, class UTexture2D** OutSymbolIconTexture);
	static void Get_Map_Icon_Info_by_Location_Info(const struct FSBLocationInfo& InLocationInfo, class UObject* In, class UObject* NewParam, class UObject* __WorldContext, bool* IsMapIconValid, EMapSymbolIconType* OutIconType, int32* OutIconPriority, struct FVector2D* OutIconWorldPosition, class FString* OutIconTooltipText, class FString* OutTermId);
	static void GetMapIconInfo_ByCharacterProfileData(ESBFacilityType InCharaProfileDataFacilityType, class FName InCharaProfileDataRowName, const struct FSBCharacterProfileLocationData& InCharacterProfileLocationData, class UObject* __WorldContext, bool* IsMapIconValid, class UTexture2D** OutIconTexture, int32* OutIconPriority, struct FVector2D* OutIconWorldPosition, class FString* OutIconTooltipText);
	static void SetNpcFacilityIconTexture(ESBFacilityType FacilityType, class UImage*& Image, class UObject* __WorldContext, bool* IsFound, bool* IsEnable);
	static bool IsPublicDungeon(const class FString& SearchIn, class UObject* __WorldContext);
	static void GetMapSymbolIconTextureByMapId(const class FString& InMapId, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_MapFunctionLibrary_C">();
	}
	static class UBP_UI_MapFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_MapFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_UI_MapFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_UI_MapFunctionLibrary_C");
static_assert(sizeof(UBP_UI_MapFunctionLibrary_C) == 0x000028, "Wrong size on UBP_UI_MapFunctionLibrary_C");

}

