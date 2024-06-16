#pragma once

 

// Package: SS_ChangeGravityTime

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_ChangeGravityTime.SS_ChangeGravityTime_C.ExecuteUbergraph_SS_ChangeGravityTime
// 0x0060 (0x0060 - 0x0000)
struct SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EB8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EB9[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTemporaryFloat_ReturnValue;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EBA[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SafeDivide_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue;                         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime) == 0x000008, "Wrong alignment on SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime");
static_assert(sizeof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime) == 0x000060, "Wrong size on SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, EntryPoint) == 0x000000, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, K2Node_Event_DeltaTime) == 0x000004, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, K2Node_Event_AnimInstance) == 0x000008, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, K2Node_Event_AnimationSet) == 0x000010, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, CallFunc_GetOwningActor_ReturnValue) == 0x000018, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000020, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, K2Node_DynamicCast_AsSBCharacter) == 0x000030, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, CallFunc_GetTemporaryFloat_ReturnValue) == 0x00003C, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::CallFunc_GetTemporaryFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000041, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, CallFunc_Add_FloatFloat_ReturnValue) == 0x000044, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, CallFunc_FMin_ReturnValue) == 0x000048, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, CallFunc_SetTemporaryFloat_ReturnValue) == 0x00004C, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, CallFunc_SafeDivide_ReturnValue) == 0x000050, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, CallFunc_FClamp_ReturnValue) == 0x000054, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime, CallFunc_Ease_ReturnValue) == 0x000058, "Member 'SS_ChangeGravityTime_C_ExecuteUbergraph_SS_ChangeGravityTime::CallFunc_Ease_ReturnValue' has a wrong offset!");

// Function SS_ChangeGravityTime.SS_ChangeGravityTime_C.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct SS_ChangeGravityTime_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EBB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_ChangeGravityTime_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_ChangeGravityTime_C_ReceiveTick");
static_assert(sizeof(SS_ChangeGravityTime_C_ReceiveTick) == 0x000018, "Wrong size on SS_ChangeGravityTime_C_ReceiveTick");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_ChangeGravityTime_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_ChangeGravityTime_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_ChangeGravityTime_C_ReceiveTick::AnimationSet' has a wrong offset!");

// Function SS_ChangeGravityTime.SS_ChangeGravityTime_C.ReceiveEndPlay
// 0x0030 (0x0030 - 0x0000)
struct SS_ChangeGravityTime_C_ReceiveEndPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EBC[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharacterMovementComponent*          K2Node_DynamicCast_AsSBCharacter_Movement_Component; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_ChangeGravityTime_C_ReceiveEndPlay) == 0x000008, "Wrong alignment on SS_ChangeGravityTime_C_ReceiveEndPlay");
static_assert(sizeof(SS_ChangeGravityTime_C_ReceiveEndPlay) == 0x000030, "Wrong size on SS_ChangeGravityTime_C_ReceiveEndPlay");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveEndPlay, AnimInstance) == 0x000000, "Member 'SS_ChangeGravityTime_C_ReceiveEndPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveEndPlay, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'SS_ChangeGravityTime_C_ReceiveEndPlay::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveEndPlay, K2Node_DynamicCast_AsSBCharacter) == 0x000010, "Member 'SS_ChangeGravityTime_C_ReceiveEndPlay::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveEndPlay, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SS_ChangeGravityTime_C_ReceiveEndPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveEndPlay, K2Node_DynamicCast_AsSBCharacter_Movement_Component) == 0x000020, "Member 'SS_ChangeGravityTime_C_ReceiveEndPlay::K2Node_DynamicCast_AsSBCharacter_Movement_Component' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveEndPlay, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'SS_ChangeGravityTime_C_ReceiveEndPlay::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function SS_ChangeGravityTime.SS_ChangeGravityTime_C.ReceiveBeginPlay
// 0x0020 (0x0020 - 0x0000)
struct SS_ChangeGravityTime_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EBD[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_ChangeGravityTime_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_ChangeGravityTime_C_ReceiveBeginPlay");
static_assert(sizeof(SS_ChangeGravityTime_C_ReceiveBeginPlay) == 0x000020, "Wrong size on SS_ChangeGravityTime_C_ReceiveBeginPlay");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_ChangeGravityTime_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_ChangeGravityTime_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveBeginPlay, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000010, "Member 'SS_ChangeGravityTime_C_ReceiveBeginPlay::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveBeginPlay, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SS_ChangeGravityTime_C_ReceiveBeginPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_ChangeGravityTime_C_ReceiveBeginPlay, CallFunc_SetTemporaryFloat_ReturnValue) == 0x00001C, "Member 'SS_ChangeGravityTime_C_ReceiveBeginPlay::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");

}

