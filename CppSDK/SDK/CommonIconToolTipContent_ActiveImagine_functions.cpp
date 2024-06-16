#pragma once

 

// Package: CommonIconToolTipContent_ActiveImagine

#include "Basic.hpp"

#include "CommonIconToolTipContent_ActiveImagine_classes.hpp"
#include "CommonIconToolTipContent_ActiveImagine_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_ActiveImagine_C::ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ActiveImagine_C", "ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine");

	Params::CommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 InImagineMaster                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIconToolTipContent_ActiveImagine_C::ImagineIconLoadRequest(const struct FSBMasterImagine& InImagineMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ActiveImagine_C", "ImagineIconLoadRequest");

	Params::CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequest Parms{};

	Parms.InImagineMaster = std::move(InImagineMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadRequestCheckStart
// (BlueprintCallable, BlueprintEvent)

void UCommonIconToolTipContent_ActiveImagine_C::ImagineIconLoadRequestCheckStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ActiveImagine_C", "ImagineIconLoadRequestCheckStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        InNowLoadIconTexture                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UCommonIconToolTipContent_ActiveImagine_C::ImagineIconLoadStart(TSoftObjectPtr<class UTexture2D> InNowLoadIconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ActiveImagine_C", "ImagineIconLoadStart");

	Params::CommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadStart Parms{};

	Parms.InNowLoadIconTexture = InNowLoadIconTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommonIconToolTipContent_ActiveImagine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ActiveImagine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContent_ActiveImagine_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ActiveImagine_C", "PreConstruct");

	Params::CommonIconToolTipContent_ActiveImagine_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_ActiveImagine_C::OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ActiveImagine_C", "OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54");

	Params::CommonIconToolTipContent_ActiveImagine_C_OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 InMasterImagine                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           InUniqueId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Param_InIsImagineIconActive                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InUseClassTypeForLevelSync                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InForceLevelSyncOff                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContent_ActiveImagine_C::SetImagineData(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool Param_InIsImagineIconActive, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool InForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ActiveImagine_C", "SetImagineData");

	Params::CommonIconToolTipContent_ActiveImagine_C_SetImagineData Parms{};

	Parms.InMasterImagine = std::move(InMasterImagine);
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.Param_InIsImagineIconActive = Param_InIsImagineIconActive;
	Parms.InUseClassTypeForLevelSync = InUseClassTypeForLevelSync;
	Parms.InClassTypeForLevelSync = InClassTypeForLevelSync;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;
	Parms.InForceLevelSyncOff = InForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InImagineLv                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutImagineLv                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_ActiveImagine_C::SetImagineLevel(int32 InImagineLv, int32 InClassLevel, int32* OutImagineLv)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ActiveImagine_C", "SetImagineLevel");

	Params::CommonIconToolTipContent_ActiveImagine_C_SetImagineLevel Parms{};

	Parms.InImagineLv = InImagineLv;
	Parms.InClassLevel = InClassLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (OutImagineLv != nullptr)
		*OutImagineLv = Parms.OutImagineLv;
}


// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineIconActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContent_ActiveImagine_C::SetImagineIconActive(bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ActiveImagine_C", "SetImagineIconActive");

	Params::CommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive Parms{};

	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineDataBase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 InMasterImagine                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           InUniqueId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Param_InIsImagineIconActive                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InUseClassTypeForLevelSync                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEffectiveDisplay                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InForceLevelSyncOff                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InPerkId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBMax                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_ActiveImagine_C::SetImagineDataBase(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool Param_InIsImagineIconActive, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool InForceLevelSyncOff, int32 InClassLevel, int32 InPerkId, int32 InStackBNum, int32 InStackBMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_ActiveImagine_C", "SetImagineDataBase");

	Params::CommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase Parms{};

	Parms.InMasterImagine = std::move(InMasterImagine);
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.Param_InIsImagineIconActive = Param_InIsImagineIconActive;
	Parms.InUseClassTypeForLevelSync = InUseClassTypeForLevelSync;
	Parms.InClassTypeForLevelSync = InClassTypeForLevelSync;
	Parms.IsEffectiveDisplay = IsEffectiveDisplay;
	Parms.InForceLevelSyncOff = InForceLevelSyncOff;
	Parms.InClassLevel = InClassLevel;
	Parms.InPerkId = InPerkId;
	Parms.InStackBNum = InStackBNum;
	Parms.InStackBMax = InStackBMax;

	UObject::ProcessEvent(Func, &Parms);
}

}

