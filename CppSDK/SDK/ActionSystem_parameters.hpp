#pragma once

 

// Package: ActionSystem

#include "Basic.hpp"

#include "ActionSystem_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ActionSystem.ASAnimationSet.GetBlendSpace
// 0x0010 (0x0010 - 0x0000)
struct ASAnimationSet_GetBlendSpace final
{
public:
	class FName                                   KeyName;                                           // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASAnimationSet_GetBlendSpace) == 0x000008, "Wrong alignment on ASAnimationSet_GetBlendSpace");
static_assert(sizeof(ASAnimationSet_GetBlendSpace) == 0x000010, "Wrong size on ASAnimationSet_GetBlendSpace");
static_assert(offsetof(ASAnimationSet_GetBlendSpace, KeyName) == 0x000000, "Member 'ASAnimationSet_GetBlendSpace::KeyName' has a wrong offset!");
static_assert(offsetof(ASAnimationSet_GetBlendSpace, ReturnValue) == 0x000008, "Member 'ASAnimationSet_GetBlendSpace::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASAnimationSet.GetSequence
// 0x0010 (0x0010 - 0x0000)
struct ASAnimationSet_GetSequence final
{
public:
	class FName                                   KeyName;                                           // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                      ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASAnimationSet_GetSequence) == 0x000008, "Wrong alignment on ASAnimationSet_GetSequence");
static_assert(sizeof(ASAnimationSet_GetSequence) == 0x000010, "Wrong size on ASAnimationSet_GetSequence");
static_assert(offsetof(ASAnimationSet_GetSequence, KeyName) == 0x000000, "Member 'ASAnimationSet_GetSequence::KeyName' has a wrong offset!");
static_assert(offsetof(ASAnimationSet_GetSequence, ReturnValue) == 0x000008, "Member 'ASAnimationSet_GetSequence::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASAnimationSet.GetStateMachine
// 0x0010 (0x0010 - 0x0000)
struct ASAnimationSet_GetStateMachine final
{
public:
	class FName                                   KeyName;                                           // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UASStateMachine*                        ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASAnimationSet_GetStateMachine) == 0x000008, "Wrong alignment on ASAnimationSet_GetStateMachine");
static_assert(sizeof(ASAnimationSet_GetStateMachine) == 0x000010, "Wrong size on ASAnimationSet_GetStateMachine");
static_assert(offsetof(ASAnimationSet_GetStateMachine, KeyName) == 0x000000, "Member 'ASAnimationSet_GetStateMachine::KeyName' has a wrong offset!");
static_assert(offsetof(ASAnimationSet_GetStateMachine, ReturnValue) == 0x000008, "Member 'ASAnimationSet_GetStateMachine::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASAnimInstance.AnimNotify_StateChange
// 0x0008 (0x0008 - 0x0000)
struct ASAnimInstance_AnimNotify_StateChange final
{
public:
	class UASAnimNotify_StateChange*              Notify;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASAnimInstance_AnimNotify_StateChange) == 0x000008, "Wrong alignment on ASAnimInstance_AnimNotify_StateChange");
static_assert(sizeof(ASAnimInstance_AnimNotify_StateChange) == 0x000008, "Wrong size on ASAnimInstance_AnimNotify_StateChange");
static_assert(offsetof(ASAnimInstance_AnimNotify_StateChange, Notify) == 0x000000, "Member 'ASAnimInstance_AnimNotify_StateChange::Notify' has a wrong offset!");

// Function ActionSystem.ASAnimInstance.IsHitShift
// 0x0001 (0x0001 - 0x0000)
struct ASAnimInstance_IsHitShift final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASAnimInstance_IsHitShift) == 0x000001, "Wrong alignment on ASAnimInstance_IsHitShift");
static_assert(sizeof(ASAnimInstance_IsHitShift) == 0x000001, "Wrong size on ASAnimInstance_IsHitShift");
static_assert(offsetof(ASAnimInstance_IsHitShift, ReturnValue) == 0x000000, "Member 'ASAnimInstance_IsHitShift::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASAnimInstance.JumpMachineState
// 0x0020 (0x0020 - 0x0000)
struct ASAnimInstance_JumpMachineState final
{
public:
	class FString                                 MachinName;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StateName;                                         // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASAnimInstance_JumpMachineState) == 0x000008, "Wrong alignment on ASAnimInstance_JumpMachineState");
static_assert(sizeof(ASAnimInstance_JumpMachineState) == 0x000020, "Wrong size on ASAnimInstance_JumpMachineState");
static_assert(offsetof(ASAnimInstance_JumpMachineState, MachinName) == 0x000000, "Member 'ASAnimInstance_JumpMachineState::MachinName' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_JumpMachineState, StateName) == 0x000010, "Member 'ASAnimInstance_JumpMachineState::StateName' has a wrong offset!");

// Function ActionSystem.ASAnimInstance.ReceiveStateChange
// 0x0020 (0x0020 - 0x0000)
struct ASAnimInstance_ReceiveStateChange final
{
public:
	class FString                                 PreviousStateName;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NextStateName;                                     // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASAnimInstance_ReceiveStateChange) == 0x000008, "Wrong alignment on ASAnimInstance_ReceiveStateChange");
static_assert(sizeof(ASAnimInstance_ReceiveStateChange) == 0x000020, "Wrong size on ASAnimInstance_ReceiveStateChange");
static_assert(offsetof(ASAnimInstance_ReceiveStateChange, PreviousStateName) == 0x000000, "Member 'ASAnimInstance_ReceiveStateChange::PreviousStateName' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_ReceiveStateChange, NextStateName) == 0x000010, "Member 'ASAnimInstance_ReceiveStateChange::NextStateName' has a wrong offset!");

// Function ActionSystem.ASAnimInstance.SendCommand
// 0x000C (0x000C - 0x0000)
struct ASAnimInstance_SendCommand final
{
public:
	class FName                                   Command;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForce;                                            // 0x0008(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19E0[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASAnimInstance_SendCommand) == 0x000004, "Wrong alignment on ASAnimInstance_SendCommand");
static_assert(sizeof(ASAnimInstance_SendCommand) == 0x00000C, "Wrong size on ASAnimInstance_SendCommand");
static_assert(offsetof(ASAnimInstance_SendCommand, Command) == 0x000000, "Member 'ASAnimInstance_SendCommand::Command' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_SendCommand, bForce) == 0x000008, "Member 'ASAnimInstance_SendCommand::bForce' has a wrong offset!");

// Function ActionSystem.ASAnimInstance.SetDynamicAnimationSet
// 0x0028 (0x0028 - 0x0000)
struct ASAnimInstance_SetDynamicAnimationSet final
{
public:
	class FString                                 AnimNodeName;                                      // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StateName;                                         // 0x0010(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UASAnimationSet*                  AnimationSetAsset;                                 // 0x0020(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASAnimInstance_SetDynamicAnimationSet) == 0x000008, "Wrong alignment on ASAnimInstance_SetDynamicAnimationSet");
static_assert(sizeof(ASAnimInstance_SetDynamicAnimationSet) == 0x000028, "Wrong size on ASAnimInstance_SetDynamicAnimationSet");
static_assert(offsetof(ASAnimInstance_SetDynamicAnimationSet, AnimNodeName) == 0x000000, "Member 'ASAnimInstance_SetDynamicAnimationSet::AnimNodeName' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_SetDynamicAnimationSet, StateName) == 0x000010, "Member 'ASAnimInstance_SetDynamicAnimationSet::StateName' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_SetDynamicAnimationSet, AnimationSetAsset) == 0x000020, "Member 'ASAnimInstance_SetDynamicAnimationSet::AnimationSetAsset' has a wrong offset!");

// Function ActionSystem.ASAnimInstance.SetDynamicSequence
// 0x0028 (0x0028 - 0x0000)
struct ASAnimInstance_SetDynamicSequence final
{
public:
	class FString                                 AnimNodeName;                                      // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StateName;                                         // 0x0010(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UAnimSequenceBase*                SequenceAsset;                                     // 0x0020(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASAnimInstance_SetDynamicSequence) == 0x000008, "Wrong alignment on ASAnimInstance_SetDynamicSequence");
static_assert(sizeof(ASAnimInstance_SetDynamicSequence) == 0x000028, "Wrong size on ASAnimInstance_SetDynamicSequence");
static_assert(offsetof(ASAnimInstance_SetDynamicSequence, AnimNodeName) == 0x000000, "Member 'ASAnimInstance_SetDynamicSequence::AnimNodeName' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_SetDynamicSequence, StateName) == 0x000010, "Member 'ASAnimInstance_SetDynamicSequence::StateName' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_SetDynamicSequence, SequenceAsset) == 0x000020, "Member 'ASAnimInstance_SetDynamicSequence::SequenceAsset' has a wrong offset!");

// Function ActionSystem.ASAnimInstance.SetDynamicSubMachine
// 0x0028 (0x0028 - 0x0000)
struct ASAnimInstance_SetDynamicSubMachine final
{
public:
	class FString                                 AnimNodeName;                                      // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StateName;                                         // 0x0010(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UASStateMachine*                  StateMachineAsset;                                 // 0x0020(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASAnimInstance_SetDynamicSubMachine) == 0x000008, "Wrong alignment on ASAnimInstance_SetDynamicSubMachine");
static_assert(sizeof(ASAnimInstance_SetDynamicSubMachine) == 0x000028, "Wrong size on ASAnimInstance_SetDynamicSubMachine");
static_assert(offsetof(ASAnimInstance_SetDynamicSubMachine, AnimNodeName) == 0x000000, "Member 'ASAnimInstance_SetDynamicSubMachine::AnimNodeName' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_SetDynamicSubMachine, StateName) == 0x000010, "Member 'ASAnimInstance_SetDynamicSubMachine::StateName' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_SetDynamicSubMachine, StateMachineAsset) == 0x000020, "Member 'ASAnimInstance_SetDynamicSubMachine::StateMachineAsset' has a wrong offset!");

// Function ActionSystem.ASAnimInstance.SetDynamicTransition
// 0x0028 (0x0028 - 0x0000)
struct ASAnimInstance_SetDynamicTransition final
{
public:
	class FString                                 AnimNodeName;                                      // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TransitionName;                                    // 0x0010(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CrossfadeDuration;                                 // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19E1[0x4];                                     // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASAnimInstance_SetDynamicTransition) == 0x000008, "Wrong alignment on ASAnimInstance_SetDynamicTransition");
static_assert(sizeof(ASAnimInstance_SetDynamicTransition) == 0x000028, "Wrong size on ASAnimInstance_SetDynamicTransition");
static_assert(offsetof(ASAnimInstance_SetDynamicTransition, AnimNodeName) == 0x000000, "Member 'ASAnimInstance_SetDynamicTransition::AnimNodeName' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_SetDynamicTransition, TransitionName) == 0x000010, "Member 'ASAnimInstance_SetDynamicTransition::TransitionName' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_SetDynamicTransition, CrossfadeDuration) == 0x000020, "Member 'ASAnimInstance_SetDynamicTransition::CrossfadeDuration' has a wrong offset!");

// Function ActionSystem.ASAnimInstance.HasTag
// 0x000C (0x000C - 0x0000)
struct ASAnimInstance_HasTag final
{
public:
	class FName                                   Tag;                                               // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19E2[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASAnimInstance_HasTag) == 0x000004, "Wrong alignment on ASAnimInstance_HasTag");
static_assert(sizeof(ASAnimInstance_HasTag) == 0x00000C, "Wrong size on ASAnimInstance_HasTag");
static_assert(offsetof(ASAnimInstance_HasTag, Tag) == 0x000000, "Member 'ASAnimInstance_HasTag::Tag' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_HasTag, ReturnValue) == 0x000008, "Member 'ASAnimInstance_HasTag::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASAnimInstance.HasTagAny
// 0x0018 (0x0018 - 0x0000)
struct ASAnimInstance_HasTagAny final
{
public:
	TArray<class FName>                           Tags;                                              // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19E3[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASAnimInstance_HasTagAny) == 0x000008, "Wrong alignment on ASAnimInstance_HasTagAny");
static_assert(sizeof(ASAnimInstance_HasTagAny) == 0x000018, "Wrong size on ASAnimInstance_HasTagAny");
static_assert(offsetof(ASAnimInstance_HasTagAny, Tags) == 0x000000, "Member 'ASAnimInstance_HasTagAny::Tags' has a wrong offset!");
static_assert(offsetof(ASAnimInstance_HasTagAny, ReturnValue) == 0x000010, "Member 'ASAnimInstance_HasTagAny::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASCollisionGroupComponent.OnAttackBeginOverlap
// 0x00A0 (0x00A0 - 0x0000)
struct ASCollisionGroupComponent_OnAttackBeginOverlap final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             SweepResult;                                       // 0x0018(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCollisionGroupComponent_OnAttackBeginOverlap) == 0x000008, "Wrong alignment on ASCollisionGroupComponent_OnAttackBeginOverlap");
static_assert(sizeof(ASCollisionGroupComponent_OnAttackBeginOverlap) == 0x0000A0, "Wrong size on ASCollisionGroupComponent_OnAttackBeginOverlap");
static_assert(offsetof(ASCollisionGroupComponent_OnAttackBeginOverlap, MyComp) == 0x000000, "Member 'ASCollisionGroupComponent_OnAttackBeginOverlap::MyComp' has a wrong offset!");
static_assert(offsetof(ASCollisionGroupComponent_OnAttackBeginOverlap, OtherActor) == 0x000008, "Member 'ASCollisionGroupComponent_OnAttackBeginOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(ASCollisionGroupComponent_OnAttackBeginOverlap, OtherComp) == 0x000010, "Member 'ASCollisionGroupComponent_OnAttackBeginOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(ASCollisionGroupComponent_OnAttackBeginOverlap, SweepResult) == 0x000018, "Member 'ASCollisionGroupComponent_OnAttackBeginOverlap::SweepResult' has a wrong offset!");

// Function ActionSystem.ASCollisionGroupComponent.OnAttackEndOverlap
// 0x0018 (0x0018 - 0x0000)
struct ASCollisionGroupComponent_OnAttackEndOverlap final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCollisionGroupComponent_OnAttackEndOverlap) == 0x000008, "Wrong alignment on ASCollisionGroupComponent_OnAttackEndOverlap");
static_assert(sizeof(ASCollisionGroupComponent_OnAttackEndOverlap) == 0x000018, "Wrong size on ASCollisionGroupComponent_OnAttackEndOverlap");
static_assert(offsetof(ASCollisionGroupComponent_OnAttackEndOverlap, MyComp) == 0x000000, "Member 'ASCollisionGroupComponent_OnAttackEndOverlap::MyComp' has a wrong offset!");
static_assert(offsetof(ASCollisionGroupComponent_OnAttackEndOverlap, OtherActor) == 0x000008, "Member 'ASCollisionGroupComponent_OnAttackEndOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(ASCollisionGroupComponent_OnAttackEndOverlap, OtherComp) == 0x000010, "Member 'ASCollisionGroupComponent_OnAttackEndOverlap::OtherComp' has a wrong offset!");

// Function ActionSystem.ASCollisionGroupComponent.SetActiveCollision
// 0x0001 (0x0001 - 0x0000)
struct ASCollisionGroupComponent_SetActiveCollision final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCollisionGroupComponent_SetActiveCollision) == 0x000001, "Wrong alignment on ASCollisionGroupComponent_SetActiveCollision");
static_assert(sizeof(ASCollisionGroupComponent_SetActiveCollision) == 0x000001, "Wrong size on ASCollisionGroupComponent_SetActiveCollision");
static_assert(offsetof(ASCollisionGroupComponent_SetActiveCollision, Active) == 0x000000, "Member 'ASCollisionGroupComponent_SetActiveCollision::Active' has a wrong offset!");

// Function ActionSystem.ASCollisionGroupComponent.StartAttack
// 0x0008 (0x0008 - 0x0000)
struct ASCollisionGroupComponent_StartAttack final
{
public:
	int32                                         HitCount;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HitInterval;                                       // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCollisionGroupComponent_StartAttack) == 0x000004, "Wrong alignment on ASCollisionGroupComponent_StartAttack");
static_assert(sizeof(ASCollisionGroupComponent_StartAttack) == 0x000008, "Wrong size on ASCollisionGroupComponent_StartAttack");
static_assert(offsetof(ASCollisionGroupComponent_StartAttack, HitCount) == 0x000000, "Member 'ASCollisionGroupComponent_StartAttack::HitCount' has a wrong offset!");
static_assert(offsetof(ASCollisionGroupComponent_StartAttack, HitInterval) == 0x000004, "Member 'ASCollisionGroupComponent_StartAttack::HitInterval' has a wrong offset!");

// Function ActionSystem.ASCollisionBoxComponent.OnAttackBeginOverlap
// 0x00A8 (0x00A8 - 0x0000)
struct ASCollisionBoxComponent_OnAttackBeginOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19EC[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCollisionBoxComponent_OnAttackBeginOverlap) == 0x000008, "Wrong alignment on ASCollisionBoxComponent_OnAttackBeginOverlap");
static_assert(sizeof(ASCollisionBoxComponent_OnAttackBeginOverlap) == 0x0000A8, "Wrong size on ASCollisionBoxComponent_OnAttackBeginOverlap");
static_assert(offsetof(ASCollisionBoxComponent_OnAttackBeginOverlap, OverlappedComponent) == 0x000000, "Member 'ASCollisionBoxComponent_OnAttackBeginOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ASCollisionBoxComponent_OnAttackBeginOverlap, OtherActor) == 0x000008, "Member 'ASCollisionBoxComponent_OnAttackBeginOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(ASCollisionBoxComponent_OnAttackBeginOverlap, OtherComp) == 0x000010, "Member 'ASCollisionBoxComponent_OnAttackBeginOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(ASCollisionBoxComponent_OnAttackBeginOverlap, OtherBodyIndex) == 0x000018, "Member 'ASCollisionBoxComponent_OnAttackBeginOverlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ASCollisionBoxComponent_OnAttackBeginOverlap, bFromSweep) == 0x00001C, "Member 'ASCollisionBoxComponent_OnAttackBeginOverlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(ASCollisionBoxComponent_OnAttackBeginOverlap, SweepResult) == 0x000020, "Member 'ASCollisionBoxComponent_OnAttackBeginOverlap::SweepResult' has a wrong offset!");

// Function ActionSystem.ASCollisionBoxComponent.OnAttackEndOverlap
// 0x0020 (0x0020 - 0x0000)
struct ASCollisionBoxComponent_OnAttackEndOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19ED[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASCollisionBoxComponent_OnAttackEndOverlap) == 0x000008, "Wrong alignment on ASCollisionBoxComponent_OnAttackEndOverlap");
static_assert(sizeof(ASCollisionBoxComponent_OnAttackEndOverlap) == 0x000020, "Wrong size on ASCollisionBoxComponent_OnAttackEndOverlap");
static_assert(offsetof(ASCollisionBoxComponent_OnAttackEndOverlap, OverlappedComponent) == 0x000000, "Member 'ASCollisionBoxComponent_OnAttackEndOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ASCollisionBoxComponent_OnAttackEndOverlap, OtherActor) == 0x000008, "Member 'ASCollisionBoxComponent_OnAttackEndOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(ASCollisionBoxComponent_OnAttackEndOverlap, OtherComp) == 0x000010, "Member 'ASCollisionBoxComponent_OnAttackEndOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(ASCollisionBoxComponent_OnAttackEndOverlap, OtherBodyIndex) == 0x000018, "Member 'ASCollisionBoxComponent_OnAttackEndOverlap::OtherBodyIndex' has a wrong offset!");

// Function ActionSystem.ASCharacterBase.JumpMachineState
// 0x0020 (0x0020 - 0x0000)
struct ASCharacterBase_JumpMachineState final
{
public:
	class FString                                 MachinName;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StateName;                                         // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCharacterBase_JumpMachineState) == 0x000008, "Wrong alignment on ASCharacterBase_JumpMachineState");
static_assert(sizeof(ASCharacterBase_JumpMachineState) == 0x000020, "Wrong size on ASCharacterBase_JumpMachineState");
static_assert(offsetof(ASCharacterBase_JumpMachineState, MachinName) == 0x000000, "Member 'ASCharacterBase_JumpMachineState::MachinName' has a wrong offset!");
static_assert(offsetof(ASCharacterBase_JumpMachineState, StateName) == 0x000010, "Member 'ASCharacterBase_JumpMachineState::StateName' has a wrong offset!");

// Function ActionSystem.ASCharacterBase.ReceiveStateChange
// 0x0020 (0x0020 - 0x0000)
struct ASCharacterBase_ReceiveStateChange final
{
public:
	class FString                                 PreviousStateName;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NextStateName;                                     // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCharacterBase_ReceiveStateChange) == 0x000008, "Wrong alignment on ASCharacterBase_ReceiveStateChange");
static_assert(sizeof(ASCharacterBase_ReceiveStateChange) == 0x000020, "Wrong size on ASCharacterBase_ReceiveStateChange");
static_assert(offsetof(ASCharacterBase_ReceiveStateChange, PreviousStateName) == 0x000000, "Member 'ASCharacterBase_ReceiveStateChange::PreviousStateName' has a wrong offset!");
static_assert(offsetof(ASCharacterBase_ReceiveStateChange, NextStateName) == 0x000010, "Member 'ASCharacterBase_ReceiveStateChange::NextStateName' has a wrong offset!");

// Function ActionSystem.ASCharacterBase.SendAnimCommand
// 0x0018 (0x0018 - 0x0000)
struct ASCharacterBase_SendAnimCommand final
{
public:
	class FString                                 Command;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Force;                                             // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19F0[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASCharacterBase_SendAnimCommand) == 0x000008, "Wrong alignment on ASCharacterBase_SendAnimCommand");
static_assert(sizeof(ASCharacterBase_SendAnimCommand) == 0x000018, "Wrong size on ASCharacterBase_SendAnimCommand");
static_assert(offsetof(ASCharacterBase_SendAnimCommand, Command) == 0x000000, "Member 'ASCharacterBase_SendAnimCommand::Command' has a wrong offset!");
static_assert(offsetof(ASCharacterBase_SendAnimCommand, Force) == 0x000010, "Member 'ASCharacterBase_SendAnimCommand::Force' has a wrong offset!");

// Function ActionSystem.ASCharacterBase.SendCommand
// 0x000C (0x000C - 0x0000)
struct ASCharacterBase_SendCommand final
{
public:
	class FName                                   Command;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Force;                                             // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNoEndCancel;                                      // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19F1[0x2];                                     // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASCharacterBase_SendCommand) == 0x000004, "Wrong alignment on ASCharacterBase_SendCommand");
static_assert(sizeof(ASCharacterBase_SendCommand) == 0x00000C, "Wrong size on ASCharacterBase_SendCommand");
static_assert(offsetof(ASCharacterBase_SendCommand, Command) == 0x000000, "Member 'ASCharacterBase_SendCommand::Command' has a wrong offset!");
static_assert(offsetof(ASCharacterBase_SendCommand, Force) == 0x000008, "Member 'ASCharacterBase_SendCommand::Force' has a wrong offset!");
static_assert(offsetof(ASCharacterBase_SendCommand, bNoEndCancel) == 0x000009, "Member 'ASCharacterBase_SendCommand::bNoEndCancel' has a wrong offset!");

// Function ActionSystem.ASCharacterBase.GetAnimTags
// 0x0010 (0x0010 - 0x0000)
struct ASCharacterBase_GetAnimTags final
{
public:
	TArray<class FName>                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCharacterBase_GetAnimTags) == 0x000008, "Wrong alignment on ASCharacterBase_GetAnimTags");
static_assert(sizeof(ASCharacterBase_GetAnimTags) == 0x000010, "Wrong size on ASCharacterBase_GetAnimTags");
static_assert(offsetof(ASCharacterBase_GetAnimTags, ReturnValue) == 0x000000, "Member 'ASCharacterBase_GetAnimTags::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASCharacterBase.HasAnimTag
// 0x000C (0x000C - 0x0000)
struct ASCharacterBase_HasAnimTag final
{
public:
	class FName                                   Tag;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19F2[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASCharacterBase_HasAnimTag) == 0x000004, "Wrong alignment on ASCharacterBase_HasAnimTag");
static_assert(sizeof(ASCharacterBase_HasAnimTag) == 0x00000C, "Wrong size on ASCharacterBase_HasAnimTag");
static_assert(offsetof(ASCharacterBase_HasAnimTag, Tag) == 0x000000, "Member 'ASCharacterBase_HasAnimTag::Tag' has a wrong offset!");
static_assert(offsetof(ASCharacterBase_HasAnimTag, ReturnValue) == 0x000008, "Member 'ASCharacterBase_HasAnimTag::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASCharacter.IsHitAttack
// 0x0001 (0x0001 - 0x0000)
struct ASCharacter_IsHitAttack final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCharacter_IsHitAttack) == 0x000001, "Wrong alignment on ASCharacter_IsHitAttack");
static_assert(sizeof(ASCharacter_IsHitAttack) == 0x000001, "Wrong size on ASCharacter_IsHitAttack");
static_assert(offsetof(ASCharacter_IsHitAttack, ReturnValue) == 0x000000, "Member 'ASCharacter_IsHitAttack::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASCharacter.IsSuperArmor
// 0x0001 (0x0001 - 0x0000)
struct ASCharacter_IsSuperArmor final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCharacter_IsSuperArmor) == 0x000001, "Wrong alignment on ASCharacter_IsSuperArmor");
static_assert(sizeof(ASCharacter_IsSuperArmor) == 0x000001, "Wrong size on ASCharacter_IsSuperArmor");
static_assert(offsetof(ASCharacter_IsSuperArmor, ReturnValue) == 0x000000, "Member 'ASCharacter_IsSuperArmor::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASCharacterMovementComponent.SendAnimCommand
// 0x0018 (0x0018 - 0x0000)
struct ASCharacterMovementComponent_SendAnimCommand final
{
public:
	class FString                                 Command;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Force;                                             // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19F6[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASCharacterMovementComponent_SendAnimCommand) == 0x000008, "Wrong alignment on ASCharacterMovementComponent_SendAnimCommand");
static_assert(sizeof(ASCharacterMovementComponent_SendAnimCommand) == 0x000018, "Wrong size on ASCharacterMovementComponent_SendAnimCommand");
static_assert(offsetof(ASCharacterMovementComponent_SendAnimCommand, Command) == 0x000000, "Member 'ASCharacterMovementComponent_SendAnimCommand::Command' has a wrong offset!");
static_assert(offsetof(ASCharacterMovementComponent_SendAnimCommand, Force) == 0x000010, "Member 'ASCharacterMovementComponent_SendAnimCommand::Force' has a wrong offset!");

// Function ActionSystem.ASCharacterMovementComponent.SendCommand
// 0x000C (0x000C - 0x0000)
struct ASCharacterMovementComponent_SendCommand final
{
public:
	class FName                                   Command;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Force;                                             // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19F7[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASCharacterMovementComponent_SendCommand) == 0x000004, "Wrong alignment on ASCharacterMovementComponent_SendCommand");
static_assert(sizeof(ASCharacterMovementComponent_SendCommand) == 0x00000C, "Wrong size on ASCharacterMovementComponent_SendCommand");
static_assert(offsetof(ASCharacterMovementComponent_SendCommand, Command) == 0x000000, "Member 'ASCharacterMovementComponent_SendCommand::Command' has a wrong offset!");
static_assert(offsetof(ASCharacterMovementComponent_SendCommand, Force) == 0x000008, "Member 'ASCharacterMovementComponent_SendCommand::Force' has a wrong offset!");

// Function ActionSystem.ASCharacterMovementComponent.SetImpulse
// 0x0010 (0x0010 - 0x0000)
struct ASCharacterMovementComponent_SetImpulse final
{
public:
	struct FVector                                Impulse;                                           // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVelocityChange;                                   // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19F8[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASCharacterMovementComponent_SetImpulse) == 0x000004, "Wrong alignment on ASCharacterMovementComponent_SetImpulse");
static_assert(sizeof(ASCharacterMovementComponent_SetImpulse) == 0x000010, "Wrong size on ASCharacterMovementComponent_SetImpulse");
static_assert(offsetof(ASCharacterMovementComponent_SetImpulse, Impulse) == 0x000000, "Member 'ASCharacterMovementComponent_SetImpulse::Impulse' has a wrong offset!");
static_assert(offsetof(ASCharacterMovementComponent_SetImpulse, bVelocityChange) == 0x00000C, "Member 'ASCharacterMovementComponent_SetImpulse::bVelocityChange' has a wrong offset!");

// Function ActionSystem.ASCharacterMovementComponent.HasAnimTag
// 0x000C (0x000C - 0x0000)
struct ASCharacterMovementComponent_HasAnimTag final
{
public:
	class FName                                   Tag;                                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19F9[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASCharacterMovementComponent_HasAnimTag) == 0x000004, "Wrong alignment on ASCharacterMovementComponent_HasAnimTag");
static_assert(sizeof(ASCharacterMovementComponent_HasAnimTag) == 0x00000C, "Wrong size on ASCharacterMovementComponent_HasAnimTag");
static_assert(offsetof(ASCharacterMovementComponent_HasAnimTag, Tag) == 0x000000, "Member 'ASCharacterMovementComponent_HasAnimTag::Tag' has a wrong offset!");
static_assert(offsetof(ASCharacterMovementComponent_HasAnimTag, ReturnValue) == 0x000008, "Member 'ASCharacterMovementComponent_HasAnimTag::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASCollisionCapsuleComponent.OnAttackBeginOverlap
// 0x00A8 (0x00A8 - 0x0000)
struct ASCollisionCapsuleComponent_OnAttackBeginOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19FB[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCollisionCapsuleComponent_OnAttackBeginOverlap) == 0x000008, "Wrong alignment on ASCollisionCapsuleComponent_OnAttackBeginOverlap");
static_assert(sizeof(ASCollisionCapsuleComponent_OnAttackBeginOverlap) == 0x0000A8, "Wrong size on ASCollisionCapsuleComponent_OnAttackBeginOverlap");
static_assert(offsetof(ASCollisionCapsuleComponent_OnAttackBeginOverlap, OverlappedComponent) == 0x000000, "Member 'ASCollisionCapsuleComponent_OnAttackBeginOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ASCollisionCapsuleComponent_OnAttackBeginOverlap, OtherActor) == 0x000008, "Member 'ASCollisionCapsuleComponent_OnAttackBeginOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(ASCollisionCapsuleComponent_OnAttackBeginOverlap, OtherComp) == 0x000010, "Member 'ASCollisionCapsuleComponent_OnAttackBeginOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(ASCollisionCapsuleComponent_OnAttackBeginOverlap, OtherBodyIndex) == 0x000018, "Member 'ASCollisionCapsuleComponent_OnAttackBeginOverlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ASCollisionCapsuleComponent_OnAttackBeginOverlap, bFromSweep) == 0x00001C, "Member 'ASCollisionCapsuleComponent_OnAttackBeginOverlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(ASCollisionCapsuleComponent_OnAttackBeginOverlap, SweepResult) == 0x000020, "Member 'ASCollisionCapsuleComponent_OnAttackBeginOverlap::SweepResult' has a wrong offset!");

// Function ActionSystem.ASCollisionCapsuleComponent.OnAttackEndOverlap
// 0x0020 (0x0020 - 0x0000)
struct ASCollisionCapsuleComponent_OnAttackEndOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19FC[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASCollisionCapsuleComponent_OnAttackEndOverlap) == 0x000008, "Wrong alignment on ASCollisionCapsuleComponent_OnAttackEndOverlap");
static_assert(sizeof(ASCollisionCapsuleComponent_OnAttackEndOverlap) == 0x000020, "Wrong size on ASCollisionCapsuleComponent_OnAttackEndOverlap");
static_assert(offsetof(ASCollisionCapsuleComponent_OnAttackEndOverlap, OverlappedComponent) == 0x000000, "Member 'ASCollisionCapsuleComponent_OnAttackEndOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ASCollisionCapsuleComponent_OnAttackEndOverlap, OtherActor) == 0x000008, "Member 'ASCollisionCapsuleComponent_OnAttackEndOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(ASCollisionCapsuleComponent_OnAttackEndOverlap, OtherComp) == 0x000010, "Member 'ASCollisionCapsuleComponent_OnAttackEndOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(ASCollisionCapsuleComponent_OnAttackEndOverlap, OtherBodyIndex) == 0x000018, "Member 'ASCollisionCapsuleComponent_OnAttackEndOverlap::OtherBodyIndex' has a wrong offset!");

// Function ActionSystem.ASCollisionListener.OnAttackOverlapCallback
// 0x00A8 (0x00A8 - 0x0000)
struct ASCollisionListener_OnAttackOverlapCallback final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             SweepResult;                                       // 0x0018(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x00A0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19FD[0x7];                                     // 0x00A1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASCollisionListener_OnAttackOverlapCallback) == 0x000008, "Wrong alignment on ASCollisionListener_OnAttackOverlapCallback");
static_assert(sizeof(ASCollisionListener_OnAttackOverlapCallback) == 0x0000A8, "Wrong size on ASCollisionListener_OnAttackOverlapCallback");
static_assert(offsetof(ASCollisionListener_OnAttackOverlapCallback, MyComp) == 0x000000, "Member 'ASCollisionListener_OnAttackOverlapCallback::MyComp' has a wrong offset!");
static_assert(offsetof(ASCollisionListener_OnAttackOverlapCallback, OtherActor) == 0x000008, "Member 'ASCollisionListener_OnAttackOverlapCallback::OtherActor' has a wrong offset!");
static_assert(offsetof(ASCollisionListener_OnAttackOverlapCallback, OtherComp) == 0x000010, "Member 'ASCollisionListener_OnAttackOverlapCallback::OtherComp' has a wrong offset!");
static_assert(offsetof(ASCollisionListener_OnAttackOverlapCallback, SweepResult) == 0x000018, "Member 'ASCollisionListener_OnAttackOverlapCallback::SweepResult' has a wrong offset!");
static_assert(offsetof(ASCollisionListener_OnAttackOverlapCallback, ReturnValue) == 0x0000A0, "Member 'ASCollisionListener_OnAttackOverlapCallback::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASCollisionSphereComponent.OnAttackBeginOverlap
// 0x00A8 (0x00A8 - 0x0000)
struct ASCollisionSphereComponent_OnAttackBeginOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19FF[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASCollisionSphereComponent_OnAttackBeginOverlap) == 0x000008, "Wrong alignment on ASCollisionSphereComponent_OnAttackBeginOverlap");
static_assert(sizeof(ASCollisionSphereComponent_OnAttackBeginOverlap) == 0x0000A8, "Wrong size on ASCollisionSphereComponent_OnAttackBeginOverlap");
static_assert(offsetof(ASCollisionSphereComponent_OnAttackBeginOverlap, OverlappedComponent) == 0x000000, "Member 'ASCollisionSphereComponent_OnAttackBeginOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ASCollisionSphereComponent_OnAttackBeginOverlap, OtherActor) == 0x000008, "Member 'ASCollisionSphereComponent_OnAttackBeginOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(ASCollisionSphereComponent_OnAttackBeginOverlap, OtherComp) == 0x000010, "Member 'ASCollisionSphereComponent_OnAttackBeginOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(ASCollisionSphereComponent_OnAttackBeginOverlap, OtherBodyIndex) == 0x000018, "Member 'ASCollisionSphereComponent_OnAttackBeginOverlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ASCollisionSphereComponent_OnAttackBeginOverlap, bFromSweep) == 0x00001C, "Member 'ASCollisionSphereComponent_OnAttackBeginOverlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(ASCollisionSphereComponent_OnAttackBeginOverlap, SweepResult) == 0x000020, "Member 'ASCollisionSphereComponent_OnAttackBeginOverlap::SweepResult' has a wrong offset!");

// Function ActionSystem.ASCollisionSphereComponent.OnAttackEndOverlap
// 0x0020 (0x0020 - 0x0000)
struct ASCollisionSphereComponent_OnAttackEndOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A00[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASCollisionSphereComponent_OnAttackEndOverlap) == 0x000008, "Wrong alignment on ASCollisionSphereComponent_OnAttackEndOverlap");
static_assert(sizeof(ASCollisionSphereComponent_OnAttackEndOverlap) == 0x000020, "Wrong size on ASCollisionSphereComponent_OnAttackEndOverlap");
static_assert(offsetof(ASCollisionSphereComponent_OnAttackEndOverlap, OverlappedComponent) == 0x000000, "Member 'ASCollisionSphereComponent_OnAttackEndOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ASCollisionSphereComponent_OnAttackEndOverlap, OtherActor) == 0x000008, "Member 'ASCollisionSphereComponent_OnAttackEndOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(ASCollisionSphereComponent_OnAttackEndOverlap, OtherComp) == 0x000010, "Member 'ASCollisionSphereComponent_OnAttackEndOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(ASCollisionSphereComponent_OnAttackEndOverlap, OtherBodyIndex) == 0x000018, "Member 'ASCollisionSphereComponent_OnAttackEndOverlap::OtherBodyIndex' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.GetAnimTime
// 0x0004 (0x0004 - 0x0000)
struct ASState_BlueprintBase_GetAnimTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_GetAnimTime) == 0x000004, "Wrong alignment on ASState_BlueprintBase_GetAnimTime");
static_assert(sizeof(ASState_BlueprintBase_GetAnimTime) == 0x000004, "Wrong size on ASState_BlueprintBase_GetAnimTime");
static_assert(offsetof(ASState_BlueprintBase_GetAnimTime, ReturnValue) == 0x000000, "Member 'ASState_BlueprintBase_GetAnimTime::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.GetAnimTimeLength
// 0x0004 (0x0004 - 0x0000)
struct ASState_BlueprintBase_GetAnimTimeLength final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_GetAnimTimeLength) == 0x000004, "Wrong alignment on ASState_BlueprintBase_GetAnimTimeLength");
static_assert(sizeof(ASState_BlueprintBase_GetAnimTimeLength) == 0x000004, "Wrong size on ASState_BlueprintBase_GetAnimTimeLength");
static_assert(offsetof(ASState_BlueprintBase_GetAnimTimeLength, ReturnValue) == 0x000000, "Member 'ASState_BlueprintBase_GetAnimTimeLength::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.GetAnimTimeRatio
// 0x0004 (0x0004 - 0x0000)
struct ASState_BlueprintBase_GetAnimTimeRatio final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_GetAnimTimeRatio) == 0x000004, "Wrong alignment on ASState_BlueprintBase_GetAnimTimeRatio");
static_assert(sizeof(ASState_BlueprintBase_GetAnimTimeRatio) == 0x000004, "Wrong size on ASState_BlueprintBase_GetAnimTimeRatio");
static_assert(offsetof(ASState_BlueprintBase_GetAnimTimeRatio, ReturnValue) == 0x000000, "Member 'ASState_BlueprintBase_GetAnimTimeRatio::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.GetRootMotionDistance
// 0x0004 (0x0004 - 0x0000)
struct ASState_BlueprintBase_GetRootMotionDistance final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_GetRootMotionDistance) == 0x000004, "Wrong alignment on ASState_BlueprintBase_GetRootMotionDistance");
static_assert(sizeof(ASState_BlueprintBase_GetRootMotionDistance) == 0x000004, "Wrong size on ASState_BlueprintBase_GetRootMotionDistance");
static_assert(offsetof(ASState_BlueprintBase_GetRootMotionDistance, ReturnValue) == 0x000000, "Member 'ASState_BlueprintBase_GetRootMotionDistance::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.GetRootMotionDistanceRange
// 0x000C (0x000C - 0x0000)
struct ASState_BlueprintBase_GetRootMotionDistanceRange final
{
public:
	float                                         StartTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndTime;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_GetRootMotionDistanceRange) == 0x000004, "Wrong alignment on ASState_BlueprintBase_GetRootMotionDistanceRange");
static_assert(sizeof(ASState_BlueprintBase_GetRootMotionDistanceRange) == 0x00000C, "Wrong size on ASState_BlueprintBase_GetRootMotionDistanceRange");
static_assert(offsetof(ASState_BlueprintBase_GetRootMotionDistanceRange, StartTime) == 0x000000, "Member 'ASState_BlueprintBase_GetRootMotionDistanceRange::StartTime' has a wrong offset!");
static_assert(offsetof(ASState_BlueprintBase_GetRootMotionDistanceRange, EndTime) == 0x000004, "Member 'ASState_BlueprintBase_GetRootMotionDistanceRange::EndTime' has a wrong offset!");
static_assert(offsetof(ASState_BlueprintBase_GetRootMotionDistanceRange, ReturnValue) == 0x000008, "Member 'ASState_BlueprintBase_GetRootMotionDistanceRange::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.HasCommand
// 0x000C (0x000C - 0x0000)
struct ASState_BlueprintBase_HasCommand final
{
public:
	class FName                                   Command;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAlwaysCanceledCommand;                            // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnce;                                             // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000A(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A11[0x1];                                     // 0x000B(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASState_BlueprintBase_HasCommand) == 0x000004, "Wrong alignment on ASState_BlueprintBase_HasCommand");
static_assert(sizeof(ASState_BlueprintBase_HasCommand) == 0x00000C, "Wrong size on ASState_BlueprintBase_HasCommand");
static_assert(offsetof(ASState_BlueprintBase_HasCommand, Command) == 0x000000, "Member 'ASState_BlueprintBase_HasCommand::Command' has a wrong offset!");
static_assert(offsetof(ASState_BlueprintBase_HasCommand, bAlwaysCanceledCommand) == 0x000008, "Member 'ASState_BlueprintBase_HasCommand::bAlwaysCanceledCommand' has a wrong offset!");
static_assert(offsetof(ASState_BlueprintBase_HasCommand, bOnce) == 0x000009, "Member 'ASState_BlueprintBase_HasCommand::bOnce' has a wrong offset!");
static_assert(offsetof(ASState_BlueprintBase_HasCommand, ReturnValue) == 0x00000A, "Member 'ASState_BlueprintBase_HasCommand::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.PlaySlotAnimation
// 0x0010 (0x0010 - 0x0000)
struct ASState_BlueprintBase_PlaySlotAnimation final
{
public:
	class UAnimSequenceBase*                      AnimSequence;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendTime;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLoop;                                             // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A12[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASState_BlueprintBase_PlaySlotAnimation) == 0x000008, "Wrong alignment on ASState_BlueprintBase_PlaySlotAnimation");
static_assert(sizeof(ASState_BlueprintBase_PlaySlotAnimation) == 0x000010, "Wrong size on ASState_BlueprintBase_PlaySlotAnimation");
static_assert(offsetof(ASState_BlueprintBase_PlaySlotAnimation, AnimSequence) == 0x000000, "Member 'ASState_BlueprintBase_PlaySlotAnimation::AnimSequence' has a wrong offset!");
static_assert(offsetof(ASState_BlueprintBase_PlaySlotAnimation, BlendTime) == 0x000008, "Member 'ASState_BlueprintBase_PlaySlotAnimation::BlendTime' has a wrong offset!");
static_assert(offsetof(ASState_BlueprintBase_PlaySlotAnimation, bLoop) == 0x00000C, "Member 'ASState_BlueprintBase_PlaySlotAnimation::bLoop' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.ReceiveBeginPlay
// 0x0010 (0x0010 - 0x0000)
struct ASState_BlueprintBase_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_ReceiveBeginPlay) == 0x000008, "Wrong alignment on ASState_BlueprintBase_ReceiveBeginPlay");
static_assert(sizeof(ASState_BlueprintBase_ReceiveBeginPlay) == 0x000010, "Wrong size on ASState_BlueprintBase_ReceiveBeginPlay");
static_assert(offsetof(ASState_BlueprintBase_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'ASState_BlueprintBase_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(ASState_BlueprintBase_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'ASState_BlueprintBase_ReceiveBeginPlay::AnimationSet' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.ReceiveEndPlay
// 0x0008 (0x0008 - 0x0000)
struct ASState_BlueprintBase_ReceiveEndPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_ReceiveEndPlay) == 0x000008, "Wrong alignment on ASState_BlueprintBase_ReceiveEndPlay");
static_assert(sizeof(ASState_BlueprintBase_ReceiveEndPlay) == 0x000008, "Wrong size on ASState_BlueprintBase_ReceiveEndPlay");
static_assert(offsetof(ASState_BlueprintBase_ReceiveEndPlay, AnimInstance) == 0x000000, "Member 'ASState_BlueprintBase_ReceiveEndPlay::AnimInstance' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct ASState_BlueprintBase_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A13[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_ReceiveTick) == 0x000008, "Wrong alignment on ASState_BlueprintBase_ReceiveTick");
static_assert(sizeof(ASState_BlueprintBase_ReceiveTick) == 0x000018, "Wrong size on ASState_BlueprintBase_ReceiveTick");
static_assert(offsetof(ASState_BlueprintBase_ReceiveTick, DeltaTime) == 0x000000, "Member 'ASState_BlueprintBase_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(ASState_BlueprintBase_ReceiveTick, AnimInstance) == 0x000008, "Member 'ASState_BlueprintBase_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(ASState_BlueprintBase_ReceiveTick, AnimationSet) == 0x000010, "Member 'ASState_BlueprintBase_ReceiveTick::AnimationSet' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.ResetRootMotionScale
// 0x0008 (0x0008 - 0x0000)
struct ASState_BlueprintBase_ResetRootMotionScale final
{
public:
	class FName                                   RootMotionScaleName;                               // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_ResetRootMotionScale) == 0x000004, "Wrong alignment on ASState_BlueprintBase_ResetRootMotionScale");
static_assert(sizeof(ASState_BlueprintBase_ResetRootMotionScale) == 0x000008, "Wrong size on ASState_BlueprintBase_ResetRootMotionScale");
static_assert(offsetof(ASState_BlueprintBase_ResetRootMotionScale, RootMotionScaleName) == 0x000000, "Member 'ASState_BlueprintBase_ResetRootMotionScale::RootMotionScaleName' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.SetAnimTime
// 0x0004 (0x0004 - 0x0000)
struct ASState_BlueprintBase_SetAnimTime final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_SetAnimTime) == 0x000004, "Wrong alignment on ASState_BlueprintBase_SetAnimTime");
static_assert(sizeof(ASState_BlueprintBase_SetAnimTime) == 0x000004, "Wrong size on ASState_BlueprintBase_SetAnimTime");
static_assert(offsetof(ASState_BlueprintBase_SetAnimTime, Time) == 0x000000, "Member 'ASState_BlueprintBase_SetAnimTime::Time' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.SetAnimTimeRatio
// 0x0004 (0x0004 - 0x0000)
struct ASState_BlueprintBase_SetAnimTimeRatio final
{
public:
	float                                         TimeRatio;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_SetAnimTimeRatio) == 0x000004, "Wrong alignment on ASState_BlueprintBase_SetAnimTimeRatio");
static_assert(sizeof(ASState_BlueprintBase_SetAnimTimeRatio) == 0x000004, "Wrong size on ASState_BlueprintBase_SetAnimTimeRatio");
static_assert(offsetof(ASState_BlueprintBase_SetAnimTimeRatio, TimeRatio) == 0x000000, "Member 'ASState_BlueprintBase_SetAnimTimeRatio::TimeRatio' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInput
// 0x000C (0x000C - 0x0000)
struct ASState_BlueprintBase_SetBlendSpaceInput final
{
public:
	struct FVector                                NewBlendInput;                                     // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_SetBlendSpaceInput) == 0x000004, "Wrong alignment on ASState_BlueprintBase_SetBlendSpaceInput");
static_assert(sizeof(ASState_BlueprintBase_SetBlendSpaceInput) == 0x00000C, "Wrong size on ASState_BlueprintBase_SetBlendSpaceInput");
static_assert(offsetof(ASState_BlueprintBase_SetBlendSpaceInput, NewBlendInput) == 0x000000, "Member 'ASState_BlueprintBase_SetBlendSpaceInput::NewBlendInput' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInputX
// 0x0004 (0x0004 - 0x0000)
struct ASState_BlueprintBase_SetBlendSpaceInputX final
{
public:
	float                                         NewBlendInputX;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_SetBlendSpaceInputX) == 0x000004, "Wrong alignment on ASState_BlueprintBase_SetBlendSpaceInputX");
static_assert(sizeof(ASState_BlueprintBase_SetBlendSpaceInputX) == 0x000004, "Wrong size on ASState_BlueprintBase_SetBlendSpaceInputX");
static_assert(offsetof(ASState_BlueprintBase_SetBlendSpaceInputX, NewBlendInputX) == 0x000000, "Member 'ASState_BlueprintBase_SetBlendSpaceInputX::NewBlendInputX' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInputY
// 0x0004 (0x0004 - 0x0000)
struct ASState_BlueprintBase_SetBlendSpaceInputY final
{
public:
	float                                         NewBlendInputY;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_SetBlendSpaceInputY) == 0x000004, "Wrong alignment on ASState_BlueprintBase_SetBlendSpaceInputY");
static_assert(sizeof(ASState_BlueprintBase_SetBlendSpaceInputY) == 0x000004, "Wrong size on ASState_BlueprintBase_SetBlendSpaceInputY");
static_assert(offsetof(ASState_BlueprintBase_SetBlendSpaceInputY, NewBlendInputY) == 0x000000, "Member 'ASState_BlueprintBase_SetBlendSpaceInputY::NewBlendInputY' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.SetPlayRate
// 0x0004 (0x0004 - 0x0000)
struct ASState_BlueprintBase_SetPlayRate final
{
public:
	float                                         NewRate;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_SetPlayRate) == 0x000004, "Wrong alignment on ASState_BlueprintBase_SetPlayRate");
static_assert(sizeof(ASState_BlueprintBase_SetPlayRate) == 0x000004, "Wrong size on ASState_BlueprintBase_SetPlayRate");
static_assert(offsetof(ASState_BlueprintBase_SetPlayRate, NewRate) == 0x000000, "Member 'ASState_BlueprintBase_SetPlayRate::NewRate' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.SetPlayRateScale
// 0x0004 (0x0004 - 0x0000)
struct ASState_BlueprintBase_SetPlayRateScale final
{
public:
	float                                         RateScale;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_SetPlayRateScale) == 0x000004, "Wrong alignment on ASState_BlueprintBase_SetPlayRateScale");
static_assert(sizeof(ASState_BlueprintBase_SetPlayRateScale) == 0x000004, "Wrong size on ASState_BlueprintBase_SetPlayRateScale");
static_assert(offsetof(ASState_BlueprintBase_SetPlayRateScale, RateScale) == 0x000000, "Member 'ASState_BlueprintBase_SetPlayRateScale::RateScale' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.SetRootMotionScale
// 0x000C (0x000C - 0x0000)
struct ASState_BlueprintBase_SetRootMotionScale final
{
public:
	float                                         NewScale;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   RootMotionScaleName;                               // 0x0004(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_SetRootMotionScale) == 0x000004, "Wrong alignment on ASState_BlueprintBase_SetRootMotionScale");
static_assert(sizeof(ASState_BlueprintBase_SetRootMotionScale) == 0x00000C, "Wrong size on ASState_BlueprintBase_SetRootMotionScale");
static_assert(offsetof(ASState_BlueprintBase_SetRootMotionScale, NewScale) == 0x000000, "Member 'ASState_BlueprintBase_SetRootMotionScale::NewScale' has a wrong offset!");
static_assert(offsetof(ASState_BlueprintBase_SetRootMotionScale, RootMotionScaleName) == 0x000004, "Member 'ASState_BlueprintBase_SetRootMotionScale::RootMotionScaleName' has a wrong offset!");

// Function ActionSystem.ASState_BlueprintBase.StopSlotAnimation
// 0x0004 (0x0004 - 0x0000)
struct ASState_BlueprintBase_StopSlotAnimation final
{
public:
	float                                         BlendTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASState_BlueprintBase_StopSlotAnimation) == 0x000004, "Wrong alignment on ASState_BlueprintBase_StopSlotAnimation");
static_assert(sizeof(ASState_BlueprintBase_StopSlotAnimation) == 0x000004, "Wrong size on ASState_BlueprintBase_StopSlotAnimation");
static_assert(offsetof(ASState_BlueprintBase_StopSlotAnimation, BlendTime) == 0x000000, "Member 'ASState_BlueprintBase_StopSlotAnimation::BlendTime' has a wrong offset!");

// Function ActionSystem.ASTransition_BlueprintBase.CheckCommand
// 0x0018 (0x0018 - 0x0000)
struct ASTransition_BlueprintBase_CheckCommand final
{
public:
	class FString                                 Command;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnce;                                             // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A15[0x6];                                     // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASTransition_BlueprintBase_CheckCommand) == 0x000008, "Wrong alignment on ASTransition_BlueprintBase_CheckCommand");
static_assert(sizeof(ASTransition_BlueprintBase_CheckCommand) == 0x000018, "Wrong size on ASTransition_BlueprintBase_CheckCommand");
static_assert(offsetof(ASTransition_BlueprintBase_CheckCommand, Command) == 0x000000, "Member 'ASTransition_BlueprintBase_CheckCommand::Command' has a wrong offset!");
static_assert(offsetof(ASTransition_BlueprintBase_CheckCommand, bOnce) == 0x000010, "Member 'ASTransition_BlueprintBase_CheckCommand::bOnce' has a wrong offset!");
static_assert(offsetof(ASTransition_BlueprintBase_CheckCommand, ReturnValue) == 0x000011, "Member 'ASTransition_BlueprintBase_CheckCommand::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASTransition_BlueprintBase.CheckCommandState
// 0x000C (0x000C - 0x0000)
struct ASTransition_BlueprintBase_CheckCommandState final
{
public:
	class FName                                   Command;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnce;                                             // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimCommandState                             ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A16[0x2];                                     // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASTransition_BlueprintBase_CheckCommandState) == 0x000004, "Wrong alignment on ASTransition_BlueprintBase_CheckCommandState");
static_assert(sizeof(ASTransition_BlueprintBase_CheckCommandState) == 0x00000C, "Wrong size on ASTransition_BlueprintBase_CheckCommandState");
static_assert(offsetof(ASTransition_BlueprintBase_CheckCommandState, Command) == 0x000000, "Member 'ASTransition_BlueprintBase_CheckCommandState::Command' has a wrong offset!");
static_assert(offsetof(ASTransition_BlueprintBase_CheckCommandState, bOnce) == 0x000008, "Member 'ASTransition_BlueprintBase_CheckCommandState::bOnce' has a wrong offset!");
static_assert(offsetof(ASTransition_BlueprintBase_CheckCommandState, ReturnValue) == 0x000009, "Member 'ASTransition_BlueprintBase_CheckCommandState::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASTransition_BlueprintBase.GetAnimTime
// 0x0004 (0x0004 - 0x0000)
struct ASTransition_BlueprintBase_GetAnimTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASTransition_BlueprintBase_GetAnimTime) == 0x000004, "Wrong alignment on ASTransition_BlueprintBase_GetAnimTime");
static_assert(sizeof(ASTransition_BlueprintBase_GetAnimTime) == 0x000004, "Wrong size on ASTransition_BlueprintBase_GetAnimTime");
static_assert(offsetof(ASTransition_BlueprintBase_GetAnimTime, ReturnValue) == 0x000000, "Member 'ASTransition_BlueprintBase_GetAnimTime::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASTransition_BlueprintBase.GetAnimTimeLength
// 0x0004 (0x0004 - 0x0000)
struct ASTransition_BlueprintBase_GetAnimTimeLength final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASTransition_BlueprintBase_GetAnimTimeLength) == 0x000004, "Wrong alignment on ASTransition_BlueprintBase_GetAnimTimeLength");
static_assert(sizeof(ASTransition_BlueprintBase_GetAnimTimeLength) == 0x000004, "Wrong size on ASTransition_BlueprintBase_GetAnimTimeLength");
static_assert(offsetof(ASTransition_BlueprintBase_GetAnimTimeLength, ReturnValue) == 0x000000, "Member 'ASTransition_BlueprintBase_GetAnimTimeLength::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASTransition_BlueprintBase.GetElapsedTime
// 0x0004 (0x0004 - 0x0000)
struct ASTransition_BlueprintBase_GetElapsedTime final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASTransition_BlueprintBase_GetElapsedTime) == 0x000004, "Wrong alignment on ASTransition_BlueprintBase_GetElapsedTime");
static_assert(sizeof(ASTransition_BlueprintBase_GetElapsedTime) == 0x000004, "Wrong size on ASTransition_BlueprintBase_GetElapsedTime");
static_assert(offsetof(ASTransition_BlueprintBase_GetElapsedTime, ReturnValue) == 0x000000, "Member 'ASTransition_BlueprintBase_GetElapsedTime::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASTransition_BlueprintBase.HasCommand
// 0x000C (0x000C - 0x0000)
struct ASTransition_BlueprintBase_HasCommand final
{
public:
	class FName                                   Command;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnce;                                             // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A17[0x2];                                     // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASTransition_BlueprintBase_HasCommand) == 0x000004, "Wrong alignment on ASTransition_BlueprintBase_HasCommand");
static_assert(sizeof(ASTransition_BlueprintBase_HasCommand) == 0x00000C, "Wrong size on ASTransition_BlueprintBase_HasCommand");
static_assert(offsetof(ASTransition_BlueprintBase_HasCommand, Command) == 0x000000, "Member 'ASTransition_BlueprintBase_HasCommand::Command' has a wrong offset!");
static_assert(offsetof(ASTransition_BlueprintBase_HasCommand, bOnce) == 0x000008, "Member 'ASTransition_BlueprintBase_HasCommand::bOnce' has a wrong offset!");
static_assert(offsetof(ASTransition_BlueprintBase_HasCommand, ReturnValue) == 0x000009, "Member 'ASTransition_BlueprintBase_HasCommand::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASTransition_BlueprintBase.IsPlayEnd
// 0x0001 (0x0001 - 0x0000)
struct ASTransition_BlueprintBase_IsPlayEnd final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASTransition_BlueprintBase_IsPlayEnd) == 0x000001, "Wrong alignment on ASTransition_BlueprintBase_IsPlayEnd");
static_assert(sizeof(ASTransition_BlueprintBase_IsPlayEnd) == 0x000001, "Wrong size on ASTransition_BlueprintBase_IsPlayEnd");
static_assert(offsetof(ASTransition_BlueprintBase_IsPlayEnd, ReturnValue) == 0x000000, "Member 'ASTransition_BlueprintBase_IsPlayEnd::ReturnValue' has a wrong offset!");

// Function ActionSystem.ASTransition_BlueprintBase.OutputLog
// 0x0010 (0x0010 - 0x0000)
struct ASTransition_BlueprintBase_OutputLog final
{
public:
	class FString                                 Value;                                             // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ASTransition_BlueprintBase_OutputLog) == 0x000008, "Wrong alignment on ASTransition_BlueprintBase_OutputLog");
static_assert(sizeof(ASTransition_BlueprintBase_OutputLog) == 0x000010, "Wrong size on ASTransition_BlueprintBase_OutputLog");
static_assert(offsetof(ASTransition_BlueprintBase_OutputLog, Value) == 0x000000, "Member 'ASTransition_BlueprintBase_OutputLog::Value' has a wrong offset!");

// Function ActionSystem.ASTransition_BlueprintBase.ReceiveCanEnter
// 0x0010 (0x0010 - 0x0000)
struct ASTransition_BlueprintBase_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A18[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ASTransition_BlueprintBase_ReceiveCanEnter) == 0x000008, "Wrong alignment on ASTransition_BlueprintBase_ReceiveCanEnter");
static_assert(sizeof(ASTransition_BlueprintBase_ReceiveCanEnter) == 0x000010, "Wrong size on ASTransition_BlueprintBase_ReceiveCanEnter");
static_assert(offsetof(ASTransition_BlueprintBase_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ASTransition_BlueprintBase_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ASTransition_BlueprintBase_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ASTransition_BlueprintBase_ReceiveCanEnter::ReturnValue' has a wrong offset!");

}

