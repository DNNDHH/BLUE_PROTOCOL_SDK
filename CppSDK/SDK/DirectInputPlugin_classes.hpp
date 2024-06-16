#pragma once

 

// Package: DirectInputPlugin

#include "Basic.hpp"

#include "DirectInputPlugin_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DirectInputPlugin.IDirectInputPluginSettings
// 0x0020 (0x0048 - 0x0028)
class UIDirectInputPluginSettings final : public UObject
{
public:
	TArray<struct FDIPKeySettings>                KeySettings;                                       // 0x0028(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FDIPPresetSetting>              Presets;                                           // 0x0038(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UIDirectInputPluginSettings* GetSettings();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IDirectInputPluginSettings">();
	}
	static class UIDirectInputPluginSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIDirectInputPluginSettings>();
	}
};
static_assert(alignof(UIDirectInputPluginSettings) == 0x000008, "Wrong alignment on UIDirectInputPluginSettings");
static_assert(sizeof(UIDirectInputPluginSettings) == 0x000048, "Wrong size on UIDirectInputPluginSettings");
static_assert(offsetof(UIDirectInputPluginSettings, KeySettings) == 0x000028, "Member 'UIDirectInputPluginSettings::KeySettings' has a wrong offset!");
static_assert(offsetof(UIDirectInputPluginSettings, Presets) == 0x000038, "Member 'UIDirectInputPluginSettings::Presets' has a wrong offset!");

}

