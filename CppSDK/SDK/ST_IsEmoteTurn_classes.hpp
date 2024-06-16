#pragma once

 

// Package: ST_IsEmoteTurn

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_IsEmoteTurn.ST_IsEmoteTurn_C
// 0x0008 (0x0058 - 0x0050)
class UST_IsEmoteTurn_C final : public UASTransition_BlueprintBase
{
public:
	float                                         TurnYaw;                                           // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_IsEmoteTurn_C">();
	}
	static class UST_IsEmoteTurn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_IsEmoteTurn_C>();
	}
};
static_assert(alignof(UST_IsEmoteTurn_C) == 0x000008, "Wrong alignment on UST_IsEmoteTurn_C");
static_assert(sizeof(UST_IsEmoteTurn_C) == 0x000058, "Wrong size on UST_IsEmoteTurn_C");
static_assert(offsetof(UST_IsEmoteTurn_C, TurnYaw) == 0x000050, "Member 'UST_IsEmoteTurn_C::TurnYaw' has a wrong offset!");

}

