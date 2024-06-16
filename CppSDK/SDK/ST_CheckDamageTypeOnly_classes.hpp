#pragma once

 

// Package: ST_CheckDamageTypeOnly

#include "Basic.hpp"

#include "E_DamageReaction_structs.hpp"
#include "ST_TransitionBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CheckDamageTypeOnly.ST_CheckDamageTypeOnly_C
// 0x0008 (0x0058 - 0x0050)
class UST_CheckDamageTypeOnly_C final : public UST_TransitionBase_C
{
public:
	E_DamageReaction                              Reaction;                                          // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CheckDamageTypeOnly_C">();
	}
	static class UST_CheckDamageTypeOnly_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CheckDamageTypeOnly_C>();
	}
};
static_assert(alignof(UST_CheckDamageTypeOnly_C) == 0x000008, "Wrong alignment on UST_CheckDamageTypeOnly_C");
static_assert(sizeof(UST_CheckDamageTypeOnly_C) == 0x000058, "Wrong size on UST_CheckDamageTypeOnly_C");
static_assert(offsetof(UST_CheckDamageTypeOnly_C, Reaction) == 0x000050, "Member 'UST_CheckDamageTypeOnly_C::Reaction' has a wrong offset!");

}

