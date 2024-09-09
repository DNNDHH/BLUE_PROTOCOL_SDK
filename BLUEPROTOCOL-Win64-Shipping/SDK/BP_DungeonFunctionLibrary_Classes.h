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
	 * BlueprintGeneratedClass BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_DungeonFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void FindClassActor(class UObject* Object, class UClass* TargetClass, class UObject* __WorldContext, class AActor** ActorObject, int32_t* Num);
		void ResetPlayerAction(class ASBPlayerCharacter* PlayerCharacter, class UObject* __WorldContext);
		void GetPlayerStartLocation(class APawn* Pawn, class UObject* __WorldContext, class APlayerStart** PlayerStart, float* DistFromStart);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
