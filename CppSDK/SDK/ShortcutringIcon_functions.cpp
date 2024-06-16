#pragma once

 

// Package: ShortcutringIcon

#include "Basic.hpp"

#include "ShortcutringIcon_classes.hpp"
#include "ShortcutringIcon_parameters.hpp"


namespace SDK
{

// Function ShortcutringIcon.ShortcutringIcon_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutringIcon_C::OnHover__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnHover__DelegateSignature");

	Params::ShortcutringIcon_C_OnHover__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutringIcon.ShortcutringIcon_C.OnUnhover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutringIcon_C::OnUnhover__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnUnhover__DelegateSignature");

	Params::ShortcutringIcon_C_OnUnhover__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutringIcon.ShortcutringIcon_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutringIcon_C::OnClick__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnClick__DelegateSignature");

	Params::ShortcutringIcon_C_OnClick__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutringIcon.ShortcutringIcon_C.OnClickRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShortcutringIcon_C*              Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutringIcon_C::OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnClickRight__DelegateSignature");

	Params::ShortcutringIcon_C_OnClickRight__DelegateSignature Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutringIcon.ShortcutringIcon_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UShortcutringIcon_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnMouseButtonDown");

	Params::ShortcutringIcon_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ShortcutringIcon.ShortcutringIcon_C.SetDragDropOperation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDragDropOperation*               InDradDropOperation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutringIcon_C::SetDragDropOperation(class UDragDropOperation* InDradDropOperation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "SetDragDropOperation");

	Params::ShortcutringIcon_C_SetDragDropOperation Parms{};

	Parms.InDradDropOperation = InDradDropOperation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutringIcon.ShortcutringIcon_C.OnCreateNoneIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBShortcutRingIconBase*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBShortcutRingIconBase* UShortcutringIcon_C::OnCreateNoneIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnCreateNoneIcon");

	Params::ShortcutringIcon_C_OnCreateNoneIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ShortcutringIcon.ShortcutringIcon_C.OnCreateBasicIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBShortcutRingIconBase*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBShortcutRingIconBase* UShortcutringIcon_C::OnCreateBasicIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnCreateBasicIcon");

	Params::ShortcutringIcon_C_OnCreateBasicIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ShortcutringIcon.ShortcutringIcon_C.OnCreateTextIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBShortcutRingIconBase*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBShortcutRingIconBase* UShortcutringIcon_C::OnCreateTextIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnCreateTextIcon");

	Params::ShortcutringIcon_C_OnCreateTextIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ShortcutringIcon.ShortcutringIcon_C.OnCreateCommandIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBShortcutRingIconBase*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBShortcutRingIconBase* UShortcutringIcon_C::OnCreateCommandIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnCreateCommandIcon");

	Params::ShortcutringIcon_C_OnCreateCommandIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ShortcutringIcon.ShortcutringIcon_C.OnCreateWarpIcon
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBShortcutRingIconBase*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBShortcutRingIconBase* UShortcutringIcon_C::OnCreateWarpIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnCreateWarpIcon");

	Params::ShortcutringIcon_C_OnCreateWarpIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ShortcutringIcon.ShortcutringIcon_C.OnBindIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBShortcutRingIconBase*          InIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutringIcon_C::OnBindIcon(class USBShortcutRingIconBase* InIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnBindIcon");

	Params::ShortcutringIcon_C_OnBindIcon Parms{};

	Parms.InIcon = InIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutringIcon.ShortcutringIcon_C.OnUnbindIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBShortcutRingIconBase*          InIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutringIcon_C::OnUnbindIcon(class USBShortcutRingIconBase* InIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "OnUnbindIcon");

	Params::ShortcutringIcon_C_OnUnbindIcon Parms{};

	Parms.InIcon = InIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutringIcon.ShortcutringIcon_C.Hover
// (Private, BlueprintCallable, BlueprintEvent)

void UShortcutringIcon_C::Hover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "Hover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutringIcon.ShortcutringIcon_C.Unhover
// (Private, BlueprintCallable, BlueprintEvent)

void UShortcutringIcon_C::Unhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "Unhover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutringIcon.ShortcutringIcon_C.GetDragDropOperation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDragDropOperation*               OutDragDropOperation                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutringIcon_C::GetDragDropOperation(class UDragDropOperation** OutDragDropOperation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutringIcon_C", "GetDragDropOperation");

	Params::ShortcutringIcon_C_GetDragDropOperation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutDragDropOperation != nullptr)
		*OutDragDropOperation = Parms.OutDragDropOperation;
}

}

