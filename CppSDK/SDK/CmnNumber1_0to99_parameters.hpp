#pragma once

 

// Package: CmnNumber1_0to99

#include "Basic.hpp"


namespace SDK::Params
{

// Function CmnNumber1_0to99.CmnNumber1_0to99_C.SetNumber
// 0x0038 (0x0038 - 0x0000)
struct CmnNumber1_0to99_C_SetNumber final
{
public:
	int32                                         InNumber;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5506[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCharacterAsNumber_ReturnValue;         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCharacterAsNumber_ReturnValue_1;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnNumber1_0to99_C_SetNumber) == 0x000008, "Wrong alignment on CmnNumber1_0to99_C_SetNumber");
static_assert(sizeof(CmnNumber1_0to99_C_SetNumber) == 0x000038, "Wrong size on CmnNumber1_0to99_C_SetNumber");
static_assert(offsetof(CmnNumber1_0to99_C_SetNumber, InNumber) == 0x000000, "Member 'CmnNumber1_0to99_C_SetNumber::InNumber' has a wrong offset!");
static_assert(offsetof(CmnNumber1_0to99_C_SetNumber, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'CmnNumber1_0to99_C_SetNumber::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnNumber1_0to99_C_SetNumber, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'CmnNumber1_0to99_C_SetNumber::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnNumber1_0to99_C_SetNumber, CallFunc_Len_ReturnValue) == 0x000018, "Member 'CmnNumber1_0to99_C_SetNumber::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnNumber1_0to99_C_SetNumber, CallFunc_Conv_StringToInt_ReturnValue) == 0x00001C, "Member 'CmnNumber1_0to99_C_SetNumber::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnNumber1_0to99_C_SetNumber, K2Node_SwitchInteger_CmpSuccess) == 0x000020, "Member 'CmnNumber1_0to99_C_SetNumber::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CmnNumber1_0to99_C_SetNumber, CallFunc_GetCharacterAsNumber_ReturnValue) == 0x000024, "Member 'CmnNumber1_0to99_C_SetNumber::CallFunc_GetCharacterAsNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnNumber1_0to99_C_SetNumber, CallFunc_GetCharacterAsNumber_ReturnValue_1) == 0x000028, "Member 'CmnNumber1_0to99_C_SetNumber::CallFunc_GetCharacterAsNumber_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnNumber1_0to99_C_SetNumber, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'CmnNumber1_0to99_C_SetNumber::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnNumber1_0to99_C_SetNumber, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000030, "Member 'CmnNumber1_0to99_C_SetNumber::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");

// Function CmnNumber1_0to99.CmnNumber1_0to99_C.GetNumber
// 0x0008 (0x0008 - 0x0000)
struct CmnNumber1_0to99_C_GetNumber final
{
public:
	int32                                         OutNumber;                                         // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnNumber1_0to99_C_GetNumber) == 0x000004, "Wrong alignment on CmnNumber1_0to99_C_GetNumber");
static_assert(sizeof(CmnNumber1_0to99_C_GetNumber) == 0x000008, "Wrong size on CmnNumber1_0to99_C_GetNumber");
static_assert(offsetof(CmnNumber1_0to99_C_GetNumber, OutNumber) == 0x000000, "Member 'CmnNumber1_0to99_C_GetNumber::OutNumber' has a wrong offset!");
static_assert(offsetof(CmnNumber1_0to99_C_GetNumber, CallFunc_Conv_StringToInt_ReturnValue) == 0x000004, "Member 'CmnNumber1_0to99_C_GetNumber::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");

}

