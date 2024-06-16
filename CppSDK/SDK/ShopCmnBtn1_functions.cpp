#pragma once

 

// Package: ShopCmnBtn1

#include "Basic.hpp"

#include "ShopCmnBtn1_classes.hpp"
#include "ShopCmnBtn1_parameters.hpp"


namespace SDK
{

// Function ShopCmnBtn1.ShopCmnBtn1_C.BtnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShopCmnBtn1_C*                   ClickBtn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_TabId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopCmnBtn1_C::BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32 Param_TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBtn1_C", "BtnClick__DelegateSignature");

	Params::ShopCmnBtn1_C_BtnClick__DelegateSignature Parms{};

	Parms.ClickBtn = ClickBtn;
	Parms.Param_TabId = Param_TabId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopCmnBtn1.ShopCmnBtn1_C.ExecuteUbergraph_ShopCmnBtn1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopCmnBtn1_C::ExecuteUbergraph_ShopCmnBtn1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBtn1_C", "ExecuteUbergraph_ShopCmnBtn1");

	Params::ShopCmnBtn1_C_ExecuteUbergraph_ShopCmnBtn1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopCmnBtn1.ShopCmnBtn1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopCmnBtn1_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBtn1_C", "PreConstruct");

	Params::ShopCmnBtn1_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopCmnBtn1.ShopCmnBtn1_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_217_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UShopCmnBtn1_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_217_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBtn1_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_217_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBtn1.ShopCmnBtn1_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_194_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UShopCmnBtn1_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_194_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBtn1_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_194_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBtn1.ShopCmnBtn1_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShopCmnBtn1_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBtn1_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_167_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBtn1.ShopCmnBtn1_C.Unselected
// (BlueprintCallable, BlueprintEvent)

void UShopCmnBtn1_C::Unselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBtn1_C", "Unselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBtn1.ShopCmnBtn1_C.Selected
// (BlueprintCallable, BlueprintEvent)

void UShopCmnBtn1_C::Selected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBtn1_C", "Selected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopCmnBtn1.ShopCmnBtn1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopCmnBtn1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopCmnBtn1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

