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
	 * BlueprintGeneratedClass BP_FootprintFunctionLibrary.BP_FootprintFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_FootprintFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void ParticleRotationToDecalRotation(const struct FRotator& ParticleRotation, bool bUseActorRotation, class AActor* Actor, class UObject* __WorldContext, struct FRotator* DecalRotation);
		void SocketRotationToParticleRotation(const struct FRotator& SocketRotation, class UObject* __WorldContext, struct FRotator* ParticleRotation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
