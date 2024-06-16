#pragma once

 

// Package: AB_CharaCreateAnimBlueprint

#include "Basic.hpp"

#include "AB_CharaCreateAnimBlueprint_classes.hpp"
#include "AB_CharaCreateAnimBlueprint_parameters.hpp"


namespace SDK
{

// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ChangeState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InPrevStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNextStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAB_CharaCreateAnimBlueprint_C::ChangeState__DelegateSignature(const class FString& InPrevStateName, const class FString& InNextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CharaCreateAnimBlueprint_C", "ChangeState__DelegateSignature");

	Params::AB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature Parms{};

	Parms.InPrevStateName = std::move(InPrevStateName);
	Parms.InNextStateName = std::move(InNextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ExecuteUbergraph_AB_CharaCreateAnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_CharaCreateAnimBlueprint_C::ExecuteUbergraph_AB_CharaCreateAnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CharaCreateAnimBlueprint_C", "ExecuteUbergraph_AB_CharaCreateAnimBlueprint");

	Params::AB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ReceiveStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           PreviousStateName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Param_NextStateName                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAB_CharaCreateAnimBlueprint_C::ReceiveStateChange(const class FString& PreviousStateName, const class FString& Param_NextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CharaCreateAnimBlueprint_C", "ReceiveStateChange");

	Params::AB_CharaCreateAnimBlueprint_C_ReceiveStateChange Parms{};

	Parms.PreviousStateName = std::move(PreviousStateName);
	Parms.Param_NextStateName = std::move(Param_NextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAB_CharaCreateAnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CharaCreateAnimBlueprint_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_CharaCreateAnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CharaCreateAnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::AB_CharaCreateAnimBlueprint_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.UpdateCharacterVariablesBp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_CharaCreateAnimBlueprint_C::UpdateCharacterVariablesBp(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CharaCreateAnimBlueprint_C", "UpdateCharacterVariablesBp");

	Params::AB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.SetupAnimationSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAB_CharaCreateAnimBlueprint_C::SetupAnimationSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CharaCreateAnimBlueprint_C", "SetupAnimationSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.InitCopyPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SourceCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UAB_CharaCreateAnimBlueprint_C::InitCopyPose(class USkeletalMeshComponent* SourceCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CharaCreateAnimBlueprint_C", "InitCopyPose");

	Params::AB_CharaCreateAnimBlueprint_C_InitCopyPose Parms{};

	Parms.SourceCharacter = SourceCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.UnuseCopyPose
// (Public, BlueprintCallable, BlueprintEvent)

void UAB_CharaCreateAnimBlueprint_C::UnuseCopyPose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CharaCreateAnimBlueprint_C", "UnuseCopyPose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_CharaCreateAnimBlueprint_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CharaCreateAnimBlueprint_C", "AnimGraph");

	Params::AB_CharaCreateAnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

