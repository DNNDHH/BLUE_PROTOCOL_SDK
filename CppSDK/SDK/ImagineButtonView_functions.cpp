#pragma once

 

// Package: ImagineButtonView

#include "Basic.hpp"

#include "ImagineButtonView_classes.hpp"
#include "ImagineButtonView_parameters.hpp"


namespace SDK
{

// Function ImagineButtonView.ImagineButtonView_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UImagineButtonView_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineButtonView_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineButtonView.ImagineButtonView_C.ExecuteUbergraph_ImagineButtonView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineButtonView_C::ExecuteUbergraph_ImagineButtonView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineButtonView_C", "ExecuteUbergraph_ImagineButtonView");

	Params::ImagineButtonView_C_ExecuteUbergraph_ImagineButtonView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineButtonView.ImagineButtonView_C.BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UImagineButtonView_C::BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineButtonView_C", "BndEvt__ImagineButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineButtonView.ImagineButtonView_C.RequestLoadImage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UImagineButtonView_C::RequestLoadImage(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineButtonView_C", "RequestLoadImage");

	Params::ImagineButtonView_C_RequestLoadImage Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineButtonView.ImagineButtonView_C.OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineButtonView_C::OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineButtonView_C", "OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113");

	Params::ImagineButtonView_C_OnLoaded_C5545ECB498C6ABBCE6FAE8E927A4113 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineButtonView.ImagineButtonView_C.ApplySelectImagine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineButtonView_C::ApplySelectImagine(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineButtonView_C", "ApplySelectImagine");

	Params::ImagineButtonView_C_ApplySelectImagine Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineButtonView.ImagineButtonView_C.ApplyBasicImagineData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ImagineData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineButtonView_C::ApplyBasicImagineData(const struct FOwnItemInfo& ImagineData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineButtonView_C", "ApplyBasicImagineData");

	Params::ImagineButtonView_C_ApplyBasicImagineData Parms{};

	Parms.ImagineData = std::move(ImagineData);

	UObject::ProcessEvent(Func, &Parms);
}

}

