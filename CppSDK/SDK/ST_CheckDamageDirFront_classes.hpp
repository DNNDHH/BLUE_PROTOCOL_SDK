#pragma once

 

// Package: ST_CheckDamageDirFront

#include "Basic.hpp"

#include "ST_TransitionBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CheckDamageDirFront.ST_CheckDamageDirFront_C
// 0x0000 (0x0050 - 0x0050)
class UST_CheckDamageDirFront_C final : public UST_TransitionBase_C
{
public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CheckDamageDirFront_C">();
	}
	static class UST_CheckDamageDirFront_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CheckDamageDirFront_C>();
	}
};
static_assert(alignof(UST_CheckDamageDirFront_C) == 0x000008, "Wrong alignment on UST_CheckDamageDirFront_C");
static_assert(sizeof(UST_CheckDamageDirFront_C) == 0x000050, "Wrong size on UST_CheckDamageDirFront_C");

}

