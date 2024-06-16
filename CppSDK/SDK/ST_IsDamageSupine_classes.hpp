#pragma once

 

// Package: ST_IsDamageSupine

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_IsDamageSupine.ST_IsDamageSupine_C
// 0x0000 (0x0050 - 0x0050)
class UST_IsDamageSupine_C final : public UASTransition_BlueprintBase
{
public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_IsDamageSupine_C">();
	}
	static class UST_IsDamageSupine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_IsDamageSupine_C>();
	}
};
static_assert(alignof(UST_IsDamageSupine_C) == 0x000008, "Wrong alignment on UST_IsDamageSupine_C");
static_assert(sizeof(UST_IsDamageSupine_C) == 0x000050, "Wrong size on UST_IsDamageSupine_C");

}

