#pragma once

 

// Package: KeySettingLabel

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeySettingLabel.KeySettingLabel_C
// 0x0000 (0x0278 - 0x0278)
class UKeySettingLabel_C final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeySettingLabel_C">();
	}
	static class UKeySettingLabel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeySettingLabel_C>();
	}
};
static_assert(alignof(UKeySettingLabel_C) == 0x000008, "Wrong alignment on UKeySettingLabel_C");
static_assert(sizeof(UKeySettingLabel_C) == 0x000278, "Wrong size on UKeySettingLabel_C");

}

