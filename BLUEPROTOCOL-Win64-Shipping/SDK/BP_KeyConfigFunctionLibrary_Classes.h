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
	 * BlueprintGeneratedClass BP_KeyConfigFunctionLibrary.BP_KeyConfigFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_KeyConfigFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsWarningKey(const struct FKey& InKey, EConfig_KeyconfigItems KeyItemType, class UObject* __WorldContext, bool* bIsWarning, class FText* WarningText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
