#pragma once

 

// Package: BasicPager

#include "Basic.hpp"

#include "BasicPager_classes.hpp"
#include "BasicPager_parameters.hpp"


namespace SDK
{

// Function BasicPager.BasicPager_C.OnPageChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Page                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicPager_C::OnPageChange__DelegateSignature(int32 Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicPager_C", "OnPageChange__DelegateSignature");

	Params::BasicPager_C_OnPageChange__DelegateSignature Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicPager.BasicPager_C.ExecuteUbergraph_BasicPager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicPager_C::ExecuteUbergraph_BasicPager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicPager_C", "ExecuteUbergraph_BasicPager");

	Params::BasicPager_C_ExecuteUbergraph_BasicPager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicPager.BasicPager_C.SetNowPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_NowPage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicPager_C::SetNowPage(int32 Param_NowPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicPager_C", "SetNowPage");

	Params::BasicPager_C_SetNowPage Parms{};

	Parms.Param_NowPage = Param_NowPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicPager.BasicPager_C.ButtonUpdate
// (BlueprintCallable, BlueprintEvent)

void UBasicPager_C::ButtonUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicPager_C", "ButtonUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BasicPager.BasicPager_C.SetMaxPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_MaxPage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicPager_C::SetMaxPage(int32 Param_MaxPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicPager_C", "SetMaxPage");

	Params::BasicPager_C_SetMaxPage Parms{};

	Parms.Param_MaxPage = Param_MaxPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicPager.BasicPager_C.BndEvt__Btn_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasicPager_C::BndEvt__Btn_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicPager_C", "BndEvt__Btn_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BasicPager.BasicPager_C.BndEvt__Btn_Before_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasicPager_C::BndEvt__Btn_Before_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicPager_C", "BndEvt__Btn_Before_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

