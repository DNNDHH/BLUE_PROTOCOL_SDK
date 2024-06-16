#pragma once

 

// Package: ST_CheckDamageDirection

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_TransitionBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CheckDamageDirection.ST_CheckDamageDirection_C
// 0x0008 (0x0058 - 0x0050)
class UST_CheckDamageDirection_C final : public UST_TransitionBase_C
{
public:
	ESBDamageDirection                            Direction;                                         // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CheckDamageDirection_C">();
	}
	static class UST_CheckDamageDirection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CheckDamageDirection_C>();
	}
};
static_assert(alignof(UST_CheckDamageDirection_C) == 0x000008, "Wrong alignment on UST_CheckDamageDirection_C");
static_assert(sizeof(UST_CheckDamageDirection_C) == 0x000058, "Wrong size on UST_CheckDamageDirection_C");
static_assert(offsetof(UST_CheckDamageDirection_C, Direction) == 0x000050, "Member 'UST_CheckDamageDirection_C::Direction' has a wrong offset!");

}

