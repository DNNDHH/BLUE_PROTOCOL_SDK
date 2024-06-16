#pragma once

 

// Package: ST_TransitionBase

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_TransitionBase.ST_TransitionBase_C
// 0x0000 (0x0050 - 0x0050)
class UST_TransitionBase_C : public UASTransition_BlueprintBase
{
public:
	void GetLastDamageInfo(class UAnimInstance* AnimInstance, struct FSBDamageInfo* DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_TransitionBase_C">();
	}
	static class UST_TransitionBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_TransitionBase_C>();
	}
};
static_assert(alignof(UST_TransitionBase_C) == 0x000008, "Wrong alignment on UST_TransitionBase_C");
static_assert(sizeof(UST_TransitionBase_C) == 0x000050, "Wrong size on UST_TransitionBase_C");

}

