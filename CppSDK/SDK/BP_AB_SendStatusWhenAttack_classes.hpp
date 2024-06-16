#pragma once

 

// Package: BP_AB_SendStatusWhenAttack

#include "Basic.hpp"

#include "BP_AB_SendStatusWhenAttack_LifeDrain_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_SendStatusWhenAttack.BP_AB_SendStatusWhenAttack_C
// 0x0000 (0x0090 - 0x0090)
class UBP_AB_SendStatusWhenAttack_C final : public UBP_AB_SendStatusWhenAttack_LifeDrain_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_SendStatusWhenAttack_C">();
	}
	static class UBP_AB_SendStatusWhenAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_SendStatusWhenAttack_C>();
	}
};
static_assert(alignof(UBP_AB_SendStatusWhenAttack_C) == 0x000008, "Wrong alignment on UBP_AB_SendStatusWhenAttack_C");
static_assert(sizeof(UBP_AB_SendStatusWhenAttack_C) == 0x000090, "Wrong size on UBP_AB_SendStatusWhenAttack_C");

}

