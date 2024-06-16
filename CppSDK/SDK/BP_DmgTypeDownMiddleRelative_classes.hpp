#pragma once

 

// Package: BP_DmgTypeDownMiddleRelative

#include "Basic.hpp"

#include "BP_DmgTypeDownMiddle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeDownMiddleRelative.BP_DmgTypeDownMiddleRelative_C
// 0x0000 (0x0060 - 0x0060)
class UBP_DmgTypeDownMiddleRelative_C final : public UBP_DmgTypeDownMiddle_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeDownMiddleRelative_C">();
	}
	static class UBP_DmgTypeDownMiddleRelative_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeDownMiddleRelative_C>();
	}
};
static_assert(alignof(UBP_DmgTypeDownMiddleRelative_C) == 0x000008, "Wrong alignment on UBP_DmgTypeDownMiddleRelative_C");
static_assert(sizeof(UBP_DmgTypeDownMiddleRelative_C) == 0x000060, "Wrong size on UBP_DmgTypeDownMiddleRelative_C");

}

