#pragma once

 

// Package: BP_DmgTypeMiddle

#include "Basic.hpp"

#include "BP_DmgTypeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeMiddle.BP_DmgTypeMiddle_C
// 0x0000 (0x0060 - 0x0060)
class UBP_DmgTypeMiddle_C : public UBP_DmgTypeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeMiddle_C">();
	}
	static class UBP_DmgTypeMiddle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeMiddle_C>();
	}
};
static_assert(alignof(UBP_DmgTypeMiddle_C) == 0x000008, "Wrong alignment on UBP_DmgTypeMiddle_C");
static_assert(sizeof(UBP_DmgTypeMiddle_C) == 0x000060, "Wrong size on UBP_DmgTypeMiddle_C");

}

