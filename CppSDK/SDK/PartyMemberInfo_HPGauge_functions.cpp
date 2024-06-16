#pragma once

 

// Package: PartyMemberInfo_HPGauge

#include "Basic.hpp"

#include "PartyMemberInfo_HPGauge_classes.hpp"
#include "PartyMemberInfo_HPGauge_parameters.hpp"


namespace SDK
{

// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.ExecuteUbergraph_PartyMemberInfo_HPGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::ExecuteUbergraph_PartyMemberInfo_HPGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "ExecuteUbergraph_PartyMemberInfo_HPGauge");

	Params::PartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.OnUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// class USBPlayerCharacterParameterComponent*ParameterComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InTeamId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::OnUpdate(class USBPlayerCharacterParameterComponent* ParameterComponent, int32 InTeamId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "OnUpdate");

	Params::PartyMemberInfo_HPGauge_C_OnUpdate Parms{};

	Parms.ParameterComponent = ParameterComponent;
	Parms.InTeamId = InTeamId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.OnUpdateAnim
// (Event, Public, BlueprintEvent)
// Parameters:
// class USBPlayerCharacterParameterComponent*ParameterComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InTeamId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::OnUpdateAnim(class USBPlayerCharacterParameterComponent* ParameterComponent, int32 InTeamId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "OnUpdateAnim");

	Params::PartyMemberInfo_HPGauge_C_OnUpdateAnim Parms{};

	Parms.ParameterComponent = ParameterComponent;
	Parms.InTeamId = InTeamId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyMemberInfo_HPGauge_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "PreConstruct");

	Params::PartyMemberInfo_HPGauge_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyMemberInfo_HPGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerCharacterParameterComponent*CharaParamComp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TeamNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::Update(class USBPlayerCharacterParameterComponent* CharaParamComp, int32 TeamNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "Update");

	Params::PartyMemberInfo_HPGauge_C_Update Parms{};

	Parms.CharaParamComp = CharaParamComp;
	Parms.TeamNumber = TeamNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateHP
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerCharacterParameterComponent*CharaParamComp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::UpdateHP(class USBPlayerCharacterParameterComponent* CharaParamComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "UpdateHP");

	Params::PartyMemberInfo_HPGauge_C_UpdateHP Parms{};

	Parms.CharaParamComp = CharaParamComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerCharacterParameterComponent*CharaParamComp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TeamNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::UpdateIcon(class USBPlayerCharacterParameterComponent* CharaParamComp, int32 TeamNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "UpdateIcon");

	Params::PartyMemberInfo_HPGauge_C_UpdateIcon Parms{};

	Parms.CharaParamComp = CharaParamComp;
	Parms.TeamNumber = TeamNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerCharacterParameterComponent*CharaParamComp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TeamNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::UpdateAnim(class USBPlayerCharacterParameterComponent* CharaParamComp, int32 TeamNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "UpdateAnim");

	Params::PartyMemberInfo_HPGauge_C_UpdateAnim Parms{};

	Parms.CharaParamComp = CharaParamComp;
	Parms.TeamNumber = TeamNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHP
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InCurrHp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InMaxHp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InMaxHPWoAdjust                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::SetHP(float InCurrHp, float InMaxHp, float InMaxHPWoAdjust)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "SetHP");

	Params::PartyMemberInfo_HPGauge_C_SetHP Parms{};

	Parms.InCurrHp = InCurrHp;
	Parms.InMaxHp = InMaxHp;
	Parms.InMaxHPWoAdjust = InMaxHPWoAdjust;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHPGaugeSize
// (Private, BlueprintCallable, BlueprintEvent)

void UPartyMemberInfo_HPGauge_C::SetHPGaugeSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "SetHPGaugeSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHpGaugeWidthRate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InWidthRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::SetHpGaugeWidthRate(float InWidthRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "SetHpGaugeWidthRate");

	Params::PartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate Parms{};

	Parms.InWidthRate = InWidthRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Get Enable Blink Anim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_EnableBlinkAnim                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyMemberInfo_HPGauge_C::Get_Enable_Blink_Anim(bool* Param_EnableBlinkAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "Get Enable Blink Anim");

	Params::PartyMemberInfo_HPGauge_C_Get_Enable_Blink_Anim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_EnableBlinkAnim != nullptr)
		*Param_EnableBlinkAnim = Parms.Param_EnableBlinkAnim;
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetVisibleBlinkFrame
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyMemberInfo_HPGauge_C::SetVisibleBlinkFrame(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "SetVisibleBlinkFrame");

	Params::PartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PlayAnimBlink
// (Private, BlueprintCallable, BlueprintEvent)

void UPartyMemberInfo_HPGauge_C::PlayAnimBlink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "PlayAnimBlink");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.StopAnimBlink
// (Private, BlueprintCallable, BlueprintEvent)

void UPartyMemberInfo_HPGauge_C::StopAnimBlink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "StopAnimBlink");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PlayAnimBlinkFast
// (Private, BlueprintCallable, BlueprintEvent)

void UPartyMemberInfo_HPGauge_C::PlayAnimBlinkFast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "PlayAnimBlinkFast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.StopAnimBlinkFast
// (Private, BlueprintCallable, BlueprintEvent)

void UPartyMemberInfo_HPGauge_C::StopAnimBlinkFast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "StopAnimBlinkFast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetAnimSpeedBlinkFast
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PlaybackSpeed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::SetAnimSpeedBlinkFast(float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "SetAnimSpeedBlinkFast");

	Params::PartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast Parms{};

	Parms.PlaybackSpeed = PlaybackSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.IsVIsibleIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPartyMemberInfo_HPGauge_C::IsVIsibleIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "IsVIsibleIcon");

	Params::PartyMemberInfo_HPGauge_C_IsVIsibleIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetCurrHP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutCurrHP                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::GetCurrHP(float* OutCurrHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "GetCurrHP");

	Params::PartyMemberInfo_HPGauge_C_GetCurrHP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCurrHP != nullptr)
		*OutCurrHP = Parms.OutCurrHP;
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetMaxHP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   OutMaxHP                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::GetMaxHP(float* OutMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "GetMaxHP");

	Params::PartyMemberInfo_HPGauge_C_GetMaxHP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMaxHP != nullptr)
		*OutMaxHP = Parms.OutMaxHP;
}


// Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetMaxHPWithoutResurrectionAdjust
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Param_MaxHPWithoutResurrectionAdjust                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_HPGauge_C::GetMaxHPWithoutResurrectionAdjust(float* Param_MaxHPWithoutResurrectionAdjust)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_HPGauge_C", "GetMaxHPWithoutResurrectionAdjust");

	Params::PartyMemberInfo_HPGauge_C_GetMaxHPWithoutResurrectionAdjust Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_MaxHPWithoutResurrectionAdjust != nullptr)
		*Param_MaxHPWithoutResurrectionAdjust = Parms.Param_MaxHPWithoutResurrectionAdjust;
}

}

