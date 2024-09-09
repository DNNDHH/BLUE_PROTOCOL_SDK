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
	 * BlueprintGeneratedClass BP_NpcFunctionLibrary.BP_NpcFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_NpcFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void FinalizeNamePlate(class ASBMobCharacter* Character, class UObject* __WorldContext);
		void InitializeNamePlate(class ASBMobCharacter* Character, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
