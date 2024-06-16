#pragma once

 

// Package: BP_DmgTypeDownSuper

#include "Basic.hpp"

#include "BP_DmgTypeSuper_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeDownSuper.BP_DmgTypeDownSuper_C
// 0x0000 (0x0060 - 0x0060)
class UBP_DmgTypeDownSuper_C final : public UBP_DmgTypeSuper_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeDownSuper_C">();
	}
	static class UBP_DmgTypeDownSuper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeDownSuper_C>();
	}
};
static_assert(alignof(UBP_DmgTypeDownSuper_C) == 0x000008, "Wrong alignment on UBP_DmgTypeDownSuper_C");
static_assert(sizeof(UBP_DmgTypeDownSuper_C) == 0x000060, "Wrong size on UBP_DmgTypeDownSuper_C");

}

