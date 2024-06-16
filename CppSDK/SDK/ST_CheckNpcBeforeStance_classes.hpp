#pragma once

 

// Package: ST_CheckNpcBeforeStance

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CheckNpcBeforeStance.ST_CheckNpcBeforeStance_C
// 0x0008 (0x0058 - 0x0050)
class UST_CheckNpcBeforeStance_C final : public UASTransition_BlueprintBase
{
public:
	class FName                                   BeforeStance;                                      // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CheckNpcBeforeStance_C">();
	}
	static class UST_CheckNpcBeforeStance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CheckNpcBeforeStance_C>();
	}
};
static_assert(alignof(UST_CheckNpcBeforeStance_C) == 0x000008, "Wrong alignment on UST_CheckNpcBeforeStance_C");
static_assert(sizeof(UST_CheckNpcBeforeStance_C) == 0x000058, "Wrong size on UST_CheckNpcBeforeStance_C");
static_assert(offsetof(UST_CheckNpcBeforeStance_C, BeforeStance) == 0x000050, "Member 'UST_CheckNpcBeforeStance_C::BeforeStance' has a wrong offset!");

}

