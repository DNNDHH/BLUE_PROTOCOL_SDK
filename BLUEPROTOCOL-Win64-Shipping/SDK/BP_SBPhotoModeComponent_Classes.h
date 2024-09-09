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
	 * BlueprintGeneratedClass BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UBP_SBPhotoModeComponent_C : public USBPlayerPhotoModeComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		class FName GetTextId(ESBPhotoModeStartState State);
		void BP_OnCantStartPhotoMode(ESBPhotoModeStartState State);
		void ExecuteUbergraph_BP_SBPhotoModeComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
