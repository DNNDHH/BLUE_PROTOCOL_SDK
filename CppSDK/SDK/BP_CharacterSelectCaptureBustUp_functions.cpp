#pragma once

 

// Package: BP_CharacterSelectCaptureBustUp

#include "Basic.hpp"

#include "BP_CharacterSelectCaptureBustUp_classes.hpp"
#include "BP_CharacterSelectCaptureBustUp_parameters.hpp"


namespace SDK
{

// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ExecuteUbergraph_BP_CharacterSelectCaptureBustUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterSelectCaptureBustUp_C::ExecuteUbergraph_BP_CharacterSelectCaptureBustUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "ExecuteUbergraph_BP_CharacterSelectCaptureBustUp");

	Params::BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterSelectCaptureBustUp_C::Update(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "Update");

	Params::BP_CharacterSelectCaptureBustUp_C_Update Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.SetFacial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_FacialNum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterSelectCaptureBustUp_C::SetFacial(int32 Param_FacialNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "SetFacial");

	Params::BP_CharacterSelectCaptureBustUp_C_SetFacial Parms{};

	Parms.Param_FacialNum = Param_FacialNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.DebugLocationCheckUpdeta
// (BlueprintCallable, BlueprintEvent)

void ABP_CharacterSelectCaptureBustUp_C::DebugLocationCheckUpdeta()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "DebugLocationCheckUpdeta");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CharacterSelectCaptureBustUp_C::CustomEvent_1(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "CustomEvent_1");

	Params::BP_CharacterSelectCaptureBustUp_C_CustomEvent_1 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CharacterSelectCaptureBustUp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.BustUpInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharaCreateParameter          CharaCreateParameter                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           CharacterShortId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_CharacterSelectCaptureBustUp_C::BustUpInitialize(const struct FSBCharaCreateParameter& CharaCreateParameter, const class FString& CharacterShortId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "BustUpInitialize");

	Params::BP_CharacterSelectCaptureBustUp_C_BustUpInitialize Parms{};

	Parms.CharaCreateParameter = std::move(CharaCreateParameter);
	Parms.CharacterShortId = std::move(CharacterShortId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.SetRender
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CharacterSelectCaptureBustUp_C::SetRender(bool Hidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "SetRender");

	Params::BP_CharacterSelectCaptureBustUp_C_SetRender Parms{};

	Parms.Hidden = Hidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ChangeFacial
// (BlueprintCallable, BlueprintEvent)

void ABP_CharacterSelectCaptureBustUp_C::ChangeFacial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "ChangeFacial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.UpdetaCameraLocation
// (BlueprintCallable, BlueprintEvent)

void ABP_CharacterSelectCaptureBustUp_C::UpdetaCameraLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "UpdetaCameraLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.IsLoad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bLoad                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CharacterSelectCaptureBustUp_C::IsLoad(bool* Param_bLoad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "IsLoad");

	Params::BP_CharacterSelectCaptureBustUp_C_IsLoad Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bLoad != nullptr)
		*Param_bLoad = Parms.Param_bLoad;
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Load Facial Num
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CharacterSelectCaptureBustUp_C::Load_Facial_Num()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "Load Facial Num");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Save Facial Num
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_FacialNum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterSelectCaptureBustUp_C::Save_Facial_Num(int32 Param_FacialNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureBustUp_C", "Save Facial Num");

	Params::BP_CharacterSelectCaptureBustUp_C_Save_Facial_Num Parms{};

	Parms.Param_FacialNum = Param_FacialNum;

	UObject::ProcessEvent(Func, &Parms);
}

}

