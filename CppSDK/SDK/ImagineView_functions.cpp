#pragma once

 

// Package: ImagineView

#include "Basic.hpp"

#include "ImagineView_classes.hpp"
#include "ImagineView_parameters.hpp"


namespace SDK
{

// Function ImagineView.ImagineView_C.ExecuteUbergraph_ImagineView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineView_C::ExecuteUbergraph_ImagineView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineView_C", "ExecuteUbergraph_ImagineView");

	Params::ImagineView_C_ExecuteUbergraph_ImagineView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineView.ImagineView_C.BndEvt__ImagineView_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)

void UImagineView_C::BndEvt__ImagineView_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineView_C", "BndEvt__ImagineView_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineView.ImagineView_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UImagineView_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineView_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineView.ImagineView_C.Finish
// (BlueprintCallable, BlueprintEvent)

void UImagineView_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineView_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineView.ImagineView_C.SetImagineId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ImagineId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineView_C::SetImagineId(int32 ImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineView_C", "SetImagineId");

	Params::ImagineView_C_SetImagineId Parms{};

	Parms.ImagineId = ImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineView.ImagineView_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UImagineView_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineView_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineView.ImagineView_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UImagineView_C::BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineView_C", "BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineView.ImagineView_C.OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineView_C::OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineView_C", "OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1");

	Params::ImagineView_C_OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

