#pragma once

 

// Package: UMG_AdminWindowTemplate

#include "Basic.hpp"

#include "UMG_AdminWindowTemplate_classes.hpp"
#include "UMG_AdminWindowTemplate_parameters.hpp"


namespace SDK
{

// Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.ExecuteUbergraph_UMG_AdminWindowTemplate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminWindowTemplate_C::ExecuteUbergraph_UMG_AdminWindowTemplate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminWindowTemplate_C", "ExecuteUbergraph_UMG_AdminWindowTemplate");

	Params::UMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.BndEvt__UMG_AdminWindowTemplate_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)

void UUMG_AdminWindowTemplate_C::BndEvt__UMG_AdminWindowTemplate_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminWindowTemplate_C", "BndEvt__UMG_AdminWindowTemplate_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Param_OwnerWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminWindowTemplate_C::Init(class UUserWidget* Param_OwnerWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminWindowTemplate_C", "Init");

	Params::UMG_AdminWindowTemplate_C_Init Parms{};

	Parms.Param_OwnerWidget = Param_OwnerWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AdminWindowTemplate_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminWindowTemplate_C", "PreConstruct");

	Params::UMG_AdminWindowTemplate_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

