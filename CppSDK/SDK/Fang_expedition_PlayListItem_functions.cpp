#pragma once

 

// Package: Fang_expedition_PlayListItem

#include "Basic.hpp"

#include "Fang_expedition_PlayListItem_classes.hpp"
#include "Fang_expedition_PlayListItem_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.OnClick_Playing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListItem_C::OnClick_Playing__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListItem_C", "OnClick_Playing__DelegateSignature");

	Params::Fang_expedition_PlayListItem_C_OnClick_Playing__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.OnClick_Finish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListItem_C::OnClick_Finish__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListItem_C", "OnClick_Finish__DelegateSignature");

	Params::Fang_expedition_PlayListItem_C_OnClick_Finish__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.ExecuteUbergraph_Fang_expedition_PlayListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListItem_C::ExecuteUbergraph_Fang_expedition_PlayListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListItem_C", "ExecuteUbergraph_Fang_expedition_PlayListItem");

	Params::Fang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_PlayListItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.CB_FinishButtonClick
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_PlayListItem_C::CB_FinishButtonClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListItem_C", "CB_FinishButtonClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.CB_PlayButtonClick
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_PlayListItem_C::CB_PlayButtonClick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListItem_C", "CB_PlayButtonClick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_PlayListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionPlayData       PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_PlayListItem_C::SetData(int32 Param_Index, struct FSBFang_expeditionPlayData& PlayData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListItem_C", "SetData");

	Params::Fang_expedition_PlayListItem_C_SetData Parms{};

	Parms.Param_Index = Param_Index;
	Parms.PlayData = std::move(PlayData);

	UObject::ProcessEvent(Func, &Parms);

	PlayData = std::move(Parms.PlayData);
}


// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_PlayListItem_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListItem_C", "SetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetBlank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TextVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   TimeNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListItem_C::SetBlank(bool TextVisibility, int32 TimeNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListItem_C", "SetBlank");

	Params::Fang_expedition_PlayListItem_C_SetBlank Parms{};

	Parms.TextVisibility = TextVisibility;
	Parms.TimeNum = TimeNum;

	UObject::ProcessEvent(Func, &Parms);
}

}

