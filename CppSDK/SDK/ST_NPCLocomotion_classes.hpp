#pragma once

 

// Package: ST_NPCLocomotion

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_NPCLocomotion.ST_NPCLocomotion_C
// 0x0008 (0x0058 - 0x0050)
class UST_NPCLocomotion_C final : public UASTransition_BlueprintBase
{
public:
	float                                         VelocityLength;                                    // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_NPCLocomotion_C">();
	}
	static class UST_NPCLocomotion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_NPCLocomotion_C>();
	}
};
static_assert(alignof(UST_NPCLocomotion_C) == 0x000008, "Wrong alignment on UST_NPCLocomotion_C");
static_assert(sizeof(UST_NPCLocomotion_C) == 0x000058, "Wrong size on UST_NPCLocomotion_C");
static_assert(offsetof(UST_NPCLocomotion_C, VelocityLength) == 0x000050, "Member 'UST_NPCLocomotion_C::VelocityLength' has a wrong offset!");

}

