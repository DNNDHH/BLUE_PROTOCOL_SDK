#pragma once

 

// Package: BP_EventTriggerDB

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventTriggerDB.BP_EventTriggerDB_C
// 0x0000 (0x0038 - 0x0038)
class UBP_EventTriggerDB_C final : public USBEventTriggerDatabase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventTriggerDB_C">();
	}
	static class UBP_EventTriggerDB_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EventTriggerDB_C>();
	}
};
static_assert(alignof(UBP_EventTriggerDB_C) == 0x000008, "Wrong alignment on UBP_EventTriggerDB_C");
static_assert(sizeof(UBP_EventTriggerDB_C) == 0x000038, "Wrong size on UBP_EventTriggerDB_C");

}

