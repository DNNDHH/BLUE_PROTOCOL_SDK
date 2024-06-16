#pragma once

 

// Package: OverKeyInput

#include "Basic.hpp"

#include "OverKeyInput_classes.hpp"
#include "OverKeyInput_parameters.hpp"


namespace SDK
{

// Function OverKeyInput.OverKeyInput_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UOverKeyInput_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "OnMouseWheel");

	Params::OverKeyInput_C_OnMouseWheel Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OverKeyInput.OverKeyInput_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UOverKeyInput_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "OnKeyUp");

	Params::OverKeyInput_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OverKeyInput.OverKeyInput_C.ConvertFunctionKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                             Key                                                    (Parm, OutParm, HasGetValueTypeHash)

void UOverKeyInput_C::ConvertFunctionKey(struct FKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "ConvertFunctionKey");

	Params::OverKeyInput_C_ConvertFunctionKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);
}


// Function OverKeyInput.OverKeyInput_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UOverKeyInput_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "OnMouseButtonDown");

	Params::OverKeyInput_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OverKeyInput.OverKeyInput_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UOverKeyInput_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "OnKeyDown");

	Params::OverKeyInput_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OverKeyInput.OverKeyInput_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOverKeyInput_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverKeyInput.OverKeyInput_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOverKeyInput_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "Tick");

	Params::OverKeyInput_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OverKeyInput.OverKeyInput_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EKeyInputMode                           Param_InputMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsFunction                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBPlayerClassKeyConfigData      KeyConfig                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UOverKeyInput_C::Open(EKeyInputMode Param_InputMode, bool Param_IsFunction, const struct FSBPlayerClassKeyConfigData& KeyConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "Open");

	Params::OverKeyInput_C_Open Parms{};

	Parms.Param_InputMode = Param_InputMode;
	Parms.Param_IsFunction = Param_IsFunction;
	Parms.KeyConfig = std::move(KeyConfig);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OverKeyInput.OverKeyInput_C.Close
// (BlueprintCallable, BlueprintEvent)

void UOverKeyInput_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverKeyInput.OverKeyInput_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOverKeyInput_C::OnAnimationStarted(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "OnAnimationStarted");

	Params::OverKeyInput_C_OnAnimationStarted Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OverKeyInput.OverKeyInput_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOverKeyInput_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "OnAnimationFinished");

	Params::OverKeyInput_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OverKeyInput.OverKeyInput_C.ExecuteUbergraph_OverKeyInput
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOverKeyInput_C::ExecuteUbergraph_OverKeyInput(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "ExecuteUbergraph_OverKeyInput");

	Params::OverKeyInput_C_ExecuteUbergraph_OverKeyInput Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OverKeyInput.OverKeyInput_C.KeyInputed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             DownKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UOverKeyInput_C::KeyInputed__DelegateSignature(const struct FKey& DownKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverKeyInput_C", "KeyInputed__DelegateSignature");

	Params::OverKeyInput_C_KeyInputed__DelegateSignature Parms{};

	Parms.DownKey = std::move(DownKey);

	UObject::ProcessEvent(Func, &Parms);
}

}

