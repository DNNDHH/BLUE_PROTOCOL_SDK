#pragma once

 

// Package: NpcBalloonWindow

#include "Basic.hpp"

#include "NpcBalloonWindow_classes.hpp"
#include "NpcBalloonWindow_parameters.hpp"


namespace SDK
{

// Function NpcBalloonWindow.NpcBalloonWindow_C.OnRemove__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNpcBalloonWindow_C::OnRemove__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "OnRemove__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcBalloonWindow.NpcBalloonWindow_C.ExecuteUbergraph_NpcBalloonWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcBalloonWindow_C::ExecuteUbergraph_NpcBalloonWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "ExecuteUbergraph_NpcBalloonWindow");

	Params::NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcBalloonWindow.NpcBalloonWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNpcBalloonWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcBalloonWindow.NpcBalloonWindow_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNpcBalloonWindow_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcBalloonWindow.NpcBalloonWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNpcBalloonWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcBalloonWindow.NpcBalloonWindow_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcBalloonWindow_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "OnAnimationFinished");

	Params::NpcBalloonWindow_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcBalloonWindow.NpcBalloonWindow_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UNpcBalloonWindow_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcBalloonWindow.NpcBalloonWindow_C.Show
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ACharacter*                       Param_AttachCharacter                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_AttachTransformName                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AutoCloseTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcBalloonWindow_C::Show(const class FText& Message, class ACharacter* Param_AttachCharacter, const class FName& Param_AttachTransformName, float AutoCloseTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "Show");

	Params::NpcBalloonWindow_C_Show Parms{};

	Parms.Message = std::move(Message);
	Parms.Param_AttachCharacter = Param_AttachCharacter;
	Parms.Param_AttachTransformName = Param_AttachTransformName;
	Parms.AutoCloseTime = AutoCloseTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcBalloonWindow.NpcBalloonWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcBalloonWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "Tick");

	Params::NpcBalloonWindow_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcBalloonWindow.NpcBalloonWindow_C.AdjustPosition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

struct FVector2D UNpcBalloonWindow_C::AdjustPosition(const struct FVector2D& Position, bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "AdjustPosition");

	Params::NpcBalloonWindow_C_AdjustPosition Parms{};

	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;
}


// Function NpcBalloonWindow.NpcBalloonWindow_C.GetBasePosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UNpcBalloonWindow_C::GetBasePosition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "GetBasePosition");

	Params::NpcBalloonWindow_C_GetBasePosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NpcBalloonWindow.NpcBalloonWindow_C.CheckDistanceLimit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNpcBalloonWindow_C::CheckDistanceLimit(bool* Result) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcBalloonWindow_C", "CheckDistanceLimit");

	Params::NpcBalloonWindow_C_CheckDistanceLimit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

