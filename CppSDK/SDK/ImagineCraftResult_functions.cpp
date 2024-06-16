#pragma once

 

// Package: ImagineCraftResult

#include "Basic.hpp"

#include "ImagineCraftResult_classes.hpp"
#include "ImagineCraftResult_parameters.hpp"


namespace SDK
{

// Function ImagineCraftResult.ImagineCraftResult_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCloseAll                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineCraftResult_C::OnClosed__DelegateSignature(bool IsCloseAll)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftResult_C", "OnClosed__DelegateSignature");

	Params::ImagineCraftResult_C_OnClosed__DelegateSignature Parms{};

	Parms.IsCloseAll = IsCloseAll;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftResult.ImagineCraftResult_C.ExecuteUbergraph_ImagineCraftResult
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraftResult_C::ExecuteUbergraph_ImagineCraftResult(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftResult_C", "ExecuteUbergraph_ImagineCraftResult");

	Params::ImagineCraftResult_C_ExecuteUbergraph_ImagineCraftResult Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftResult.ImagineCraftResult_C.Show
// (BlueprintCallable, BlueprintEvent)

void UImagineCraftResult_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftResult_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraftResult.ImagineCraftResult_C.OnCloseDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraftResult_C::OnCloseDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftResult_C", "OnCloseDialog");

	Params::ImagineCraftResult_C_OnCloseDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftResult.ImagineCraftResult_C.CloseDialog
// (BlueprintCallable, BlueprintEvent)

void UImagineCraftResult_C::CloseDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftResult_C", "CloseDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraftResult.ImagineCraftResult_C.Close
// (BlueprintCallable, BlueprintEvent)

void UImagineCraftResult_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftResult_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineCraftResult.ImagineCraftResult_C.SetUID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_UniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UImagineCraftResult_C::SetUID(const class FString& Param_UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftResult_C", "SetUID");

	Params::ImagineCraftResult_C_SetUID Parms{};

	Parms.Param_UniqueId = std::move(Param_UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftResult.ImagineCraftResult_C.Set Storageno
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_StorageNo                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraftResult_C::Set_Storageno(int32 Param_StorageNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftResult_C", "Set Storageno");

	Params::ImagineCraftResult_C_Set_Storageno Parms{};

	Parms.Param_StorageNo = Param_StorageNo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineCraftResult.ImagineCraftResult_C.SetText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineCraftResult_C::SetText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineCraftResult_C", "SetText");

	UObject::ProcessEvent(Func, nullptr);
}

}

