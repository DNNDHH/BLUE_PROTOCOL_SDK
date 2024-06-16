#pragma once

 

// Package: ST_CharaCreate_Fidget_Lottery_03

#include "Basic.hpp"


namespace SDK::Params
{

// Function ST_CharaCreate_Fidget_Lottery_03.ST_CharaCreate_Fidget_Lottery_03_C.ReceiveCanEnter
// 0x0018 (0x0018 - 0x0000)
struct ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7ED0[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter");
static_assert(sizeof(ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter) == 0x000018, "Wrong size on ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter");
static_assert(offsetof(ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter, CallFunc_RandomInteger_ReturnValue) == 0x00000C, "Member 'ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'ST_CharaCreate_Fidget_Lottery_03_C_ReceiveCanEnter::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

