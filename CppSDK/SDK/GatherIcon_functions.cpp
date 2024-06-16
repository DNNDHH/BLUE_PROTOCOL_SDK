#pragma once

 

// Package: GatherIcon

#include "Basic.hpp"

#include "GatherIcon_classes.hpp"
#include "GatherIcon_parameters.hpp"


namespace SDK
{

// Function GatherIcon.GatherIcon_C.FinishedFade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsFadeIn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGatherIcon_C::FinishedFade__DelegateSignature(bool Param_IsFadeIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "FinishedFade__DelegateSignature");

	Params::GatherIcon_C_FinishedFade__DelegateSignature Parms{};

	Parms.Param_IsFadeIn = Param_IsFadeIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GatherIcon.GatherIcon_C.ExecuteUbergraph_GatherIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGatherIcon_C::ExecuteUbergraph_GatherIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "ExecuteUbergraph_GatherIcon");

	Params::GatherIcon_C_ExecuteUbergraph_GatherIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GatherIcon.GatherIcon_C.SEreset
// (BlueprintCallable, BlueprintEvent)

void UGatherIcon_C::SEreset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "SEreset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GatherIcon.GatherIcon_C.AutoChangeVisible
// (Event, Public, BlueprintEvent)

void UGatherIcon_C::AutoChangeVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "AutoChangeVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GatherIcon.GatherIcon_C.AutoChangeInvisible
// (Event, Public, BlueprintEvent)

void UGatherIcon_C::AutoChangeInvisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "AutoChangeInvisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GatherIcon.GatherIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGatherIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GatherIcon.GatherIcon_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGatherIcon_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "OnAnimationFinished");

	Params::GatherIcon_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GatherIcon.GatherIcon_C.Fade Out
// (BlueprintCallable, BlueprintEvent)

void UGatherIcon_C::Fade_Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "Fade Out");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GatherIcon.GatherIcon_C.Fade In
// (BlueprintCallable, BlueprintEvent)

void UGatherIcon_C::Fade_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "Fade In");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GatherIcon.GatherIcon_C.ChargeUp
// (BlueprintCallable, BlueprintEvent)

void UGatherIcon_C::ChargeUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "ChargeUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GatherIcon.GatherIcon_C.SetGatherImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBTreasureBoxRarity                    TargetComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGatherIcon_C::SetGatherImage(ESBTreasureBoxRarity TargetComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "SetGatherImage");

	Params::GatherIcon_C_SetGatherImage Parms{};

	Parms.TargetComponent = TargetComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GatherIcon.GatherIcon_C.Update Gather Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGaugeFadeIn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsMotionCanceled                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGatherIcon_C::Update_Gather_Icon(bool IsGaugeFadeIn, bool IsMotionCanceled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "Update Gather Icon");

	Params::GatherIcon_C_Update_Gather_Icon Parms{};

	Parms.IsGaugeFadeIn = IsGaugeFadeIn;
	Parms.IsMotionCanceled = IsMotionCanceled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GatherIcon.GatherIcon_C.Change Size
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CharaDistance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReachDistance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGatherIcon_C::Change_Size(float CharaDistance, float ReachDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "Change Size");

	Params::GatherIcon_C_Change_Size Parms{};

	Parms.CharaDistance = CharaDistance;
	Parms.ReachDistance = ReachDistance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GatherIcon.GatherIcon_C.DebugFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewParam1                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewParam2                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGatherIcon_C::DebugFunc(float NewParam, float NewParam1, float NewParam2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "DebugFunc");

	Params::GatherIcon_C_DebugFunc Parms{};

	Parms.NewParam = NewParam;
	Parms.NewParam1 = NewParam1;
	Parms.NewParam2 = NewParam2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GatherIcon.GatherIcon_C.LiquidMemoryIconCheck
// (Public, BlueprintCallable, BlueprintEvent)

void UGatherIcon_C::LiquidMemoryIconCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GatherIcon_C", "LiquidMemoryIconCheck");

	UObject::ProcessEvent(Func, nullptr);
}

}

