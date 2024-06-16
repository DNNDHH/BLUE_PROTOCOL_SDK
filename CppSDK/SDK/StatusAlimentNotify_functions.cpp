#pragma once

 

// Package: StatusAlimentNotify

#include "Basic.hpp"

#include "StatusAlimentNotify_classes.hpp"
#include "StatusAlimentNotify_parameters.hpp"


namespace SDK
{

// Function StatusAlimentNotify.StatusAlimentNotify_C.ExecuteUbergraph_StatusAlimentNotify
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusAlimentNotify_C::ExecuteUbergraph_StatusAlimentNotify(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentNotify_C", "ExecuteUbergraph_StatusAlimentNotify");

	Params::StatusAlimentNotify_C_ExecuteUbergraph_StatusAlimentNotify Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentNotify.StatusAlimentNotify_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusAlimentNotify_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentNotify_C", "OnAnimationFinished");

	Params::StatusAlimentNotify_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentNotify.StatusAlimentNotify_C.BP_Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBStatusAilmentIconConfig       InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UStatusAlimentNotify_C::BP_Play(class AActor* OwnerActor, const struct FSBStatusAilmentIconConfig& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentNotify_C", "BP_Play");

	Params::StatusAlimentNotify_C_BP_Play Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentNotify.StatusAlimentNotify_C.Init_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStatusAilmentIconConfig       Status_AlimentIcon_Config                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FName                             InTextID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStatusAilmentPlateType               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusAlimentNotify_C::Init_Internal(const struct FSBStatusAilmentIconConfig& Status_AlimentIcon_Config, const class FName InTextID, ESBStatusAilmentPlateType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentNotify_C", "Init_Internal");

	Params::StatusAlimentNotify_C_Init_Internal Parms{};

	Parms.Status_AlimentIcon_Config = std::move(Status_AlimentIcon_Config);
	Parms.InTextID = InTextID;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentNotify.StatusAlimentNotify_C.SetBasePlate
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBStatusAilmentPlateType               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBStatusAilmentIconConfig       SBStatusAilmentIconConfig                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UStatusAlimentNotify_C::SetBasePlate(ESBStatusAilmentPlateType Type, const struct FSBStatusAilmentIconConfig& SBStatusAilmentIconConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentNotify_C", "SetBasePlate");

	Params::StatusAlimentNotify_C_SetBasePlate Parms{};

	Parms.Type = Type;
	Parms.SBStatusAilmentIconConfig = std::move(SBStatusAilmentIconConfig);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentNotify.StatusAlimentNotify_C.SetText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStatusAilmentIconConfig       SBStatusAilmentIconConfig                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class FName                             InTextID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusAlimentNotify_C::SetText(const struct FSBStatusAilmentIconConfig& SBStatusAilmentIconConfig, const class FName InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentNotify_C", "SetText");

	Params::StatusAlimentNotify_C_SetText Parms{};

	Parms.SBStatusAilmentIconConfig = std::move(SBStatusAilmentIconConfig);
	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentNotify.StatusAlimentNotify_C.SetIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStatusAilmentIconConfig       InStatusAlimentIconConfig                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// ESBStatusAilmentPlateType               InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusAlimentNotify_C::SetIcon(const struct FSBStatusAilmentIconConfig& InStatusAlimentIconConfig, ESBStatusAilmentPlateType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentNotify_C", "SetIcon");

	Params::StatusAlimentNotify_C_SetIcon Parms{};

	Parms.InStatusAlimentIconConfig = std::move(InStatusAlimentIconConfig);
	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentNotify.StatusAlimentNotify_C.SetIconCover
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStatusAilmentIconConfig       SBStatusAilmentIconConfig                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// ESBStatusAilmentPlateType               InPlateType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusAlimentNotify_C::SetIconCover(const struct FSBStatusAilmentIconConfig& SBStatusAilmentIconConfig, ESBStatusAilmentPlateType InPlateType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentNotify_C", "SetIconCover");

	Params::StatusAlimentNotify_C_SetIconCover Parms{};

	Parms.SBStatusAilmentIconConfig = std::move(SBStatusAilmentIconConfig);
	Parms.InPlateType = InPlateType;

	UObject::ProcessEvent(Func, &Parms);
}

}

