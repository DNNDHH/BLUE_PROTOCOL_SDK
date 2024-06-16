#pragma once

 

// Package: SS_DamageRotation

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SS_DamageRotation.SS_DamageRotation_C.ExecuteUbergraph_SS_DamageRotation
// 0x0110 (0x0110 - 0x0000)
struct SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F14[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F15[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          K2Node_Event_AnimInstance_1;                       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet_1;                       // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F16[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDamageInfo                          CallFunc_GetLastDamageInfo_ReturnValue;            // 0x0048(0x0058)(ConstParm, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Array_Get_Item;                           // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector_X;                            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetRotatorFromVectorDirection_ReturnValue; // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation) == 0x000008, "Wrong alignment on SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation");
static_assert(sizeof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation) == 0x000110, "Wrong size on SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, EntryPoint) == 0x000000, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, K2Node_Event_AnimInstance) == 0x000008, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, K2Node_Event_AnimationSet) == 0x000010, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, K2Node_Event_DeltaTime) == 0x000018, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, K2Node_Event_AnimInstance_1) == 0x000020, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::K2Node_Event_AnimInstance_1' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, K2Node_Event_AnimationSet_1) == 0x000028, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::K2Node_Event_AnimationSet_1' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000030, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, K2Node_DynamicCast_AsSBCharacter) == 0x000038, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_IsLocallyControlled_ReturnValue) == 0x000041, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_IsValid_ReturnValue) == 0x000042, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_GetLastDamageInfo_ReturnValue) == 0x000048, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_GetLastDamageInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000A0, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_Normal_ReturnValue) == 0x0000A4, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_BreakVector_X) == 0x0000BC, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_BreakVector_Y) == 0x0000C0, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_BreakVector_Z) == 0x0000C4, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_GetRotatorFromVectorDirection_ReturnValue) == 0x0000C8, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_GetRotatorFromVectorDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000D4, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_ComposeRotators_ReturnValue) == 0x0000D8, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000E4, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_BreakRotator_Roll) == 0x0000E8, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_BreakRotator_Pitch) == 0x0000EC, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_BreakRotator_Yaw) == 0x0000F0, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_MakeVector_ReturnValue) == 0x0000F4, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_MakeRotator_ReturnValue) == 0x000100, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation, CallFunc_K2_SetActorRotation_ReturnValue) == 0x00010C, "Member 'SS_DamageRotation_C_ExecuteUbergraph_SS_DamageRotation::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

// Function SS_DamageRotation.SS_DamageRotation_C.ReceiveBeginPlay
// 0x0010 (0x0010 - 0x0000)
struct SS_DamageRotation_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_DamageRotation_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_DamageRotation_C_ReceiveBeginPlay");
static_assert(sizeof(SS_DamageRotation_C_ReceiveBeginPlay) == 0x000010, "Wrong size on SS_DamageRotation_C_ReceiveBeginPlay");
static_assert(offsetof(SS_DamageRotation_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_DamageRotation_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_DamageRotation_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");

// Function SS_DamageRotation.SS_DamageRotation_C.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct SS_DamageRotation_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F17[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_DamageRotation_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_DamageRotation_C_ReceiveTick");
static_assert(sizeof(SS_DamageRotation_C_ReceiveTick) == 0x000018, "Wrong size on SS_DamageRotation_C_ReceiveTick");
static_assert(offsetof(SS_DamageRotation_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_DamageRotation_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_DamageRotation_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_DamageRotation_C_ReceiveTick::AnimationSet' has a wrong offset!");

// Function SS_DamageRotation.SS_DamageRotation_C.ReceiveEndPlay
// 0x0020 (0x0020 - 0x0000)
struct SS_DamageRotation_C_ReceiveEndPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_DamageRotation_C_ReceiveEndPlay) == 0x000008, "Wrong alignment on SS_DamageRotation_C_ReceiveEndPlay");
static_assert(sizeof(SS_DamageRotation_C_ReceiveEndPlay) == 0x000020, "Wrong size on SS_DamageRotation_C_ReceiveEndPlay");
static_assert(offsetof(SS_DamageRotation_C_ReceiveEndPlay, AnimInstance) == 0x000000, "Member 'SS_DamageRotation_C_ReceiveEndPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ReceiveEndPlay, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'SS_DamageRotation_C_ReceiveEndPlay::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ReceiveEndPlay, K2Node_DynamicCast_AsSBCharacter) == 0x000010, "Member 'SS_DamageRotation_C_ReceiveEndPlay::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ReceiveEndPlay, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SS_DamageRotation_C_ReceiveEndPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_DamageRotation_C_ReceiveEndPlay, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'SS_DamageRotation_C_ReceiveEndPlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

