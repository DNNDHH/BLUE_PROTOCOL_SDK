#pragma once

 

// Package: MapEditWindowSize

#include "Basic.hpp"

#include "MapEditWindowSize_classes.hpp"
#include "MapEditWindowSize_parameters.hpp"


namespace SDK
{

// Function MapEditWindowSize.MapEditWindowSize_C.OnWindowSizeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindowSize_C::OnWindowSizeChanged__DelegateSignature(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "OnWindowSizeChanged__DelegateSignature");

	Params::MapEditWindowSize_C_OnWindowSizeChanged__DelegateSignature Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.ExecuteUbergraph_MapEditWindowSize
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindowSize_C::ExecuteUbergraph_MapEditWindowSize(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "ExecuteUbergraph_MapEditWindowSize");

	Params::MapEditWindowSize_C_ExecuteUbergraph_MapEditWindowSize Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowSize_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "PreConstruct");

	Params::MapEditWindowSize_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.BndEvt__MapEditWindowSize_Size4_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowSize_C::BndEvt__MapEditWindowSize_Size4_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "BndEvt__MapEditWindowSize_Size4_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::MapEditWindowSize_C_BndEvt__MapEditWindowSize_Size4_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.BndEvt__MapEditWindowSize_Size3_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowSize_C::BndEvt__MapEditWindowSize_Size3_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "BndEvt__MapEditWindowSize_Size3_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::MapEditWindowSize_C_BndEvt__MapEditWindowSize_Size3_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.BndEvt__MapEditWindowSize_Size2_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowSize_C::BndEvt__MapEditWindowSize_Size2_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "BndEvt__MapEditWindowSize_Size2_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::MapEditWindowSize_C_BndEvt__MapEditWindowSize_Size2_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.BndEvt__MapEditWindowSize_Size1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowSize_C::BndEvt__MapEditWindowSize_Size1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "BndEvt__MapEditWindowSize_Size1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::MapEditWindowSize_C_BndEvt__MapEditWindowSize_Size1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindowSize_C::SetTitle(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "SetTitle");

	Params::MapEditWindowSize_C_SetTitle Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.SetCheckWindowSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindowSize_C::SetCheckWindowSize(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "SetCheckWindowSize");

	Params::MapEditWindowSize_C_SetCheckWindowSize Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.SetCheckWindowSize1
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowSize_C::SetCheckWindowSize1(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "SetCheckWindowSize1");

	Params::MapEditWindowSize_C_SetCheckWindowSize1 Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.SetCheckWindowSize2
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowSize_C::SetCheckWindowSize2(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "SetCheckWindowSize2");

	Params::MapEditWindowSize_C_SetCheckWindowSize2 Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.SetCheckWindowSize3
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowSize_C::SetCheckWindowSize3(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "SetCheckWindowSize3");

	Params::MapEditWindowSize_C_SetCheckWindowSize3 Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindowSize.MapEditWindowSize_C.SetCheckWindowSize4
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindowSize_C::SetCheckWindowSize4(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindowSize_C", "SetCheckWindowSize4");

	Params::MapEditWindowSize_C_SetCheckWindowSize4 Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);
}

}

