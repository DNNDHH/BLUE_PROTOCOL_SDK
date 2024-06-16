#pragma once

 

// Package: ShopCmnBg1

#include "Basic.hpp"

#include "ShopCmnBg1_classes.hpp"
#include "ShopCmnBg1_parameters.hpp"


namespace SDK
{

// Function ShopCmnBg1.ShopCmnBg1_C.OnAnimInFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShopCmnBg1_C::OnAnimInFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "OnAnimInFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBg1.ShopCmnBg1_C.OnAnimOutFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShopCmnBg1_C::OnAnimOutFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "OnAnimOutFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBg1.ShopCmnBg1_C.ExecuteUbergraph_ShopCmnBg1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopCmnBg1_C::ExecuteUbergraph_ShopCmnBg1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "ExecuteUbergraph_ShopCmnBg1");

	Params::ShopCmnBg1_C_ExecuteUbergraph_ShopCmnBg1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopCmnBg1.ShopCmnBg1_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UShopCmnBg1_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBg1.ShopCmnBg1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopCmnBg1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBg1.ShopCmnBg1_C.onAnimTimer
// (BlueprintCallable, BlueprintEvent)

void UShopCmnBg1_C::OnAnimTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "onAnimTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBg1.ShopCmnBg1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopCmnBg1_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "PreConstruct");

	Params::ShopCmnBg1_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopCmnBg1.ShopCmnBg1_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UShopCmnBg1_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBg1.ShopCmnBg1_C.PlayAnimIn
// (Public, BlueprintCallable, BlueprintEvent)

void UShopCmnBg1_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBg1.ShopCmnBg1_C.PlayAnimOut
// (Public, BlueprintCallable, BlueprintEvent)

void UShopCmnBg1_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBg1.ShopCmnBg1_C.RandomPlayAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UShopCmnBg1_C::RandomPlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "RandomPlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBg1.ShopCmnBg1_C.RandomPlayAnimation2
// (Public, BlueprintCallable, BlueprintEvent)

void UShopCmnBg1_C::RandomPlayAnimation2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "RandomPlayAnimation2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBg1.ShopCmnBg1_C.Set Shop Type
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ShopCmnBg                             ShopBgType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopCmnBg1_C::Set_Shop_Type(E_ShopCmnBg ShopBgType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBg1_C", "Set Shop Type");

	Params::ShopCmnBg1_C_Set_Shop_Type Parms{};

	Parms.ShopBgType = ShopBgType;

	UObject::ProcessEvent(Func, &Parms);
}

}

