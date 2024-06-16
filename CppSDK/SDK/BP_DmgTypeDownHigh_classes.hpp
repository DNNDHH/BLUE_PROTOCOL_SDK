#pragma once

 

// Package: BP_DmgTypeDownHigh

#include "Basic.hpp"

#include "BP_DmgTypeHigh_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeDownHigh.BP_DmgTypeDownHigh_C
// 0x0000 (0x0060 - 0x0060)
class UBP_DmgTypeDownHigh_C : public UBP_DmgTypeHigh_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeDownHigh_C">();
	}
	static class UBP_DmgTypeDownHigh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeDownHigh_C>();
	}
};
static_assert(alignof(UBP_DmgTypeDownHigh_C) == 0x000008, "Wrong alignment on UBP_DmgTypeDownHigh_C");
static_assert(sizeof(UBP_DmgTypeDownHigh_C) == 0x000060, "Wrong size on UBP_DmgTypeDownHigh_C");

}

