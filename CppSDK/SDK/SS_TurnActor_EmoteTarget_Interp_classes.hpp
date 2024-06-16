#pragma once

 

// Package: SS_TurnActor_EmoteTarget_Interp

#include "Basic.hpp"

#include "SS_TurnActor_CurveMove_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_TurnActor_EmoteTarget_Interp.SS_TurnActor_EmoteTarget_Interp_C
// 0x0008 (0x0048 - 0x0040)
class USS_TurnActor_EmoteTarget_Interp_C final : public USS_TurnActor_CurveMove_C
{
public:
	float                                         InterpSpeed;                                       // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	float ReceiveGetInterpSpeed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_TurnActor_EmoteTarget_Interp_C">();
	}
	static class USS_TurnActor_EmoteTarget_Interp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_TurnActor_EmoteTarget_Interp_C>();
	}
};
static_assert(alignof(USS_TurnActor_EmoteTarget_Interp_C) == 0x000008, "Wrong alignment on USS_TurnActor_EmoteTarget_Interp_C");
static_assert(sizeof(USS_TurnActor_EmoteTarget_Interp_C) == 0x000048, "Wrong size on USS_TurnActor_EmoteTarget_Interp_C");
static_assert(offsetof(USS_TurnActor_EmoteTarget_Interp_C, InterpSpeed) == 0x000040, "Member 'USS_TurnActor_EmoteTarget_Interp_C::InterpSpeed' has a wrong offset!");

}

