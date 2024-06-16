#pragma once

 

// Package: LibraryMenu_LoginBonusListLine

#include "Basic.hpp"

#include "LibraryMenu_LoginBonusListLine_classes.hpp"
#include "LibraryMenu_LoginBonusListLine_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.IconClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusListLine_C::IconClick__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLine_C", "IconClick__DelegateSignature");

	Params::LibraryMenu_LoginBonusListLine_C_IconClick__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.ExecuteUbergraph_LibraryMenu_LoginBonusListLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusListLine_C::ExecuteUbergraph_LibraryMenu_LoginBonusListLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLine_C", "ExecuteUbergraph_LibraryMenu_LoginBonusListLine");

	Params::LibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.OnIconClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusListLine_C::OnIconClick(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLine_C", "OnIconClick");

	Params::LibraryMenu_LoginBonusListLine_C_OnIconClick Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Finish
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonusListLine_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLine_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_LoginBonusListLine_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLine_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Set Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBLoginBonusWindowDayData       Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// ESlateVisibility                        Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Stump                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Click                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_LoginBonusListLine_C::Set_Data(int32 Param_Index, const struct FSBLoginBonusWindowDayData& Data, ESlateVisibility Param_Visibility, bool Stump, bool Click)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLine_C", "Set Data");

	Params::LibraryMenu_LoginBonusListLine_C_Set_Data Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Data = std::move(Data);
	Parms.Param_Visibility = Param_Visibility;
	Parms.Stump = Stump;
	Parms.Click = Click;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.GetWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULibraryMenu_LoginBonusListLineItem_C*Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusListLine_C::GetWidget(int32 Param_Index, class ULibraryMenu_LoginBonusListLineItem_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusListLine_C", "GetWidget");

	Params::LibraryMenu_LoginBonusListLine_C_GetWidget Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}

}

