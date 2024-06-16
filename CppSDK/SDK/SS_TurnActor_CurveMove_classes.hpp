#pragma once

 

// Package: SS_TurnActor_CurveMove

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_TurnActor_CurveMove.SS_TurnActor_CurveMove_C
// 0x0000 (0x0040 - 0x0040)
class USS_TurnActor_CurveMove_C : public USBCustomState_TurnActorBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_TurnActor_CurveMove_C">();
	}
	static class USS_TurnActor_CurveMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_TurnActor_CurveMove_C>();
	}
};
static_assert(alignof(USS_TurnActor_CurveMove_C) == 0x000008, "Wrong alignment on USS_TurnActor_CurveMove_C");
static_assert(sizeof(USS_TurnActor_CurveMove_C) == 0x000040, "Wrong size on USS_TurnActor_CurveMove_C");

}

