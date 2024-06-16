#pragma once

 

// Package: SS_NPC_SkipEvent

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_NPC_SkipEvent.SS_NPC_SkipEvent_C.ExecuteUbergraph_SS_NPC_SkipEvent
// 0x0048 (0x0048 - 0x0000)
struct SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9444[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          K2Node_Event_AnimInstance_2;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance_1;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet_1;                       // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9445[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0030(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetTemporaryBool_ReturnValue;             // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent) == 0x000008, "Wrong alignment on SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent");
static_assert(sizeof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent) == 0x000048, "Wrong size on SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, EntryPoint) == 0x000000, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, K2Node_Event_AnimInstance_2) == 0x000008, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::K2Node_Event_AnimInstance_2' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, K2Node_Event_AnimInstance_1) == 0x000010, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::K2Node_Event_AnimInstance_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, K2Node_Event_AnimationSet_1) == 0x000018, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::K2Node_Event_AnimationSet_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, K2Node_Event_DeltaTime) == 0x000020, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, K2Node_Event_AnimInstance) == 0x000028, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, K2Node_Event_AnimationSet) == 0x000030, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000038, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, CallFunc_HasTag_ReturnValue) == 0x000041, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, CallFunc_GetTemporaryBool_ReturnValue) == 0x000042, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::CallFunc_GetTemporaryBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, CallFunc_Not_PreBool_ReturnValue) == 0x000043, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent, CallFunc_BooleanAND_ReturnValue) == 0x000044, "Member 'SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SS_NPC_SkipEvent.SS_NPC_SkipEvent_C.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct SS_NPC_SkipEvent_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9446[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_SkipEvent_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_NPC_SkipEvent_C_ReceiveTick");
static_assert(sizeof(SS_NPC_SkipEvent_C_ReceiveTick) == 0x000018, "Wrong size on SS_NPC_SkipEvent_C_ReceiveTick");
static_assert(offsetof(SS_NPC_SkipEvent_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_NPC_SkipEvent_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_NPC_SkipEvent_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_NPC_SkipEvent_C_ReceiveTick::AnimationSet' has a wrong offset!");

// Function SS_NPC_SkipEvent.SS_NPC_SkipEvent_C.ReceiveBeginPlay
// 0x0010 (0x0010 - 0x0000)
struct SS_NPC_SkipEvent_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_SkipEvent_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_NPC_SkipEvent_C_ReceiveBeginPlay");
static_assert(sizeof(SS_NPC_SkipEvent_C_ReceiveBeginPlay) == 0x000010, "Wrong size on SS_NPC_SkipEvent_C_ReceiveBeginPlay");
static_assert(offsetof(SS_NPC_SkipEvent_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_NPC_SkipEvent_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_SkipEvent_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_NPC_SkipEvent_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");

// Function SS_NPC_SkipEvent.SS_NPC_SkipEvent_C.ReceiveEndPlay
// 0x0008 (0x0008 - 0x0000)
struct SS_NPC_SkipEvent_C_ReceiveEndPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_SkipEvent_C_ReceiveEndPlay) == 0x000008, "Wrong alignment on SS_NPC_SkipEvent_C_ReceiveEndPlay");
static_assert(sizeof(SS_NPC_SkipEvent_C_ReceiveEndPlay) == 0x000008, "Wrong size on SS_NPC_SkipEvent_C_ReceiveEndPlay");
static_assert(offsetof(SS_NPC_SkipEvent_C_ReceiveEndPlay, AnimInstance) == 0x000000, "Member 'SS_NPC_SkipEvent_C_ReceiveEndPlay::AnimInstance' has a wrong offset!");

}

