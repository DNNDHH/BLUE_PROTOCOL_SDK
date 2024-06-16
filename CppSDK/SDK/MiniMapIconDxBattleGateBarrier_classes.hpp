#pragma once

 

// Package: MiniMapIconDxBattleGateBarrier

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C
// 0x0008 (0x0298 - 0x0290)
class UMiniMapIconDxBattleGateBarrier_C final : public USBMiniMapIconBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_MiniMapIconDxBattleGateBarrier(int32 EntryPoint);
	void _________0();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconDxBattleGateBarrier_C">();
	}
	static class UMiniMapIconDxBattleGateBarrier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconDxBattleGateBarrier_C>();
	}
};
static_assert(alignof(UMiniMapIconDxBattleGateBarrier_C) == 0x000008, "Wrong alignment on UMiniMapIconDxBattleGateBarrier_C");
static_assert(sizeof(UMiniMapIconDxBattleGateBarrier_C) == 0x000298, "Wrong size on UMiniMapIconDxBattleGateBarrier_C");
static_assert(offsetof(UMiniMapIconDxBattleGateBarrier_C, UberGraphFrame) == 0x000290, "Member 'UMiniMapIconDxBattleGateBarrier_C::UberGraphFrame' has a wrong offset!");

}

