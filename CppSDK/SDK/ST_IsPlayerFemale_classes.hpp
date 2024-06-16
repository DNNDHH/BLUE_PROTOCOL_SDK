#pragma once

 

// Package: ST_IsPlayerFemale

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_IsPlayerFemale.ST_IsPlayerFemale_C
// 0x0000 (0x0050 - 0x0050)
class UST_IsPlayerFemale_C final : public UASTransition_BlueprintBase
{
public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_IsPlayerFemale_C">();
	}
	static class UST_IsPlayerFemale_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_IsPlayerFemale_C>();
	}
};
static_assert(alignof(UST_IsPlayerFemale_C) == 0x000008, "Wrong alignment on UST_IsPlayerFemale_C");
static_assert(sizeof(UST_IsPlayerFemale_C) == 0x000050, "Wrong size on UST_IsPlayerFemale_C");

}

