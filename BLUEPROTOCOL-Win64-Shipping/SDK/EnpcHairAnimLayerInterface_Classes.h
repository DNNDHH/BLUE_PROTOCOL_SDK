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
	 * AnimBlueprintGeneratedClass EnpcHairAnimLayerInterface.EnpcHairAnimLayerInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnpcHairAnimLayerInterface_C : public UAnimLayerInterface
	{
	public:
		void HairLayer(const struct FPoseLink& InPose, const struct FVector& Acceralation, bool Active, struct FPoseLink* HairLayer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
