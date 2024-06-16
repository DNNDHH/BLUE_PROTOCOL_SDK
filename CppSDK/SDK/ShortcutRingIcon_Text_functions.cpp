#pragma once

 

// Package: ShortcutRingIcon_Text

#include "Basic.hpp"

#include "ShortcutRingIcon_Text_classes.hpp"
#include "ShortcutRingIcon_Text_parameters.hpp"


namespace SDK
{

// Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.ExecuteUbergraph_ShortcutRingIcon_Text
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRingIcon_Text_C::ExecuteUbergraph_ShortcutRingIcon_Text(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Text_C", "ExecuteUbergraph_ShortcutRingIcon_Text");

	Params::ShortcutRingIcon_Text_C_ExecuteUbergraph_ShortcutRingIcon_Text Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShortcutRingIcon_Text_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Text_C", "OnMouseLeave");

	Params::ShortcutRingIcon_Text_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShortcutRingIcon_Text_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Text_C", "OnMouseEnter");

	Params::ShortcutRingIcon_Text_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.PlayAnimPressed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_Text_C::PlayAnimPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Text_C", "PlayAnimPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRingIcon_Text.ShortcutRingIcon_Text_C.OnExecuteError
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_Text_C::OnExecuteError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Text_C", "OnExecuteError");

	UObject::ProcessEvent(Func, nullptr);
}

}

