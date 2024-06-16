#pragma once

 

// Package: ST_CheckInput

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CheckInput.ST_CheckInput_C
// 0x0008 (0x0058 - 0x0050)
class UST_CheckInput_C final : public UASTransition_BlueprintBase
{
public:
	float                                         Speed;                                             // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CheckInput_C">();
	}
	static class UST_CheckInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CheckInput_C>();
	}
};
static_assert(alignof(UST_CheckInput_C) == 0x000008, "Wrong alignment on UST_CheckInput_C");
static_assert(sizeof(UST_CheckInput_C) == 0x000058, "Wrong size on UST_CheckInput_C");
static_assert(offsetof(UST_CheckInput_C, Speed) == 0x000050, "Member 'UST_CheckInput_C::Speed' has a wrong offset!");

}

