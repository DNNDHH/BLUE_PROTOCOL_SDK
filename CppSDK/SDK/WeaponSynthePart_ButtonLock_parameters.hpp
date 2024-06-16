#pragma once

 

// Package: WeaponSynthePart_ButtonLock

#include "Basic.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.OnClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_ButtonLock_C_OnClicked__DelegateSignature final
{
public:
	bool                                          Param_IsLock;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_ButtonLock_C_OnClicked__DelegateSignature) == 0x000001, "Wrong alignment on WeaponSynthePart_ButtonLock_C_OnClicked__DelegateSignature");
static_assert(sizeof(WeaponSynthePart_ButtonLock_C_OnClicked__DelegateSignature) == 0x000001, "Wrong size on WeaponSynthePart_ButtonLock_C_OnClicked__DelegateSignature");
static_assert(offsetof(WeaponSynthePart_ButtonLock_C_OnClicked__DelegateSignature, Param_IsLock) == 0x000000, "Member 'WeaponSynthePart_ButtonLock_C_OnClicked__DelegateSignature::Param_IsLock' has a wrong offset!");

// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.ExecuteUbergraph_WeaponSynthePart_ButtonLock
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_ButtonLock_C_ExecuteUbergraph_WeaponSynthePart_ButtonLock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_ButtonLock_C_ExecuteUbergraph_WeaponSynthePart_ButtonLock) == 0x000004, "Wrong alignment on WeaponSynthePart_ButtonLock_C_ExecuteUbergraph_WeaponSynthePart_ButtonLock");
static_assert(sizeof(WeaponSynthePart_ButtonLock_C_ExecuteUbergraph_WeaponSynthePart_ButtonLock) == 0x000004, "Wrong size on WeaponSynthePart_ButtonLock_C_ExecuteUbergraph_WeaponSynthePart_ButtonLock");
static_assert(offsetof(WeaponSynthePart_ButtonLock_C_ExecuteUbergraph_WeaponSynthePart_ButtonLock, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_ButtonLock_C_ExecuteUbergraph_WeaponSynthePart_ButtonLock::EntryPoint' has a wrong offset!");

// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.SetLock
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthePart_ButtonLock_C_SetLock final
{
public:
	bool                                          Param_IsLock;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6912[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_ButtonLock_C_SetLock) == 0x000004, "Wrong alignment on WeaponSynthePart_ButtonLock_C_SetLock");
static_assert(sizeof(WeaponSynthePart_ButtonLock_C_SetLock) == 0x000010, "Wrong size on WeaponSynthePart_ButtonLock_C_SetLock");
static_assert(offsetof(WeaponSynthePart_ButtonLock_C_SetLock, Param_IsLock) == 0x000000, "Member 'WeaponSynthePart_ButtonLock_C_SetLock::Param_IsLock' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonLock_C_SetLock, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_ButtonLock_C_SetLock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonLock_C_SetLock, Temp_int_Variable) == 0x000004, "Member 'WeaponSynthePart_ButtonLock_C_SetLock::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonLock_C_SetLock, Temp_int_Variable_1) == 0x000008, "Member 'WeaponSynthePart_ButtonLock_C_SetLock::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_ButtonLock_C_SetLock, K2Node_Select_Default) == 0x00000C, "Member 'WeaponSynthePart_ButtonLock_C_SetLock::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_ButtonLock.WeaponSynthePart_ButtonLock_C.IsLock
// 0x0001 (0x0001 - 0x0000)
struct WeaponSynthePart_ButtonLock_C_IsLock final
{
public:
	bool                                          Param_IsLock;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_ButtonLock_C_IsLock) == 0x000001, "Wrong alignment on WeaponSynthePart_ButtonLock_C_IsLock");
static_assert(sizeof(WeaponSynthePart_ButtonLock_C_IsLock) == 0x000001, "Wrong size on WeaponSynthePart_ButtonLock_C_IsLock");
static_assert(offsetof(WeaponSynthePart_ButtonLock_C_IsLock, Param_IsLock) == 0x000000, "Member 'WeaponSynthePart_ButtonLock_C_IsLock::Param_IsLock' has a wrong offset!");

}

