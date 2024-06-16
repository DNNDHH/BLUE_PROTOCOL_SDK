#pragma once

 

// Package: LibraryMenu_AchievementProgressIcon

#include "Basic.hpp"

#include "LibraryMenu_AchievementProgressIcon_classes.hpp"
#include "LibraryMenu_AchievementProgressIcon_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.ExecuteUbergraph_LibraryMenu_AchievementProgressIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementProgressIcon_C::ExecuteUbergraph_LibraryMenu_AchievementProgressIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementProgressIcon_C", "ExecuteUbergraph_LibraryMenu_AchievementProgressIcon");

	Params::LibraryMenu_AchievementProgressIcon_C_ExecuteUbergraph_LibraryMenu_AchievementProgressIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementProgressIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementProgressIcon_C", "PreConstruct");

	Params::LibraryMenu_AchievementProgressIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C.SetParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   GetCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementProgressIcon_C::SetParameter(int32 GetCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_AchievementProgressIcon_C", "SetParameter");

	Params::LibraryMenu_AchievementProgressIcon_C_SetParameter Parms{};

	Parms.GetCount = GetCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

