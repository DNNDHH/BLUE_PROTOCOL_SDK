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
	 * WidgetBlueprintGeneratedClass WholeMapLowerIcons.WholeMapLowerIcons_C
	 * Size -> 0x0000 (FullSize[0x0308] - InheritedSize[0x0308])
	 */
	class UWholeMapLowerIcons_C : public USBWholeLowerIcons
	{
	public:
		void OnCreateWarpPointExIcon(const class FString& LevelName, const class FString& PortalName);
		void AddIcon(class UClass* Class, int32_t ZOrder, class UUserWidget** IconWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
