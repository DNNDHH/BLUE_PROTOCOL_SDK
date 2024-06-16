#pragma once

 

// Package: CommandMenu_SubMenuLine

#include "Basic.hpp"

#include "CommandMenu_SubMenuLine_classes.hpp"
#include "CommandMenu_SubMenuLine_parameters.hpp"


namespace SDK
{

// Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.ExecuteUbergraph_CommandMenu_SubMenuLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_SubMenuLine_C::ExecuteUbergraph_CommandMenu_SubMenuLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_SubMenuLine_C", "ExecuteUbergraph_CommandMenu_SubMenuLine");

	Params::CommandMenu_SubMenuLine_C_ExecuteUbergraph_CommandMenu_SubMenuLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.SetBtnNumSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_BtnNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_SubMenuLine_C::SetBtnNumSwitch(int32 Param_BtnNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_SubMenuLine_C", "SetBtnNumSwitch");

	Params::CommandMenu_SubMenuLine_C_SetBtnNumSwitch Parms{};

	Parms.Param_BtnNum = Param_BtnNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_SubMenuLine_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_SubMenuLine_C", "PreConstruct");

	Params::CommandMenu_SubMenuLine_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_SubMenuLine.CommandMenu_SubMenuLine_C.InAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UCommandMenu_SubMenuLine_C::InAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_SubMenuLine_C", "InAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

