#pragma once

 

// Package: RankingMenu_CategoryButtonList

#include "Basic.hpp"

#include "RankingMenu_CategoryButtonList_classes.hpp"
#include "RankingMenu_CategoryButtonList_parameters.hpp"


namespace SDK
{

// Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_CategoryButtonList_C::OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_CategoryButtonList_C", "OnClick__DelegateSignature");

	Params::RankingMenu_CategoryButtonList_C_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.ExecuteUbergraph_RankingMenu_CategoryButtonList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_CategoryButtonList_C::ExecuteUbergraph_RankingMenu_CategoryButtonList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_CategoryButtonList_C", "ExecuteUbergraph_RankingMenu_CategoryButtonList");

	Params::RankingMenu_CategoryButtonList_C_ExecuteUbergraph_RankingMenu_CategoryButtonList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.ChangeFocusButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_CategoryButtonList_C::ChangeFocusButton(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_CategoryButtonList_C", "ChangeFocusButton");

	Params::RankingMenu_CategoryButtonList_C_ChangeFocusButton Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URankingMenu_CategoryButtonList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_CategoryButtonList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_CategoryButtonList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_CategoryButtonList_C", "PreConstruct");

	Params::RankingMenu_CategoryButtonList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

