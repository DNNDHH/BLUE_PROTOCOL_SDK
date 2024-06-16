#pragma once

 

// Package: IconEnemy

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconEnemy.IconEnemy_C
// 0x0000 (0x02A0 - 0x02A0)
class UIconEnemy_C final : public USBMapEnemyIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconEnemy_C">();
	}
	static class UIconEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconEnemy_C>();
	}
};
static_assert(alignof(UIconEnemy_C) == 0x000008, "Wrong alignment on UIconEnemy_C");
static_assert(sizeof(UIconEnemy_C) == 0x0002A0, "Wrong size on UIconEnemy_C");

}

