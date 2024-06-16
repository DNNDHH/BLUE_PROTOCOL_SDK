#pragma once

 

// Package: ST_IsChildPlayer

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"
#include "CharaParts_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_IsChildPlayer.ST_IsChildPlayer_C
// 0x0008 (0x0058 - 0x0050)
class UST_IsChildPlayer_C final : public UASTransition_BlueprintBase
{
public:
	bool                                          IsMale;                                            // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsFemale;                                          // 0x0051(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_IsChildPlayer_C">();
	}
	static class UST_IsChildPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_IsChildPlayer_C>();
	}
};
static_assert(alignof(UST_IsChildPlayer_C) == 0x000008, "Wrong alignment on UST_IsChildPlayer_C");
static_assert(sizeof(UST_IsChildPlayer_C) == 0x000058, "Wrong size on UST_IsChildPlayer_C");
static_assert(offsetof(UST_IsChildPlayer_C, IsMale) == 0x000050, "Member 'UST_IsChildPlayer_C::IsMale' has a wrong offset!");
static_assert(offsetof(UST_IsChildPlayer_C, IsFemale) == 0x000051, "Member 'UST_IsChildPlayer_C::IsFemale' has a wrong offset!");

}

