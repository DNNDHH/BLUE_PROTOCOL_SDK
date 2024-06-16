#pragma once

 

// Package: SS_FemaleEmote

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"
#include "CharaParts_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_FemaleEmote.SS_FemaleEmote_C
// 0x0020 (0x0058 - 0x0038)
class USS_FemaleEmote_C final : public UASState_BlueprintBase
{
public:
	float                                         F000_MinBlendRate;                                 // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         F000_MaxBlendRate;                                 // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         F100_MinBlendRate;                                 // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         F100_MaxBlendRate;                                 // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         F300_MinBlendRate;                                 // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         F300_MaxBlendRate;                                 // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Print_BodyType;                                    // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_FemaleEmote_C">();
	}
	static class USS_FemaleEmote_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_FemaleEmote_C>();
	}
};
static_assert(alignof(USS_FemaleEmote_C) == 0x000008, "Wrong alignment on USS_FemaleEmote_C");
static_assert(sizeof(USS_FemaleEmote_C) == 0x000058, "Wrong size on USS_FemaleEmote_C");
static_assert(offsetof(USS_FemaleEmote_C, F000_MinBlendRate) == 0x000038, "Member 'USS_FemaleEmote_C::F000_MinBlendRate' has a wrong offset!");
static_assert(offsetof(USS_FemaleEmote_C, F000_MaxBlendRate) == 0x00003C, "Member 'USS_FemaleEmote_C::F000_MaxBlendRate' has a wrong offset!");
static_assert(offsetof(USS_FemaleEmote_C, F100_MinBlendRate) == 0x000040, "Member 'USS_FemaleEmote_C::F100_MinBlendRate' has a wrong offset!");
static_assert(offsetof(USS_FemaleEmote_C, F100_MaxBlendRate) == 0x000044, "Member 'USS_FemaleEmote_C::F100_MaxBlendRate' has a wrong offset!");
static_assert(offsetof(USS_FemaleEmote_C, F300_MinBlendRate) == 0x000048, "Member 'USS_FemaleEmote_C::F300_MinBlendRate' has a wrong offset!");
static_assert(offsetof(USS_FemaleEmote_C, F300_MaxBlendRate) == 0x00004C, "Member 'USS_FemaleEmote_C::F300_MaxBlendRate' has a wrong offset!");
static_assert(offsetof(USS_FemaleEmote_C, Print_BodyType) == 0x000050, "Member 'USS_FemaleEmote_C::Print_BodyType' has a wrong offset!");

}

