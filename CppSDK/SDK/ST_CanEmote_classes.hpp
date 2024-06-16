#pragma once

 

// Package: ST_CanEmote

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CanEmote.ST_CanEmote_C
// 0x0020 (0x0070 - 0x0050)
class UST_CanEmote_C final : public UASTransition_BlueprintBase
{
public:
	TArray<class FName>                           Anim_Tags;                                         // 0x0050(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           ForbidAnimTags;                                    // 0x0060(0x0010)(Edit, BlueprintVisible)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CanEmote_C">();
	}
	static class UST_CanEmote_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CanEmote_C>();
	}
};
static_assert(alignof(UST_CanEmote_C) == 0x000008, "Wrong alignment on UST_CanEmote_C");
static_assert(sizeof(UST_CanEmote_C) == 0x000070, "Wrong size on UST_CanEmote_C");
static_assert(offsetof(UST_CanEmote_C, Anim_Tags) == 0x000050, "Member 'UST_CanEmote_C::Anim_Tags' has a wrong offset!");
static_assert(offsetof(UST_CanEmote_C, ForbidAnimTags) == 0x000060, "Member 'UST_CanEmote_C::ForbidAnimTags' has a wrong offset!");

}

