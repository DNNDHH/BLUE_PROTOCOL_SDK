#pragma once

 

// Package: BP_DmgTypeDownMiddle

#include "Basic.hpp"

#include "BP_DmgTypeMiddle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeDownMiddle.BP_DmgTypeDownMiddle_C
// 0x0000 (0x0060 - 0x0060)
class UBP_DmgTypeDownMiddle_C : public UBP_DmgTypeMiddle_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeDownMiddle_C">();
	}
	static class UBP_DmgTypeDownMiddle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeDownMiddle_C>();
	}
};
static_assert(alignof(UBP_DmgTypeDownMiddle_C) == 0x000008, "Wrong alignment on UBP_DmgTypeDownMiddle_C");
static_assert(sizeof(UBP_DmgTypeDownMiddle_C) == 0x000060, "Wrong size on UBP_DmgTypeDownMiddle_C");

}

