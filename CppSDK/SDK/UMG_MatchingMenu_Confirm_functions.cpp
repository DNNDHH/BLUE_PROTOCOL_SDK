#pragma once

 

// Package: UMG_MatchingMenu_Confirm

#include "Basic.hpp"

#include "UMG_MatchingMenu_Confirm_classes.hpp"
#include "UMG_MatchingMenu_Confirm_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.ExecuteUbergraph_UMG_MatchingMenu_Confirm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Confirm_C::ExecuteUbergraph_UMG_MatchingMenu_Confirm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "ExecuteUbergraph_UMG_MatchingMenu_Confirm");

	Params::UMG_MatchingMenu_Confirm_C_ExecuteUbergraph_UMG_MatchingMenu_Confirm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.OnNoticeButtonUpdate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Confirm_C::OnNoticeButtonUpdate_Event(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "OnNoticeButtonUpdate_Event");

	Params::UMG_MatchingMenu_Confirm_C_OnNoticeButtonUpdate_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.OnEndDeclineDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Confirm_C::OnEndDeclineDialog(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "OnEndDeclineDialog");

	Params::UMG_MatchingMenu_Confirm_C_OnEndDeclineDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "BndEvt__JoinButton_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.OnGetPenaltyInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   PenaltyLiftedAt                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   LeftBeforePenalty                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Confirm_C::OnGetPenaltyInfo(bool bWasSuccessful, int32 PenaltyLiftedAt, int32 LeftBeforePenalty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "OnGetPenaltyInfo");

	Params::UMG_MatchingMenu_Confirm_C_OnGetPenaltyInfo Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PenaltyLiftedAt = PenaltyLiftedAt;
	Parms.LeftBeforePenalty = LeftBeforePenalty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "BndEvt__JoinButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Confirm_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "Tick");

	Params::UMG_MatchingMenu_Confirm_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_199_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_199_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "BndEvt__JoinButton_K2Node_ComponentBoundEvent_199_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "BndEvt__JoinButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Get_TimeLimitText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_MatchingMenu_Confirm_C::Get_TimeLimitText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "Get_TimeLimitText_Text_0");

	Params::UMG_MatchingMenu_Confirm_C_Get_TimeLimitText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.CancelInvite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::CancelInvite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "CancelInvite");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.IsEnableQualifyLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Enable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Confirm_C::IsEnableQualifyLevel(bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "IsEnableQualifyLevel");

	Params::UMG_MatchingMenu_Confirm_C_IsEnableQualifyLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Get_JoinButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_MatchingMenu_Confirm_C::Get_JoinButton_bIsEnabled_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "Get_JoinButton_bIsEnabled_0");

	Params::UMG_MatchingMenu_Confirm_C_Get_JoinButton_bIsEnabled_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.checkButtonEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::CheckButtonEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "checkButtonEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Get_IsConfirmed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_MatchingMenu_Confirm_C::Get_IsConfirmed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "Get_IsConfirmed");

	Params::UMG_MatchingMenu_Confirm_C_Get_IsConfirmed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.IsTraveling
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_MatchingMenu_Confirm_C::IsTraveling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "IsTraveling");

	Params::UMG_MatchingMenu_Confirm_C_IsTraveling Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.Get_NeedParticipantNumberText_1_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_MatchingMenu_Confirm_C::Get_NeedParticipantNumberText_1_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "Get_NeedParticipantNumberText_1_Text_0");

	Params::UMG_MatchingMenu_Confirm_C_Get_NeedParticipantNumberText_1_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.SetSwitcherEnterOrJoin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::SetSwitcherEnterOrJoin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "SetSwitcherEnterOrJoin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Confirm.UMG_MatchingMenu_Confirm_C.StartLoopAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Confirm_C::StartLoopAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Confirm_C", "StartLoopAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

