#pragma once

 

// Package: BP_BalloonComponent

#include "Basic.hpp"

#include "BP_BalloonComponent_classes.hpp"
#include "BP_BalloonComponent_parameters.hpp"


namespace SDK
{

// Function BP_BalloonComponent.BP_BalloonComponent_C.ChangeBalloonVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVsiible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BalloonComponent_C::ChangeBalloonVisible__DelegateSignature(bool bVsiible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BalloonComponent_C", "ChangeBalloonVisible__DelegateSignature");

	Params::BP_BalloonComponent_C_ChangeBalloonVisible__DelegateSignature Parms{};

	Parms.bVsiible = bVsiible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BalloonComponent.BP_BalloonComponent_C.ExecuteUbergraph_BP_BalloonComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BalloonComponent_C::ExecuteUbergraph_BP_BalloonComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BalloonComponent_C", "ExecuteUbergraph_BP_BalloonComponent");

	Params::BP_BalloonComponent_C_ExecuteUbergraph_BP_BalloonComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BalloonComponent.BP_BalloonComponent_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UBP_BalloonComponent_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BalloonComponent_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BalloonComponent.BP_BalloonComponent_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ACharacter*                       InAttachCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BalloonComponent_C::Show(const class FString& InText, class ACharacter* InAttachCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BalloonComponent_C", "Show");

	Params::BP_BalloonComponent_C_Show Parms{};

	Parms.InText = std::move(InText);
	Parms.InAttachCharacter = InAttachCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BalloonComponent.BP_BalloonComponent_C.OnRemove_Event_0
// (BlueprintCallable, BlueprintEvent)

void UBP_BalloonComponent_C::OnRemove_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BalloonComponent_C", "OnRemove_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BalloonComponent.BP_BalloonComponent_C.Show_Extend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ACharacter*                       InAttachCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InAttachTransformName                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InAutoCloseTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BalloonComponent_C::Show_Extend(const class FString& InText, class ACharacter* InAttachCharacter, class FName InAttachTransformName, float InAutoCloseTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BalloonComponent_C", "Show_Extend");

	Params::BP_BalloonComponent_C_Show_Extend Parms{};

	Parms.InText = std::move(InText);
	Parms.InAttachCharacter = InAttachCharacter;
	Parms.InAttachTransformName = InAttachTransformName;
	Parms.InAutoCloseTime = InAutoCloseTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

