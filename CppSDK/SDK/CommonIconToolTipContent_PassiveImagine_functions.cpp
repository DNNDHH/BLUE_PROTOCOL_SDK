#pragma once

 

// Package: CommonIconToolTipContent_PassiveImagine

#include "Basic.hpp"

#include "CommonIconToolTipContent_PassiveImagine_classes.hpp"
#include "CommonIconToolTipContent_PassiveImagine_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 InMasterImagine                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           InUniqueId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InUseClassTypeForLevelSync                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInForceLevelSyncOff                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContent_PassiveImagine_C::SetImagineData(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bInForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_PassiveImagine_C", "SetImagineData");

	Params::CommonIconToolTipContent_PassiveImagine_C_SetImagineData Parms{};

	Parms.InMasterImagine = std::move(InMasterImagine);
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InUseClassTypeForLevelSync = InUseClassTypeForLevelSync;
	Parms.InClassTypeForLevelSync = InClassTypeForLevelSync;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;
	Parms.bInForceLevelSyncOff = bInForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InImagineLv                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutImagineLv                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_PassiveImagine_C::SetImagineLevel(int32 InImagineLv, int32 InClassLevel, int32* OutImagineLv)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_PassiveImagine_C", "SetImagineLevel");

	Params::CommonIconToolTipContent_PassiveImagine_C_SetImagineLevel Parms{};

	Parms.InImagineLv = InImagineLv;
	Parms.InClassLevel = InClassLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (OutImagineLv != nullptr)
		*OutImagineLv = Parms.OutImagineLv;
}


// Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetIntToText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       InTextWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InInteger                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InUseGrouping                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContent_PassiveImagine_C::SetIntToText(class UTextBlock* InTextWidget, int32 InInteger, bool InUseGrouping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_PassiveImagine_C", "SetIntToText");

	Params::CommonIconToolTipContent_PassiveImagine_C_SetIntToText Parms{};

	Parms.InTextWidget = InTextWidget;
	Parms.InInteger = InInteger;
	Parms.InUseGrouping = InUseGrouping;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_PassiveImagine.CommonIconToolTipContent_PassiveImagine_C.SetImagineDataBase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 InMasterImagine                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           InUniqueId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InUseClassTypeForLevelSync                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInForceLevelSyncOff                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InPerkId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBMax                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_PassiveImagine_C::SetImagineDataBase(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool bInForceLevelSyncOff, int32 InClassLevel, int32 InPerkId, int32 InStackBNum, int32 InStackBMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_PassiveImagine_C", "SetImagineDataBase");

	Params::CommonIconToolTipContent_PassiveImagine_C_SetImagineDataBase Parms{};

	Parms.InMasterImagine = std::move(InMasterImagine);
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InUseClassTypeForLevelSync = InUseClassTypeForLevelSync;
	Parms.InClassTypeForLevelSync = InClassTypeForLevelSync;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;
	Parms.bInForceLevelSyncOff = bInForceLevelSyncOff;
	Parms.InClassLevel = InClassLevel;
	Parms.InPerkId = InPerkId;
	Parms.InStackBNum = InStackBNum;
	Parms.InStackBMax = InStackBMax;

	UObject::ProcessEvent(Func, &Parms);
}

}

