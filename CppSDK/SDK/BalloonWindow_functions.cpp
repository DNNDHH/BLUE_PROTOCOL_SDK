#pragma once

 

// Package: BalloonWindow

#include "Basic.hpp"

#include "BalloonWindow_classes.hpp"
#include "BalloonWindow_parameters.hpp"


namespace SDK
{

// Function BalloonWindow.BalloonWindow_C.ExecuteUbergraph_BalloonWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonWindow_C::ExecuteUbergraph_BalloonWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "ExecuteUbergraph_BalloonWindow");

	Params::BalloonWindow_C_ExecuteUbergraph_BalloonWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BalloonWindow.BalloonWindow_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonWindow_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "OnAnimationFinished");

	Params::BalloonWindow_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BalloonWindow.BalloonWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBalloonWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BalloonWindow.BalloonWindow_C.OnDestruct
// (Private, BlueprintCallable, BlueprintEvent)

void UBalloonWindow_C::OnDestruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "OnDestruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BalloonWindow.BalloonWindow_C.SetText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBBalloonWindowRequest          SBBalloonWindowRequest                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBalloonWindow_C::SetText(const struct FSBBalloonWindowRequest& SBBalloonWindowRequest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "SetText");

	Params::BalloonWindow_C_SetText Parms{};

	Parms.SBBalloonWindowRequest = std::move(SBBalloonWindowRequest);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BalloonWindow.BalloonWindow_C.GetFaceCaptureComponent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneCaptureComponent2D*         Component                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalloonWindow_C::GetFaceCaptureComponent(class USceneCaptureComponent2D** Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "GetFaceCaptureComponent");

	Params::BalloonWindow_C_GetFaceCaptureComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Component != nullptr)
		*Component = Parms.Component;
}


// Function BalloonWindow.BalloonWindow_C.OnTick
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBalloonWindow_C::OnTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "OnTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BalloonWindow.BalloonWindow_C.OnShow
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBBalloonWindowRequest          InRequest                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBalloonWindow_C::OnShow(const struct FSBBalloonWindowRequest& InRequest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "OnShow");

	Params::BalloonWindow_C_OnShow Parms{};

	Parms.InRequest = std::move(InRequest);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BalloonWindow.BalloonWindow_C.PlayAnimIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBalloonWindow_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BalloonWindow.BalloonWindow_C.PlayAnimOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBalloonWindow_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BalloonWindow.BalloonWindow_C.AdjustPosition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

struct FVector2D UBalloonWindow_C::AdjustPosition(const struct FVector2D& Position, bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "AdjustPosition");

	Params::BalloonWindow_C_AdjustPosition Parms{};

	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}


// Function BalloonWindow.BalloonWindow_C.GetBasePosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UBalloonWindow_C::GetBasePosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "GetBasePosition");

	Params::BalloonWindow_C_GetBasePosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BalloonWindow.BalloonWindow_C.CheckDistanceLimit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBalloonWindow_C::CheckDistanceLimit(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BalloonWindow_C", "CheckDistanceLimit");

	Params::BalloonWindow_C_CheckDistanceLimit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

