#pragma once

 

// Package: VOptionSubButtonList

#include "Basic.hpp"

#include "VOptionSubButtonList_classes.hpp"
#include "VOptionSubButtonList_parameters.hpp"


namespace SDK
{

// Function VOptionSubButtonList.VOptionSubButtonList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVOptionSubButtonList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VOptionSubButtonList_C", "PreConstruct");

	Params::VOptionSubButtonList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VOptionSubButtonList.VOptionSubButtonList_C.ClearChilds
// (BlueprintCallable, BlueprintEvent)

void UVOptionSubButtonList_C::ClearChilds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VOptionSubButtonList_C", "ClearChilds");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VOptionSubButtonList.VOptionSubButtonList_C.GenerateChildren
// (BlueprintCallable, BlueprintEvent)

void UVOptionSubButtonList_C::GenerateChildren()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VOptionSubButtonList_C", "GenerateChildren");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VOptionSubButtonList.VOptionSubButtonList_C.OnClicledChildButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVOptionSubButtonList_C::OnClicledChildButton(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VOptionSubButtonList_C", "OnClicledChildButton");

	Params::VOptionSubButtonList_C_OnClicledChildButton Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VOptionSubButtonList.VOptionSubButtonList_C.ChangeFocusButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVOptionSubButtonList_C::ChangeFocusButton(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VOptionSubButtonList_C", "ChangeFocusButton");

	Params::VOptionSubButtonList_C_ChangeFocusButton Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VOptionSubButtonList.VOptionSubButtonList_C.ExecuteUbergraph_VOptionSubButtonList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVOptionSubButtonList_C::ExecuteUbergraph_VOptionSubButtonList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VOptionSubButtonList_C", "ExecuteUbergraph_VOptionSubButtonList");

	Params::VOptionSubButtonList_C_ExecuteUbergraph_VOptionSubButtonList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VOptionSubButtonList.VOptionSubButtonList_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVOptionSubButtonList_C::OnClicked__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VOptionSubButtonList_C", "OnClicked__DelegateSignature");

	Params::VOptionSubButtonList_C_OnClicked__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}

}

