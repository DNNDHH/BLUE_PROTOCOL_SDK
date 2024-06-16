#pragma once

 

// Package: UIWrapperForMouseDrag

#include "Basic.hpp"

#include "UIWrapperForMouseDrag_classes.hpp"
#include "UIWrapperForMouseDrag_parameters.hpp"


namespace SDK
{

// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.EventOnButtonDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUIWrapperForMouseDrag_C::EventOnButtonDown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIWrapperForMouseDrag_C", "EventOnButtonDown__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.EventOnButtonUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUIWrapperForMouseDrag_C::EventOnButtonUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIWrapperForMouseDrag_C", "EventOnButtonUp__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.ExecuteUbergraph_UIWrapperForMouseDrag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIWrapperForMouseDrag_C::ExecuteUbergraph_UIWrapperForMouseDrag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIWrapperForMouseDrag_C", "ExecuteUbergraph_UIWrapperForMouseDrag");

	Params::UIWrapperForMouseDrag_C_ExecuteUbergraph_UIWrapperForMouseDrag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIWrapperForMouseDrag_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIWrapperForMouseDrag_C", "Tick");

	Params::UIWrapperForMouseDrag_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.GetMousePosition
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Param_MousePosition                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIWrapperForMouseDrag_C::GetMousePosition(struct FVector2D* Param_MousePosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIWrapperForMouseDrag_C", "GetMousePosition");

	Params::UIWrapperForMouseDrag_C_GetMousePosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_MousePosition != nullptr)
		*Param_MousePosition = std::move(Parms.Param_MousePosition);
}


// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIWrapperForMouseDrag_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIWrapperForMouseDrag_C", "OnMouseButtonDown_0");

	Params::UIWrapperForMouseDrag_C_OnMouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UIWrapperForMouseDrag.UIWrapperForMouseDrag_C.OnMouseButtonUp_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIWrapperForMouseDrag_C::OnMouseButtonUp_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIWrapperForMouseDrag_C", "OnMouseButtonUp_0");

	Params::UIWrapperForMouseDrag_C_OnMouseButtonUp_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

