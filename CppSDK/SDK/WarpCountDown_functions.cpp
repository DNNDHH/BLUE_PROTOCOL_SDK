#pragma once

 

// Package: WarpCountDown

#include "Basic.hpp"

#include "WarpCountDown_classes.hpp"
#include "WarpCountDown_parameters.hpp"


namespace SDK
{

// Function WarpCountDown.WarpCountDown_C.ExecuteUbergraph_WarpCountDown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWarpCountDown_C::ExecuteUbergraph_WarpCountDown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "ExecuteUbergraph_WarpCountDown");

	Params::WarpCountDown_C_ExecuteUbergraph_WarpCountDown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WarpCountDown.WarpCountDown_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWarpCountDown_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "OnAnimationFinished");

	Params::WarpCountDown_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WarpCountDown.WarpCountDown_C.OnInteractRelease
// (BlueprintCallable, BlueprintEvent)

void UWarpCountDown_C::OnInteractRelease()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "OnInteractRelease");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WarpCountDown.WarpCountDown_C.OnInteractPress
// (BlueprintCallable, BlueprintEvent)

void UWarpCountDown_C::OnInteractPress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "OnInteractPress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WarpCountDown.WarpCountDown_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWarpCountDown_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WarpCountDown.WarpCountDown_C.OnCountdownCancelDelegate_����
// (BlueprintCallable, BlueprintEvent)

void UWarpCountDown_C::OnCountdownCancelDelegate_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "OnCountdownCancelDelegate_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WarpCountDown.WarpCountDown_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UWarpCountDown_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WarpCountDown.WarpCountDown_C.OnCountdownInteractionDelegate_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWarpCountDown_C::OnCountdownInteractionDelegate_____(bool bPress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "OnCountdownInteractionDelegate_����");

	Params::WarpCountDown_C_OnCountdownInteractionDelegate_____ Parms{};

	Parms.bPress = bPress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WarpCountDown.WarpCountDown_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWarpCountDown_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "Tick");

	Params::WarpCountDown_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WarpCountDown.WarpCountDown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWarpCountDown_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WarpCountDown.WarpCountDown_C.SetRemainCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InRemainCount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWarpCountDown_C::SetRemainCount(float InRemainCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "SetRemainCount");

	Params::WarpCountDown_C_SetRemainCount Parms{};

	Parms.InRemainCount = InRemainCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WarpCountDown.WarpCountDown_C.UpdateInteractGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UWarpCountDown_C::UpdateInteractGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "UpdateInteractGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WarpCountDown.WarpCountDown_C.SetInputBlock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInputBlock                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWarpCountDown_C::SetInputBlock(bool IsInputBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WarpCountDown_C", "SetInputBlock");

	Params::WarpCountDown_C_SetInputBlock Parms{};

	Parms.IsInputBlock = IsInputBlock;

	UObject::ProcessEvent(Func, &Parms);
}

}

