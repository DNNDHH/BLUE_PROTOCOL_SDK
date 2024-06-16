#pragma once

 

// Package: Fang_expedition_DungeonStatus

#include "Basic.hpp"

#include "Fang_expedition_DungeonStatus_classes.hpp"
#include "Fang_expedition_DungeonStatus_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.OnTicketButtonClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ClickedObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonStatus_C::OnTicketButtonClick__DelegateSignature(class UObject* ClickedObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonStatus_C", "OnTicketButtonClick__DelegateSignature");

	Params::Fang_expedition_DungeonStatus_C_OnTicketButtonClick__DelegateSignature Parms{};

	Parms.ClickedObject = ClickedObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.OnGaugeAnimationFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonStatus_C::OnGaugeAnimationFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonStatus_C", "OnGaugeAnimationFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.ExecuteUbergraph_Fang_expedition_DungeonStatus
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonStatus_C::ExecuteUbergraph_Fang_expedition_DungeonStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonStatus_C", "ExecuteUbergraph_Fang_expedition_DungeonStatus");

	Params::Fang_expedition_DungeonStatus_C_ExecuteUbergraph_Fang_expedition_DungeonStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.RemoveTooltip
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonStatus_C::RemoveTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonStatus_C", "RemoveTooltip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DungeonStatus_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonStatus_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.WidgetAnimationEvt_AnmGaugeFull_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UFang_expedition_DungeonStatus_C::WidgetAnimationEvt_AnmGaugeFull_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonStatus_C", "WidgetAnimationEvt_AnmGaugeFull_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.BndEvt__Fang_expedition_DungeonStatus_TokenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DungeonStatus_C::BndEvt__Fang_expedition_DungeonStatus_TokenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonStatus_C", "BndEvt__Fang_expedition_DungeonStatus_TokenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.SetGaugeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Now                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonStatus_C::SetGaugeData(int32 Now, int32 Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonStatus_C", "SetGaugeData");

	Params::Fang_expedition_DungeonStatus_C_SetGaugeData Parms{};

	Parms.Now = Now;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.PlaySlotAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonStatus_C::PlaySlotAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonStatus_C", "PlaySlotAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.UpdateBonusIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonStatus_C::UpdateBonusIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonStatus_C", "UpdateBonusIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.SetTokenBtnActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DungeonStatus_C::SetTokenBtnActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonStatus_C", "SetTokenBtnActive");

	Params::Fang_expedition_DungeonStatus_C_SetTokenBtnActive Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}

}

