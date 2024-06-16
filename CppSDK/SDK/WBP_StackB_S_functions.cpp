#pragma once

 

// Package: WBP_StackB_S

#include "Basic.hpp"

#include "WBP_StackB_S_classes.hpp"
#include "WBP_StackB_S_parameters.hpp"


namespace SDK
{

// Function WBP_StackB_S.WBP_StackB_S_C.ExecuteUbergraph_WBP_StackB_S
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StackB_S_C::ExecuteUbergraph_WBP_StackB_S(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_S_C", "ExecuteUbergraph_WBP_StackB_S");

	Params::WBP_StackB_S_C_ExecuteUbergraph_WBP_StackB_S Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_S.WBP_StackB_S_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StackB_S_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_S_C", "PreConstruct");

	Params::WBP_StackB_S_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_S.WBP_StackB_S_C.Set Stack BIcon Base
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_StackNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StackB_S_C::Set_Stack_BIcon_Base(int32 Param_StackNum, bool IsEffectiveDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_S_C", "Set Stack BIcon Base");

	Params::WBP_StackB_S_C_Set_Stack_BIcon_Base Parms{};

	Parms.Param_StackNum = Param_StackNum;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_S.WBP_StackB_S_C.Set Stack BIcon Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StackB_S_C::Set_Stack_BIcon_Effect(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_S_C", "Set Stack BIcon Effect");

	Params::WBP_StackB_S_C_Set_Stack_BIcon_Effect Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_S.WBP_StackB_S_C.Set Stack BIcon One Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Visible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StackB_S_C::Set_Stack_BIcon_One_Item(const struct FOwnItemInfo& Info, bool IsEffectiveDisplay, bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_S_C", "Set Stack BIcon One Item");

	Params::WBP_StackB_S_C_Set_Stack_BIcon_One_Item Parms{};

	Parms.Info = std::move(Info);
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;
}


// Function WBP_StackB_S.WBP_StackB_S_C.SetNoneVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StackB_S_C::SetNoneVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_S_C", "SetNoneVisible");

	Params::WBP_StackB_S_C_SetNoneVisible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_S.WBP_StackB_S_C.SetStackBIconOneItemBase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBMax                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsEffectiveDisplay                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutIsVisible                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StackB_S_C::SetStackBIconOneItemBase(EItemType InItemType, int32 InStackBNum, int32 InStackBMax, bool InIsEffectiveDisplay, bool* OutIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_S_C", "SetStackBIconOneItemBase");

	Params::WBP_StackB_S_C_SetStackBIconOneItemBase Parms{};

	Parms.InItemType = InItemType;
	Parms.InStackBNum = InStackBNum;
	Parms.InStackBMax = InStackBMax;
	Parms.InIsEffectiveDisplay = InIsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsVisible != nullptr)
		*OutIsVisible = Parms.OutIsVisible;
}

}

