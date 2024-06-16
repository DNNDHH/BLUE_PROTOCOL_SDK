#pragma once

 

// Package: LibraryMenu_AchievementFunctionLibrary

#include "Basic.hpp"

#include "LibraryMenu_AchievementFunctionLibrary_classes.hpp"
#include "LibraryMenu_AchievementFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.CheckLimitedTime
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAchievementMasterData           AchievementMasterData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_AchievementFunctionLibrary_C::CheckLimitedTime(const struct FAchievementMasterData& AchievementMasterData, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LibraryMenu_AchievementFunctionLibrary_C", "CheckLimitedTime");

	Params::LibraryMenu_AchievementFunctionLibrary_C_CheckLimitedTime Parms{};

	Parms.AchievementMasterData = std::move(AchievementMasterData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.IsTermIdData
// (Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InTermId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTermData                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSBEventTermsData>        Terms                                                  (Parm, OutParm)

void ULibraryMenu_AchievementFunctionLibrary_C::IsTermIdData(const class FString& InTermId, class UObject* __WorldContext, bool* IsTermData, TArray<struct FSBEventTermsData>* Terms)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LibraryMenu_AchievementFunctionLibrary_C", "IsTermIdData");

	Params::LibraryMenu_AchievementFunctionLibrary_C_IsTermIdData Parms{};

	Parms.InTermId = std::move(InTermId);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsTermData != nullptr)
		*IsTermData = Parms.IsTermData;

	if (Terms != nullptr)
		*Terms = std::move(Parms.Terms);
}


// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Status
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementFunctionLibrary_C::SetLibraryAchievementCategory_Status(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LibraryMenu_AchievementFunctionLibrary_C", "SetLibraryAchievementCategory_Status");

	Params::LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Status Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Class
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementFunctionLibrary_C::SetLibraryAchievementCategory_Class(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LibraryMenu_AchievementFunctionLibrary_C", "SetLibraryAchievementCategory_Class");

	Params::LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Class Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Quest
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementFunctionLibrary_C::SetLibraryAchievementCategory_Quest(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LibraryMenu_AchievementFunctionLibrary_C", "SetLibraryAchievementCategory_Quest");

	Params::LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Quest Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Communication
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementFunctionLibrary_C::SetLibraryAchievementCategory_Communication(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LibraryMenu_AchievementFunctionLibrary_C", "SetLibraryAchievementCategory_Communication");

	Params::LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Communication Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Life
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementFunctionLibrary_C::SetLibraryAchievementCategory_Life(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LibraryMenu_AchievementFunctionLibrary_C", "SetLibraryAchievementCategory_Life");

	Params::LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Life Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_Assets
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementFunctionLibrary_C::SetLibraryAchievementCategory_Assets(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LibraryMenu_AchievementFunctionLibrary_C", "SetLibraryAchievementCategory_Assets");

	Params::LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_Assets Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_AchievementFunctionLibrary.LibraryMenu_AchievementFunctionLibrary_C.SetLibraryAchievementCategory_AdventureBoard
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_AchievementFunctionLibrary_C::SetLibraryAchievementCategory_AdventureBoard(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LibraryMenu_AchievementFunctionLibrary_C", "SetLibraryAchievementCategory_AdventureBoard");

	Params::LibraryMenu_AchievementFunctionLibrary_C_SetLibraryAchievementCategory_AdventureBoard Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

