#pragma once

 

// Package: ST_EnemyIsBurstFinishCustom

#include "Basic.hpp"


namespace SDK::Params
{

// Function ST_EnemyIsBurstFinishCustom.ST_EnemyIsBurstFinishCustom_C.ReceiveCanEnter
// 0x0028 (0x0028 - 0x0000)
struct ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F09[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EnemyCharacter_C*                   K2Node_DynamicCast_AsBP_Enemy_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter");
static_assert(sizeof(ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter) == 0x000028, "Wrong size on ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter");
static_assert(offsetof(ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000010, "Member 'ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter, K2Node_DynamicCast_AsBP_Enemy_Character) == 0x000018, "Member 'ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter::K2Node_DynamicCast_AsBP_Enemy_Character' has a wrong offset!");
static_assert(offsetof(ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ST_EnemyIsBurstFinishCustom_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
