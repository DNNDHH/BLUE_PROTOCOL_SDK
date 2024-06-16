#pragma once

 

// Package: IconDxBattleGateBarrier

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconDxBattleGateBarrier.IconDxBattleGateBarrier_C
// 0x0000 (0x0298 - 0x0298)
class UIconDxBattleGateBarrier_C final : public USBMapIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconDxBattleGateBarrier_C">();
	}
	static class UIconDxBattleGateBarrier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconDxBattleGateBarrier_C>();
	}
};
static_assert(alignof(UIconDxBattleGateBarrier_C) == 0x000008, "Wrong alignment on UIconDxBattleGateBarrier_C");
static_assert(sizeof(UIconDxBattleGateBarrier_C) == 0x000298, "Wrong size on UIconDxBattleGateBarrier_C");

}

