#pragma once

 

// Package: BP_UI_AestheShopFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "E_AestheShop_TopMenuItems_DetailSettings_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_UI_AestheShopFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetAestheCourseMasterFromTicketTokenId(int32 InTicketTokenId, class UObject* __WorldContext, bool* OutIsValid, struct FSBAestheShopCourseMasterData* OutMaster);
	static void GetAestheCategoryIconTexture(E_AestheShop_TopMenuItems_DetailSettings InAestheDetailSettingType, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture);
	static void IsAesthePartsIconActive(const class FString& InPartsIconId, const struct FDateTime& InNowTime, class UObject* __WorldContext, bool* OutIsIconActive);
	static void GetAesthePartsSortId(const class FString& InIconId, class UObject* __WorldContext, int32* OutSortId);
	static void SortAesthePartsIconInfo(TArray<struct FST_AestheShopPartsIconComplexInfo>& InInfo, class UObject* __WorldContext, TArray<struct FST_AestheShopPartsIconComplexInfo>* OutSortedInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_AestheShopFunctionLibrary_C">();
	}
	static class UBP_UI_AestheShopFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_AestheShopFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_UI_AestheShopFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_UI_AestheShopFunctionLibrary_C");
static_assert(sizeof(UBP_UI_AestheShopFunctionLibrary_C) == 0x000028, "Wrong size on UBP_UI_AestheShopFunctionLibrary_C");

}

