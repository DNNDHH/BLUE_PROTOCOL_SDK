#pragma once

 

// Package: GuildNpcSelectMode

#include "Basic.hpp"

#include "GuildNpcSelectMode_classes.hpp"
#include "GuildNpcSelectMode_parameters.hpp"


namespace SDK
{

// Function GuildNpcSelectMode.GuildNpcSelectMode_C.ExecuteUbergraph_GuildNpcSelectMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildNpcSelectMode_C::ExecuteUbergraph_GuildNpcSelectMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildNpcSelectMode_C", "ExecuteUbergraph_GuildNpcSelectMode");

	Params::GuildNpcSelectMode_C_ExecuteUbergraph_GuildNpcSelectMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildNpcSelectMode.GuildNpcSelectMode_C.RefreshBannerText
// (BlueprintCallable, BlueprintEvent)

void UGuildNpcSelectMode_C::RefreshBannerText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildNpcSelectMode_C", "RefreshBannerText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildNpcSelectMode.GuildNpcSelectMode_C.SetBannerText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             BannerText                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildNpcSelectMode_C::SetBannerText(const class FText& BannerText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildNpcSelectMode_C", "SetBannerText");

	Params::GuildNpcSelectMode_C_SetBannerText Parms{};

	Parms.BannerText = std::move(BannerText);

	UObject::ProcessEvent(Func, &Parms);
}

}

