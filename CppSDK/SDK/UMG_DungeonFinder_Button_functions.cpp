#pragma once

 

// Package: UMG_DungeonFinder_Button

#include "Basic.hpp"

#include "UMG_DungeonFinder_Button_classes.hpp"
#include "UMG_DungeonFinder_Button_parameters.hpp"


namespace SDK
{

// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.OnOpenMatchingMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_DungeonFinder_Button_C::OnOpenMatchingMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "OnOpenMatchingMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.OnOpenDungeonMatchingMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_DungeonFinder_Button_C::OnOpenDungeonMatchingMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "OnOpenDungeonMatchingMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.OnMatchingState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsStart                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DungeonFinder_Button_C::OnMatchingState__DelegateSignature(bool IsStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "OnMatchingState__DelegateSignature");

	Params::UMG_DungeonFinder_Button_C_OnMatchingState__DelegateSignature Parms{};

	Parms.IsStart = IsStart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.ExecuteUbergraph_UMG_DungeonFinder_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DungeonFinder_Button_C::ExecuteUbergraph_UMG_DungeonFinder_Button(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "ExecuteUbergraph_UMG_DungeonFinder_Button");

	Params::UMG_DungeonFinder_Button_C_ExecuteUbergraph_UMG_DungeonFinder_Button Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_DungeonFinder_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_DungeonFinder_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_DungeonFinder_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DungeonFinder_Button_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "Tick");

	Params::UMG_DungeonFinder_Button_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_DungeonFinder_Button_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.ResetButtonState
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_DungeonFinder_Button_C::ResetButtonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "ResetButtonState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NowParticipantSizeText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_DungeonFinder_Button_C::Get_NowParticipantSizeText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "Get_NowParticipantSizeText_Text_0");

	Params::UMG_DungeonFinder_Button_C_Get_NowParticipantSizeText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_ServerWaitText_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UUMG_DungeonFinder_Button_C::Get_ServerWaitText_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "Get_ServerWaitText_Visibility_0");

	Params::UMG_DungeonFinder_Button_C_Get_ServerWaitText_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NeedParticipantSizeText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_DungeonFinder_Button_C::Get_NeedParticipantSizeText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "Get_NeedParticipantSizeText_Text_0");

	Params::UMG_DungeonFinder_Button_C_Get_NeedParticipantSizeText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_MatchingText_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UUMG_DungeonFinder_Button_C::Get_MatchingText_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "Get_MatchingText_Visibility_0");

	Params::UMG_DungeonFinder_Button_C_Get_MatchingText_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_MaxConfirmCountText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_DungeonFinder_Button_C::Get_MaxConfirmCountText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "Get_MaxConfirmCountText_Text_0");

	Params::UMG_DungeonFinder_Button_C_Get_MaxConfirmCountText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.Get_NowConfirmCountText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_DungeonFinder_Button_C::Get_NowConfirmCountText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "Get_NowConfirmCountText_Text_0");

	Params::UMG_DungeonFinder_Button_C_Get_NowConfirmCountText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.PlayBtnAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInActive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DungeonFinder_Button_C::PlayBtnAnim(bool bInActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "PlayBtnAnim");

	Params::UMG_DungeonFinder_Button_C_PlayBtnAnim Parms{};

	Parms.bInActive = bInActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.IsUpdateMatch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DungeonFinder_Button_C::IsUpdateMatch(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "IsUpdateMatch");

	Params::UMG_DungeonFinder_Button_C_IsUpdateMatch Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.SetBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bActive                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DungeonFinder_Button_C::SetBtn(bool Param_bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "SetBtn");

	Params::UMG_DungeonFinder_Button_C_SetBtn Parms{};

	Parms.Param_bActive = Param_bActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.UpdateExclamation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DungeonFinder_Button_C::UpdateExclamation(bool IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "UpdateExclamation");

	Params::UMG_DungeonFinder_Button_C_UpdateExclamation Parms{};

	Parms.IsShow = IsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_DungeonFinder_Button.UMG_DungeonFinder_Button_C.IsParticipantNumberCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    bCompleted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DungeonFinder_Button_C::IsParticipantNumberCompleted(bool* bCompleted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_DungeonFinder_Button_C", "IsParticipantNumberCompleted");

	Params::UMG_DungeonFinder_Button_C_IsParticipantNumberCompleted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCompleted != nullptr)
		*bCompleted = Parms.bCompleted;
}

}

