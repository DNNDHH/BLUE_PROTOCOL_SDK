#pragma once

 

// Package: ShortcutRingIcon_Warp

#include "Basic.hpp"

#include "ShortcutRingIcon_Warp_classes.hpp"
#include "ShortcutRingIcon_Warp_parameters.hpp"


namespace SDK
{

// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.ExecuteUbergraph_ShortcutRingIcon_Warp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRingIcon_Warp_C::ExecuteUbergraph_ShortcutRingIcon_Warp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Warp_C", "ExecuteUbergraph_ShortcutRingIcon_Warp");

	Params::ShortcutRingIcon_Warp_C_ExecuteUbergraph_ShortcutRingIcon_Warp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShortcutRingIcon_Warp_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Warp_C", "OnMouseLeave");

	Params::ShortcutRingIcon_Warp_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UShortcutRingIcon_Warp_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Warp_C", "OnMouseEnter");

	Params::ShortcutRingIcon_Warp_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.PlayAnimPressed
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_Warp_C::PlayAnimPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Warp_C", "PlayAnimPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.GetToolTip
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UShortcutRingIcon_Warp_C::GetToolTip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Warp_C", "GetToolTip");

	Params::ShortcutRingIcon_Warp_C_GetToolTip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnSetEnableToolTip
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShortcutRingIcon_Warp_C::OnSetEnableToolTip(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Warp_C", "OnSetEnableToolTip");

	Params::ShortcutRingIcon_Warp_C_OnSetEnableToolTip Parms{};

	Parms.InEnable = InEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C.OnExecuteError
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShortcutRingIcon_Warp_C::OnExecuteError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingIcon_Warp_C", "OnExecuteError");

	UObject::ProcessEvent(Func, nullptr);
}

}

