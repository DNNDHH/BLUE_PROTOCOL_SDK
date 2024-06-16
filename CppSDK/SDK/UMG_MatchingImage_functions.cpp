#pragma once

 

// Package: UMG_MatchingImage

#include "Basic.hpp"

#include "UMG_MatchingImage_classes.hpp"
#include "UMG_MatchingImage_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingImage.UMG_MatchingImage_C.ExecuteUbergraph_UMG_MatchingImage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingImage_C::ExecuteUbergraph_UMG_MatchingImage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_C", "ExecuteUbergraph_UMG_MatchingImage");

	Params::UMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingImage.UMG_MatchingImage_C.UIIMageAssetLoadCheck
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingImage_C::UIIMageAssetLoadCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_C", "UIIMageAssetLoadCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingImage.UMG_MatchingImage_C.UIImageAssetLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        TextureReference                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_MatchingImage_C::UIImageAssetLoad(TSoftObjectPtr<class UTexture2D> TextureReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_C", "UIImageAssetLoad");

	Params::UMG_MatchingImage_C_UIImageAssetLoad Parms{};

	Parms.TextureReference = TextureReference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingImage.UMG_MatchingImage_C.OnLoaded_119447794C1BA6C029376DAB31003374
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingImage_C::OnLoaded_119447794C1BA6C029376DAB31003374(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_C", "OnLoaded_119447794C1BA6C029376DAB31003374");

	Params::UMG_MatchingImage_C_OnLoaded_119447794C1BA6C029376DAB31003374 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingImage.UMG_MatchingImage_C.SetGameContentID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             GameContentId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingImage_C::SetGameContentID(class FName GameContentId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_C", "SetGameContentID");

	Params::UMG_MatchingImage_C_SetGameContentID Parms{};

	Parms.GameContentId = GameContentId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingImage.UMG_MatchingImage_C.SetBestScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Record                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ClearCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            ClassType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingImage_C::SetBestScore(int32 Record, int32 ClearCount, ESBClassType ClassType, class FName MapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_C", "SetBestScore");

	Params::UMG_MatchingImage_C_SetBestScore Parms{};

	Parms.Record = Record;
	Parms.ClearCount = ClearCount;
	Parms.ClassType = ClassType;
	Parms.MapId = MapId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingImage.UMG_MatchingImage_C.SetGameContentId2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMapInfo                       HelpModeInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_MatchingImage_C::SetGameContentId2(const struct FSBMapInfo& HelpModeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_C", "SetGameContentId2");

	Params::UMG_MatchingImage_C_SetGameContentId2 Parms{};

	Parms.HelpModeInfo = std::move(HelpModeInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

