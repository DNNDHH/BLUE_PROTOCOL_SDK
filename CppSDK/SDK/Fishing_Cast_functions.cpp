#pragma once

 

// Package: Fishing_Cast

#include "Basic.hpp"

#include "Fishing_Cast_classes.hpp"
#include "Fishing_Cast_parameters.hpp"


namespace SDK
{

// Function Fishing_Cast.Fishing_Cast_C.ExecuteUbergraph_Fishing_Cast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Cast_C::ExecuteUbergraph_Fishing_Cast(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "ExecuteUbergraph_Fishing_Cast");

	Params::Fishing_Cast_C_ExecuteUbergraph_Fishing_Cast Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Cast.Fishing_Cast_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFishing_Cast_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Cast.Fishing_Cast_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishing_Cast_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "PreConstruct");

	Params::Fishing_Cast_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Cast.Fishing_Cast_C.SetStaminaGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CurentStamina                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxStamina                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Cast_C::SetStaminaGauge(float CurentStamina, float MaxStamina)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "SetStaminaGauge");

	Params::Fishing_Cast_C_SetStaminaGauge Parms{};

	Parms.CurentStamina = CurentStamina;
	Parms.MaxStamina = MaxStamina;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Cast.Fishing_Cast_C.SetTensionGauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TensionValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Cast_C::SetTensionGauge(float TensionValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "SetTensionGauge");

	Params::Fishing_Cast_C_SetTensionGauge Parms{};

	Parms.TensionValue = TensionValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Cast.Fishing_Cast_C.Get_FishStaminaGauge_Brush_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UFishing_Cast_C::Get_FishStaminaGauge_Brush_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "Get_FishStaminaGauge_Brush_0");

	Params::Fishing_Cast_C_Get_FishStaminaGauge_Brush_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Fishing_Cast.Fishing_Cast_C.InitFishIconPos
// (Public, BlueprintCallable, BlueprintEvent)

void UFishing_Cast_C::InitFishIconPos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "InitFishIconPos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Cast.Fishing_Cast_C.InitLineTensionColorData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFishing_Cast_C::InitLineTensionColorData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "InitLineTensionColorData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Cast.Fishing_Cast_C.UpdateLineColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   LineTensionPercentage                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Cast_C::UpdateLineColor(float LineTensionPercentage, struct FLinearColor* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "UpdateLineColor");

	Params::Fishing_Cast_C_UpdateLineColor Parms{};

	Parms.LineTensionPercentage = LineTensionPercentage;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function Fishing_Cast.Fishing_Cast_C.AnimHookSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void UFishing_Cast_C::AnimHookSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "AnimHookSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Cast.Fishing_Cast_C.AnimSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void UFishing_Cast_C::AnimSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "AnimSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Cast.Fishing_Cast_C.AnimFail
// (Public, BlueprintCallable, BlueprintEvent)

void UFishing_Cast_C::AnimFail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "AnimFail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Cast.Fishing_Cast_C.HookSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void UFishing_Cast_C::HookSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "HookSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Cast.Fishing_Cast_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFishing_Cast_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Cast.Fishing_Cast_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UFishing_Cast_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Cast_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}

}

