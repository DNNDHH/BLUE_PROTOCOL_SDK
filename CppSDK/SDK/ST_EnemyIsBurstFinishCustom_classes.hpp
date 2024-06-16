#pragma once

 

// Package: ST_EnemyIsBurstFinishCustom

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_EnemyIsBurstFinishCustom.ST_EnemyIsBurstFinishCustom_C
// 0x0000 (0x0050 - 0x0050)
class UST_EnemyIsBurstFinishCustom_C final : public UASTransition_BlueprintBase
{
public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_EnemyIsBurstFinishCustom_C">();
	}
	static class UST_EnemyIsBurstFinishCustom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_EnemyIsBurstFinishCustom_C>();
	}
};
static_assert(alignof(UST_EnemyIsBurstFinishCustom_C) == 0x000008, "Wrong alignment on UST_EnemyIsBurstFinishCustom_C");
static_assert(sizeof(UST_EnemyIsBurstFinishCustom_C) == 0x000050, "Wrong size on UST_EnemyIsBurstFinishCustom_C");

}

