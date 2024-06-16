#pragma once

 

// Package: CommonIconToolTipContent_DateTime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContent_DateTime.CommonIconToolTipContent_DateTime_C.SetDateTime
// 0x0010 (0x0010 - 0x0000)
struct CommonIconToolTipContent_DateTime_C_SetDateTime final
{
public:
	struct FDateTime                              InText;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContent_DateTime_C_SetDateTime) == 0x000008, "Wrong alignment on CommonIconToolTipContent_DateTime_C_SetDateTime");
static_assert(sizeof(CommonIconToolTipContent_DateTime_C_SetDateTime) == 0x000010, "Wrong size on CommonIconToolTipContent_DateTime_C_SetDateTime");
static_assert(offsetof(CommonIconToolTipContent_DateTime_C_SetDateTime, InText) == 0x000000, "Member 'CommonIconToolTipContent_DateTime_C_SetDateTime::InText' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContent_DateTime_C_SetDateTime, CallFunc_SetDateTime_ReturnValue) == 0x000008, "Member 'CommonIconToolTipContent_DateTime_C_SetDateTime::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

}

