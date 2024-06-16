#pragma once

 

// Package: ST_CheckDamageTypeOnly

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "E_DamageReaction_structs.hpp"


namespace SDK::Params
{

// Function ST_CheckDamageTypeOnly.ST_CheckDamageTypeOnly_C.ReceiveCanEnter
// 0x00C0 (0x00C0 - 0x0000)
struct ST_CheckDamageTypeOnly_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E44[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDamageInfo                          CallFunc_GetLastDamageInfo_DamageInfo;             // 0x0010(0x0058)(NoDestructor)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerTransformCharacter*            K2Node_DynamicCast_AsSBPlayer_Transform_Character; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E45[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EnemyCharacter_C*                   K2Node_DynamicCast_AsBP_Enemy_Character;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E46[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetOwnerPlayerCharacter_ReturnValue;      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DamageReaction                              CallFunc_GetDamageReaction_DamageReaction;         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E47[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E48[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_DynamicCast_AsBP_Player_Character_1;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_DamageReaction                              CallFunc_GetDamageReaction_DamageReaction_1;       // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_DamageReaction                              CallFunc_GetDamageReaction_DamageReaction_2;       // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_CheckDamageTypeOnly_C_ReceiveCanEnter");
static_assert(sizeof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter) == 0x0000C0, "Wrong size on ST_CheckDamageTypeOnly_C_ReceiveCanEnter");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, CallFunc_GetLastDamageInfo_DamageInfo) == 0x000010, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::CallFunc_GetLastDamageInfo_DamageInfo' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000068, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBPlayer_Transform_Character) == 0x000070, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBPlayer_Transform_Character' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, K2Node_DynamicCast_AsBP_Enemy_Character) == 0x000080, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::K2Node_DynamicCast_AsBP_Enemy_Character' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess_1) == 0x000088, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, CallFunc_GetOwnerPlayerCharacter_ReturnValue) == 0x000090, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::CallFunc_GetOwnerPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, CallFunc_GetDamageReaction_DamageReaction) == 0x000098, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::CallFunc_GetDamageReaction_DamageReaction' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, K2Node_DynamicCast_AsBP_Player_Character) == 0x0000A0, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::K2Node_DynamicCast_AsBP_Player_Character' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess_2) == 0x0000A8, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, K2Node_DynamicCast_AsBP_Player_Character_1) == 0x0000B0, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::K2Node_DynamicCast_AsBP_Player_Character_1' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess_3) == 0x0000B8, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, CallFunc_GetDamageReaction_DamageReaction_1) == 0x0000B9, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::CallFunc_GetDamageReaction_DamageReaction_1' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, CallFunc_GetDamageReaction_DamageReaction_2) == 0x0000BA, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::CallFunc_GetDamageReaction_DamageReaction_2' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000BB, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000BC, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ST_CheckDamageTypeOnly_C_ReceiveCanEnter, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000BD, "Member 'ST_CheckDamageTypeOnly_C_ReceiveCanEnter::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");

}

