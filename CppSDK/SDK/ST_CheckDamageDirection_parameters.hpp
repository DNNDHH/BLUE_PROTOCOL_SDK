#pragma once

 

// Package: ST_CheckDamageDirection

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ST_CheckDamageDirection.ST_CheckDamageDirection_C.ReceiveCanEnter
// 0x0090 (0x0090 - 0x0000)
struct ST_CheckDamageDirection_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A5D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDamageInfo                          CallFunc_GetLastDamageInfo_DamageInfo;             // 0x0018(0x0058)(NoDestructor)
	class ASBPlayerTransformCharacter*            K2Node_DynamicCast_AsSBPlayer_Transform_Character; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A5E[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_CheckDamageDirection_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_CheckDamageDirection_C_ReceiveCanEnter");
static_assert(sizeof(ST_CheckDamageDirection_C_ReceiveCanEnter) == 0x000090, "Wrong size on ST_CheckDamageDirection_C_ReceiveCanEnter");
static_assert(offsetof(ST_CheckDamageDirection_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_CheckDamageDirection_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirection_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_CheckDamageDirection_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirection_C_ReceiveCanEnter, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000010, "Member 'ST_CheckDamageDirection_C_ReceiveCanEnter::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirection_C_ReceiveCanEnter, CallFunc_GetLastDamageInfo_DamageInfo) == 0x000018, "Member 'ST_CheckDamageDirection_C_ReceiveCanEnter::CallFunc_GetLastDamageInfo_DamageInfo' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirection_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBPlayer_Transform_Character) == 0x000070, "Member 'ST_CheckDamageDirection_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBPlayer_Transform_Character' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirection_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'ST_CheckDamageDirection_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirection_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBCharacter) == 0x000080, "Member 'ST_CheckDamageDirection_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirection_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'ST_CheckDamageDirection_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageDirection_C_ReceiveCanEnter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000089, "Member 'ST_CheckDamageDirection_C_ReceiveCanEnter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

