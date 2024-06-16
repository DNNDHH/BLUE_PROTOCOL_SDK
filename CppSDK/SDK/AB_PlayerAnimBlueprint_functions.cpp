#pragma once

 

// Package: AB_PlayerAnimBlueprint

#include "Basic.hpp"

#include "AB_PlayerAnimBlueprint_classes.hpp"
#include "AB_PlayerAnimBlueprint_parameters.hpp"


namespace SDK
{

// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ChangeState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Previous                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Now                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_PlayerAnimBlueprint_C::ChangeState__DelegateSignature(class FName Previous, class FName Now)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "ChangeState__DelegateSignature");

	Params::AB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature Parms{};

	Parms.Previous = Previous;
	Parms.Now = Now;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ExecuteUbergraph_AB_PlayerAnimBlueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_PlayerAnimBlueprint_C::ExecuteUbergraph_AB_PlayerAnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "ExecuteUbergraph_AB_PlayerAnimBlueprint");

	Params::AB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.Set_MeshYaw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Yaw                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_PlayerAnimBlueprint_C::Set_MeshYaw(float Yaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "Set_MeshYaw");

	Params::AB_PlayerAnimBlueprint_C_Set_MeshYaw Parms{};

	Parms.Yaw = Yaw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.Set_Temp_Rot
// (BlueprintCallable, BlueprintEvent)

void UAB_PlayerAnimBlueprint_C::Set_Temp_Rot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "Set_Temp_Rot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ReceiveStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           PreviousStateName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           NextStateName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAB_PlayerAnimBlueprint_C::ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "ReceiveStateChange");

	Params::AB_PlayerAnimBlueprint_C_ReceiveStateChange Parms{};

	Parms.PreviousStateName = std::move(PreviousStateName);
	Parms.NextStateName = std::move(NextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAB_PlayerAnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_PlayerAnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::AB_PlayerAnimBlueprint_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PlayerAnimBlueprint_SBAnimGraphNode_SimpleIK_63E9F70F45D50A456F67428371215FF7
// (BlueprintEvent)

void UAB_PlayerAnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PlayerAnimBlueprint_SBAnimGraphNode_SimpleIK_63E9F70F45D50A456F67428371215FF7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PlayerAnimBlueprint_SBAnimGraphNode_SimpleIK_63E9F70F45D50A456F67428371215FF7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.UpdateCharacterVariablesBp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_PlayerAnimBlueprint_C::UpdateCharacterVariablesBp(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "UpdateCharacterVariablesBp");

	Params::AB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.SetupAnimationSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAB_PlayerAnimBlueprint_C::SetupAnimationSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "SetupAnimationSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.UpdateMountIKParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBMount*                         Mount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASBPlayerCharacter*               Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_PlayerAnimBlueprint_C::UpdateMountIKParam(class ASBMount* Mount, class ASBPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "UpdateMountIKParam");

	Params::AB_PlayerAnimBlueprint_C_UpdateMountIKParam Parms{};

	Parms.Mount = Mount;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_PlayerAnimBlueprint_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PlayerAnimBlueprint_C", "AnimGraph");

	Params::AB_PlayerAnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

