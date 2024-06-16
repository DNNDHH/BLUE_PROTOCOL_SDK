#pragma once

 

// Package: LimitedTimeNotice

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function LimitedTimeNotice.LimitedTimeNotice_C.ExecuteUbergraph_LimitedTimeNotice
// 0x0004 (0x0004 - 0x0000)
struct LimitedTimeNotice_C_ExecuteUbergraph_LimitedTimeNotice final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LimitedTimeNotice_C_ExecuteUbergraph_LimitedTimeNotice) == 0x000004, "Wrong alignment on LimitedTimeNotice_C_ExecuteUbergraph_LimitedTimeNotice");
static_assert(sizeof(LimitedTimeNotice_C_ExecuteUbergraph_LimitedTimeNotice) == 0x000004, "Wrong size on LimitedTimeNotice_C_ExecuteUbergraph_LimitedTimeNotice");
static_assert(offsetof(LimitedTimeNotice_C_ExecuteUbergraph_LimitedTimeNotice, EntryPoint) == 0x000000, "Member 'LimitedTimeNotice_C_ExecuteUbergraph_LimitedTimeNotice::EntryPoint' has a wrong offset!");

// Function LimitedTimeNotice.LimitedTimeNotice_C.Set Limited Time
// 0x0010 (0x0010 - 0x0000)
struct LimitedTimeNotice_C_Set_Limited_Time final
{
public:
	struct FDateTime                              InEndTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LimitedTimeNotice_C_Set_Limited_Time) == 0x000008, "Wrong alignment on LimitedTimeNotice_C_Set_Limited_Time");
static_assert(sizeof(LimitedTimeNotice_C_Set_Limited_Time) == 0x000010, "Wrong size on LimitedTimeNotice_C_Set_Limited_Time");
static_assert(offsetof(LimitedTimeNotice_C_Set_Limited_Time, InEndTime) == 0x000000, "Member 'LimitedTimeNotice_C_Set_Limited_Time::InEndTime' has a wrong offset!");
static_assert(offsetof(LimitedTimeNotice_C_Set_Limited_Time, CallFunc_SetDateTime_ReturnValue) == 0x000008, "Member 'LimitedTimeNotice_C_Set_Limited_Time::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

}

