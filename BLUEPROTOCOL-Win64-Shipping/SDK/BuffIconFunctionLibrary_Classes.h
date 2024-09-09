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
	 * BlueprintGeneratedClass BuffIconFunctionLibrary.BuffIconFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBuffIconFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void FindIconAssetData(ESBStatusAilmentIconType IconType, bool bLarge, class UObject* __WorldContext, class UTexture2D** Texture, bool* IsFind, class FName* TextId, bool* bBuff, ESBStatusAilmentPlateType* Type);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
