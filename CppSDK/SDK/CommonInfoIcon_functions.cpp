#pragma once

 

// Package: CommonInfoIcon

#include "Basic.hpp"

#include "CommonInfoIcon_classes.hpp"
#include "CommonInfoIcon_parameters.hpp"


namespace SDK
{

// Function CommonInfoIcon.CommonInfoIcon_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InInfoName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InInfoDesc                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonInfoIcon_C::SetInfo(const class FString& InInfoName, const class FString& InInfoType, const class FString& InInfoDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInfoIcon_C", "SetInfo");

	Params::CommonInfoIcon_C_SetInfo Parms{};

	Parms.InInfoName = std::move(InInfoName);
	Parms.InInfoType = std::move(InInfoType);
	Parms.InInfoDesc = std::move(InInfoDesc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonInfoIcon.CommonInfoIcon_C.SetInfoNameAndType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InInfoName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonInfoIcon_C::SetInfoNameAndType(const class FString& InInfoName, const class FString& InInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInfoIcon_C", "SetInfoNameAndType");

	Params::CommonInfoIcon_C_SetInfoNameAndType Parms{};

	Parms.InInfoName = std::move(InInfoName);
	Parms.InInfoType = std::move(InInfoType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonInfoIcon.CommonInfoIcon_C.SetInfoNameAndDesc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InInfoName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InInfoDesc                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonInfoIcon_C::SetInfoNameAndDesc(const class FString& InInfoName, const class FString& InInfoDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInfoIcon_C", "SetInfoNameAndDesc");

	Params::CommonInfoIcon_C_SetInfoNameAndDesc Parms{};

	Parms.InInfoName = std::move(InInfoName);
	Parms.InInfoDesc = std::move(InInfoDesc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonInfoIcon.CommonInfoIcon_C.Set Info Stack Imagine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InInfoName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InInfoDesc                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InInfoType2                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InInfoDesc2                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FOwnItemInfo                     Param_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Param_StackBEffectiveDisplay                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonInfoIcon_C::Set_Info_Stack_Imagine(const class FString& InInfoName, const class FString& InInfoType, const class FString& InInfoDesc, const class FString& InInfoType2, const class FString& InInfoDesc2, const struct FOwnItemInfo& Param_Info, bool Param_StackBEffectiveDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInfoIcon_C", "Set Info Stack Imagine");

	Params::CommonInfoIcon_C_Set_Info_Stack_Imagine Parms{};

	Parms.InInfoName = std::move(InInfoName);
	Parms.InInfoType = std::move(InInfoType);
	Parms.InInfoDesc = std::move(InInfoDesc);
	Parms.InInfoType2 = std::move(InInfoType2);
	Parms.InInfoDesc2 = std::move(InInfoDesc2);
	Parms.Param_Info = std::move(Param_Info);
	Parms.Param_StackBEffectiveDisplay = Param_StackBEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonInfoIcon.CommonInfoIcon_C.Get_InfoIcon_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UCommonInfoIcon_C::Get_InfoIcon_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInfoIcon_C", "Get_InfoIcon_ToolTipWidget_0");

	Params::CommonInfoIcon_C_Get_InfoIcon_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommonInfoIcon.CommonInfoIcon_C.CreateToolTipWidgetifNeeded
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CommonToolTipDetail_Fixed_C* OutTooltip                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonInfoIcon_C::CreateToolTipWidgetifNeeded(class UWBP_CommonToolTipDetail_Fixed_C** OutTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInfoIcon_C", "CreateToolTipWidgetifNeeded");

	Params::CommonInfoIcon_C_CreateToolTipWidgetifNeeded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutTooltip != nullptr)
		*OutTooltip = Parms.OutTooltip;
}

}

