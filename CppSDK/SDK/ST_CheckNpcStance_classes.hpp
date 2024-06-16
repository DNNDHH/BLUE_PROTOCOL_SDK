#pragma once

 

// Package: ST_CheckNpcStance

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CheckNpcStance.ST_CheckNpcStance_C
// 0x0018 (0x0068 - 0x0050)
class UST_CheckNpcStance_C final : public UASTransition_BlueprintBase
{
public:
	class FName                                   WaitStance;                                        // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Check_Command;                                     // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EBE[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Command;                                           // 0x005C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CheckNpcStance_C">();
	}
	static class UST_CheckNpcStance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CheckNpcStance_C>();
	}
};
static_assert(alignof(UST_CheckNpcStance_C) == 0x000008, "Wrong alignment on UST_CheckNpcStance_C");
static_assert(sizeof(UST_CheckNpcStance_C) == 0x000068, "Wrong size on UST_CheckNpcStance_C");
static_assert(offsetof(UST_CheckNpcStance_C, WaitStance) == 0x000050, "Member 'UST_CheckNpcStance_C::WaitStance' has a wrong offset!");
static_assert(offsetof(UST_CheckNpcStance_C, Check_Command) == 0x000058, "Member 'UST_CheckNpcStance_C::Check_Command' has a wrong offset!");
static_assert(offsetof(UST_CheckNpcStance_C, Command) == 0x00005C, "Member 'UST_CheckNpcStance_C::Command' has a wrong offset!");

}

