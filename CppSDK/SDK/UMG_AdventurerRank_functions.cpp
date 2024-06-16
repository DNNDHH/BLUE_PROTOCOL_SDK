#pragma once

 

// Package: UMG_AdventurerRank

#include "Basic.hpp"

#include "UMG_AdventurerRank_classes.hpp"
#include "UMG_AdventurerRank_parameters.hpp"


namespace SDK
{

// Function UMG_AdventurerRank.UMG_AdventurerRank_C.OnSubMenuChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdventurerRank_C::OnSubMenuChanged__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_C", "OnSubMenuChanged__DelegateSignature");

	Params::UMG_AdventurerRank_C_OnSubMenuChanged__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdventurerRank.UMG_AdventurerRank_C.OnIsCmnBackBtnVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AdventurerRank_C::OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_C", "OnIsCmnBackBtnVisible__DelegateSignature");

	Params::UMG_AdventurerRank_C_OnIsCmnBackBtnVisible__DelegateSignature Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdventurerRank.UMG_AdventurerRank_C.ExecuteUbergraph_UMG_AdventurerRank
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdventurerRank_C::ExecuteUbergraph_UMG_AdventurerRank(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_C", "ExecuteUbergraph_UMG_AdventurerRank");

	Params::UMG_AdventurerRank_C_ExecuteUbergraph_UMG_AdventurerRank Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdventurerRank.UMG_AdventurerRank_C.BndEvt__UMG_AdventurerRank_CmnBtnBack_1_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_AdventurerRank_C::BndEvt__UMG_AdventurerRank_CmnBtnBack_1_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_C", "BndEvt__UMG_AdventurerRank_CmnBtnBack_1_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdventurerRank.UMG_AdventurerRank_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UUMG_AdventurerRank_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdventurerRank.UMG_AdventurerRank_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UUMG_AdventurerRank_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdventurerRank.UMG_AdventurerRank_C.OnDetailsMode_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDetailed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AdventurerRank_C::OnDetailsMode_Event(bool IsDetailed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_C", "OnDetailsMode_Event");

	Params::UMG_AdventurerRank_C_OnDetailsMode_Event Parms{};

	Parms.IsDetailed = IsDetailed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdventurerRank.UMG_AdventurerRank_C.OnAdventureBoardBtn_Event
// (BlueprintCallable, BlueprintEvent)

void UUMG_AdventurerRank_C::OnAdventureBoardBtn_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_C", "OnAdventureBoardBtn_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdventurerRank.UMG_AdventurerRank_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_AdventurerRank_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdventurerRank.UMG_AdventurerRank_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_AdventurerRank_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdventurerRank.UMG_AdventurerRank_C.InAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_AdventurerRank_C::InAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdventurerRank_C", "InAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

