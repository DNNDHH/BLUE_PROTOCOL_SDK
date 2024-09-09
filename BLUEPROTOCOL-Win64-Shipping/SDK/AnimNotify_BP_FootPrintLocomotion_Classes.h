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
	 * BlueprintGeneratedClass AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C
	 * Size -> 0x0000 (FullSize[0x00DB] - InheritedSize[0x00DB])
	 */
	class UAnimNotify_BP_FootPrintLocomotion_C : public UAnimNotify_BP_FootPrintBase_C
	{
	public:
		bool IsLocomotion();
		void GetFootprintType(class USBFootprintComponent* FPComponent, EFootPrintType* FootPrintType);
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
