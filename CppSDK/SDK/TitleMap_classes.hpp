#pragma once

 

// Package: TitleMap

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TitleMap.TitleMap_C
// 0x0000 (0x0230 - 0x0230)
class ATitleMap_C final : public ALevelScriptActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TitleMap_C">();
	}
	static class ATitleMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATitleMap_C>();
	}
};
static_assert(alignof(ATitleMap_C) == 0x000008, "Wrong alignment on ATitleMap_C");
static_assert(sizeof(ATitleMap_C) == 0x000230, "Wrong size on ATitleMap_C");

}

