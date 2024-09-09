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
	 * WidgetBlueprintGeneratedClass MiniMapLowerIcons.MiniMapLowerIcons_C
	 * Size -> 0x0000 (FullSize[0x0308] - InheritedSize[0x0308])
	 */
	class UMiniMapLowerIcons_C : public USBMiniMapLowerIcons
	{
	public:
		void OnCreateWarpPointExIcon(const class FString& LevelName, const class FString& PortalName);
		void AddIcon(class USBMiniMapIconBase** InIconWidget, int32_t ZOrder, class USBMiniMapIconBase** IconWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
