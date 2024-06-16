#pragma once

 

// Package: ImagineAssetViewStatus

#include "Basic.hpp"

#include "ImagineAssetViewStatus_classes.hpp"
#include "ImagineAssetViewStatus_parameters.hpp"


namespace SDK
{

// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineAssetViewStatus_C::SetInfo(const struct FOwnItemInfo& Param_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetViewStatus_C", "SetInfo");

	Params::ImagineAssetViewStatus_C_SetInfo Parms{};

	Parms.Param_Info = std::move(Param_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetupParameterImagine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InItemInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineAssetViewStatus_C::SetupParameterImagine(const struct FOwnItemInfo& InItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetViewStatus_C", "SetupParameterImagine");

	Params::ImagineAssetViewStatus_C_SetupParameterImagine Parms{};

	Parms.InItemInfo = std::move(InItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetUpName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineAssetViewStatus_C::SetUpName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetViewStatus_C", "SetUpName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetAbilityInfoVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_VisibleAbilityInfo                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineAssetViewStatus_C::SetAbilityInfoVisibility(bool Param_VisibleAbilityInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetViewStatus_C", "SetAbilityInfoVisibility");

	Params::ImagineAssetViewStatus_C_SetAbilityInfoVisibility Parms{};

	Parms.Param_VisibleAbilityInfo = Param_VisibleAbilityInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetDiffBase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InDiffBase                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineAssetViewStatus_C::SetDiffBase(const struct FOwnItemInfo& InDiffBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetViewStatus_C", "SetDiffBase");

	Params::ImagineAssetViewStatus_C_SetDiffBase Parms{};

	Parms.InDiffBase = std::move(InDiffBase);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.UpdateDiffParamImagine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineAssetViewStatus_C::UpdateDiffParamImagine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetViewStatus_C", "UpdateDiffParamImagine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetImagineTypeVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UImagineAssetViewStatus_C::SetImagineTypeVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetViewStatus_C", "SetImagineTypeVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetDiffVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineAssetViewStatus_C::SetDiffVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetViewStatus_C", "SetDiffVisible");

	Params::ImagineAssetViewStatus_C_SetDiffVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetupImagineAbilities
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineAssetViewStatus_C::SetupImagineAbilities(const struct FOwnItemInfo& InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetViewStatus_C", "SetupImagineAbilities");

	Params::ImagineAssetViewStatus_C_SetupImagineAbilities Parms{};

	Parms.InputPin = std::move(InputPin);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetEnableFlatStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bEnableFlatStyle                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineAssetViewStatus_C::SetEnableFlatStyle(bool Param_bEnableFlatStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetViewStatus_C", "SetEnableFlatStyle");

	Params::ImagineAssetViewStatus_C_SetEnableFlatStyle Parms{};

	Parms.Param_bEnableFlatStyle = Param_bEnableFlatStyle;

	UObject::ProcessEvent(Func, &Parms);
}

}

