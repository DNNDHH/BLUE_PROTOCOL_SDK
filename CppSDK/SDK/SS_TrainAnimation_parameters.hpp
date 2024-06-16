#pragma once

 

// Package: SS_TrainAnimation

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_TrainAnimation.SS_TrainAnimation_C.ExecuteUbergraph_SS_TrainAnimation
// 0x0048 (0x0048 - 0x0000)
struct SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance_1;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet_1;                       // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimTimeLength_ReturnValue;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A5F[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation) == 0x000008, "Wrong alignment on SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation");
static_assert(sizeof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation) == 0x000048, "Wrong size on SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation");
static_assert(offsetof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation, EntryPoint) == 0x000000, "Member 'SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation, K2Node_Event_DeltaTime) == 0x000004, "Member 'SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation, K2Node_Event_AnimInstance_1) == 0x000008, "Member 'SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation::K2Node_Event_AnimInstance_1' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation, K2Node_Event_AnimationSet_1) == 0x000010, "Member 'SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation::K2Node_Event_AnimationSet_1' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation, K2Node_Event_AnimInstance) == 0x000018, "Member 'SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation, K2Node_Event_AnimationSet) == 0x000020, "Member 'SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation, CallFunc_GetOwningActor_ReturnValue) == 0x000028, "Member 'SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation, CallFunc_GetAnimTimeLength_ReturnValue) == 0x000030, "Member 'SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation::CallFunc_GetAnimTimeLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000038, "Member 'SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'SS_TrainAnimation_C_ExecuteUbergraph_SS_TrainAnimation::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SS_TrainAnimation.SS_TrainAnimation_C.ReceiveBeginPlay
// 0x0010 (0x0010 - 0x0000)
struct SS_TrainAnimation_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_TrainAnimation_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_TrainAnimation_C_ReceiveBeginPlay");
static_assert(sizeof(SS_TrainAnimation_C_ReceiveBeginPlay) == 0x000010, "Wrong size on SS_TrainAnimation_C_ReceiveBeginPlay");
static_assert(offsetof(SS_TrainAnimation_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_TrainAnimation_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_TrainAnimation_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");

// Function SS_TrainAnimation.SS_TrainAnimation_C.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct SS_TrainAnimation_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A60[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_TrainAnimation_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_TrainAnimation_C_ReceiveTick");
static_assert(sizeof(SS_TrainAnimation_C_ReceiveTick) == 0x000018, "Wrong size on SS_TrainAnimation_C_ReceiveTick");
static_assert(offsetof(SS_TrainAnimation_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_TrainAnimation_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_TrainAnimation_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_TrainAnimation_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_TrainAnimation_C_ReceiveTick::AnimationSet' has a wrong offset!");

// Function SS_TrainAnimation.SS_TrainAnimation_C.ReceiveEndPlay
// 0x0008 (0x0008 - 0x0000)
struct SS_TrainAnimation_C_ReceiveEndPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_TrainAnimation_C_ReceiveEndPlay) == 0x000008, "Wrong alignment on SS_TrainAnimation_C_ReceiveEndPlay");
static_assert(sizeof(SS_TrainAnimation_C_ReceiveEndPlay) == 0x000008, "Wrong size on SS_TrainAnimation_C_ReceiveEndPlay");
static_assert(offsetof(SS_TrainAnimation_C_ReceiveEndPlay, AnimInstance) == 0x000000, "Member 'SS_TrainAnimation_C_ReceiveEndPlay::AnimInstance' has a wrong offset!");

}

