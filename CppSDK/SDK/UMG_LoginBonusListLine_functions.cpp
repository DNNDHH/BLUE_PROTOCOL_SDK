#pragma once

 

// Package: UMG_LoginBonusListLine

#include "Basic.hpp"

#include "UMG_LoginBonusListLine_classes.hpp"
#include "UMG_LoginBonusListLine_parameters.hpp"


namespace SDK
{

// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.StumpAnimationFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusListLine_C::StumpAnimationFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "StumpAnimationFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.IconClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_LoginBonusListLineItem_C*    SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoginBonusListLine_C::IconClick__DelegateSignature(int32 Param_Index, class UUMG_LoginBonusListLineItem_C* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "IconClick__DelegateSignature");

	Params::UMG_LoginBonusListLine_C_IconClick__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.ExecuteUbergraph_UMG_LoginBonusListLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoginBonusListLine_C::ExecuteUbergraph_UMG_LoginBonusListLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "ExecuteUbergraph_UMG_LoginBonusListLine");

	Params::UMG_LoginBonusListLine_C_ExecuteUbergraph_UMG_LoginBonusListLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnIconClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_LoginBonusListLineItem_C*    SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoginBonusListLine_C::OnIconClick(int32 ID, class UUMG_LoginBonusListLineItem_C* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "OnIconClick");

	Params::UMG_LoginBonusListLine_C_OnIconClick Parms{};

	Parms.ID = ID;
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Finish
// (BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusListLine_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusListLine_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnStumpAnimationFinish
// (BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusListLine_C::OnStumpAnimationFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "OnStumpAnimationFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.Set Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBLoginBonusWindowDayData       Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// ESlateVisibility                        Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Stump                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Click                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoginBonusListLine_C::Set_Data(int32 Param_Index, const struct FSBLoginBonusWindowDayData& Data, ESlateVisibility Param_Visibility, bool Stump, bool Click)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "Set Data");

	Params::UMG_LoginBonusListLine_C_Set_Data Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Data = std::move(Data);
	Parms.Param_Visibility = Param_Visibility;
	Parms.Stump = Stump;
	Parms.Click = Click;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.GetWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_LoginBonusListLineItem_C*    Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoginBonusListLine_C::GetWidget(int32 Param_Index, class UUMG_LoginBonusListLineItem_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "GetWidget");

	Params::UMG_LoginBonusListLine_C_GetWidget Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.PlayStumpAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoginBonusListLine_C::PlayStumpAnimation(int32 Param_Index, bool* IsPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "PlayStumpAnimation");

	Params::UMG_LoginBonusListLine_C_PlayStumpAnimation Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlay != nullptr)
		*IsPlay = Parms.IsPlay;
}


// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.ClearItemSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusListLine_C::ClearItemSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "ClearItemSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LoginBonusListLine.UMG_LoginBonusListLine_C.OnCloseAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LoginBonusListLine_C::OnCloseAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LoginBonusListLine_C", "OnCloseAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}

}

