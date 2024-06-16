#pragma once

 

// Package: LibraryMenu_Monster_NameWindow

#include "Basic.hpp"

#include "LibraryMenu_Monster_NameWindow_classes.hpp"
#include "LibraryMenu_Monster_NameWindow_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.SetEnemyData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    NamedType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    BossType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_NameWindow_C::SetEnemyData(const class FString& InName, const class FString& InType, bool NamedType, bool BossType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_NameWindow_C", "SetEnemyData");

	Params::LibraryMenu_Monster_NameWindow_C_SetEnemyData Parms{};

	Parms.InName = std::move(InName);
	Parms.InType = std::move(InType);
	Parms.NamedType = NamedType;
	Parms.BossType = BossType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.ChangeTypeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_NameWindow_C::ChangeTypeText(const class FString& Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_NameWindow_C", "ChangeTypeText");

	Params::LibraryMenu_Monster_NameWindow_C_ChangeTypeText Parms{};

	Parms.Type = std::move(Type);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_NameWindow.LibraryMenu_Monster_NameWindow_C.ChangeTypeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Monster_NameWindow_C::ChangeTypeVisibility(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_NameWindow_C", "ChangeTypeVisibility");

	Params::LibraryMenu_Monster_NameWindow_C_ChangeTypeVisibility Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

