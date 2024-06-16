#pragma once

 

// Package: RankingMenu_CategoryButton

#include "Basic.hpp"

#include "RankingMenu_CategoryButton_classes.hpp"
#include "RankingMenu_CategoryButton_parameters.hpp"


namespace SDK
{

// Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ButtonId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_CategoryButton_C::OnClick__DelegateSignature(int32 Param_ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_CategoryButton_C", "OnClick__DelegateSignature");

	Params::RankingMenu_CategoryButton_C_OnClick__DelegateSignature Parms{};

	Parms.Param_ButtonId = Param_ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.ExecuteUbergraph_RankingMenu_CategoryButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_CategoryButton_C::ExecuteUbergraph_RankingMenu_CategoryButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_CategoryButton_C", "ExecuteUbergraph_RankingMenu_CategoryButton");

	Params::RankingMenu_CategoryButton_C_ExecuteUbergraph_RankingMenu_CategoryButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URankingMenu_CategoryButton_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_CategoryButton_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URankingMenu_CategoryButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_CategoryButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_CategoryButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_CategoryButton_C", "PreConstruct");

	Params::RankingMenu_CategoryButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu_CategoryButton.RankingMenu_CategoryButton_C.SetMenuFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InFocus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_CategoryButton_C::SetMenuFocus(bool InFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_CategoryButton_C", "SetMenuFocus");

	Params::RankingMenu_CategoryButton_C_SetMenuFocus Parms{};

	Parms.InFocus = InFocus;

	UObject::ProcessEvent(Func, &Parms);
}

}

