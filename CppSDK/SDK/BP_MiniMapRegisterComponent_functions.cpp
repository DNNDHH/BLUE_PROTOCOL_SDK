#pragma once

 

// Package: BP_MiniMapRegisterComponent

#include "Basic.hpp"

#include "BP_MiniMapRegisterComponent_classes.hpp"
#include "BP_MiniMapRegisterComponent_parameters.hpp"


namespace SDK
{

// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.ExecuteUbergraph_BP_MiniMapRegisterComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MiniMapRegisterComponent_C::ExecuteUbergraph_BP_MiniMapRegisterComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "ExecuteUbergraph_BP_MiniMapRegisterComponent");

	Params::BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.StopRequest
// (BlueprintCallable, BlueprintEvent)

void UBP_MiniMapRegisterComponent_C::StopRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "StopRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.OnRequest
// (BlueprintCallable, BlueprintEvent)

void UBP_MiniMapRegisterComponent_C::OnRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "OnRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.StartRequest
// (BlueprintCallable, BlueprintEvent)

void UBP_MiniMapRegisterComponent_C::StartRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "StartRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.OnBuddyDelegate
// (BlueprintCallable, BlueprintEvent)

void UBP_MiniMapRegisterComponent_C::OnBuddyDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "OnBuddyDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.UnbindBuddy
// (BlueprintCallable, BlueprintEvent)

void UBP_MiniMapRegisterComponent_C::UnbindBuddy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "UnbindBuddy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.BindBuddy
// (BlueprintCallable, BlueprintEvent)

void UBP_MiniMapRegisterComponent_C::BindBuddy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "BindBuddy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_MiniMapRegisterComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MiniMapRegisterComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "ReceiveTick");

	Params::BP_MiniMapRegisterComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MiniMapRegisterComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "ReceiveEndPlay");

	Params::BP_MiniMapRegisterComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.CreateIcon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MiniMapRegisterComponent_C::CreateIcon(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "CreateIcon");

	Params::BP_MiniMapRegisterComponent_C_CreateIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.DeleteIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_MiniMapRegisterComponent_C::DeleteIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "DeleteIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.OnTick
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_MiniMapRegisterComponent_C::OnTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "OnTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.CreateMiniMapIcon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MiniMapRegisterComponent_C::CreateMiniMapIcon(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "CreateMiniMapIcon");

	Params::BP_MiniMapRegisterComponent_C_CreateMiniMapIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.DeleteMiniMapIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_MiniMapRegisterComponent_C::DeleteMiniMapIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "DeleteMiniMapIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.CreateWholeMapIcon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MiniMapRegisterComponent_C::CreateWholeMapIcon(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "CreateWholeMapIcon");

	Params::BP_MiniMapRegisterComponent_C_CreateWholeMapIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.DeleteWholeMapIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_MiniMapRegisterComponent_C::DeleteWholeMapIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MiniMapRegisterComponent_C", "DeleteWholeMapIcon");

	UObject::ProcessEvent(Func, nullptr);
}

}

