#pragma once

 

// Package: CommunicateSettingMenu_HeaderBG

#include "Basic.hpp"

#include "CommunicateSettingMenu_HeaderBG_classes.hpp"
#include "CommunicateSettingMenu_HeaderBG_parameters.hpp"


namespace SDK
{

// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.ExecuteUbergraph_CommunicateSettingMenu_HeaderBG
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_HeaderBG_C::ExecuteUbergraph_CommunicateSettingMenu_HeaderBG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_HeaderBG_C", "ExecuteUbergraph_CommunicateSettingMenu_HeaderBG");

	Params::CommunicateSettingMenu_HeaderBG_C_ExecuteUbergraph_CommunicateSettingMenu_HeaderBG Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.ErrorDataSet
// (BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_HeaderBG_C::ErrorDataSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_HeaderBG_C", "ErrorDataSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetOtherLocationText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Inactive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           LocationName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ZoneId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ContentId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBPlatformInfo                  PlatformInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommunicateSettingMenu_HeaderBG_C::SetOtherLocationText(bool Inactive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_HeaderBG_C", "SetOtherLocationText");

	Params::CommunicateSettingMenu_HeaderBG_C_SetOtherLocationText Parms{};

	Parms.Inactive = Inactive;
	Parms.LocationName = std::move(LocationName);
	Parms.ZoneId = std::move(ZoneId);
	Parms.ContentId = std::move(ContentId);
	Parms.PlatformInfo = std::move(PlatformInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetLocationFollowerUIVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShowPlayerLocationUI                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommunicateSettingMenu_HeaderBG_C::SetLocationFollowerUIVisible(bool IsShowPlayerLocationUI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_HeaderBG_C", "SetLocationFollowerUIVisible");

	Params::CommunicateSettingMenu_HeaderBG_C_SetLocationFollowerUIVisible Parms{};

	Parms.IsShowPlayerLocationUI = IsShowPlayerLocationUI;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetLocationText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LocationName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ZoneId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ContentId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBPlatformInfo                  PlatformInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommunicateSettingMenu_HeaderBG_C::SetLocationText(const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_HeaderBG_C", "SetLocationText");

	Params::CommunicateSettingMenu_HeaderBG_C_SetLocationText Parms{};

	Parms.LocationName = std::move(LocationName);
	Parms.ZoneId = std::move(ZoneId);
	Parms.ContentId = std::move(ContentId);
	Parms.PlatformInfo = std::move(PlatformInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UCommunicateSettingMenu_HeaderBG_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_HeaderBG_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommunicateSettingMenu_HeaderBG_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_HeaderBG_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InURL                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                     InCanvasPanel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommunicateSettingMenu_HeaderBG_C::SetData(const class FString& InURL, float InScale, const struct FVector2D& InPosition, class UCanvasPanel* InCanvasPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommunicateSettingMenu_HeaderBG_C", "SetData");

	Params::CommunicateSettingMenu_HeaderBG_C_SetData Parms{};

	Parms.InURL = std::move(InURL);
	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.InCanvasPanel = InCanvasPanel;

	UObject::ProcessEvent(Func, &Parms);
}

}

