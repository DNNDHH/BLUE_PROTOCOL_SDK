#pragma once

 

// Package: BP_DmgTypeLight

#include "Basic.hpp"

#include "BP_DmgTypeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeLight.BP_DmgTypeLight_C
// 0x0000 (0x0060 - 0x0060)
class UBP_DmgTypeLight_C final : public UBP_DmgTypeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeLight_C">();
	}
	static class UBP_DmgTypeLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeLight_C>();
	}
};
static_assert(alignof(UBP_DmgTypeLight_C) == 0x000008, "Wrong alignment on UBP_DmgTypeLight_C");
static_assert(sizeof(UBP_DmgTypeLight_C) == 0x000060, "Wrong size on UBP_DmgTypeLight_C");

}

