#pragma once

 

// Package: BP_DmgTypeMin

#include "Basic.hpp"

#include "BP_DmgTypeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeMin.BP_DmgTypeMin_C
// 0x0000 (0x0060 - 0x0060)
class UBP_DmgTypeMin_C final : public UBP_DmgTypeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeMin_C">();
	}
	static class UBP_DmgTypeMin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeMin_C>();
	}
};
static_assert(alignof(UBP_DmgTypeMin_C) == 0x000008, "Wrong alignment on UBP_DmgTypeMin_C");
static_assert(sizeof(UBP_DmgTypeMin_C) == 0x000060, "Wrong size on UBP_DmgTypeMin_C");

}
