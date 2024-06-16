#pragma once

 

// Package: UMG_LoginBonusList

#include "Basic.hpp"

#include "UMG_LoginBonusList_classes.hpp"
#include "UMG_LoginBonusList_parameters.hpp"


namespace SDK
{

// Function UMG_LoginBonusList.UMG_LoginBonusList_C.StumpAnimationFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusList_C::StumpAnimationFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "StumpAnimationFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnListInitComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusList_C::OnListInitComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "OnListInitComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.ListItemClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoginBonusList_C::ListItemClick__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "ListItemClick__DelegateSignature");

	Params::UMG_LoginBonusList_C_ListItemClick__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.ExecuteUbergraph_UMG_LoginBonusList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoginBonusList_C::ExecuteUbergraph_UMG_LoginBonusList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "ExecuteUbergraph_UMG_LoginBonusList");

	Params::UMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnListItemClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_LoginBonusListLineItem_C*    SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoginBonusList_C::OnListItemClick(int32 Param_Index, class UUMG_LoginBonusListLineItem_C* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "OnListItemClick");

	Params::UMG_LoginBonusList_C_OnListItemClick Parms{};

	Parms.Param_Index = Param_Index;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnImageLoadComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoginBonusList_C::OnImageLoadComplete(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "OnImageLoadComplete");

	Params::UMG_LoginBonusList_C_OnImageLoadComplete Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.Finish
// (BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusList_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnStumpAnimationFinish
// (BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusList_C::OnStumpAnimationFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "OnStumpAnimationFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusList_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LoginBonusList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLoginBonusWindowData          DataList                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    MouseClick                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoginBonusList_C::SetData(const struct FSBLoginBonusWindowData& DataList, bool MouseClick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "SetData");

	Params::UMG_LoginBonusList_C_SetData Parms{};

	Parms.DataList = std::move(DataList);
	Parms.MouseClick = MouseClick;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.PlayStampAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Play                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoginBonusList_C::PlayStampAnimation(int32 Param_Index, bool* Play)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "PlayStampAnimation");

	Params::UMG_LoginBonusList_C_PlayStampAnimation Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Play != nullptr)
		*Play = Parms.Play;
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.SetupMouseClickEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusList_C::SetupMouseClickEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "SetupMouseClickEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnCloseAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusList_C::OnCloseAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusList_C", "OnCloseAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}

}

