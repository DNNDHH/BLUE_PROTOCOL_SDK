#pragma once

 

// Package: BP_PlayerLevelStartSequenceComponent

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceComponent.BP_PlayerLevelStartSequenceComponent_C
// 0x0000 (0x00E0 - 0x00E0)
class UBP_PlayerLevelStartSequenceComponent_C final : public USBPlayerLevelStartSequenceComponent
{
public:
	bool CreateTaskList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceComponent_C">();
	}
	static class UBP_PlayerLevelStartSequenceComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceComponent_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceComponent_C) == 0x0000E0, "Wrong size on UBP_PlayerLevelStartSequenceComponent_C");

}

