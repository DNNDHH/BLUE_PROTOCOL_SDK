#pragma once

 

// Package: ST_CheckElapsedTime

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CheckElapsedTime.ST_CheckElapsedTime_C
// 0x0008 (0x0058 - 0x0050)
class UST_CheckElapsedTime_C final : public UASTransition_BlueprintBase
{
public:
	float                                         Time;                                              // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CheckElapsedTime_C">();
	}
	static class UST_CheckElapsedTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CheckElapsedTime_C>();
	}
};
static_assert(alignof(UST_CheckElapsedTime_C) == 0x000008, "Wrong alignment on UST_CheckElapsedTime_C");
static_assert(sizeof(UST_CheckElapsedTime_C) == 0x000058, "Wrong size on UST_CheckElapsedTime_C");
static_assert(offsetof(UST_CheckElapsedTime_C, Time) == 0x000050, "Member 'UST_CheckElapsedTime_C::Time' has a wrong offset!");

}

