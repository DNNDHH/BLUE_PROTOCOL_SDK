#pragma once

 

// Package: ST_CheckAnimPassage

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CheckAnimPassage.ST_CheckAnimPassage_C
// 0x0008 (0x0058 - 0x0050)
class UST_CheckAnimPassage_C final : public UASTransition_BlueprintBase
{
public:
	float                                         RassageRate;                                       // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CheckAnimPassage_C">();
	}
	static class UST_CheckAnimPassage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CheckAnimPassage_C>();
	}
};
static_assert(alignof(UST_CheckAnimPassage_C) == 0x000008, "Wrong alignment on UST_CheckAnimPassage_C");
static_assert(sizeof(UST_CheckAnimPassage_C) == 0x000058, "Wrong size on UST_CheckAnimPassage_C");
static_assert(offsetof(UST_CheckAnimPassage_C, RassageRate) == 0x000050, "Member 'UST_CheckAnimPassage_C::RassageRate' has a wrong offset!");

}

