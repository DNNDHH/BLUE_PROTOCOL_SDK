#pragma once

 

// Package: SkillTreeFunctionLibrary

#include "Basic.hpp"

#include "SkillTreeFunctionLibrary_classes.hpp"
#include "SkillTreeFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.IsEnableConditionClassLevel
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillTreeFunctionLibrary_C::IsEnableConditionClassLevel(int32 SkillId, int32 SkillLevel, class UObject* __WorldContext, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeFunctionLibrary_C", "IsEnableConditionClassLevel");

	Params::SkillTreeFunctionLibrary_C_IsEnableConditionClassLevel Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLevel = SkillLevel;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;
}


// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.IsEnableConditionSkill
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillTreeFunctionLibrary_C::IsEnableConditionSkill(int32 SkillId, class UObject* __WorldContext, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeFunctionLibrary_C", "IsEnableConditionSkill");

	Params::SkillTreeFunctionLibrary_C_IsEnableConditionSkill Parms{};

	Parms.SkillId = SkillId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;
}


// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetDerivedSkillIdArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           DerivedSkillArray                                      (Parm, OutParm)

void USkillTreeFunctionLibrary_C::GetDerivedSkillIdArray(int32 SkillId, class UObject* __WorldContext, TArray<int32>* DerivedSkillArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeFunctionLibrary_C", "GetDerivedSkillIdArray");

	Params::SkillTreeFunctionLibrary_C_GetDerivedSkillIdArray Parms{};

	Parms.SkillId = SkillId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DerivedSkillArray != nullptr)
		*DerivedSkillArray = std::move(Parms.DerivedSkillArray);
}


// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillLevelUpOrLearnUnableMessage
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValuesParam_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Result                                                 (Parm, OutParm)

void USkillTreeFunctionLibrary_C::GetSkillLevelUpOrLearnUnableMessage(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues Param_Index, class UObject* __WorldContext, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeFunctionLibrary_C", "GetSkillLevelUpOrLearnUnableMessage");

	Params::SkillTreeFunctionLibrary_C_GetSkillLevelUpOrLearnUnableMessage Parms{};

	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.TryGetSkillMovieID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             MovieID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeFunctionLibrary_C::TryGetSkillMovieID(int32 SkillId, int32 SkillLV, class UObject* __WorldContext, bool* Result, class FName* MovieID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeFunctionLibrary_C", "TryGetSkillMovieID");

	Params::SkillTreeFunctionLibrary_C_TryGetSkillMovieID Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLV = SkillLV;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (MovieID != nullptr)
		*MovieID = Parms.MovieID;
}


// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillLevelText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText USkillTreeFunctionLibrary_C::GetSkillLevelText(int32 Level, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeFunctionLibrary_C", "GetSkillLevelText");

	Params::SkillTreeFunctionLibrary_C_GetSkillLevelText Parms{};

	Parms.Level = Level;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.TryGetSkillImage
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UMediaSource>      MediaSource                                            (Parm, OutParm, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Image                                                  (Parm, OutParm, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        ImageIcon                                              (Parm, OutParm, HasGetValueTypeHash)

void USkillTreeFunctionLibrary_C::TryGetSkillImage(int32 SkillId, int32 SkillLV, class UObject* __WorldContext, TSoftObjectPtr<class UMediaSource>* MediaSource, TSoftObjectPtr<class UTexture2D>* Image, TSoftObjectPtr<class UTexture2D>* ImageIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeFunctionLibrary_C", "TryGetSkillImage");

	Params::SkillTreeFunctionLibrary_C_TryGetSkillImage Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLV = SkillLV;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (MediaSource != nullptr)
		*MediaSource = Parms.MediaSource;

	if (Image != nullptr)
		*Image = Parms.Image;

	if (ImageIcon != nullptr)
		*ImageIcon = Parms.ImageIcon;
}


// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.GetSkillAbillityTypeText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBSkillAbilityType                     InAbilityType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText USkillTreeFunctionLibrary_C::GetSkillAbillityTypeText(ESBSkillAbilityType InAbilityType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeFunctionLibrary_C", "GetSkillAbillityTypeText");

	Params::SkillTreeFunctionLibrary_C_GetSkillAbillityTypeText Parms{};

	Parms.InAbilityType = InAbilityType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C.Get Base Skill
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBSkillDataMasterData>   List                                                   (Parm, OutParm)

void USkillTreeFunctionLibrary_C::Get_Base_Skill(class UObject* __WorldContext, TArray<struct FSBSkillDataMasterData>* List)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeFunctionLibrary_C", "Get Base Skill");

	Params::SkillTreeFunctionLibrary_C_Get_Base_Skill Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (List != nullptr)
		*List = std::move(Parms.List);
}

}

