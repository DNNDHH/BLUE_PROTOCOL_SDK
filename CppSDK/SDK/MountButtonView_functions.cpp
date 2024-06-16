#pragma once

 

// Package: MountButtonView

#include "Basic.hpp"

#include "MountButtonView_classes.hpp"
#include "MountButtonView_parameters.hpp"


namespace SDK
{

// Function MountButtonView.MountButtonView_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMountButtonView_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountButtonView_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountButtonView.MountButtonView_C.ExecuteUbergraph_MountButtonView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountButtonView_C::ExecuteUbergraph_MountButtonView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountButtonView_C", "ExecuteUbergraph_MountButtonView");

	Params::MountButtonView_C_ExecuteUbergraph_MountButtonView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountButtonView.MountButtonView_C.BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UMountButtonView_C::BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountButtonView_C", "BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountButtonView.MountButtonView_C.RequestLoadImage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMountButtonView_C::RequestLoadImage(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountButtonView_C", "RequestLoadImage");

	Params::MountButtonView_C_RequestLoadImage Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountButtonView.MountButtonView_C.OnLoaded_6D26427C4AE929427C75F2A9967F76D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountButtonView_C::OnLoaded_6D26427C4AE929427C75F2A9967F76D3(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountButtonView_C", "OnLoaded_6D26427C4AE929427C75F2A9967F76D3");

	Params::MountButtonView_C_OnLoaded_6D26427C4AE929427C75F2A9967F76D3 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountButtonView.MountButtonView_C.ApplySelectImagine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UMountButtonView_C::ApplySelectImagine(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountButtonView_C", "ApplySelectImagine");

	Params::MountButtonView_C_ApplySelectImagine Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountButtonView.MountButtonView_C.ApplyBasicImagineData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ImagineData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UMountButtonView_C::ApplyBasicImagineData(const struct FOwnItemInfo& ImagineData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountButtonView_C", "ApplyBasicImagineData");

	Params::MountButtonView_C_ApplyBasicImagineData Parms{};

	Parms.ImagineData = std::move(ImagineData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountButtonView.MountButtonView_C.SetStepMode3
// (Public, BlueprintCallable, BlueprintEvent)

void UMountButtonView_C::SetStepMode3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountButtonView_C", "SetStepMode3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountButtonView.MountButtonView_C.ApplyLuckyChance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UMountButtonView_C::ApplyLuckyChance(const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountButtonView_C", "ApplyLuckyChance");

	Params::MountButtonView_C_ApplyLuckyChance Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}

}

