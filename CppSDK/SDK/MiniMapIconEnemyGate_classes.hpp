#pragma once

 

// Package: MiniMapIconEnemyGate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconEnemyGate.MiniMapIconEnemyGate_C
// 0x0008 (0x0298 - 0x0290)
class UMiniMapIconEnemyGate_C final : public USBMiniMapIconBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_MiniMapIconEnemyGate(int32 EntryPoint);
	void _________0();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconEnemyGate_C">();
	}
	static class UMiniMapIconEnemyGate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconEnemyGate_C>();
	}
};
static_assert(alignof(UMiniMapIconEnemyGate_C) == 0x000008, "Wrong alignment on UMiniMapIconEnemyGate_C");
static_assert(sizeof(UMiniMapIconEnemyGate_C) == 0x000298, "Wrong size on UMiniMapIconEnemyGate_C");
static_assert(offsetof(UMiniMapIconEnemyGate_C, UberGraphFrame) == 0x000290, "Member 'UMiniMapIconEnemyGate_C::UberGraphFrame' has a wrong offset!");

}

