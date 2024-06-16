#pragma once

 

// Package: FLIB_SBButton

#include "Basic.hpp"

#include "FLIB_SBButton_classes.hpp"
#include "FLIB_SBButton_parameters.hpp"


namespace SDK
{

// Function FLIB_SBButton.FLIB_SBButton_C.SetSBButtonParam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBButton_C*                      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    PressedSound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    HoveredSound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESystemSE                               PressedSoundId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESystemSE                               HoveredSoundId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_SBButton_C::SetSBButtonParam(class USBButton_C* Target, class UAkAudioEvent* PressedSound, class UAkAudioEvent* HoveredSound, ESystemSE PressedSoundId, ESystemSE HoveredSoundId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_SBButton_C", "SetSBButtonParam");

	Params::FLIB_SBButton_C_SetSBButtonParam Parms{};

	Parms.Target = Target;
	Parms.PressedSound = PressedSound;
	Parms.HoveredSound = HoveredSound;
	Parms.PressedSoundId = PressedSoundId;
	Parms.HoveredSoundId = HoveredSoundId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

