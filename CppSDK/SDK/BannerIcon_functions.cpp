#pragma once

 

// Package: BannerIcon

#include "Basic.hpp"

#include "BannerIcon_classes.hpp"
#include "BannerIcon_parameters.hpp"


namespace SDK
{

// Function BannerIcon.BannerIcon_C.ExecuteUbergraph_BannerIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerIcon_C::ExecuteUbergraph_BannerIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerIcon_C", "ExecuteUbergraph_BannerIcon");

	Params::BannerIcon_C_ExecuteUbergraph_BannerIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BannerIcon.BannerIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBannerIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BannerIcon.BannerIcon_C.BannerLoadStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        NowLoadTexture                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBannerIcon_C::BannerLoadStart(TSoftObjectPtr<class UTexture2D> NowLoadTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerIcon_C", "BannerLoadStart");

	Params::BannerIcon_C_BannerLoadStart Parms{};

	Parms.NowLoadTexture = NowLoadTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BannerIcon.BannerIcon_C.OnLoaded_4B7E5655474594DCF8A223A5CD904BF3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerIcon_C::OnLoaded_4B7E5655474594DCF8A223A5CD904BF3(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerIcon_C", "OnLoaded_4B7E5655474594DCF8A223A5CD904BF3");

	Params::BannerIcon_C_OnLoaded_4B7E5655474594DCF8A223A5CD904BF3 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BannerIcon.BannerIcon_C.SetBanner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             BannerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerIcon_C::SetBanner(class FName BannerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BannerIcon_C", "SetBanner");

	Params::BannerIcon_C_SetBanner Parms{};

	Parms.BannerName = BannerName;

	UObject::ProcessEvent(Func, &Parms);
}

}

