#pragma once

 

// Package: ST_EnemyIsBurstFinishCustomEnd

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_EnemyIsBurstFinishCustomEnd.ST_EnemyIsBurstFinishCustomEnd_C
// 0x0000 (0x0050 - 0x0050)
class UST_EnemyIsBurstFinishCustomEnd_C final : public UASTransition_BlueprintBase
{
public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_EnemyIsBurstFinishCustomEnd_C">();
	}
	static class UST_EnemyIsBurstFinishCustomEnd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_EnemyIsBurstFinishCustomEnd_C>();
	}
};
static_assert(alignof(UST_EnemyIsBurstFinishCustomEnd_C) == 0x000008, "Wrong alignment on UST_EnemyIsBurstFinishCustomEnd_C");
static_assert(sizeof(UST_EnemyIsBurstFinishCustomEnd_C) == 0x000050, "Wrong size on UST_EnemyIsBurstFinishCustomEnd_C");

}

