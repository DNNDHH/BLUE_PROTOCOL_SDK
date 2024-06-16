#pragma once

 

// Package: MapWidget_PartyMemberIcon

#include "Basic.hpp"

#include "MapWidget_PartyMemberIcon_classes.hpp"
#include "MapWidget_PartyMemberIcon_parameters.hpp"


namespace SDK
{

// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.ExecuteUbergraph_MapWidget_PartyMemberIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PartyMemberIcon_C::ExecuteUbergraph_MapWidget_PartyMemberIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PartyMemberIcon_C", "ExecuteUbergraph_MapWidget_PartyMemberIcon");

	Params::MapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.CheckVisible
// (BlueprintCallable, BlueprintEvent)

void UMapWidget_PartyMemberIcon_C::CheckVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PartyMemberIcon_C", "CheckVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PartyMemberIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PartyMemberIcon_C", "Tick");

	Params::MapWidget_PartyMemberIcon_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_PartyMemberIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PartyMemberIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Set Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_PartyMemberIcon_C::Set_Text(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PartyMemberIcon_C", "Set Text");

	Params::MapWidget_PartyMemberIcon_C_Set_Text Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.CheckDead
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_PartyMemberIcon_C::CheckDead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PartyMemberIcon_C", "CheckDead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             OutText                                                (Parm, OutParm)

void UMapWidget_PartyMemberIcon_C::GetText(class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PartyMemberIcon_C", "GetText");

	Params::MapWidget_PartyMemberIcon_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}


// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.SetPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerState*                   InPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PartyMemberIcon_C::SetPlayerState(class ASBPlayerState* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PartyMemberIcon_C", "SetPlayerState");

	Params::MapWidget_PartyMemberIcon_C_SetPlayerState Parms{};

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetPlayerState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerState*                   OutPlayerState                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_PartyMemberIcon_C::GetPlayerState(class ASBPlayerState** OutPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PartyMemberIcon_C", "GetPlayerState");

	Params::MapWidget_PartyMemberIcon_C_GetPlayerState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPlayerState != nullptr)
		*OutPlayerState = Parms.OutPlayerState;
}


// Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetDeadFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutDeadFlag                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_PartyMemberIcon_C::GetDeadFlag(bool* OutDeadFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_PartyMemberIcon_C", "GetDeadFlag");

	Params::MapWidget_PartyMemberIcon_C_GetDeadFlag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutDeadFlag != nullptr)
		*OutDeadFlag = Parms.OutDeadFlag;
}

}

