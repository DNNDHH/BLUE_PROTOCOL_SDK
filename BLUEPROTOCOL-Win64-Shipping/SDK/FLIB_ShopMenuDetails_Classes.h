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
	 * BlueprintGeneratedClass FLIB_ShopMenuDetails.FLIB_ShopMenuDetails_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLIB_ShopMenuDetails_C : public UBlueprintFunctionLibrary
	{
	public:
		class FText GetUnknownAbilityText(class UObject* __WorldContext);
		void GetAbilityName_Internal(const struct FMasterImaginePerkTable& MasterImaginePerkTable, class UObject* __WorldContext, bool* bHasValidAbility, class FText* AbilityName, int32_t* PerkId, bool* bShowRateButton);
		void GetAbilityName(const class FString& UniqueId, ESBRewardItemType OriginalRewardType, int32_t OriginalItemIndex, class UObject* __WorldContext, bool* bHasValidAbility, class FText* AbilityName, int32_t* PerkId, bool* bShowRateButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
