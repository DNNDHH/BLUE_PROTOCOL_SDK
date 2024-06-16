#pragma once

 

// Package: CommonPagerWidget

#include "Basic.hpp"

#include "CommonPagerWidget_classes.hpp"
#include "CommonPagerWidget_parameters.hpp"


namespace SDK
{

// Function CommonPagerWidget.CommonPagerWidget_C.OnPageChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_PageCurrent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPagerWidget_C::OnPageChange__DelegateSignature(int32 Param_PageCurrent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPagerWidget_C", "OnPageChange__DelegateSignature");

	Params::CommonPagerWidget_C_OnPageChange__DelegateSignature Parms{};

	Parms.Param_PageCurrent = Param_PageCurrent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPagerWidget.CommonPagerWidget_C.ExecuteUbergraph_CommonPagerWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPagerWidget_C::ExecuteUbergraph_CommonPagerWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPagerWidget_C", "ExecuteUbergraph_CommonPagerWidget");

	Params::CommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPagerWidget.CommonPagerWidget_C.UpdetaPage
// (BlueprintCallable, BlueprintEvent)

void UCommonPagerWidget_C::UpdetaPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPagerWidget_C", "UpdetaPage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPagerWidget.CommonPagerWidget_C.InitializePage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_PageCurrent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_PageMin                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_PageMax                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPagerWidget_C::InitializePage(int32 Param_PageCurrent, int32 Param_PageMin, int32 Param_PageMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPagerWidget_C", "InitializePage");

	Params::CommonPagerWidget_C_InitializePage Parms{};

	Parms.Param_PageCurrent = Param_PageCurrent;
	Parms.Param_PageMin = Param_PageMin;
	Parms.Param_PageMax = Param_PageMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPagerWidget.CommonPagerWidget_C.BndEvt__Fowerd_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommonPagerWidget_C::BndEvt__Fowerd_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPagerWidget_C", "BndEvt__Fowerd_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPagerWidget.CommonPagerWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommonPagerWidget_C::BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPagerWidget_C", "BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPagerWidget.CommonPagerWidget_C.SetBtnEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Fowerd                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPagerWidget_C::SetBtnEnable(bool Param_Fowerd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPagerWidget_C", "SetBtnEnable");

	Params::CommonPagerWidget_C_SetBtnEnable Parms{};

	Parms.Param_Fowerd = Param_Fowerd;

	UObject::ProcessEvent(Func, &Parms);
}

}

