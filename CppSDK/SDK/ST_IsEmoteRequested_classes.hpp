#pragma once

 

// Package: ST_IsEmoteRequested

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_IsEmoteRequested.ST_IsEmoteRequested_C
// 0x0000 (0x0050 - 0x0050)
class UST_IsEmoteRequested_C final : public UASTransition_BlueprintBase
{
public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_IsEmoteRequested_C">();
	}
	static class UST_IsEmoteRequested_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_IsEmoteRequested_C>();
	}
};
static_assert(alignof(UST_IsEmoteRequested_C) == 0x000008, "Wrong alignment on UST_IsEmoteRequested_C");
static_assert(sizeof(UST_IsEmoteRequested_C) == 0x000050, "Wrong size on UST_IsEmoteRequested_C");

}

