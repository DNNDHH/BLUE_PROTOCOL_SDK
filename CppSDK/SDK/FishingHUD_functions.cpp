#pragma once

 

// Package: FishingHUD

#include "Basic.hpp"

#include "FishingHUD_classes.hpp"
#include "FishingHUD_parameters.hpp"


namespace SDK
{

// Function FishingHUD.FishingHUD_C.ExitFishing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFishingHUD_C::ExitFishing__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "ExitFishing__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingHUD.FishingHUD_C.Continue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFishingHUD_C::Continue__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "Continue__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingHUD.FishingHUD_C.ExecuteUbergraph_FishingHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishingHUD_C::ExecuteUbergraph_FishingHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "ExecuteUbergraph_FishingHUD");

	Params::FishingHUD_C_ExecuteUbergraph_FishingHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FishingHUD.FishingHUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishingHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "Tick");

	Params::FishingHUD_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FishingHUD.FishingHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFishingHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingHUD.FishingHUD_C.EscExit
// (BlueprintCallable, BlueprintEvent)

void UFishingHUD_C::EscExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "EscExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingHUD.FishingHUD_C.ReceiveMessageDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBChatMessage*                   Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBChatUIMessage                 Mess                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UFishingHUD_C::ReceiveMessageDelegate(const class USBChatMessage* Message, const struct FSBChatUIMessage& Mess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "ReceiveMessageDelegate");

	Params::FishingHUD_C_ReceiveMessageDelegate Parms{};

	Parms.Message = Message;
	Parms.Mess = std::move(Mess);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FishingHUD.FishingHUD_C.BndEvt__FishingHUD_SBButtonFullScreen_C_98_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFishingHUD_C::BndEvt__FishingHUD_SBButtonFullScreen_C_98_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "BndEvt__FishingHUD_SBButtonFullScreen_C_98_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingHUD.FishingHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFishingHUD_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingHUD.FishingHUD_C.DialogEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishingHUD_C::DialogEnd(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "DialogEnd");

	Params::FishingHUD_C_DialogEnd Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FishingHUD.FishingHUD_C.ContinueFishing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InButtonWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishingHUD_C::ContinueFishing(class UUserWidget* InButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "ContinueFishing");

	Params::FishingHUD_C_ContinueFishing Parms{};

	Parms.InButtonWidget = InButtonWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FishingHUD.FishingHUD_C.ExitEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InButtonWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishingHUD_C::ExitEvent(class UUserWidget* InButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "ExitEvent");

	Params::FishingHUD_C_ExitEvent Parms{};

	Parms.InButtonWidget = InButtonWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FishingHUD.FishingHUD_C.DebugFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFishingHUD_C::DebugFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "DebugFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingHUD.FishingHUD_C.Set State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerFishingState                     Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishingHUD_C::Set_State(EPlayerFishingState Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "Set State");

	Params::FishingHUD_C_Set_State Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FishingHUD.FishingHUD_C.CheckBackPack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishingHUD_C::CheckBackPack(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "CheckBackPack");

	Params::FishingHUD_C_CheckBackPack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function FishingHUD.FishingHUD_C.HookSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void UFishingHUD_C::HookSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "HookSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingHUD.FishingHUD_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UFishingHUD_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingHUD.FishingHUD_C.WarningBackPackIsFull
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFishingHUD_C::WarningBackPackIsFull()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "WarningBackPackIsFull");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingHUD.FishingHUD_C.ResetMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFishingHUD_C::ResetMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "ResetMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingHUD.FishingHUD_C.ResultVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    On                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishingHUD_C::ResultVisibility(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingHUD_C", "ResultVisibility");

	Params::FishingHUD_C_ResultVisibility Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);
}

}

