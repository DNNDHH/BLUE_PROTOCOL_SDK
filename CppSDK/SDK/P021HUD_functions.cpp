#pragma once

 

// Package: P021HUD

#include "Basic.hpp"

#include "P021HUD_classes.hpp"
#include "P021HUD_parameters.hpp"


namespace SDK
{

// Function P021HUD.P021HUD_C.ExecuteUbergraph_P021HUD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP021HUD_C::ExecuteUbergraph_P021HUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "ExecuteUbergraph_P021HUD");

	Params::P021HUD_C_ExecuteUbergraph_P021HUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P021HUD.P021HUD_C.WidgetAnimationEvt_AnimGainLineEffect_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UP021HUD_C::WidgetAnimationEvt_AnimGainLineEffect_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "WidgetAnimationEvt_AnimGainLineEffect_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.WidgetAnimationEvt_AnimEffectFever1_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UP021HUD_C::WidgetAnimationEvt_AnimEffectFever1_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "WidgetAnimationEvt_AnimEffectFever1_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.UnbindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP021HUD_C::UnbindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "UnbindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.BindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP021HUD_C::BindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "BindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.OnChangeUIVisibleSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP021HUD_C::OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "OnChangeUIVisibleSetting");

	Params::P021HUD_C_OnChangeUIVisibleSetting Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P021HUD.P021HUD_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP021HUD_C::CustomEvent_1(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "CustomEvent_1");

	Params::P021HUD_C_CustomEvent_1 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P021HUD.P021HUD_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP021HUD_C::CustomEvent(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "CustomEvent");

	Params::P021HUD_C_CustomEvent Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P021HUD.P021HUD_C.UnbindFeverStart
// (BlueprintCallable, BlueprintEvent)

void UP021HUD_C::UnbindFeverStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "UnbindFeverStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.BindFeverStart
// (BlueprintCallable, BlueprintEvent)

void UP021HUD_C::BindFeverStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "BindFeverStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.UnbindFeverEnd
// (BlueprintCallable, BlueprintEvent)

void UP021HUD_C::UnbindFeverEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "UnbindFeverEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.BindFeverEnd
// (BlueprintCallable, BlueprintEvent)

void UP021HUD_C::BindFeverEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "BindFeverEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP021HUD_C::CustomEvent_0(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "CustomEvent_0");

	Params::P021HUD_C_CustomEvent_0 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P021HUD.P021HUD_C.UnbindChangeVoltageRate
// (BlueprintCallable, BlueprintEvent)

void UP021HUD_C::UnbindChangeVoltageRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "UnbindChangeVoltageRate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.BindChangeVoltageRate
// (BlueprintCallable, BlueprintEvent)

void UP021HUD_C::BindChangeVoltageRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "BindChangeVoltageRate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.PlayAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 InAnimation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumLoopsToPlay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EUMGSequencePlayMode                    PlayMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP021HUD_C::PlayAnim(const class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay, EUMGSequencePlayMode PlayMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "PlayAnim");

	Params::P021HUD_C_PlayAnim Parms{};

	Parms.InAnimation = InAnimation;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P021HUD.P021HUD_C.StopAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 InAnimation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP021HUD_C::StopAnim(const class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "StopAnim");

	Params::P021HUD_C_StopAnim Parms{};

	Parms.InAnimation = InAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P021HUD.P021HUD_C.PlayAnimForwardInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::PlayAnimForwardInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "PlayAnimForwardInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.PlayAnimReverseInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::PlayAnimReverseInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "PlayAnimReverseInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.OnInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.PlayAnimEffectMax
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::PlayAnimEffectMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "PlayAnimEffectMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.StopAnimEffectMax
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::StopAnimEffectMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "StopAnimEffectMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.PlayAnimBG
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InBGIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP021HUD_C::PlayAnimBG(int32 InBGIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "PlayAnimBG");

	Params::P021HUD_C_PlayAnimBG Parms{};

	Parms.InBGIndex = InBGIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P021HUD.P021HUD_C.PlayAnimEffectFever1
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::PlayAnimEffectFever1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "PlayAnimEffectFever1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.StopAnimEffectFever1
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::StopAnimEffectFever1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "StopAnimEffectFever1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.PlayAnimEffectFever2
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::PlayAnimEffectFever2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "PlayAnimEffectFever2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.StopAnimEffectFever2
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::StopAnimEffectFever2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "StopAnimEffectFever2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.PlayAnimGainMax
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::PlayAnimGainMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "PlayAnimGainMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.StopAnimGainMax
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::StopAnimGainMax()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "StopAnimGainMax");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.PlayAnimGainLineEffect
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::PlayAnimGainLineEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "PlayAnimGainLineEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.StopAnimGainLineEffect
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::StopAnimGainLineEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "StopAnimGainLineEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.PlayAnimForwardNoise
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::PlayAnimForwardNoise()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "PlayAnimForwardNoise");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021HUD.P021HUD_C.PlayAnimReverseNoise
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP021HUD_C::PlayAnimReverseNoise()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021HUD_C", "PlayAnimReverseNoise");

	UObject::ProcessEvent(Func, nullptr);
}

}

