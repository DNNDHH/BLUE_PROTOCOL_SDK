#pragma once

 

// Package: JointGestureIcon

#include "Basic.hpp"

#include "JointGestureIcon_classes.hpp"
#include "JointGestureIcon_parameters.hpp"


namespace SDK
{

// Function JointGestureIcon.JointGestureIcon_C.Update Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBCharacter*                     Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJointGestureIcon_C::Update_Icon(class ASBCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JointGestureIcon_C", "Update Icon");

	Params::JointGestureIcon_C_Update_Icon Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function JointGestureIcon.JointGestureIcon_C.CheckTargetPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASBPlayerCharacter*               InTargetCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UJointGestureIcon_C::CheckTargetPlayer(class ASBPlayerCharacter* InTargetCharacter, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("JointGestureIcon_C", "CheckTargetPlayer");

	Params::JointGestureIcon_C_CheckTargetPlayer Parms{};

	Parms.InTargetCharacter = InTargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

