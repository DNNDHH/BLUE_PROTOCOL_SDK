#pragma once

 

// Package: UMG_MatchingMenu_PlayerInfo

#include "Basic.hpp"

#include "UMG_MatchingMenu_PlayerInfo_classes.hpp"
#include "UMG_MatchingMenu_PlayerInfo_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.ExecuteUbergraph_UMG_MatchingMenu_PlayerInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_PlayerInfo_C::ExecuteUbergraph_UMG_MatchingMenu_PlayerInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_PlayerInfo_C", "ExecuteUbergraph_UMG_MatchingMenu_PlayerInfo");

	Params::UMG_MatchingMenu_PlayerInfo_C_ExecuteUbergraph_UMG_MatchingMenu_PlayerInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_PlayerInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_PlayerInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.DownLoadFaceImage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ImageUrl                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_PlayerInfo_C::DownLoadFaceImage_Event(const class FString& ImageUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_PlayerInfo_C", "DownLoadFaceImage_Event");

	Params::UMG_MatchingMenu_PlayerInfo_C_DownLoadFaceImage_Event Parms{};

	Parms.ImageUrl = std::move(ImageUrl);

	UObject::ProcessEvent(Func, &Parms);
}

}

