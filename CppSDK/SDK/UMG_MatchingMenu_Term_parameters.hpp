#pragma once

 

// Package: UMG_MatchingMenu_Term

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_Term.UMG_MatchingMenu_Term_C.SetDateTime
// 0x0010 (0x0010 - 0x0000)
struct UMG_MatchingMenu_Term_C_SetDateTime final
{
public:
	struct FDateTime                              DateTime;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Term_C_SetDateTime) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Term_C_SetDateTime");
static_assert(sizeof(UMG_MatchingMenu_Term_C_SetDateTime) == 0x000010, "Wrong size on UMG_MatchingMenu_Term_C_SetDateTime");
static_assert(offsetof(UMG_MatchingMenu_Term_C_SetDateTime, DateTime) == 0x000000, "Member 'UMG_MatchingMenu_Term_C_SetDateTime::DateTime' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Term_C_SetDateTime, CallFunc_SetDateTime_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_Term_C_SetDateTime::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

}

