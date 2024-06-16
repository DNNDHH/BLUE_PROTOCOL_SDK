#pragma once

 

// Package: CommonBattleHudComponent

#include "Basic.hpp"

#include "CommonBattleHudComponent_classes.hpp"
#include "CommonBattleHudComponent_parameters.hpp"


namespace SDK
{

// Function CommonBattleHudComponent.CommonBattleHudComponent_C.ExecuteUbergraph_CommonBattleHudComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonBattleHudComponent_C::ExecuteUbergraph_CommonBattleHudComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "ExecuteUbergraph_CommonBattleHudComponent");

	Params::CommonBattleHudComponent_C_ExecuteUbergraph_CommonBattleHudComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonBattleHudComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "ReceiveEndPlay");

	Params::CommonBattleHudComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonBattleHudComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "ReceiveTick");

	Params::CommonBattleHudComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonBattleHudComponent.CommonBattleHudComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UCommonBattleHudComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonBattleHudComponent.CommonBattleHudComponent_C.AttackHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCritical                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonBattleHudComponent_C::AttackHit(bool IsCritical)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "AttackHit");

	Params::CommonBattleHudComponent_C_AttackHit Parms{};

	Parms.IsCritical = IsCritical;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonBattleHudComponent.CommonBattleHudComponent_C.SetRayHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRayHit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonBattleHudComponent_C::SetRayHit(bool bRayHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "SetRayHit");

	Params::CommonBattleHudComponent_C_SetRayHit Parms{};

	Parms.bRayHit = bRayHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonBattleHudComponent.CommonBattleHudComponent_C.SetupHUD
// (Private, BlueprintCallable, BlueprintEvent)

void UCommonBattleHudComponent_C::SetupHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "SetupHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonBattleHudComponent.CommonBattleHudComponent_C.DestroyHud
// (Private, BlueprintCallable, BlueprintEvent)

void UCommonBattleHudComponent_C::DestroyHud()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "DestroyHud");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonBattleHudComponent.CommonBattleHudComponent_C.OnTick
// (Private, BlueprintCallable, BlueprintEvent)

void UCommonBattleHudComponent_C::OnTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "OnTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonBattleHudComponent.CommonBattleHudComponent_C.UpdateHud
// (Private, BlueprintCallable, BlueprintEvent)

void UCommonBattleHudComponent_C::UpdateHud()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "UpdateHud");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonBattleHudComponent.CommonBattleHudComponent_C.ShowHUD
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonBattleHudComponent_C::ShowHUD(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "ShowHUD");

	Params::CommonBattleHudComponent_C_ShowHUD Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonBattleHudComponent.CommonBattleHudComponent_C.IsEnable
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCommonBattleHudComponent_C::IsEnable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleHudComponent_C", "IsEnable");

	Params::CommonBattleHudComponent_C_IsEnable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

