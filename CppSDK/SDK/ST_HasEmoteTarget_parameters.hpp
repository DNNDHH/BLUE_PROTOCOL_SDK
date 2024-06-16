#pragma once

 

// Package: ST_HasEmoteTarget

#include "Basic.hpp"


namespace SDK::Params
{

// Function ST_HasEmoteTarget.ST_HasEmoteTarget_C.ReceiveCanEnter
// 0x0038 (0x0038 - 0x0000)
struct ST_HasEmoteTarget_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72A3[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72A4[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class ASBCreationCharacter*             CallFunc_GetEmoteTargetPlayer_ReturnValue;         // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_HasEmoteTarget_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_HasEmoteTarget_C_ReceiveCanEnter");
static_assert(sizeof(ST_HasEmoteTarget_C_ReceiveCanEnter) == 0x000038, "Wrong size on ST_HasEmoteTarget_C_ReceiveCanEnter");
static_assert(offsetof(ST_HasEmoteTarget_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_HasEmoteTarget_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_HasEmoteTarget_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_HasEmoteTarget_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_HasEmoteTarget_C_ReceiveCanEnter, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'ST_HasEmoteTarget_C_ReceiveCanEnter::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_HasEmoteTarget_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'ST_HasEmoteTarget_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(ST_HasEmoteTarget_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ST_HasEmoteTarget_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_HasEmoteTarget_C_ReceiveCanEnter, CallFunc_IsLocallyControlled_ReturnValue) == 0x000021, "Member 'ST_HasEmoteTarget_C_ReceiveCanEnter::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_HasEmoteTarget_C_ReceiveCanEnter, CallFunc_GetEmoteTargetPlayer_ReturnValue) == 0x000028, "Member 'ST_HasEmoteTarget_C_ReceiveCanEnter::CallFunc_GetEmoteTargetPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_HasEmoteTarget_C_ReceiveCanEnter, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'ST_HasEmoteTarget_C_ReceiveCanEnter::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

