#pragma once

 

// Package: ST_EnemyDeathReaction_New

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ST_EnemyDeathReaction_New.ST_EnemyDeathReaction_New_C.ReceiveCanEnter
// 0x00A8 (0x00A8 - 0x0000)
struct ST_EnemyDeathReaction_New_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F18[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_EnemyCharacter_C*                   K2Node_DynamicCast_AsBP_Enemy_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F19[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDamageInfo                          CallFunc_GetLastDamageInfo_ReturnValue;            // 0x0028(0x0058)(ConstParm, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F1A[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ST_EnemyDeathReaction_New_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_EnemyDeathReaction_New_C_ReceiveCanEnter");
static_assert(sizeof(ST_EnemyDeathReaction_New_C_ReceiveCanEnter) == 0x0000A8, "Wrong size on ST_EnemyDeathReaction_New_C_ReceiveCanEnter");
static_assert(offsetof(ST_EnemyDeathReaction_New_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_EnemyDeathReaction_New_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_EnemyDeathReaction_New_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_EnemyDeathReaction_New_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_EnemyDeathReaction_New_C_ReceiveCanEnter, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'ST_EnemyDeathReaction_New_C_ReceiveCanEnter::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_EnemyDeathReaction_New_C_ReceiveCanEnter, K2Node_DynamicCast_AsBP_Enemy_Character) == 0x000018, "Member 'ST_EnemyDeathReaction_New_C_ReceiveCanEnter::K2Node_DynamicCast_AsBP_Enemy_Character' has a wrong offset!");
static_assert(offsetof(ST_EnemyDeathReaction_New_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ST_EnemyDeathReaction_New_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_EnemyDeathReaction_New_C_ReceiveCanEnter, CallFunc_GetLastDamageInfo_ReturnValue) == 0x000028, "Member 'ST_EnemyDeathReaction_New_C_ReceiveCanEnter::CallFunc_GetLastDamageInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_EnemyDeathReaction_New_C_ReceiveCanEnter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000080, "Member 'ST_EnemyDeathReaction_New_C_ReceiveCanEnter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_EnemyDeathReaction_New_C_ReceiveCanEnter, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000088, "Member 'ST_EnemyDeathReaction_New_C_ReceiveCanEnter::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_EnemyDeathReaction_New_C_ReceiveCanEnter, CallFunc_Concat_StrStr_ReturnValue) == 0x000098, "Member 'ST_EnemyDeathReaction_New_C_ReceiveCanEnter::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

}

