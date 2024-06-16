#pragma once

 

// Package: FLIB_ShopMenuDetails

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C
// 0x0000 (0x0028 - 0x0028)
class UFLIB_ShopMenuDetails_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetAbilityName(const class FString& UniqueId, ESBRewardItemType OriginalRewardType, int32 OriginalItemIndex, class UObject* __WorldContext, bool* bHasValidAbility, class FText* AbilityName, int32* PerkId, bool* bShowRateButton);
	static void GetAbilityName_Internal(const struct FMasterImaginePerkTable& MasterImaginePerkTable, class UObject* __WorldContext, bool* bHasValidAbility, class FText* AbilityName, int32* PerkId, bool* bShowRateButton);
	static class FText GetUnknownAbilityText(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FLIB_ShopMenuDetails_C">();
	}
	static class UFLIB_ShopMenuDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFLIB_ShopMenuDetails_C>();
	}
};
static_assert(alignof(UFLIB_ShopMenuDetails_C) == 0x000008, "Wrong alignment on UFLIB_ShopMenuDetails_C");
static_assert(sizeof(UFLIB_ShopMenuDetails_C) == 0x000028, "Wrong size on UFLIB_ShopMenuDetails_C");

}

