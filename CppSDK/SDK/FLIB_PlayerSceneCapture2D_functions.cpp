#pragma once

 

// Package: FLIB_PlayerSceneCapture2D

#include "Basic.hpp"

#include "FLIB_PlayerSceneCapture2D_classes.hpp"
#include "FLIB_PlayerSceneCapture2D_parameters.hpp"


namespace SDK
{

// Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.SpawnPlayerCaptureStudio
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Priority                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerSceneCapture2D_Studio_C*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ABP_PlayerSceneCapture2D_Studio_C* UFLIB_PlayerSceneCapture2D_C::SpawnPlayerCaptureStudio(int32 Priority, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_PlayerSceneCapture2D_C", "SpawnPlayerCaptureStudio");

	Params::FLIB_PlayerSceneCapture2D_C_SpawnPlayerCaptureStudio Parms{};

	Parms.Priority = Priority;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.Find Curr Map Player Avatar Transform
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCurrMapName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       OutTransform                                           (Parm, OutParm, IsPlainOldData, NoDestructor)

void UFLIB_PlayerSceneCapture2D_C::Find_Curr_Map_Player_Avatar_Transform(const class FString& InCurrMapName, class UObject* __WorldContext, struct FTransform* OutTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_PlayerSceneCapture2D_C", "Find Curr Map Player Avatar Transform");

	Params::FLIB_PlayerSceneCapture2D_C_Find_Curr_Map_Player_Avatar_Transform Parms{};

	Parms.InCurrMapName = std::move(InCurrMapName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);
}


// Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.GetAnalogStickRotate
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   RotateValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_PlayerSceneCapture2D_C::GetAnalogStickRotate(class UObject* __WorldContext, bool* bValid, float* RotateValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_PlayerSceneCapture2D_C", "GetAnalogStickRotate");

	Params::FLIB_PlayerSceneCapture2D_C_GetAnalogStickRotate Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (RotateValue != nullptr)
		*RotateValue = Parms.RotateValue;
}


// Function FLIB_PlayerSceneCapture2D.FLIB_PlayerSceneCapture2D_C.GetMouseRotate
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   RotateValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_PlayerSceneCapture2D_C::GetMouseRotate(class UObject* __WorldContext, bool* bValid, float* RotateValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_PlayerSceneCapture2D_C", "GetMouseRotate");

	Params::FLIB_PlayerSceneCapture2D_C_GetMouseRotate Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	if (RotateValue != nullptr)
		*RotateValue = Parms.RotateValue;
}

}

