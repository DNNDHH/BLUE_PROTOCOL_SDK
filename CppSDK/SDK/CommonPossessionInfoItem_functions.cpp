#pragma once

 

// Package: CommonPossessionInfoItem

#include "Basic.hpp"

#include "CommonPossessionInfoItem_classes.hpp"
#include "CommonPossessionInfoItem_parameters.hpp"


namespace SDK
{

// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.ExecuteUbergraph_CommonPossessionInfoItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPossessionInfoItem_C::ExecuteUbergraph_CommonPossessionInfoItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPossessionInfoItem_C", "ExecuteUbergraph_CommonPossessionInfoItem");

	Params::CommonPossessionInfoItem_C_ExecuteUbergraph_CommonPossessionInfoItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPossessionInfoItem_C::SetTextColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPossessionInfoItem_C", "SetTextColor");

	Params::CommonPossessionInfoItem_C_SetTextColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPossessionInfoItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPossessionInfoItem_C", "PreConstruct");

	Params::CommonPossessionInfoItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionTypeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InTypeName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonPossessionInfoItem_C::SetPossessionTypeName(const class FText& InTypeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPossessionInfoItem_C", "SetPossessionTypeName");

	Params::CommonPossessionInfoItem_C_SetPossessionTypeName Parms{};

	Parms.InTypeName = std::move(InTypeName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonPossessionInfoItem_C::SetPossessionName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPossessionInfoItem_C", "SetPossessionName");

	Params::CommonPossessionInfoItem_C_SetPossessionName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetPossessionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 InMasterImagineData                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonPossessionInfoItem_C::SetPossessionInfo(const struct FSBMasterImagine& InMasterImagineData, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPossessionInfoItem_C", "SetPossessionInfo");

	Params::CommonPossessionInfoItem_C_SetPossessionInfo Parms{};

	Parms.InMasterImagineData = std::move(InMasterImagineData);
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetMasterImagineData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterImagine                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonPossessionInfoItem_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPossessionInfoItem_C", "SetMasterImagineData");

	Params::CommonPossessionInfoItem_C_SetMasterImagineData Parms{};

	Parms.MasterImagine = std::move(MasterImagine);
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.ResetPossessionInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPossessionInfoItem_C::ResetPossessionInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPossessionInfoItem_C", "ResetPossessionInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetInfoIconActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPossessionInfoItem_C::SetInfoIconActive(bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPossessionInfoItem_C", "SetInfoIconActive");

	Params::CommonPossessionInfoItem_C_SetInfoIconActive Parms{};

	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPossessionInfoItem.CommonPossessionInfoItem_C.SetInfoMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPossessionInfoItem_C::SetInfoMark(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPossessionInfoItem_C", "SetInfoMark");

	Params::CommonPossessionInfoItem_C_SetInfoMark Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}

