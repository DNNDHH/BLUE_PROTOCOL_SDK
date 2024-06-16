#pragma once

 

// Package: ItemSelectorIcon

#include "Basic.hpp"

#include "ItemSelectorIcon_classes.hpp"
#include "ItemSelectorIcon_parameters.hpp"


namespace SDK
{

// Function ItemSelectorIcon.ItemSelectorIcon_C.ExecuteUbergraph_ItemSelectorIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemSelectorIcon_C::ExecuteUbergraph_ItemSelectorIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorIcon_C", "ExecuteUbergraph_ItemSelectorIcon");

	Params::ItemSelectorIcon_C_ExecuteUbergraph_ItemSelectorIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelectorIcon.ItemSelectorIcon_C.WidgetAnimationEvt_MoveUpDown_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UItemSelectorIcon_C::WidgetAnimationEvt_MoveUpDown_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorIcon_C", "WidgetAnimationEvt_MoveUpDown_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelectorIcon.ItemSelectorIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemSelectorIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationUp
// (Public, BlueprintCallable, BlueprintEvent)

void UItemSelectorIcon_C::PlayAnimationUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorIcon_C", "PlayAnimationUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationDown
// (Public, BlueprintCallable, BlueprintEvent)

void UItemSelectorIcon_C::PlayAnimationDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorIcon_C", "PlayAnimationDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelectorIcon.ItemSelectorIcon_C.Setup
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemSelectorIcon_C::Setup(int32 InItemIndex, int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorIcon_C", "Setup");

	Params::ItemSelectorIcon_C_Setup Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemSelectorIcon.ItemSelectorIcon_C.Empty
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemSelectorIcon_C::Empty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorIcon_C", "Empty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemSelectorIcon_C::PlayAnimationLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorIcon_C", "PlayAnimationLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationRight
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemSelectorIcon_C::PlayAnimationRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorIcon_C", "PlayAnimationRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationScaleUp
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemSelectorIcon_C::PlayAnimationScaleUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorIcon_C", "PlayAnimationScaleUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemSelectorIcon.ItemSelectorIcon_C.PlayAnimationScaleDown
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemSelectorIcon_C::PlayAnimationScaleDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorIcon_C", "PlayAnimationScaleDown");

	UObject::ProcessEvent(Func, nullptr);
}

}

