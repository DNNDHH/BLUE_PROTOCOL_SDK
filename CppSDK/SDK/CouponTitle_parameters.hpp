#pragma once

 

// Package: CouponTitle

#include "Basic.hpp"


namespace SDK::Params
{

// Function CouponTitle.CouponTitle_C.SetTitleChange
// 0x0004 (0x0004 - 0x0000)
struct CouponTitle_C_SetTitleChange final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CouponTitle_C_SetTitleChange) == 0x000004, "Wrong alignment on CouponTitle_C_SetTitleChange");
static_assert(sizeof(CouponTitle_C_SetTitleChange) == 0x000004, "Wrong size on CouponTitle_C_SetTitleChange");
static_assert(offsetof(CouponTitle_C_SetTitleChange, Param_Index) == 0x000000, "Member 'CouponTitle_C_SetTitleChange::Param_Index' has a wrong offset!");

}

