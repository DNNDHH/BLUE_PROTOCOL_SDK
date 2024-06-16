#pragma once

 

// Package: IconEnemyGate

#include "Basic.hpp"


namespace SDK::Params
{

// Function IconEnemyGate.IconEnemyGate_C.ExecuteUbergraph_IconEnemyGate
// 0x0004 (0x0004 - 0x0000)
struct IconEnemyGate_C_ExecuteUbergraph_IconEnemyGate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconEnemyGate_C_ExecuteUbergraph_IconEnemyGate) == 0x000004, "Wrong alignment on IconEnemyGate_C_ExecuteUbergraph_IconEnemyGate");
static_assert(sizeof(IconEnemyGate_C_ExecuteUbergraph_IconEnemyGate) == 0x000004, "Wrong size on IconEnemyGate_C_ExecuteUbergraph_IconEnemyGate");
static_assert(offsetof(IconEnemyGate_C_ExecuteUbergraph_IconEnemyGate, EntryPoint) == 0x000000, "Member 'IconEnemyGate_C_ExecuteUbergraph_IconEnemyGate::EntryPoint' has a wrong offset!");

// Function IconEnemyGate.IconEnemyGate_C.PlayAnimCircle
// 0x0008 (0x0008 - 0x0000)
struct IconEnemyGate_C_PlayAnimCircle final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconEnemyGate_C_PlayAnimCircle) == 0x000008, "Wrong alignment on IconEnemyGate_C_PlayAnimCircle");
static_assert(sizeof(IconEnemyGate_C_PlayAnimCircle) == 0x000008, "Wrong size on IconEnemyGate_C_PlayAnimCircle");
static_assert(offsetof(IconEnemyGate_C_PlayAnimCircle, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'IconEnemyGate_C_PlayAnimCircle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function IconEnemyGate.IconEnemyGate_C.OnSetInside
// 0x0018 (0x0018 - 0x0000)
struct IconEnemyGate_C_OnSetInside final
{
public:
	bool                                          IsInSide;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44D9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44DA[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(IconEnemyGate_C_OnSetInside) == 0x000004, "Wrong alignment on IconEnemyGate_C_OnSetInside");
static_assert(sizeof(IconEnemyGate_C_OnSetInside) == 0x000018, "Wrong size on IconEnemyGate_C_OnSetInside");
static_assert(offsetof(IconEnemyGate_C_OnSetInside, IsInSide) == 0x000000, "Member 'IconEnemyGate_C_OnSetInside::IsInSide' has a wrong offset!");
static_assert(offsetof(IconEnemyGate_C_OnSetInside, Temp_int_Variable) == 0x000004, "Member 'IconEnemyGate_C_OnSetInside::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(IconEnemyGate_C_OnSetInside, Temp_int_Variable_1) == 0x000008, "Member 'IconEnemyGate_C_OnSetInside::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(IconEnemyGate_C_OnSetInside, Temp_bool_Variable) == 0x00000C, "Member 'IconEnemyGate_C_OnSetInside::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconEnemyGate_C_OnSetInside, K2Node_Select_Default) == 0x000010, "Member 'IconEnemyGate_C_OnSetInside::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(IconEnemyGate_C_OnSetInside, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000014, "Member 'IconEnemyGate_C_OnSetInside::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

}

