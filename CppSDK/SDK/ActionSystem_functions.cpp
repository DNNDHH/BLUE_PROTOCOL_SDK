#pragma once

 

// Package: ActionSystem

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"
#include "ActionSystem_parameters.hpp"


namespace SDK
{

// Function ActionSystem.ASAnimationSet.GetBlendSpace
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             KeyName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlendSpaceBase*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlendSpaceBase* UASAnimationSet::GetBlendSpace(const class FName& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimationSet", "GetBlendSpace");

	Params::ASAnimationSet_GetBlendSpace Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASAnimationSet.GetSequence
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             KeyName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimSequenceBase* UASAnimationSet::GetSequence(const class FName& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimationSet", "GetSequence");

	Params::ASAnimationSet_GetSequence Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASAnimationSet.GetStateMachine
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             KeyName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UASStateMachine*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UASStateMachine* UASAnimationSet::GetStateMachine(const class FName& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimationSet", "GetStateMachine");

	Params::ASAnimationSet_GetStateMachine Parms{};

	Parms.KeyName = KeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASAnimInstance.AnimNotify_StateChange
// (Native, Public)
// Parameters:
// class UASAnimNotify_StateChange*        Notify                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASAnimInstance::AnimNotify_StateChange(class UASAnimNotify_StateChange* Notify)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimInstance", "AnimNotify_StateChange");

	Params::ASAnimInstance_AnimNotify_StateChange Parms{};

	Parms.Notify = Notify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASAnimInstance.IsHitShift
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UASAnimInstance::IsHitShift()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimInstance", "IsHitShift");

	Params::ASAnimInstance_IsHitShift Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASAnimInstance.JumpMachineState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           MachinName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           StateName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASAnimInstance::JumpMachineState(const class FString& MachinName, const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimInstance", "JumpMachineState");

	Params::ASAnimInstance_JumpMachineState Parms{};

	Parms.MachinName = std::move(MachinName);
	Parms.StateName = std::move(StateName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASAnimInstance.ReceiveStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           PreviousStateName                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           NextStateName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASAnimInstance::ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimInstance", "ReceiveStateChange");

	Params::ASAnimInstance_ReceiveStateChange Parms{};

	Parms.PreviousStateName = std::move(PreviousStateName);
	Parms.NextStateName = std::move(NextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionSystem.ASAnimInstance.SendCommand
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                             Command                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bForce                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASAnimInstance::SendCommand(class FName Command, const bool bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimInstance", "SendCommand");

	Params::ASAnimInstance_SendCommand Parms{};

	Parms.Command = Command;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASAnimInstance.SetDynamicAnimationSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           AnimNodeName                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           StateName                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UASAnimationSet*                  AnimationSetAsset                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASAnimInstance::SetDynamicAnimationSet(const class FString& AnimNodeName, const class FString& StateName, const class UASAnimationSet* AnimationSetAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimInstance", "SetDynamicAnimationSet");

	Params::ASAnimInstance_SetDynamicAnimationSet Parms{};

	Parms.AnimNodeName = std::move(AnimNodeName);
	Parms.StateName = std::move(StateName);
	Parms.AnimationSetAsset = AnimationSetAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASAnimInstance.SetDynamicSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           AnimNodeName                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           StateName                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*                SequenceAsset                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASAnimInstance::SetDynamicSequence(const class FString& AnimNodeName, const class FString& StateName, const class UAnimSequenceBase* SequenceAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimInstance", "SetDynamicSequence");

	Params::ASAnimInstance_SetDynamicSequence Parms{};

	Parms.AnimNodeName = std::move(AnimNodeName);
	Parms.StateName = std::move(StateName);
	Parms.SequenceAsset = SequenceAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASAnimInstance.SetDynamicSubMachine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           AnimNodeName                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           StateName                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UASStateMachine*                  StateMachineAsset                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASAnimInstance::SetDynamicSubMachine(const class FString& AnimNodeName, const class FString& StateName, const class UASStateMachine* StateMachineAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimInstance", "SetDynamicSubMachine");

	Params::ASAnimInstance_SetDynamicSubMachine Parms{};

	Parms.AnimNodeName = std::move(AnimNodeName);
	Parms.StateName = std::move(StateName);
	Parms.StateMachineAsset = StateMachineAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASAnimInstance.SetDynamicTransition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           AnimNodeName                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           TransitionName                                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   CrossfadeDuration                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASAnimInstance::SetDynamicTransition(const class FString& AnimNodeName, const class FString& TransitionName, float CrossfadeDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimInstance", "SetDynamicTransition");

	Params::ASAnimInstance_SetDynamicTransition Parms{};

	Parms.AnimNodeName = std::move(AnimNodeName);
	Parms.TransitionName = std::move(TransitionName);
	Parms.CrossfadeDuration = CrossfadeDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASAnimInstance.HasTag
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             Tag                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UASAnimInstance::HasTag(const class FName& Tag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimInstance", "HasTag");

	Params::ASAnimInstance_HasTag Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASAnimInstance.HasTagAny
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                     Tags                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UASAnimInstance::HasTagAny(const TArray<class FName>& Tags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASAnimInstance", "HasTagAny");

	Params::ASAnimInstance_HasTagAny Parms{};

	Parms.Tags = std::move(Tags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASCollisionGroupComponent.OnAttackBeginOverlap
// (Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       SweepResult                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UASCollisionGroupComponent::OnAttackBeginOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionGroupComponent", "OnAttackBeginOverlap");

	Params::ASCollisionGroupComponent_OnAttackBeginOverlap Parms{};

	Parms.MyComp = MyComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.SweepResult = std::move(SweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCollisionGroupComponent.OnAttackEndOverlap
// (Native, Public)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASCollisionGroupComponent::OnAttackEndOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionGroupComponent", "OnAttackEndOverlap");

	Params::ASCollisionGroupComponent_OnAttackEndOverlap Parms{};

	Parms.MyComp = MyComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCollisionGroupComponent.SetActiveCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Active                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASCollisionGroupComponent::SetActiveCollision(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionGroupComponent", "SetActiveCollision");

	Params::ASCollisionGroupComponent_SetActiveCollision Parms{};

	Parms.Active = Active;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCollisionGroupComponent.StartAttack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   HitCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   HitInterval                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASCollisionGroupComponent::StartAttack(int32 HitCount, float HitInterval)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionGroupComponent", "StartAttack");

	Params::ASCollisionGroupComponent_StartAttack Parms{};

	Parms.HitCount = HitCount;
	Parms.HitInterval = HitInterval;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCollisionGroupComponent.StopAttack
// (Final, Native, Public, BlueprintCallable)

void UASCollisionGroupComponent::StopAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionGroupComponent", "StopAttack");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCollisionBoxComponent.OnAttackBeginOverlap
// (Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bFromSweep                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       SweepResult                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UASCollisionBoxComponent::OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionBoxComponent", "OnAttackBeginOverlap");

	Params::ASCollisionBoxComponent_OnAttackBeginOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCollisionBoxComponent.OnAttackEndOverlap
// (Native, Public)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASCollisionBoxComponent::OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionBoxComponent", "OnAttackEndOverlap");

	Params::ASCollisionBoxComponent_OnAttackEndOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCharacterBase.JumpMachineState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           MachinName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           StateName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AASCharacterBase::JumpMachineState(const class FString& MachinName, const class FString& StateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacterBase", "JumpMachineState");

	Params::ASCharacterBase_JumpMachineState Parms{};

	Parms.MachinName = std::move(MachinName);
	Parms.StateName = std::move(StateName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCharacterBase.OnRep_ReplicateStateInfo
// (Final, Native, Protected)

void AASCharacterBase::OnRep_ReplicateStateInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacterBase", "OnRep_ReplicateStateInfo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCharacterBase.ReceiveStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           PreviousStateName                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           NextStateName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AASCharacterBase::ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacterBase", "ReceiveStateChange");

	Params::ASCharacterBase_ReceiveStateChange Parms{};

	Parms.PreviousStateName = std::move(PreviousStateName);
	Parms.NextStateName = std::move(NextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionSystem.ASCharacterBase.SendAnimCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Command                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Force                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AASCharacterBase::SendAnimCommand(const class FString& Command, bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacterBase", "SendAnimCommand");

	Params::ASCharacterBase_SendAnimCommand Parms{};

	Parms.Command = std::move(Command);
	Parms.Force = Force;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCharacterBase.SendCommand
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                             Command                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Force                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bNoEndCancel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AASCharacterBase::SendCommand(class FName Command, bool Force, bool bNoEndCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacterBase", "SendCommand");

	Params::ASCharacterBase_SendCommand Parms{};

	Parms.Command = Command;
	Parms.Force = Force;
	Parms.bNoEndCancel = bNoEndCancel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCharacterBase.GetAnimTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> AASCharacterBase::GetAnimTags() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacterBase", "GetAnimTags");

	Params::ASCharacterBase_GetAnimTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASCharacterBase.HasAnimTag
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             Tag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AASCharacterBase::HasAnimTag(class FName Tag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacterBase", "HasAnimTag");

	Params::ASCharacterBase_HasAnimTag Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASCharacter.IsHitAttack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AASCharacter::IsHitAttack() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacter", "IsHitAttack");

	Params::ASCharacter_IsHitAttack Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASCharacter.IsSuperArmor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AASCharacter::IsSuperArmor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacter", "IsSuperArmor");

	Params::ASCharacter_IsSuperArmor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASCharacterMovementComponent.SendAnimCommand
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                           Command                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Force                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASCharacterMovementComponent::SendAnimCommand(const class FString& Command, bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacterMovementComponent", "SendAnimCommand");

	Params::ASCharacterMovementComponent_SendAnimCommand Parms{};

	Parms.Command = std::move(Command);
	Parms.Force = Force;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCharacterMovementComponent.SendCommand
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                             Command                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    Force                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASCharacterMovementComponent::SendCommand(class FName Command, bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacterMovementComponent", "SendCommand");

	Params::ASCharacterMovementComponent_SendCommand Parms{};

	Parms.Command = Command;
	Parms.Force = Force;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCharacterMovementComponent.SetImpulse
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                          Impulse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bVelocityChange                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASCharacterMovementComponent::SetImpulse(const struct FVector& Impulse, bool bVelocityChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacterMovementComponent", "SetImpulse");

	Params::ASCharacterMovementComponent_SetImpulse Parms{};

	Parms.Impulse = std::move(Impulse);
	Parms.bVelocityChange = bVelocityChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCharacterMovementComponent.HasAnimTag
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             Tag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UASCharacterMovementComponent::HasAnimTag(class FName Tag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCharacterMovementComponent", "HasAnimTag");

	Params::ASCharacterMovementComponent_HasAnimTag Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASCollisionCapsuleComponent.OnAttackBeginOverlap
// (Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bFromSweep                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       SweepResult                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UASCollisionCapsuleComponent::OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionCapsuleComponent", "OnAttackBeginOverlap");

	Params::ASCollisionCapsuleComponent_OnAttackBeginOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCollisionCapsuleComponent.OnAttackEndOverlap
// (Native, Public)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASCollisionCapsuleComponent::OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionCapsuleComponent", "OnAttackEndOverlap");

	Params::ASCollisionCapsuleComponent_OnAttackEndOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCollisionListener.OnAttackOverlapCallback
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       SweepResult                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IASCollisionListener::OnAttackOverlapCallback(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionListener", "OnAttackOverlapCallback");

	Params::ASCollisionListener_OnAttackOverlapCallback Parms{};

	Parms.MyComp = MyComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.SweepResult = std::move(SweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASCollisionSphereComponent.OnAttackBeginOverlap
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bFromSweep                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       SweepResult                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UASCollisionSphereComponent::OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionSphereComponent", "OnAttackBeginOverlap");

	Params::ASCollisionSphereComponent_OnAttackBeginOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASCollisionSphereComponent.OnAttackEndOverlap
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           OtherActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              OtherComp                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   OtherBodyIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASCollisionSphereComponent::OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASCollisionSphereComponent", "OnAttackEndOverlap");

	Params::ASCollisionSphereComponent_OnAttackEndOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.GetAnimTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UASState_BlueprintBase::GetAnimTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "GetAnimTime");

	Params::ASState_BlueprintBase_GetAnimTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASState_BlueprintBase.GetAnimTimeLength
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UASState_BlueprintBase::GetAnimTimeLength() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "GetAnimTimeLength");

	Params::ASState_BlueprintBase_GetAnimTimeLength Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASState_BlueprintBase.GetAnimTimeRatio
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UASState_BlueprintBase::GetAnimTimeRatio() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "GetAnimTimeRatio");

	Params::ASState_BlueprintBase_GetAnimTimeRatio Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASState_BlueprintBase.GetRootMotionDistance
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UASState_BlueprintBase::GetRootMotionDistance() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "GetRootMotionDistance");

	Params::ASState_BlueprintBase_GetRootMotionDistance Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASState_BlueprintBase.GetRootMotionDistanceRange
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   StartTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   EndTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UASState_BlueprintBase::GetRootMotionDistanceRange(float StartTime, float EndTime) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "GetRootMotionDistanceRange");

	Params::ASState_BlueprintBase_GetRootMotionDistanceRange Parms{};

	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASState_BlueprintBase.HasCommand
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             Command                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAlwaysCanceledCommand                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UASState_BlueprintBase::HasCommand(class FName Command, bool bAlwaysCanceledCommand, bool bOnce) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "HasCommand");

	Params::ASState_BlueprintBase_HasCommand Parms{};

	Parms.Command = Command;
	Parms.bAlwaysCanceledCommand = bAlwaysCanceledCommand;
	Parms.bOnce = bOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASState_BlueprintBase.PlaySlotAnimation
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// class UAnimSequenceBase*                AnimSequence                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   BlendTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLoop                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::PlaySlotAnimation(class UAnimSequenceBase* AnimSequence, float BlendTime, bool bLoop) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "PlaySlotAnimation");

	Params::ASState_BlueprintBase_PlaySlotAnimation Parms{};

	Parms.AnimSequence = AnimSequence;
	Parms.BlendTime = BlendTime;
	Parms.bLoop = bLoop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "ReceiveBeginPlay");

	Params::ASState_BlueprintBase_ReceiveBeginPlay Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionSystem.ASState_BlueprintBase.ReceiveEndPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::ReceiveEndPlay(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "ReceiveEndPlay");

	Params::ASState_BlueprintBase_ReceiveEndPlay Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionSystem.ASState_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                                   DeltaTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimInstance*                    AnimInstance                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "ReceiveTick");

	Params::ASState_BlueprintBase_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionSystem.ASState_BlueprintBase.ResetPlayRate
// (Final, Native, Protected, BlueprintCallable, Const)

void UASState_BlueprintBase::ResetPlayRate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "ResetPlayRate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.ResetRootMotionScale
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// class FName                             RootMotionScaleName                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::ResetRootMotionScale(class FName RootMotionScaleName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "ResetRootMotionScale");

	Params::ASState_BlueprintBase_ResetRootMotionScale Parms{};

	Parms.RootMotionScaleName = RootMotionScaleName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.SetAnimTime
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                                   Time                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::SetAnimTime(float Time) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "SetAnimTime");

	Params::ASState_BlueprintBase_SetAnimTime Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.SetAnimTimeRatio
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                                   TimeRatio                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::SetAnimTimeRatio(float TimeRatio) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "SetAnimTimeRatio");

	Params::ASState_BlueprintBase_SetAnimTimeRatio Parms{};

	Parms.TimeRatio = TimeRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInput
// (Final, Native, Protected, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                          NewBlendInput                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::SetBlendSpaceInput(const struct FVector& NewBlendInput) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "SetBlendSpaceInput");

	Params::ASState_BlueprintBase_SetBlendSpaceInput Parms{};

	Parms.NewBlendInput = std::move(NewBlendInput);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInputX
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                                   NewBlendInputX                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::SetBlendSpaceInputX(float NewBlendInputX) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "SetBlendSpaceInputX");

	Params::ASState_BlueprintBase_SetBlendSpaceInputX Parms{};

	Parms.NewBlendInputX = NewBlendInputX;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInputY
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                                   NewBlendInputY                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::SetBlendSpaceInputY(float NewBlendInputY) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "SetBlendSpaceInputY");

	Params::ASState_BlueprintBase_SetBlendSpaceInputY Parms{};

	Parms.NewBlendInputY = NewBlendInputY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.SetPlayRate
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                                   NewRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::SetPlayRate(float NewRate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "SetPlayRate");

	Params::ASState_BlueprintBase_SetPlayRate Parms{};

	Parms.NewRate = NewRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.SetPlayRateScale
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                                   RateScale                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::SetPlayRateScale(float RateScale) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "SetPlayRateScale");

	Params::ASState_BlueprintBase_SetPlayRateScale Parms{};

	Parms.RateScale = RateScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.SetRootMotionScale
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                                   NewScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             RootMotionScaleName                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::SetRootMotionScale(float NewScale, class FName RootMotionScaleName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "SetRootMotionScale");

	Params::ASState_BlueprintBase_SetRootMotionScale Parms{};

	Parms.NewScale = NewScale;
	Parms.RootMotionScaleName = RootMotionScaleName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASState_BlueprintBase.StopSlotAnimation
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// float                                   BlendTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASState_BlueprintBase::StopSlotAnimation(float BlendTime) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASState_BlueprintBase", "StopSlotAnimation");

	Params::ASState_BlueprintBase_StopSlotAnimation Parms{};

	Parms.BlendTime = BlendTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASTransition_BlueprintBase.CheckCommand
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           Command                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UASTransition_BlueprintBase::CheckCommand(const class FString& Command, bool bOnce) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASTransition_BlueprintBase", "CheckCommand");

	Params::ASTransition_BlueprintBase_CheckCommand Parms{};

	Parms.Command = std::move(Command);
	Parms.bOnce = bOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.CheckCommandState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             Command                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EAnimCommandState                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EAnimCommandState UASTransition_BlueprintBase::CheckCommandState(class FName Command, bool bOnce) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASTransition_BlueprintBase", "CheckCommandState");

	Params::ASTransition_BlueprintBase_CheckCommandState Parms{};

	Parms.Command = Command;
	Parms.bOnce = bOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.GetAnimTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UASTransition_BlueprintBase::GetAnimTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASTransition_BlueprintBase", "GetAnimTime");

	Params::ASTransition_BlueprintBase_GetAnimTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.GetAnimTimeLength
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UASTransition_BlueprintBase::GetAnimTimeLength() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASTransition_BlueprintBase", "GetAnimTimeLength");

	Params::ASTransition_BlueprintBase_GetAnimTimeLength Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.GetElapsedTime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UASTransition_BlueprintBase::GetElapsedTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASTransition_BlueprintBase", "GetElapsedTime");

	Params::ASTransition_BlueprintBase_GetElapsedTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.HasCommand
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             Command                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UASTransition_BlueprintBase::HasCommand(class FName Command, bool bOnce) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASTransition_BlueprintBase", "HasCommand");

	Params::ASTransition_BlueprintBase_HasCommand Parms{};

	Parms.Command = Command;
	Parms.bOnce = bOnce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.IsPlayEnd
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UASTransition_BlueprintBase::IsPlayEnd() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASTransition_BlueprintBase", "IsPlayEnd");

	Params::ASTransition_BlueprintBase_IsPlayEnd Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ActionSystem.ASTransition_BlueprintBase.OutputLog
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// class FString                           Value                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UASTransition_BlueprintBase::OutputLog(const class FString& Value) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASTransition_BlueprintBase", "OutputLog");

	Params::ASTransition_BlueprintBase_OutputLog Parms{};

	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ActionSystem.ASTransition_BlueprintBase.ReceiveCanEnter
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UASTransition_BlueprintBase::ReceiveCanEnter(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ASTransition_BlueprintBase", "ReceiveCanEnter");

	Params::ASTransition_BlueprintBase_ReceiveCanEnter Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

