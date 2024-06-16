#pragma once

 

// Package: InhelitPerkView

#include "Basic.hpp"

#include "InhelitPerkView_classes.hpp"
#include "InhelitPerkView_parameters.hpp"


namespace SDK
{

// Function InhelitPerkView.InhelitPerkView_C.ChangePerkRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    ChangeTarget                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UInhelitPerkView_C::ChangePerkRequest__DelegateSignature(const struct FSBStackBPerk& ChangeTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "ChangePerkRequest__DelegateSignature");

	Params::InhelitPerkView_C_ChangePerkRequest__DelegateSignature Parms{};

	Parms.ChangeTarget = std::move(ChangeTarget);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkView.InhelitPerkView_C.PurgeRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    PurgeTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UInhelitPerkView_C::PurgeRequest__DelegateSignature(const struct FSBStackBPerk& PurgeTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "PurgeRequest__DelegateSignature");

	Params::InhelitPerkView_C_PurgeRequest__DelegateSignature Parms{};

	Parms.PurgeTarget = std::move(PurgeTarget);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkView.InhelitPerkView_C.ExecuteUbergraph_InhelitPerkView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInhelitPerkView_C::ExecuteUbergraph_InhelitPerkView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "ExecuteUbergraph_InhelitPerkView");

	Params::InhelitPerkView_C_ExecuteUbergraph_InhelitPerkView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkView.InhelitPerkView_C.InhelitPerkView ChangePerk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    SelectData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UInhelitPerkView_C::InhelitPerkView_ChangePerk(const struct FSBStackBPerk& SelectData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "InhelitPerkView ChangePerk");

	Params::InhelitPerkView_C_InhelitPerkView_ChangePerk Parms{};

	Parms.SelectData = std::move(SelectData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkView.InhelitPerkView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInhelitPerkView_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "PreConstruct");

	Params::InhelitPerkView_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkView.InhelitPerkView_C.GenerateView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInhelitPerkView_C::GenerateView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "GenerateView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkView.InhelitPerkView_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UInhelitPerkView_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InhelitPerkView.InhelitPerkView_C.SetPerkB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBStackBPerk>            Param_Perkb                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInhelitPerkView_C::SetPerkB(TArray<struct FSBStackBPerk>& Param_Perkb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "SetPerkB");

	Params::InhelitPerkView_C_SetPerkB Parms{};

	Parms.Param_Perkb = std::move(Param_Perkb);

	UObject::ProcessEvent(Func, &Parms);

	Param_Perkb = std::move(Parms.Param_Perkb);
}


// Function InhelitPerkView.InhelitPerkView_C.SetBaseWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_BaseWeapon                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UInhelitPerkView_C::SetBaseWeapon(const struct FOwnItemInfo& Param_BaseWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "SetBaseWeapon");

	Params::InhelitPerkView_C_SetBaseWeapon Parms{};

	Parms.Param_BaseWeapon = std::move(Param_BaseWeapon);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkView.InhelitPerkView_C.InhelitPerkView_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    SelectPerk                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UInhelitPerkView_C::InhelitPerkView_AutoGenFunc(const struct FSBStackBPerk& SelectPerk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "InhelitPerkView_AutoGenFunc");

	Params::InhelitPerkView_C_InhelitPerkView_AutoGenFunc Parms{};

	Parms.SelectPerk = std::move(SelectPerk);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkView.InhelitPerkView_C.DisableAllChangeBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bDisableChangeBtn                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInhelitPerkView_C::DisableAllChangeBtn(bool bDisableChangeBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "DisableAllChangeBtn");

	Params::InhelitPerkView_C_DisableAllChangeBtn Parms{};

	Parms.bDisableChangeBtn = bDisableChangeBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InhelitPerkView.InhelitPerkView_C.DisableAllPurgeBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_DisablePurgeBtn                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInhelitPerkView_C::DisableAllPurgeBtn(bool Param_DisablePurgeBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InhelitPerkView_C", "DisableAllPurgeBtn");

	Params::InhelitPerkView_C_DisableAllPurgeBtn Parms{};

	Parms.Param_DisablePurgeBtn = Param_DisablePurgeBtn;

	UObject::ProcessEvent(Func, &Parms);
}

}

