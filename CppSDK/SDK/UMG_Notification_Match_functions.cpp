#pragma once

 

// Package: UMG_Notification_Match

#include "Basic.hpp"

#include "UMG_Notification_Match_classes.hpp"
#include "UMG_Notification_Match_parameters.hpp"


namespace SDK
{

// Function UMG_Notification_Match.UMG_Notification_Match_C.ExecuteUbergraph_UMG_Notification_Match
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Match_C::ExecuteUbergraph_UMG_Notification_Match(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "ExecuteUbergraph_UMG_Notification_Match");

	Params::UMG_Notification_Match_C_ExecuteUbergraph_UMG_Notification_Match Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_Notification_Match_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.ChangeKeyGuide
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Match_C::ChangeKeyGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "ChangeKeyGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.OnUpdateKeyConfig
// (BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Match_C::OnUpdateKeyConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "OnUpdateKeyConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_Notification_Match_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Notification_Match_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "Tick");

	Params::UMG_Notification_Match_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Match_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.Get_Applying_CurNumText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_Notification_Match_C::Get_Applying_CurNumText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "Get_Applying_CurNumText_Text_0");

	Params::UMG_Notification_Match_C_Get_Applying_CurNumText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.Get_Applying_MaxNumText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_Notification_Match_C::Get_Applying_MaxNumText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "Get_Applying_MaxNumText_Text_0");

	Params::UMG_Notification_Match_C_Get_Applying_MaxNumText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.Get_Accepting_CountText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UUMG_Notification_Match_C::Get_Accepting_CountText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "Get_Accepting_CountText_Text_0");

	Params::UMG_Notification_Match_C_Get_Accepting_CountText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.GetQuickAccessKeyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Match_C::GetQuickAccessKeyText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "GetQuickAccessKeyText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.GetOperateMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Match_C::GetOperateMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "GetOperateMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.SetMatchingText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       OutText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             BaseText                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_Notification_Match_C::SetMatchingText(class UTextBlock* OutText, const class FText& BaseText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "SetMatchingText");

	Params::UMG_Notification_Match_C_SetMatchingText Parms{};

	Parms.OutText = OutText;
	Parms.BaseText = std::move(BaseText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.PlayAnimationForwardIfNotVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Match_C::PlayAnimationForwardIfNotVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "PlayAnimationForwardIfNotVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.ShowBright
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Match_C::ShowBright()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "ShowBright");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.HideBright
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Match_C::HideBright()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "HideBright");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.UpdateConfirmTime
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Match_C::UpdateConfirmTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "UpdateConfirmTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_Notification_Match.UMG_Notification_Match_C.UpdateParticipantNumber
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_Notification_Match_C::UpdateParticipantNumber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notification_Match_C", "UpdateParticipantNumber");

	UObject::ProcessEvent(Func, nullptr);
}

}

