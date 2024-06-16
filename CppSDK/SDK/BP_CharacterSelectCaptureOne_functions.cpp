#pragma once

 

// Package: BP_CharacterSelectCaptureOne

#include "Basic.hpp"

#include "BP_CharacterSelectCaptureOne_classes.hpp"
#include "BP_CharacterSelectCaptureOne_parameters.hpp"


namespace SDK
{

// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.ExecuteUbergraph_BP_CharacterSelectCaptureOne
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterSelectCaptureOne_C::ExecuteUbergraph_BP_CharacterSelectCaptureOne(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "ExecuteUbergraph_BP_CharacterSelectCaptureOne");

	Params::BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.DefaultPause
// (BlueprintCallable, BlueprintEvent)

void ABP_CharacterSelectCaptureOne_C::DefaultPause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "DefaultPause");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.GameStartPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectICharandex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterSelectCaptureOne_C::GameStartPlay(int32 SelectICharandex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "GameStartPlay");

	Params::BP_CharacterSelectCaptureOne_C_GameStartPlay Parms{};

	Parms.SelectICharandex = SelectICharandex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SelectICharandex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterSelectCaptureOne_C::Update(float DeltaTime, int32 SelectICharandex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "Update");

	Params::BP_CharacterSelectCaptureOne_C_Update Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.SelectICharandex = SelectICharandex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.UpdetaCameraLocation
// (BlueprintCallable, BlueprintEvent)

void ABP_CharacterSelectCaptureOne_C::UpdetaCameraLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "UpdetaCameraLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.DebugLocationCheckUpdeta
// (BlueprintCallable, BlueprintEvent)

void ABP_CharacterSelectCaptureOne_C::DebugLocationCheckUpdeta()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "DebugLocationCheckUpdeta");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CharacterSelectCaptureOne_C::CustomEvent_1(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "CustomEvent_1");

	Params::BP_CharacterSelectCaptureOne_C_CustomEvent_1 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CharacterSelectCaptureOne_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharaCreateParameter          CharaCreateParameter                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Param_PoseID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_CharaIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterSelectCaptureOne_C::Initialize(const struct FSBCharaCreateParameter& CharaCreateParameter, int32 Number, const class FString& CharacterId, int32 Param_PoseID, int32 Param_CharaIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "Initialize");

	Params::BP_CharacterSelectCaptureOne_C_Initialize Parms{};

	Parms.CharaCreateParameter = std::move(CharaCreateParameter);
	Parms.Number = Number;
	Parms.CharacterId = std::move(CharacterId);
	Parms.Param_PoseID = Param_PoseID;
	Parms.Param_CharaIndex = Param_CharaIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.GetNumber
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_MyNumber                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharacterSelectCaptureOne_C::GetNumber(int32* Param_MyNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "GetNumber");

	Params::BP_CharacterSelectCaptureOne_C_GetNumber Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_MyNumber != nullptr)
		*Param_MyNumber = Parms.Param_MyNumber;
}


// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Is Load Now
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bLoad                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CharacterSelectCaptureOne_C::Is_Load_Now(bool* Param_bLoad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "Is Load Now");

	Params::BP_CharacterSelectCaptureOne_C_Is_Load_Now Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bLoad != nullptr)
		*Param_bLoad = Parms.Param_bLoad;
}


// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.CaptureVisible
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CharacterSelectCaptureOne_C::CaptureVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterSelectCaptureOne_C", "CaptureVisible");

	UObject::ProcessEvent(Func, nullptr);
}

}

