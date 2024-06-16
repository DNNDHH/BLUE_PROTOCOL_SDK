#pragma once

 

// Package: ST_IsEmoteTurn

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ST_IsEmoteTurn.ST_IsEmoteTurn_C.ReceiveCanEnter
// 0x0088 (0x0088 - 0x0000)
struct ST_IsEmoteTurn_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9735[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9736[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9737[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class ASBCreationCharacter*             CallFunc_GetEmoteTargetPlayer_ReturnValue;         // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9738[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_IsEmoteTurn_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_IsEmoteTurn_C_ReceiveCanEnter");
static_assert(sizeof(ST_IsEmoteTurn_C_ReceiveCanEnter) == 0x000088, "Wrong size on ST_IsEmoteTurn_C_ReceiveCanEnter");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000010, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000024, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_GetEmoteTargetPlayer_ReturnValue) == 0x000040, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_GetEmoteTargetPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_IsLocallyControlled_ReturnValue) == 0x000048, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00004C, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_FindLookAtRotation_ReturnValue) == 0x000058, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_NormalizedDeltaRotator_ReturnValue) == 0x000064, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_NormalizedDeltaRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_BreakRotator_Roll) == 0x000070, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_BreakRotator_Pitch) == 0x000074, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_BreakRotator_Yaw) == 0x000078, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_Abs_ReturnValue) == 0x00007C, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsEmoteTurn_C_ReceiveCanEnter, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000080, "Member 'ST_IsEmoteTurn_C_ReceiveCanEnter::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

}

