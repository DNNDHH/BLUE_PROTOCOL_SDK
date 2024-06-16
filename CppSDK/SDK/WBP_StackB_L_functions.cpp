#pragma once

 

// Package: WBP_StackB_L

#include "Basic.hpp"

#include "WBP_StackB_L_classes.hpp"
#include "WBP_StackB_L_parameters.hpp"


namespace SDK
{

// Function WBP_StackB_L.WBP_StackB_L_C.ExecuteUbergraph_WBP_StackB_L
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StackB_L_C::ExecuteUbergraph_WBP_StackB_L(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_L_C", "ExecuteUbergraph_WBP_StackB_L");

	Params::WBP_StackB_L_C_ExecuteUbergraph_WBP_StackB_L Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_L.WBP_StackB_L_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StackB_L_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_L_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StackB_L.WBP_StackB_L_C.SetStackBNumByItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StackB_L_C::SetStackBNumByItemInfo(const struct FOwnItemInfo& ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_L_C", "SetStackBNumByItemInfo");

	Params::WBP_StackB_L_C_SetStackBNumByItemInfo Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_L.WBP_StackB_L_C.SetStackBNum
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_StackBNum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StackB_L_C::SetStackBNum(int32 Param_StackBNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_L_C", "SetStackBNum");

	Params::WBP_StackB_L_C_SetStackBNum Parms{};

	Parms.Param_StackBNum = Param_StackBNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_L.WBP_StackB_L_C.UpdateStackBMax
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StackB_L_C::UpdateStackBMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_L_C", "UpdateStackBMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StackB_L.WBP_StackB_L_C.SetStackBMax
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_StackBMax                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StackB_L_C::SetStackBMax(int32 Param_StackBMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_L_C", "SetStackBMax");

	Params::WBP_StackB_L_C_SetStackBMax Parms{};

	Parms.Param_StackBMax = Param_StackBMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_L.WBP_StackB_L_C.SetVisibleStackBMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_VisibleStackBMax                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StackB_L_C::SetVisibleStackBMax(bool Param_VisibleStackBMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_L_C", "SetVisibleStackBMax");

	Params::WBP_StackB_L_C_SetVisibleStackBMax Parms{};

	Parms.Param_VisibleStackBMax = Param_VisibleStackBMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StackB_L.WBP_StackB_L_C.UpdateStackBView
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StackB_L_C::UpdateStackBView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StackB_L_C", "UpdateStackBView");

	UObject::ProcessEvent(Func, nullptr);
}

}

