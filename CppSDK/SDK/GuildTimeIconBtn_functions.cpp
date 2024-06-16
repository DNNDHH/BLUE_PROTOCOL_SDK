#pragma once

 

// Package: GuildTimeIconBtn

#include "Basic.hpp"

#include "GuildTimeIconBtn_classes.hpp"
#include "GuildTimeIconBtn_parameters.hpp"


namespace SDK
{

// Function GuildTimeIconBtn.GuildTimeIconBtn_C.ExecuteUbergraph_GuildTimeIconBtn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildTimeIconBtn_C::ExecuteUbergraph_GuildTimeIconBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "ExecuteUbergraph_GuildTimeIconBtn");

	Params::GuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGuildTimeIconBtn_C::BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGuildTimeIconBtn_C::BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.Set Editable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEditable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildTimeIconBtn_C::Set_Editable(bool bEditable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "Set Editable");

	Params::GuildTimeIconBtn_C_Set_Editable Parms{};

	Parms.bEditable = bEditable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__Btn_Time_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildTimeIconBtn_C::BndEvt__Btn_Time_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "BndEvt__Btn_Time_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.InitializeTime
// (BlueprintCallable, BlueprintEvent)

void UGuildTimeIconBtn_C::InitializeTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "InitializeTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildTimeIconBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildTimeIconBtn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "PreConstruct");

	Params::GuildTimeIconBtn_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.OnLoaded_456EB643467351B1ABBF91877B36AC98
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildTimeIconBtn_C::OnLoaded_456EB643467351B1ABBF91877B36AC98(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "OnLoaded_456EB643467351B1ABBF91877B36AC98");

	Params::GuildTimeIconBtn_C_OnLoaded_456EB643467351B1ABBF91877B36AC98 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.IsCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsCheck                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildTimeIconBtn_C::IsCheck(bool* Param_IsCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "IsCheck");

	Params::GuildTimeIconBtn_C_IsCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsCheck != nullptr)
		*Param_IsCheck = Parms.Param_IsCheck;
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.GetTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBGuildActivityTime                    Param_Time                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildTimeIconBtn_C::GetTime(ESBGuildActivityTime* Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "GetTime");

	Params::GuildTimeIconBtn_C_GetTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Time != nullptr)
		*Param_Time = Parms.Param_Time;
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.Set Checked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildTimeIconBtn_C::Set_Checked(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "Set Checked");

	Params::GuildTimeIconBtn_C_Set_Checked Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildTimeIconBtn.GuildTimeIconBtn_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGuildTimeIconBtn_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTimeIconBtn_C", "GetToolTipWidget_0");

	Params::GuildTimeIconBtn_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

