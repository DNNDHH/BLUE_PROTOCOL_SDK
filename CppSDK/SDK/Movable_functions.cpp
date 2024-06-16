#pragma once

 

// Package: Movable

#include "Basic.hpp"

#include "Movable_classes.hpp"
#include "Movable_parameters.hpp"


namespace SDK
{

// Function Movable.Movable_C.ExecuteUbergraph_Movable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMovable_C::ExecuteUbergraph_Movable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Movable_C", "ExecuteUbergraph_Movable");

	Params::Movable_C_ExecuteUbergraph_Movable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Movable.Movable_C.SetEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bEditMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMovable_C::SetEditMode(bool Param_bEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Movable_C", "SetEditMode");

	Params::Movable_C_SetEditMode Parms{};

	Parms.Param_bEditMode = Param_bEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Movable.Movable_C.SetEnableDrag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEditable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMovable_C::SetEnableDrag(bool bEditable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Movable_C", "SetEnableDrag");

	Params::Movable_C_SetEnableDrag Parms{};

	Parms.bEditable = bEditable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Movable.Movable_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMovable_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Movable_C", "PreConstruct");

	Params::Movable_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Movable.Movable_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UMovable_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Movable_C", "OnMouseButtonDown");

	Params::Movable_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Movable.Movable_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMovable_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Movable_C", "OnDragDetected");

	Params::Movable_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function Movable.Movable_C.GetWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                      Param_CreatedUserWidget                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMovable_C::GetWidget(class UUserWidget** Param_CreatedUserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Movable_C", "GetWidget");

	Params::Movable_C_GetWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_CreatedUserWidget != nullptr)
		*Param_CreatedUserWidget = Parms.Param_CreatedUserWidget;
}


// Function Movable.Movable_C.SetResizeableParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    EditMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMovable_C::SetResizeableParentWidget(class UUserWidget* InWidget, bool EditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Movable_C", "SetResizeableParentWidget");

	Params::Movable_C_SetResizeableParentWidget Parms{};

	Parms.InWidget = InWidget;
	Parms.EditMode = EditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Movable.Movable_C.UpdateGradationColor
// (Public, BlueprintCallable, BlueprintEvent)

void UMovable_C::UpdateGradationColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Movable_C", "UpdateGradationColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Movable.Movable_C.SetDescType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMovable_C::SetDescType(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Movable_C", "SetDescType");

	Params::Movable_C_SetDescType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}

}

