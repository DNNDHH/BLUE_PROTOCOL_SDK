#pragma once

 

// Package: BossHPGauge

#include "Basic.hpp"

#include "BossHPGauge_classes.hpp"
#include "BossHPGauge_parameters.hpp"


namespace SDK
{

// Function BossHPGauge.BossHPGauge_C.ExecuteUbergraph_BossHPGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossHPGauge_C::ExecuteUbergraph_BossHPGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGauge_C", "ExecuteUbergraph_BossHPGauge");

	Params::BossHPGauge_C_ExecuteUbergraph_BossHPGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BossHPGauge.BossHPGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBossHPGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BossHPGauge.BossHPGauge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBossHPGauge_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGauge_C", "PreConstruct");

	Params::BossHPGauge_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BossHPGauge.BossHPGauge_C.SetScreenPositionOffset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InScreenPositionOffset                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossHPGauge_C::SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGauge_C", "SetScreenPositionOffset");

	Params::BossHPGauge_C_SetScreenPositionOffset Parms{};

	Parms.InScreenPositionOffset = std::move(InScreenPositionOffset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BossHPGauge.BossHPGauge_C.SetDepth
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDepth                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossHPGauge_C::SetDepth(const float InDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGauge_C", "SetDepth");

	Params::BossHPGauge_C_SetDepth Parms{};

	Parms.InDepth = InDepth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BossHPGauge.BossHPGauge_C.SetLv
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Lv                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossHPGauge_C::SetLv(int32 Lv)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGauge_C", "SetLv");

	Params::BossHPGauge_C_SetLv Parms{};

	Parms.Lv = Lv;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BossHPGauge.BossHPGauge_C.SetName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBossHPGauge_C::SetName(const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGauge_C", "SetName");

	Params::BossHPGauge_C_SetName Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BossHPGauge.BossHPGauge_C.SetColorText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossHPGauge_C::SetColorText(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGauge_C", "SetColorText");

	Params::BossHPGauge_C_SetColorText Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BossHPGauge.BossHPGauge_C.SetColorLV
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBossHPGauge_C::SetColorLV(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGauge_C", "SetColorLV");

	Params::BossHPGauge_C_SetColorLV Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BossHPGauge.BossHPGauge_C.SetColorName
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBossHPGauge_C::SetColorName(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGauge_C", "SetColorName");

	Params::BossHPGauge_C_SetColorName Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BossHPGauge.BossHPGauge_C.OnSetBossCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                InBoss                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossHPGauge_C::OnSetBossCharacter(class ASBEnemyCharacter* InBoss)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossHPGauge_C", "OnSetBossCharacter");

	Params::BossHPGauge_C_OnSetBossCharacter Parms{};

	Parms.InBoss = InBoss;

	UObject::ProcessEvent(Func, &Parms);
}

}

