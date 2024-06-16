#pragma once

 

// Package: ImagineAssetView

#include "Basic.hpp"

#include "ImagineAssetView_classes.hpp"
#include "ImagineAssetView_parameters.hpp"


namespace SDK
{

// Function ImagineAssetView.ImagineAssetView_C.ExecuteUbergraph_ImagineAssetView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineAssetView_C::ExecuteUbergraph_ImagineAssetView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetView_C", "ExecuteUbergraph_ImagineAssetView");

	Params::ImagineAssetView_C_ExecuteUbergraph_ImagineAssetView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAssetView.ImagineAssetView_C.Request_Image
// (BlueprintCallable, BlueprintEvent)

void UImagineAssetView_C::Request_Image()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetView_C", "Request_Image");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAssetView.ImagineAssetView_C.SetInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineAssetView_C::SetInfo(const struct FOwnItemInfo& Param_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetView_C", "SetInfo");

	Params::ImagineAssetView_C_SetInfo Parms{};

	Parms.Param_Info = std::move(Param_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAssetView.ImagineAssetView_C.SetUpName
// (Public, BlueprintCallable, BlueprintEvent)

void UImagineAssetView_C::SetUpName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetView_C", "SetUpName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAssetView.ImagineAssetView_C.SetAbilityInfoVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_VisibleAbilityInfo                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineAssetView_C::SetAbilityInfoVisibility(bool Param_VisibleAbilityInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetView_C", "SetAbilityInfoVisibility");

	Params::ImagineAssetView_C_SetAbilityInfoVisibility Parms{};

	Parms.Param_VisibleAbilityInfo = Param_VisibleAbilityInfo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAssetView.ImagineAssetView_C.Set Diff Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InDiffBase                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineAssetView_C::Set_Diff_Info(const struct FOwnItemInfo& InDiffBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAssetView_C", "Set Diff Info");

	Params::ImagineAssetView_C_Set_Diff_Info Parms{};

	Parms.InDiffBase = std::move(InDiffBase);

	UObject::ProcessEvent(Func, &Parms);
}

}

