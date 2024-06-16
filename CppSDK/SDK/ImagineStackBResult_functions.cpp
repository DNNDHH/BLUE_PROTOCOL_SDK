#pragma once

 

// Package: ImagineStackBResult

#include "Basic.hpp"

#include "ImagineStackBResult_classes.hpp"
#include "ImagineStackBResult_parameters.hpp"


namespace SDK
{

// Function ImagineStackBResult.ImagineStackBResult_C.Set Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_ItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineStackBResult_C::Set_Info(const struct FOwnItemInfo& Param_ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineStackBResult_C", "Set Info");

	Params::ImagineStackBResult_C_Set_Info Parms{};

	Parms.Param_ItemData = std::move(Param_ItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineStackBResult.ImagineStackBResult_C.UpdateStackBIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UImagineStackBResult_C::UpdateStackBIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineStackBResult_C", "UpdateStackBIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineStackBResult.ImagineStackBResult_C.UpdateImagineType
// (Public, BlueprintCallable, BlueprintEvent)

void UImagineStackBResult_C::UpdateImagineType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineStackBResult_C", "UpdateImagineType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineStackBResult.ImagineStackBResult_C.ImageLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineStackBResult_C::ImageLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineStackBResult_C", "ImageLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineStackBResult.ImagineStackBResult_C.SetPrevData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineStackBResult_C::SetPrevData(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineStackBResult_C", "SetPrevData");

	Params::ImagineStackBResult_C_SetPrevData Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

