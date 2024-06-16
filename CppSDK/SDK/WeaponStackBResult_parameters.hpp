#pragma once

 

// Package: WeaponStackBResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponStackBResult.WeaponStackBResult_C.SetBeforeData
// 0x0118 (0x0118 - 0x0000)
struct WeaponStackBResult_C_SetBeforeData final
{
public:
	struct FOwnItemInfo                           Param_beforeData;                                  // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponStackBResult_C_SetBeforeData) == 0x000008, "Wrong alignment on WeaponStackBResult_C_SetBeforeData");
static_assert(sizeof(WeaponStackBResult_C_SetBeforeData) == 0x000118, "Wrong size on WeaponStackBResult_C_SetBeforeData");
static_assert(offsetof(WeaponStackBResult_C_SetBeforeData, Param_beforeData) == 0x000000, "Member 'WeaponStackBResult_C_SetBeforeData::Param_beforeData' has a wrong offset!");

// Function WeaponStackBResult.WeaponStackBResult_C.SetAfterData
// 0x0128 (0x0128 - 0x0000)
struct WeaponStackBResult_C_SetAfterData final
{
public:
	struct FOwnItemInfo                           Param_AfterData;                                   // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Temp_int_Variable;                                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWeaponPerkEqual_ReturnValue;            // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponStackBResult_C_SetAfterData) == 0x000008, "Wrong alignment on WeaponStackBResult_C_SetAfterData");
static_assert(sizeof(WeaponStackBResult_C_SetAfterData) == 0x000128, "Wrong size on WeaponStackBResult_C_SetAfterData");
static_assert(offsetof(WeaponStackBResult_C_SetAfterData, Param_AfterData) == 0x000000, "Member 'WeaponStackBResult_C_SetAfterData::Param_AfterData' has a wrong offset!");
static_assert(offsetof(WeaponStackBResult_C_SetAfterData, Temp_int_Variable) == 0x000118, "Member 'WeaponStackBResult_C_SetAfterData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponStackBResult_C_SetAfterData, CallFunc_Subtract_IntInt_ReturnValue) == 0x00011C, "Member 'WeaponStackBResult_C_SetAfterData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBResult_C_SetAfterData, CallFunc_Add_IntInt_ReturnValue) == 0x000120, "Member 'WeaponStackBResult_C_SetAfterData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBResult_C_SetAfterData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000124, "Member 'WeaponStackBResult_C_SetAfterData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBResult_C_SetAfterData, CallFunc_IsWeaponPerkEqual_ReturnValue) == 0x000125, "Member 'WeaponStackBResult_C_SetAfterData::CallFunc_IsWeaponPerkEqual_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponStackBResult_C_SetAfterData, CallFunc_Not_PreBool_ReturnValue) == 0x000126, "Member 'WeaponStackBResult_C_SetAfterData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

