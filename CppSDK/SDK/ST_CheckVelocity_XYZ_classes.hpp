#pragma once

 

// Package: ST_CheckVelocity_XYZ

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ST_CheckVelocity_XYZ.ST_CheckVelocity_XYZ_C
// 0x0010 (0x0060 - 0x0050)
class UST_CheckVelocity_XYZ_C final : public UASTransition_BlueprintBase
{
public:
	bool                                          Check_Front;                                       // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Check_Side;                                        // 0x0051(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Check_Vertical_Up;                                 // 0x0052(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Check_Vertical_Down;                               // 0x0053(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Front_Speed;                                       // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Side_Speed;                                        // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Vertical_Speed;                                    // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ST_CheckVelocity_XYZ_C">();
	}
	static class UST_CheckVelocity_XYZ_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UST_CheckVelocity_XYZ_C>();
	}
};
static_assert(alignof(UST_CheckVelocity_XYZ_C) == 0x000008, "Wrong alignment on UST_CheckVelocity_XYZ_C");
static_assert(sizeof(UST_CheckVelocity_XYZ_C) == 0x000060, "Wrong size on UST_CheckVelocity_XYZ_C");
static_assert(offsetof(UST_CheckVelocity_XYZ_C, Check_Front) == 0x000050, "Member 'UST_CheckVelocity_XYZ_C::Check_Front' has a wrong offset!");
static_assert(offsetof(UST_CheckVelocity_XYZ_C, Check_Side) == 0x000051, "Member 'UST_CheckVelocity_XYZ_C::Check_Side' has a wrong offset!");
static_assert(offsetof(UST_CheckVelocity_XYZ_C, Check_Vertical_Up) == 0x000052, "Member 'UST_CheckVelocity_XYZ_C::Check_Vertical_Up' has a wrong offset!");
static_assert(offsetof(UST_CheckVelocity_XYZ_C, Check_Vertical_Down) == 0x000053, "Member 'UST_CheckVelocity_XYZ_C::Check_Vertical_Down' has a wrong offset!");
static_assert(offsetof(UST_CheckVelocity_XYZ_C, Front_Speed) == 0x000054, "Member 'UST_CheckVelocity_XYZ_C::Front_Speed' has a wrong offset!");
static_assert(offsetof(UST_CheckVelocity_XYZ_C, Side_Speed) == 0x000058, "Member 'UST_CheckVelocity_XYZ_C::Side_Speed' has a wrong offset!");
static_assert(offsetof(UST_CheckVelocity_XYZ_C, Vertical_Speed) == 0x00005C, "Member 'UST_CheckVelocity_XYZ_C::Vertical_Speed' has a wrong offset!");

}

