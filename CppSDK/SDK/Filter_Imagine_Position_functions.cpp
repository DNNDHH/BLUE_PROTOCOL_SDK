#pragma once

 

// Package: Filter_Imagine_Position

#include "Basic.hpp"

#include "Filter_Imagine_Position_classes.hpp"
#include "Filter_Imagine_Position_parameters.hpp"


namespace SDK
{

// Function Filter_Imagine_Position.Filter_Imagine_Position_C.ExecuteUbergraph_Filter_Imagine_Position
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_Imagine_Position_C::ExecuteUbergraph_Filter_Imagine_Position(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_Imagine_Position_C", "ExecuteUbergraph_Filter_Imagine_Position");

	Params::Filter_Imagine_Position_C_ExecuteUbergraph_Filter_Imagine_Position Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_Imagine_Position.Filter_Imagine_Position_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFilterRadioButton_C*             RadioButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_Imagine_Position_C::BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_Imagine_Position_C", "BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");

	Params::Filter_Imagine_Position_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.RadioButton = RadioButton;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_Imagine_Position.Filter_Imagine_Position_C.ResetAll
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFilter_Imagine_Position_C::ResetAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_Imagine_Position_C", "ResetAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_Imagine_Position.Filter_Imagine_Position_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFilter_Imagine_Position_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_Imagine_Position_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_Imagine_Position.Filter_Imagine_Position_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilter_Imagine_Position_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_Imagine_Position_C", "PreConstruct");

	Params::Filter_Imagine_Position_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_Imagine_Position.Filter_Imagine_Position_C.Generate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFilter_Imagine_Position_C::Generate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_Imagine_Position_C", "Generate");

	UObject::ProcessEvent(Func, nullptr);
}

}
