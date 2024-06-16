#pragma once

 

// Package: StatusAlimentUI

#include "Basic.hpp"

#include "StatusAlimentUI_classes.hpp"
#include "StatusAlimentUI_parameters.hpp"


namespace SDK
{

// Function StatusAlimentUI.StatusAlimentUI_C.ExecuteUbergraph_StatusAlimentUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusAlimentUI_C::ExecuteUbergraph_StatusAlimentUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentUI_C", "ExecuteUbergraph_StatusAlimentUI");

	Params::StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentUI.StatusAlimentUI_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusAlimentUI_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentUI_C", "OnAnimationFinished");

	Params::StatusAlimentUI_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentUI.StatusAlimentUI_C.Show
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStatusUIRequestInfo           InRequestInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStatusAlimentUI_C::Show(const struct FSBStatusUIRequestInfo& InRequestInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentUI_C", "Show");

	Params::StatusAlimentUI_C_Show Parms{};

	Parms.InRequestInfo = std::move(InRequestInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentUI.StatusAlimentUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusAlimentUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentUI_C", "Tick");

	Params::StatusAlimentUI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentUI.StatusAlimentUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStatusAlimentUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentUI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StatusAlimentUI.StatusAlimentUI_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStatusAlimentUI_C::SetText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentUI_C", "SetText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StatusAlimentUI.StatusAlimentUI_C.UpdateLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusAlimentUI_C::UpdateLocation(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentUI_C", "UpdateLocation");

	Params::StatusAlimentUI_C_UpdateLocation Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusAlimentUI.StatusAlimentUI_C.CalcBaseLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusAlimentUI_C::CalcBaseLocation(struct FVector2D* Location, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentUI_C", "CalcBaseLocation");

	Params::StatusAlimentUI_C_CalcBaseLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function StatusAlimentUI.StatusAlimentUI_C.IsInsideScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        InCheckPosition                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInside                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusAlimentUI_C::IsInsideScreen(const struct FVector2D& InCheckPosition, bool* bInside) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusAlimentUI_C", "IsInsideScreen");

	Params::StatusAlimentUI_C_IsInsideScreen Parms{};

	Parms.InCheckPosition = std::move(InCheckPosition);

	UObject::ProcessEvent(Func, &Parms);

	if (bInside != nullptr)
		*bInside = Parms.bInside;
}

}

