#pragma once

 

// Package: SS_EmoteTurn

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SS_EmoteTurn.SS_EmoteTurn_C.ReceiveBeginPlay
// 0x00A0 (0x00A0 - 0x0000)
struct SS_EmoteTurn_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAB_PlayerAnimBlueprint_C*              K2Node_DynamicCast_AsAB_Player_Anim_Blueprint;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5559[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_555A[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_555B[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class ASBCreationCharacter*             CallFunc_GetEmoteTargetPlayer_ReturnValue;         // 0x0050(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_555C[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetTemporaryFloat_ReturnValue_1;          // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_EmoteTurn_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_EmoteTurn_C_ReceiveBeginPlay");
static_assert(sizeof(SS_EmoteTurn_C_ReceiveBeginPlay) == 0x0000A0, "Wrong size on SS_EmoteTurn_C_ReceiveBeginPlay");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, K2Node_DynamicCast_AsAB_Player_Anim_Blueprint) == 0x000018, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::K2Node_DynamicCast_AsAB_Player_Anim_Blueprint' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000028, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_IsLocallyControlled_ReturnValue) == 0x000031, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000034, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_GetEmoteTargetPlayer_ReturnValue) == 0x000050, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_GetEmoteTargetPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000058, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_IsValid_ReturnValue) == 0x000064, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_FindLookAtRotation_ReturnValue) == 0x000068, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_BreakRotator_Roll) == 0x000074, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_BreakRotator_Pitch) == 0x000078, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_BreakRotator_Yaw) == 0x00007C, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_NormalizedDeltaRotator_ReturnValue) == 0x000080, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_NormalizedDeltaRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_SetTemporaryFloat_ReturnValue) == 0x00008C, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_BreakRotator_Roll_1) == 0x000090, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_BreakRotator_Pitch_1) == 0x000094, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_BreakRotator_Yaw_1) == 0x000098, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveBeginPlay, CallFunc_SetTemporaryFloat_ReturnValue_1) == 0x00009C, "Member 'SS_EmoteTurn_C_ReceiveBeginPlay::CallFunc_SetTemporaryFloat_ReturnValue_1' has a wrong offset!");

// Function SS_EmoteTurn.SS_EmoteTurn_C.ReceiveTick
// 0x0130 (0x0130 - 0x0000)
struct SS_EmoteTurn_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_555D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAB_PlayerAnimBlueprint_C*              K2Node_DynamicCast_AsAB_Player_Anim_Blueprint;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_555E[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTemporaryFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTemporaryFloat_ReturnValue_1;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_555F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5560[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5561[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Abs_ReturnValue;                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5562[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddActorWorldRotation_SweepHitResult;  // 0x008C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class ASBCreationCharacter*             CallFunc_GetEmoteTargetPlayer_ReturnValue;         // 0x0120(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue_1;                        // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x012E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x012F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_EmoteTurn_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_EmoteTurn_C_ReceiveTick");
static_assert(sizeof(SS_EmoteTurn_C_ReceiveTick) == 0x000130, "Wrong size on SS_EmoteTurn_C_ReceiveTick");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_EmoteTurn_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_EmoteTurn_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_EmoteTurn_C_ReceiveTick::AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, K2Node_DynamicCast_AsAB_Player_Anim_Blueprint) == 0x000018, "Member 'SS_EmoteTurn_C_ReceiveTick::K2Node_DynamicCast_AsAB_Player_Anim_Blueprint' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SS_EmoteTurn_C_ReceiveTick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_GetTemporaryFloat_ReturnValue) == 0x000028, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_GetTemporaryFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_GetTemporaryFloat_ReturnValue_1) == 0x00002C, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_GetTemporaryFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_MakeRotator_ReturnValue) == 0x000030, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00003C, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000040, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_GetOwningActor_ReturnValue) == 0x000048, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_MakeRotator_ReturnValue_1) == 0x000050, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000060, "Member 'SS_EmoteTurn_C_ReceiveTick::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'SS_EmoteTurn_C_ReceiveTick::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_Abs_ReturnValue) == 0x00006C, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_BooleanAND_ReturnValue) == 0x000070, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000074, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_NormalizedDeltaRotator_ReturnValue) == 0x000080, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_NormalizedDeltaRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_K2_AddActorWorldRotation_SweepHitResult) == 0x00008C, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_K2_AddActorWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_BreakRotator_Roll) == 0x000114, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_BreakRotator_Pitch) == 0x000118, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_BreakRotator_Yaw) == 0x00011C, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_GetEmoteTargetPlayer_ReturnValue) == 0x000120, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_GetEmoteTargetPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_Abs_ReturnValue_1) == 0x000128, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_IsValid_ReturnValue) == 0x00012C, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00012D, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_IsLocallyControlled_ReturnValue) == 0x00012E, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveTick, CallFunc_BooleanAND_ReturnValue_1) == 0x00012F, "Member 'SS_EmoteTurn_C_ReceiveTick::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function SS_EmoteTurn.SS_EmoteTurn_C.ReceiveEndPlay
// 0x0070 (0x0070 - 0x0000)
struct SS_EmoteTurn_C_ReceiveEndPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5563[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class ASBCreationCharacter*             CallFunc_GetEmoteTargetPlayer_ReturnValue;         // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5564[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5565[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_EmoteTurn_C_ReceiveEndPlay) == 0x000008, "Wrong alignment on SS_EmoteTurn_C_ReceiveEndPlay");
static_assert(sizeof(SS_EmoteTurn_C_ReceiveEndPlay) == 0x000070, "Wrong size on SS_EmoteTurn_C_ReceiveEndPlay");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, AnimInstance) == 0x000000, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_GetEmoteTargetPlayer_ReturnValue) == 0x000020, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_GetEmoteTargetPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_FindLookAtRotation_ReturnValue) == 0x000044, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_IsLocallyControlled_ReturnValue) == 0x000050, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_BreakRotator_Roll) == 0x000054, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_BreakRotator_Pitch) == 0x000058, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_BreakRotator_Yaw) == 0x00005C, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_MakeRotator_ReturnValue) == 0x000060, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteTurn_C_ReceiveEndPlay, CallFunc_K2_SetActorRotation_ReturnValue) == 0x00006C, "Member 'SS_EmoteTurn_C_ReceiveEndPlay::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

}

