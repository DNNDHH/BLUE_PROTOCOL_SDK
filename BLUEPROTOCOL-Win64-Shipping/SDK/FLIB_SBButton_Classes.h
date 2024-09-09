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
	 * BlueprintGeneratedClass FLIB_SBButton.FLIB_SBButton_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLIB_SBButton_C : public UBlueprintFunctionLibrary
	{
	public:
		void SetSBButtonParam(class USBButton_C* Target, class UAkAudioEvent* PressedSound, class UAkAudioEvent* HoveredSound, ESystemSE PressedSoundId, ESystemSE HoveredSoundId, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
