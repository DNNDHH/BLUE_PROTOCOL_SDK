#pragma once

 

// Package: CmnNumber1

#include "Basic.hpp"


namespace SDK::Params
{

// Function CmnNumber1.CmnNumber1_C.ExecuteUbergraph_CmnNumber1
// 0x0010 (0x0010 - 0x0000)
struct CmnNumber1_C_ExecuteUbergraph_CmnNumber1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F41[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnNumber1_C_ExecuteUbergraph_CmnNumber1) == 0x000008, "Wrong alignment on CmnNumber1_C_ExecuteUbergraph_CmnNumber1");
static_assert(sizeof(CmnNumber1_C_ExecuteUbergraph_CmnNumber1) == 0x000010, "Wrong size on CmnNumber1_C_ExecuteUbergraph_CmnNumber1");
static_assert(offsetof(CmnNumber1_C_ExecuteUbergraph_CmnNumber1, EntryPoint) == 0x000000, "Member 'CmnNumber1_C_ExecuteUbergraph_CmnNumber1::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnNumber1_C_ExecuteUbergraph_CmnNumber1, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'CmnNumber1_C_ExecuteUbergraph_CmnNumber1::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function CmnNumber1.CmnNumber1_C.SetNumber
// 0x0010 (0x0010 - 0x0000)
struct CmnNumber1_C_SetNumber final
{
public:
	int32                                         NewParam;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnNumber1_C_SetNumber) == 0x000004, "Wrong alignment on CmnNumber1_C_SetNumber");
static_assert(sizeof(CmnNumber1_C_SetNumber) == 0x000010, "Wrong size on CmnNumber1_C_SetNumber");
static_assert(offsetof(CmnNumber1_C_SetNumber, NewParam) == 0x000000, "Member 'CmnNumber1_C_SetNumber::NewParam' has a wrong offset!");
static_assert(offsetof(CmnNumber1_C_SetNumber, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'CmnNumber1_C_SetNumber::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnNumber1_C_SetNumber, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'CmnNumber1_C_SetNumber::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnNumber1_C_SetNumber, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00000C, "Member 'CmnNumber1_C_SetNumber::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

}

