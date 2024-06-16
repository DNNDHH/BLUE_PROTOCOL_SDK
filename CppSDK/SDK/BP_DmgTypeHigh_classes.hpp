#pragma once

 

// Package: BP_DmgTypeHigh

#include "Basic.hpp"

#include "BP_DmgTypeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeHigh.BP_DmgTypeHigh_C
// 0x0000 (0x0060 - 0x0060)
class UBP_DmgTypeHigh_C : public UBP_DmgTypeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeHigh_C">();
	}
	static class UBP_DmgTypeHigh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeHigh_C>();
	}
};
static_assert(alignof(UBP_DmgTypeHigh_C) == 0x000008, "Wrong alignment on UBP_DmgTypeHigh_C");
static_assert(sizeof(UBP_DmgTypeHigh_C) == 0x000060, "Wrong size on UBP_DmgTypeHigh_C");

}

