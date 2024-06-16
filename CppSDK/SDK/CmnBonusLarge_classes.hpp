#pragma once

 

// Package: CmnBonusLarge

#include "Basic.hpp"

#include "CmnBonusCommon_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBonusLarge.CmnBonusLarge_C
// 0x0000 (0x0280 - 0x0280)
class UCmnBonusLarge_C final : public UCmnBonusCommon_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBonusLarge_C">();
	}
	static class UCmnBonusLarge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBonusLarge_C>();
	}
};
static_assert(alignof(UCmnBonusLarge_C) == 0x000008, "Wrong alignment on UCmnBonusLarge_C");
static_assert(sizeof(UCmnBonusLarge_C) == 0x000280, "Wrong size on UCmnBonusLarge_C");

}

