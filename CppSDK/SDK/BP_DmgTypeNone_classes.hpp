#pragma once

 

// Package: BP_DmgTypeNone

#include "Basic.hpp"

#include "BP_DmgTypeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeNone.BP_DmgTypeNone_C
// 0x0000 (0x0060 - 0x0060)
class UBP_DmgTypeNone_C final : public UBP_DmgTypeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeNone_C">();
	}
	static class UBP_DmgTypeNone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeNone_C>();
	}
};
static_assert(alignof(UBP_DmgTypeNone_C) == 0x000008, "Wrong alignment on UBP_DmgTypeNone_C");
static_assert(sizeof(UBP_DmgTypeNone_C) == 0x000060, "Wrong size on UBP_DmgTypeNone_C");

}

