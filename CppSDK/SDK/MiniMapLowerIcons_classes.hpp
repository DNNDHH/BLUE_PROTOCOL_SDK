#pragma once

 

// Package: MiniMapLowerIcons

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapLowerIcons.MiniMapLowerIcons_C
// 0x0000 (0x0308 - 0x0308)
class UMiniMapLowerIcons_C final : public USBMiniMapLowerIcons
{
public:
	void AddIcon(class USBMiniMapIconBase*& InIconWidget, int32 ZOrder, class USBMiniMapIconBase** IconWidget);
	void OnCreateWarpPointExIcon(const class FString& LevelName, const class FString& PortalName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapLowerIcons_C">();
	}
	static class UMiniMapLowerIcons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapLowerIcons_C>();
	}
};
static_assert(alignof(UMiniMapLowerIcons_C) == 0x000008, "Wrong alignment on UMiniMapLowerIcons_C");
static_assert(sizeof(UMiniMapLowerIcons_C) == 0x000308, "Wrong size on UMiniMapLowerIcons_C");

}

