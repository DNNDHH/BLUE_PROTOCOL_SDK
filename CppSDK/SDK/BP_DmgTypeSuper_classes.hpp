#pragma once

 

// Package: BP_DmgTypeSuper

#include "Basic.hpp"

#include "BP_DmgTypeBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DmgTypeSuper.BP_DmgTypeSuper_C
// 0x0000 (0x0060 - 0x0060)
class UBP_DmgTypeSuper_C : public UBP_DmgTypeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DmgTypeSuper_C">();
	}
	static class UBP_DmgTypeSuper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DmgTypeSuper_C>();
	}
};
static_assert(alignof(UBP_DmgTypeSuper_C) == 0x000008, "Wrong alignment on UBP_DmgTypeSuper_C");
static_assert(sizeof(UBP_DmgTypeSuper_C) == 0x000060, "Wrong size on UBP_DmgTypeSuper_C");

}

