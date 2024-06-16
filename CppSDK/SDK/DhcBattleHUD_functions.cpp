#pragma once

 

// Package: DhcBattleHUD

#include "Basic.hpp"

#include "DhcBattleHUD_classes.hpp"
#include "DhcBattleHUD_parameters.hpp"


namespace SDK
{

// Function DhcBattleHUD.DhcBattleHUD_C.ExecuteUbergraph_DhcBattleHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleHUD_C::ExecuteUbergraph_DhcBattleHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "ExecuteUbergraph_DhcBattleHUD");

	Params::DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleHUD.DhcBattleHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDhcBattleHUD_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleHUD.DhcBattleHUD_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleHUD_C::CustomEvent_0(const int32 InRetCode, const bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "CustomEvent_0");

	Params::DhcBattleHUD_C_CustomEvent_0 Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleHUD.DhcBattleHUD_C.OnLoadDhcBattleHighScore
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBDhcBattleInfo                 InAttackCheckerInfo                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDhcBattleHUD_C::OnLoadDhcBattleHighScore(const int32 InRetCode, const struct FSBDhcBattleInfo& InAttackCheckerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "OnLoadDhcBattleHighScore");

	Params::DhcBattleHUD_C_OnLoadDhcBattleHighScore Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InAttackCheckerInfo = std::move(InAttackCheckerInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleHUD.DhcBattleHUD_C.FinishSetting
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleHUD_C::FinishSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "FinishSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleHUD.DhcBattleHUD_C.InitColor
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleHUD_C::InitColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "InitColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleHUD.DhcBattleHUD_C.NewRecordSetting
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleHUD_C::NewRecordSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "NewRecordSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleHUD.DhcBattleHUD_C.AnimIn
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleHUD_C::AnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "AnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleHUD.DhcBattleHUD_C.LocalPlayerQuit
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleHUD_C::LocalPlayerQuit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "LocalPlayerQuit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleHUD.DhcBattleHUD_C.StateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EN_DHCStatus                            Param_DHCState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    LocalPlayerJoined                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleHUD_C::StateChanged(EN_DHCStatus Param_DHCState, bool LocalPlayerJoined)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "StateChanged");

	Params::DhcBattleHUD_C_StateChanged Parms{};

	Parms.Param_DHCState = Param_DHCState;
	Parms.LocalPlayerJoined = LocalPlayerJoined;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleHUD.DhcBattleHUD_C.DhcBind
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleHUD_C::DhcBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "DhcBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleHUD.DhcBattleHUD_C.DhcUnbind
// (BlueprintCallable, BlueprintEvent)

void UDhcBattleHUD_C::DhcUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "DhcUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleHUD.DhcBattleHUD_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DHCMeasurer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleHUD_C::Init(class AActor* DHCMeasurer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "Init");

	Params::DhcBattleHUD_C_Init Parms{};

	Parms.DHCMeasurer = DHCMeasurer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleHUD.DhcBattleHUD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleHUD_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "PreConstruct");

	Params::DhcBattleHUD_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleHUD.DhcBattleHUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "Tick");

	Params::DhcBattleHUD_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleHUD.DhcBattleHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDhcBattleHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleHUD.DhcBattleHUD_C.SetTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Sec                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleHUD_C::SetTime(float Sec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "SetTime");

	Params::DhcBattleHUD_C_SetTime Parms{};

	Parms.Sec = Sec;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleHUD.DhcBattleHUD_C.CreateMemberList
// (Public, BlueprintCallable, BlueprintEvent)

void UDhcBattleHUD_C::CreateMemberList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleHUD_C", "CreateMemberList");

	UObject::ProcessEvent(Func, nullptr);
}

}

