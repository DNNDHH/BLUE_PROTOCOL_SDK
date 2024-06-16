#pragma once

 

// Package: BP_ChoiceDialog

#include "Basic.hpp"

#include "BP_ChoiceDialog_classes.hpp"
#include "BP_ChoiceDialog_parameters.hpp"


namespace SDK
{

// Function BP_ChoiceDialog.BP_ChoiceDialog_C.ExecuteUbergraph_BP_ChoiceDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChoiceDialog_C::ExecuteUbergraph_BP_ChoiceDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "ExecuteUbergraph_BP_ChoiceDialog");

	Params::BP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChoiceDialog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "Tick");

	Params::BP_ChoiceDialog_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetQuestion
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ChoiceDialog_C::SetQuestion(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "SetQuestion");

	Params::BP_ChoiceDialog_C_SetQuestion Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.AddItemFromArray
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                     ItemTexts                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ChoiceDialog_C::AddItemFromArray(const TArray<class FText>& ItemTexts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "AddItemFromArray");

	Params::BP_ChoiceDialog_C_AddItemFromArray Parms{};

	Parms.ItemTexts = std::move(ItemTexts);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.Show
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_ChoiceDialog_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChoiceDialog_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "OnAnimationFinished");

	Params::BP_ChoiceDialog_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.OnClicked_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ChoiceDialogItem_C*           Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChoiceDialog_C::OnClicked_Event_0(class UBP_ChoiceDialogItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "OnClicked_Event_0");

	Params::BP_ChoiceDialog_C_OnClicked_Event_0 Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.AddItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_ChoiceDialog_C::AddItem(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "AddItem");

	Params::BP_ChoiceDialog_C_AddItem Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ChoiceDialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ChoiceDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.TimeUp_Event
// (BlueprintCallable, BlueprintEvent)

void UBP_ChoiceDialog_C::TimeUp_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "TimeUp_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChoiceDialog.BP_ChoiceDialog_C.UpdateTimeLimit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChoiceDialog_C::UpdateTimeLimit(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialog_C", "UpdateTimeLimit");

	Params::BP_ChoiceDialog_C_UpdateTimeLimit Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

