#pragma once

 

// Package: MyWalletWidget

#include "Basic.hpp"

#include "MyWalletWidget_classes.hpp"
#include "MyWalletWidget_parameters.hpp"


namespace SDK
{

// Function MyWalletWidget.MyWalletWidget_C.ExecuteUbergraph_MyWalletWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyWalletWidget_C::ExecuteUbergraph_MyWalletWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyWalletWidget_C", "ExecuteUbergraph_MyWalletWidget");

	Params::MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyWalletWidget.MyWalletWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyWalletWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyWalletWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyWalletWidget.MyWalletWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyWalletWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyWalletWidget_C", "PreConstruct");

	Params::MyWalletWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyWalletWidget.MyWalletWidget_C.PreConstruct_Internal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UCurrencyWidget_C*>        Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UMyWalletWidget_C::PreConstruct_Internal(TArray<class UCurrencyWidget_C*>& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyWalletWidget_C", "PreConstruct_Internal");

	Params::MyWalletWidget_C_PreConstruct_Internal Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
}


// Function MyWalletWidget.MyWalletWidget_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECurrencyType                           InCurrencyType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyWalletWidget_C::SetActive(ECurrencyType InCurrencyType, bool bInActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyWalletWidget_C", "SetActive");

	Params::MyWalletWidget_C_SetActive Parms{};

	Parms.InCurrencyType = InCurrencyType;
	Parms.bInActive = bInActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyWalletWidget.MyWalletWidget_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UMyWalletWidget_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyWalletWidget_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyWalletWidget.MyWalletWidget_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UMyWalletWidget_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyWalletWidget_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyWalletWidget.MyWalletWidget_C.SetBG
// (Public, BlueprintCallable, BlueprintEvent)

void UMyWalletWidget_C::SetBG()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyWalletWidget_C", "SetBG");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyWalletWidget.MyWalletWidget_C.IsShow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyWalletWidget_C::IsShow(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyWalletWidget_C", "IsShow");

	Params::MyWalletWidget_C_IsShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function MyWalletWidget.MyWalletWidget_C.GetCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Param_ShowCount                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyWalletWidget_C::GetCount(int32* Param_ShowCount) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyWalletWidget_C", "GetCount");

	Params::MyWalletWidget_C_GetCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ShowCount != nullptr)
		*Param_ShowCount = Parms.Param_ShowCount;
}

}

