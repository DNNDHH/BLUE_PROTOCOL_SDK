#pragma once

 

// Package: MountStackBBaseView

#include "Basic.hpp"

#include "MountStackBBaseView_classes.hpp"
#include "MountStackBBaseView_parameters.hpp"


namespace SDK
{

// Function MountStackBBaseView.MountStackBBaseView_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.ExecuteUbergraph_MountStackBBaseView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountStackBBaseView_C::ExecuteUbergraph_MountStackBBaseView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "ExecuteUbergraph_MountStackBBaseView");

	Params::MountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountStackBBaseView.MountStackBBaseView_C.Force Close
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::Force_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "Force Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.OnResultDialogClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountStackBBaseView_C::OnResultDialogClose(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "OnResultDialogClose");

	Params::MountStackBBaseView_C_OnResultDialogClose Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountStackBBaseView.MountStackBBaseView_C.UnbindMountStackB
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::UnbindMountStackB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "UnbindMountStackB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.OnCloseDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountStackBBaseView_C::OnCloseDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "OnCloseDialog");

	Params::MountStackBBaseView_C_OnCloseDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature
// (BlueprintEvent)

void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "BndEvt__MountStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature
// (BlueprintEvent)

void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "BndEvt__MountStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.OnComplete StackB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOwnItemInfo                     Imagine                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMountStackBBaseView_C::OnComplete_StackB(int32 RetCode, const struct FOwnItemInfo& Imagine, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "OnComplete StackB");

	Params::MountStackBBaseView_C_OnComplete_StackB Parms{};

	Parms.RetCode = RetCode;
	Parms.Imagine = std::move(Imagine);
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountStackBBaseView.MountStackBBaseView_C.BindMountStackB
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::BindMountStackB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "BindMountStackB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.Close
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.OnPushedCancelKey
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::OnPushedCancelKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "OnPushedCancelKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.Term
// (Event, Protected, BlueprintEvent)

void UMountStackBBaseView_C::Term()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "Term");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.Init
// (Event, Protected, BlueprintEvent)

void UMountStackBBaseView_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMountStackBBaseView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.OpenStep2
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::OpenStep2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "OpenStep2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "BndEvt__MountStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.ReselectStap1
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::ReselectStap1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "ReselectStap1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.Btn2Close
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::Btn2Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "Btn2Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.Btn1Closed
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::Btn1Closed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "Btn1Closed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.ReselectStep2
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::ReselectStep2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "ReselectStep2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.OnReselectStep2
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::OnReselectStep2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "OnReselectStep2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.OnReselectStep1
// (BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::OnReselectStep1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "OnReselectStep1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature
// (BlueprintEvent)

void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "BndEvt__MountStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.OnSelectMaterial
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FOwnItemInfo>             Uids                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Param_UseTicket                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBStackBUseTicket               StackBTicket                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UMountStackBBaseView_C::OnSelectMaterial(TArray<struct FOwnItemInfo>& Uids, bool Param_UseTicket, const struct FSBStackBUseTicket& StackBTicket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "OnSelectMaterial");

	Params::MountStackBBaseView_C_OnSelectMaterial Parms{};

	Parms.Uids = std::move(Uids);
	Parms.Param_UseTicket = Param_UseTicket;
	Parms.StackBTicket = std::move(StackBTicket);

	UObject::ProcessEvent(Func, &Parms);

	Uids = std::move(Parms.Uids);
}


// Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Step2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
// (BlueprintEvent)

void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_Step2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "BndEvt__MountStackBBaseView_Step2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.OnSelect Mount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UMountStackBBaseView_C::OnSelect_Mount(const struct FOwnItemInfo& ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "OnSelect Mount");

	Params::MountStackBBaseView_C_OnSelect_Mount Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Step1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature
// (BlueprintEvent)

void UMountStackBBaseView_C::BndEvt__MountStackBBaseView_Step1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "BndEvt__MountStackBBaseView_Step1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.InitializeButtons
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::InitializeButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "InitializeButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.UpdateLiquidMemory
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::UpdateLiquidMemory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "UpdateLiquidMemory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.UpdateStep
// (Protected, BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::UpdateStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "UpdateStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.HideResult
// (Public, BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::HideResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "HideResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.ShowResult
// (Public, BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::ShowResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "ShowResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.RewindResultAfterStep1
// (Public, BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::RewindResultAfterStep1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "RewindResultAfterStep1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.RewindResultAfterBeginStep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMountStackBBaseView_C::RewindResultAfterBeginStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "RewindResultAfterBeginStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountStackBBaseView.MountStackBBaseView_C.GetTickets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FSBStackBUseTicket>       Tickets                                                (Parm, OutParm)

void UMountStackBBaseView_C::GetTickets(TArray<struct FSBStackBUseTicket>* Tickets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "GetTickets");

	Params::MountStackBBaseView_C_GetTickets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Tickets != nullptr)
		*Tickets = std::move(Parms.Tickets);
}


// Function MountStackBBaseView.MountStackBBaseView_C.GetMaterialUIDs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class FString>                   Uids                                                   (Parm, OutParm)

void UMountStackBBaseView_C::GetMaterialUIDs(TArray<class FString>* Uids) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBBaseView_C", "GetMaterialUIDs");

	Params::MountStackBBaseView_C_GetMaterialUIDs Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Uids != nullptr)
		*Uids = std::move(Parms.Uids);
}

}

