#pragma once

 

// Package: BP_DmgTypeHighRelative

#include "Basic.hpp"

#include "BP_DmgTypeHigh_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeHighRelative.BP_DmgTypeHighRelative_C
// 0x0000 (0x0060 - 0x0060)
class UBP_DmgTypeHighRelative_C final : public UBP_DmgTypeHigh_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeHighRelative_C">();
	}
	static class UBP_DmgTypeHighRelative_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeHighRelative_C>();
	}
};
static_assert(alignof(UBP_DmgTypeHighRelative_C) == 0x000008, "Wrong alignment on UBP_DmgTypeHighRelative_C");
static_assert(sizeof(UBP_DmgTypeHighRelative_C) == 0x000060, "Wrong size on UBP_DmgTypeHighRelative_C");

}

