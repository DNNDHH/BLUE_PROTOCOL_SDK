#pragma once

 

// Package: WholeMapLowerIcons

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WholeMapLowerIcons.WholeMapLowerIcons_C
// 0x0000 (0x0308 - 0x0308)
class UWholeMapLowerIcons_C final : public USBWholeLowerIcons
{
public:
	void AddIcon(class UClass* Param_Class, int32 ZOrder, class UUserWidget** IconWidget);
	void OnCreateWarpPointExIcon(const class FString& LevelName, const class FString& PortalName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WholeMapLowerIcons_C">();
	}
	static class UWholeMapLowerIcons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWholeMapLowerIcons_C>();
	}
};
static_assert(alignof(UWholeMapLowerIcons_C) == 0x000008, "Wrong alignment on UWholeMapLowerIcons_C");
static_assert(sizeof(UWholeMapLowerIcons_C) == 0x000308, "Wrong size on UWholeMapLowerIcons_C");

}

