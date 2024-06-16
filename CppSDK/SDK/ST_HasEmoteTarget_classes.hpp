#pragma once

 

// Package: ST_HasEmoteTarget

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_HasEmoteTarget.ST_HasEmoteTarget_C
// 0x0000 (0x0050 - 0x0050)
class UST_HasEmoteTarget_C final : public UASTransition_BlueprintBase
{
public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_HasEmoteTarget_C">();
	}
	static class UST_HasEmoteTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_HasEmoteTarget_C>();
	}
};
static_assert(alignof(UST_HasEmoteTarget_C) == 0x000008, "Wrong alignment on UST_HasEmoteTarget_C");
static_assert(sizeof(UST_HasEmoteTarget_C) == 0x000050, "Wrong size on UST_HasEmoteTarget_C");

}

