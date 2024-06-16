#pragma once

 

// Package: DamageUI_Number

#include "Basic.hpp"


namespace SDK::Params
{

// Function DamageUI_Number.DamageUI_Number_C.ExecuteUbergraph_DamageUI_Number
// 0x0008 (0x0008 - 0x0000)
struct DamageUI_Number_C_ExecuteUbergraph_DamageUI_Number final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DamageUI_Number_C_ExecuteUbergraph_DamageUI_Number) == 0x000004, "Wrong alignment on DamageUI_Number_C_ExecuteUbergraph_DamageUI_Number");
static_assert(sizeof(DamageUI_Number_C_ExecuteUbergraph_DamageUI_Number) == 0x000008, "Wrong size on DamageUI_Number_C_ExecuteUbergraph_DamageUI_Number");
static_assert(offsetof(DamageUI_Number_C_ExecuteUbergraph_DamageUI_Number, EntryPoint) == 0x000000, "Member 'DamageUI_Number_C_ExecuteUbergraph_DamageUI_Number::EntryPoint' has a wrong offset!");
static_assert(offsetof(DamageUI_Number_C_ExecuteUbergraph_DamageUI_Number, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'DamageUI_Number_C_ExecuteUbergraph_DamageUI_Number::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

