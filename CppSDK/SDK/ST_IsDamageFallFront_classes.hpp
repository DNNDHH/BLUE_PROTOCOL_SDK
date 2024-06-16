#pragma once

 

// Package: ST_IsDamageFallFront

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_IsDamageFallFront.ST_IsDamageFallFront_C
// 0x0008 (0x0058 - 0x0050)
class UST_IsDamageFallFront_C final : public UASTransition_BlueprintBase
{
public:
	float                                         FrontYawOffset;                                    // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrontAngle;                                        // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_IsDamageFallFront_C">();
	}
	static class UST_IsDamageFallFront_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_IsDamageFallFront_C>();
	}
};
static_assert(alignof(UST_IsDamageFallFront_C) == 0x000008, "Wrong alignment on UST_IsDamageFallFront_C");
static_assert(sizeof(UST_IsDamageFallFront_C) == 0x000058, "Wrong size on UST_IsDamageFallFront_C");
static_assert(offsetof(UST_IsDamageFallFront_C, FrontYawOffset) == 0x000050, "Member 'UST_IsDamageFallFront_C::FrontYawOffset' has a wrong offset!");
static_assert(offsetof(UST_IsDamageFallFront_C, FrontAngle) == 0x000054, "Member 'UST_IsDamageFallFront_C::FrontAngle' has a wrong offset!");

}

