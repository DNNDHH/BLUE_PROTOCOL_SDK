#pragma once

 

// Package: ShortcutRingIcon_None

#include "Basic.hpp"

#include "ShortcutRingIcon_None_classes.hpp"
#include "ShortcutRingIcon_None_parameters.hpp"


namespace SDK
{

// Function ShortcutRingIcon_None.ShortcutRingIcon_None_C.ExecuteUbergraph_ShortcutRingIcon_None
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRingIcon_None_C::ExecuteUbergraph_ShortcutRingIcon_None(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_None_C", "ExecuteUbergraph_ShortcutRingIcon_None");

	Params::ShortcutRingIcon_None_C_ExecuteUbergraph_ShortcutRingIcon_None Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_None.ShortcutRingIcon_None_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShortcutRingIcon_None_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_None_C", "OnMouseLeave");

	Params::ShortcutRingIcon_None_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_None.ShortcutRingIcon_None_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShortcutRingIcon_None_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_None_C", "OnMouseEnter");

	Params::ShortcutRingIcon_None_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_None.ShortcutRingIcon_None_C.PlayAnimPressed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_None_C::PlayAnimPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_None_C", "PlayAnimPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRingIcon_None.ShortcutRingIcon_None_C.OnExecuteError
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_None_C::OnExecuteError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_None_C", "OnExecuteError");

	UObject::ProcessEvent(Func, nullptr);
}

}

