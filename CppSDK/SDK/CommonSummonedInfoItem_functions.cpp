#pragma once

 

// Package: CommonSummonedInfoItem

#include "Basic.hpp"

#include "CommonSummonedInfoItem_classes.hpp"
#include "CommonSummonedInfoItem_parameters.hpp"


namespace SDK
{

// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.ExecuteUbergraph_CommonSummonedInfoItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonSummonedInfoItem_C::ExecuteUbergraph_CommonSummonedInfoItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSummonedInfoItem_C", "ExecuteUbergraph_CommonSummonedInfoItem");

	Params::CommonSummonedInfoItem_C_ExecuteUbergraph_CommonSummonedInfoItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonSummonedInfoItem_C::SetTextColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSummonedInfoItem_C", "SetTextColor");

	Params::CommonSummonedInfoItem_C_SetTextColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonSummonedInfoItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSummonedInfoItem_C", "PreConstruct");

	Params::CommonSummonedInfoItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedTypeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InTypeName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonSummonedInfoItem_C::SetSummonedTypeName(const class FText& InTypeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSummonedInfoItem_C", "SetSummonedTypeName");

	Params::CommonSummonedInfoItem_C_SetSummonedTypeName Parms{};

	Parms.InTypeName = std::move(InTypeName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonSummonedInfoItem_C::SetSummonedName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSummonedInfoItem_C", "SetSummonedName");

	Params::CommonSummonedInfoItem_C_SetSummonedName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetSummonedInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 InImagineMasterData                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonSummonedInfoItem_C::SetSummonedInfo(const struct FSBMasterImagine& InImagineMasterData, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSummonedInfoItem_C", "SetSummonedInfo");

	Params::CommonSummonedInfoItem_C_SetSummonedInfo Parms{};

	Parms.InImagineMasterData = std::move(InImagineMasterData);
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetMasterImagineData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterImagine                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonSummonedInfoItem_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSummonedInfoItem_C", "SetMasterImagineData");

	Params::CommonSummonedInfoItem_C_SetMasterImagineData Parms{};

	Parms.MasterImagine = std::move(MasterImagine);
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.ResetSummonedInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonSummonedInfoItem_C::ResetSummonedInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSummonedInfoItem_C", "ResetSummonedInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetInfoIconActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonSummonedInfoItem_C::SetInfoIconActive(bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSummonedInfoItem_C", "SetInfoIconActive");

	Params::CommonSummonedInfoItem_C_SetInfoIconActive Parms{};

	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonSummonedInfoItem.CommonSummonedInfoItem_C.SetInfoMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonSummonedInfoItem_C::SetInfoMark(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonSummonedInfoItem_C", "SetInfoMark");

	Params::CommonSummonedInfoItem_C_SetInfoMark Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}

