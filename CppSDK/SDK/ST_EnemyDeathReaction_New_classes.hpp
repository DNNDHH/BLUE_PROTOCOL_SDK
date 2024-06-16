#pragma once

 

// Package: ST_EnemyDeathReaction_New

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_EnemyDeathReaction_New.ST_EnemyDeathReaction_New_C
// 0x0008 (0x0058 - 0x0050)
class UST_EnemyDeathReaction_New_C final : public UASTransition_BlueprintBase
{
public:
	ESBDeathReactionType                          DeathReactionType;                                 // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_EnemyDeathReaction_New_C">();
	}
	static class UST_EnemyDeathReaction_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_EnemyDeathReaction_New_C>();
	}
};
static_assert(alignof(UST_EnemyDeathReaction_New_C) == 0x000008, "Wrong alignment on UST_EnemyDeathReaction_New_C");
static_assert(sizeof(UST_EnemyDeathReaction_New_C) == 0x000058, "Wrong size on UST_EnemyDeathReaction_New_C");
static_assert(offsetof(UST_EnemyDeathReaction_New_C, DeathReactionType) == 0x000050, "Member 'UST_EnemyDeathReaction_New_C::DeathReactionType' has a wrong offset!");

}

