#pragma once

 

// Package: SS_SyncAnimation

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_SyncAnimation.SS_SyncAnimation_C.ExecuteUbergraph_SS_SyncAnimation
// 0x0060 (0x0060 - 0x0000)
struct SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance_1;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet_1;                       // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue_1;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71CC[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71CD[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimTimeLength_ReturnValue;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimTime_ReturnValue;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetPlayRateForAnimationSync_ReturnValue;  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation) == 0x000008, "Wrong alignment on SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation");
static_assert(sizeof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation) == 0x000060, "Wrong size on SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, EntryPoint) == 0x000000, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, K2Node_Event_DeltaTime) == 0x000004, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, K2Node_Event_AnimInstance_1) == 0x000008, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::K2Node_Event_AnimInstance_1' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, K2Node_Event_AnimationSet_1) == 0x000010, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::K2Node_Event_AnimationSet_1' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, K2Node_Event_AnimInstance) == 0x000018, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, K2Node_Event_AnimationSet) == 0x000020, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, CallFunc_GetOwningActor_ReturnValue) == 0x000028, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, CallFunc_GetOwningActor_ReturnValue_1) == 0x000030, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::CallFunc_GetOwningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000038, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000048, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, CallFunc_GetAnimTimeLength_ReturnValue) == 0x000054, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::CallFunc_GetAnimTimeLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, CallFunc_GetAnimTime_ReturnValue) == 0x000058, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::CallFunc_GetAnimTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation, CallFunc_GetPlayRateForAnimationSync_ReturnValue) == 0x00005C, "Member 'SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation::CallFunc_GetPlayRateForAnimationSync_ReturnValue' has a wrong offset!");

// Function SS_SyncAnimation.SS_SyncAnimation_C.ReceiveBeginPlay
// 0x0010 (0x0010 - 0x0000)
struct SS_SyncAnimation_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_SyncAnimation_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_SyncAnimation_C_ReceiveBeginPlay");
static_assert(sizeof(SS_SyncAnimation_C_ReceiveBeginPlay) == 0x000010, "Wrong size on SS_SyncAnimation_C_ReceiveBeginPlay");
static_assert(offsetof(SS_SyncAnimation_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_SyncAnimation_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_SyncAnimation_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");

// Function SS_SyncAnimation.SS_SyncAnimation_C.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct SS_SyncAnimation_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71CE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_SyncAnimation_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_SyncAnimation_C_ReceiveTick");
static_assert(sizeof(SS_SyncAnimation_C_ReceiveTick) == 0x000018, "Wrong size on SS_SyncAnimation_C_ReceiveTick");
static_assert(offsetof(SS_SyncAnimation_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_SyncAnimation_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_SyncAnimation_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_SyncAnimation_C_ReceiveTick::AnimationSet' has a wrong offset!");

// Function SS_SyncAnimation.SS_SyncAnimation_C.ReceiveEndPlay
// 0x0020 (0x0020 - 0x0000)
struct SS_SyncAnimation_C_ReceiveEndPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_SyncAnimation_C_ReceiveEndPlay) == 0x000008, "Wrong alignment on SS_SyncAnimation_C_ReceiveEndPlay");
static_assert(sizeof(SS_SyncAnimation_C_ReceiveEndPlay) == 0x000020, "Wrong size on SS_SyncAnimation_C_ReceiveEndPlay");
static_assert(offsetof(SS_SyncAnimation_C_ReceiveEndPlay, AnimInstance) == 0x000000, "Member 'SS_SyncAnimation_C_ReceiveEndPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ReceiveEndPlay, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'SS_SyncAnimation_C_ReceiveEndPlay::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ReceiveEndPlay, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'SS_SyncAnimation_C_ReceiveEndPlay::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SS_SyncAnimation_C_ReceiveEndPlay, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SS_SyncAnimation_C_ReceiveEndPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

