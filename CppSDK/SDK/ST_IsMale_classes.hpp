#pragma once

 

// Package: ST_IsMale

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_IsMale.ST_IsMale_C
// 0x0000 (0x0050 - 0x0050)
class UST_IsMale_C final : public UASTransition_BlueprintBase
{
public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_IsMale_C">();
	}
	static class UST_IsMale_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_IsMale_C>();
	}
};
static_assert(alignof(UST_IsMale_C) == 0x000008, "Wrong alignment on UST_IsMale_C");
static_assert(sizeof(UST_IsMale_C) == 0x000050, "Wrong size on UST_IsMale_C");

}

