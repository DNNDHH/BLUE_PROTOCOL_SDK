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
	 * BlueprintGeneratedClass BP_GameSingleton.BP_GameSingleton_C
	 * Size -> 0x0028 (FullSize[0x0DB8] - InheritedSize[0x0D90])
	 */
	class UBP_GameSingleton_C : public USBGameSingleton
	{
	public:
		unsigned char                                              ScriptAssetDB[0x28];                                     // 0x0D90(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
