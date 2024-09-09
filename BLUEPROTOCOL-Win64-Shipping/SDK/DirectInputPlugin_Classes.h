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
	 * Class DirectInputPlugin.IDirectInputPluginSettings
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UIDirectInputPluginSettings : public UObject
	{
	public:
		TArray<struct FDIPKeySettings>                             KeySettings;                                             // 0x0028(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FDIPPresetSetting>                           Presets;                                                 // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		class UIDirectInputPluginSettings* GetSettings();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
