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
	 * WidgetBlueprintGeneratedClass ClassIcon.ClassIcon_C
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class UClassIcon_C : public USBClassIcon
	{
	public:
		class UTexture2D* GetIconTexture();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
