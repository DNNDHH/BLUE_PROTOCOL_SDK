#pragma once

 

// Package: CommonEquipmentStatusDescBase

#include "Basic.hpp"

#include "CommonEquipmentStatusDescBase_classes.hpp"
#include "CommonEquipmentStatusDescBase_parameters.hpp"


namespace SDK
{

// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.ExecuteUbergraph_CommonEquipmentStatusDescBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescBase_C::ExecuteUbergraph_CommonEquipmentStatusDescBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "ExecuteUbergraph_CommonEquipmentStatusDescBase");

	Params::CommonEquipmentStatusDescBase_C_ExecuteUbergraph_CommonEquipmentStatusDescBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommonEquipmentStatusDescBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "PreConstruct");

	Params::CommonEquipmentStatusDescBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBaseSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InWidth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescBase_C::SetBaseSize(float InWidth, float InHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "SetBaseSize");

	Params::CommonEquipmentStatusDescBase_C_SetBaseSize Parms{};

	Parms.InWidth = InWidth;
	Parms.InHeight = InHeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SwitchBaseBgType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNormalType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescBase_C::SwitchBaseBgType(bool InIsNormalType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "SwitchBaseBgType");

	Params::CommonEquipmentStatusDescBase_C_SwitchBaseBgType Parms{};

	Parms.InIsNormalType = InIsNormalType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetEquipmentName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescBase_C::SetEquipmentName(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "SetEquipmentName");

	Params::CommonEquipmentStatusDescBase_C_SetEquipmentName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetBlank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsBlank                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescBase_C::SetBlank(bool InIsBlank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "SetBlank");

	Params::CommonEquipmentStatusDescBase_C_SetBlank Parms{};

	Parms.InIsBlank = InIsBlank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescBase_C::SetInnerImagineEquipPositionVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "SetInnerImagineEquipPositionVisibility");

	Params::CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionByMasterData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 InImagineMasterData                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonEquipmentStatusDescBase_C::SetInnerImagineEquipPositionByMasterData(const struct FSBMasterImagine& InImagineMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "SetInnerImagineEquipPositionByMasterData");

	Params::CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByMasterData Parms{};

	Parms.InImagineMasterData = std::move(InImagineMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetInnerImagineEquipPositionByCharaEquipType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharaEquipType                       InCharaEquipType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentStatusDescBase_C::SetInnerImagineEquipPositionByCharaEquipType(ESBCharaEquipType InCharaEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "SetInnerImagineEquipPositionByCharaEquipType");

	Params::CommonEquipmentStatusDescBase_C_SetInnerImagineEquipPositionByCharaEquipType Parms{};

	Parms.InCharaEquipType = InCharaEquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.SetStackBIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InIsEffectiveDisplay                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescBase_C::SetStackBIcon(const struct FOwnItemInfo& ItemInfo, bool InIsEffectiveDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "SetStackBIcon");

	Params::CommonEquipmentStatusDescBase_C_SetStackBIcon Parms{};

	Parms.ItemInfo = std::move(ItemInfo);
	Parms.InIsEffectiveDisplay = InIsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentStatusDescBase.CommonEquipmentStatusDescBase_C.ResetStackBIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEffectiveDisplay                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentStatusDescBase_C::ResetStackBIcon(bool InIsEffectiveDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentStatusDescBase_C", "ResetStackBIcon");

	Params::CommonEquipmentStatusDescBase_C_ResetStackBIcon Parms{};

	Parms.InIsEffectiveDisplay = InIsEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);
}

}

