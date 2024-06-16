#pragma once

 

// Package: ShopMenuDetailsCostume

#include "Basic.hpp"

#include "ShopMenuDetailsCostume_classes.hpp"
#include "ShopMenuDetailsCostume_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsCostume_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnSelectCostumeType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsMaleCostumeSelected                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsCostume_C::OnSelectCostumeType__DelegateSignature(bool Param_IsMaleCostumeSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "OnSelectCostumeType__DelegateSignature");

	Params::ShopMenuDetailsCostume_C_OnSelectCostumeType__DelegateSignature Parms{};

	Parms.Param_IsMaleCostumeSelected = Param_IsMaleCostumeSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnEndCloseDetailAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsCostume_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "OnEndCloseDetailAnimation__DelegateSignature");

	Params::ShopMenuDetailsCostume_C_OnEndCloseDetailAnimation__DelegateSignature Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.ExecuteUbergraph_ShopMenuDetailsCostume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsCostume_C::ExecuteUbergraph_ShopMenuDetailsCostume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "ExecuteUbergraph_ShopMenuDetailsCostume");

	Params::ShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsCostume_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "OnAnimationFinished");

	Params::ShopMenuDetailsCostume_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsCostume_C::BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::ShopMenuDetailsCostume_C_BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsCostume_C::BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::ShopMenuDetailsCostume_C_BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.CloseDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsCostume_C::CloseDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "CloseDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.ShowDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsCostume_C::ShowDetails(int32 InItemID, int32 Amount, int32 AmountMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "ShowDetails");

	Params::ShopMenuDetailsCostume_C_ShowDetails Parms{};

	Parms.InItemID = InItemID;
	Parms.Amount = Amount;
	Parms.AmountMin = AmountMin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsCostume_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCurrMapName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UShopMenuDetailsCostume_C::Init(const class FString& InCurrMapName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "Init");

	Params::ShopMenuDetailsCostume_C_Init Parms{};

	Parms.InCurrMapName = std::move(InCurrMapName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetCostumeTypeCheckBoxSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsMaleCostumeSelected                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsCostume_C::SetCostumeTypeCheckBoxSelected(bool Param_IsMaleCostumeSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "SetCostumeTypeCheckBoxSelected");

	Params::ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxSelected Parms{};

	Parms.Param_IsMaleCostumeSelected = Param_IsMaleCostumeSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetCostumeTypeCheckBoxVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsCostume_C::SetCostumeTypeCheckBoxVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "SetCostumeTypeCheckBoxVisibility");

	Params::ShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetModelCaptureImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsCostume_C::SetModelCaptureImageVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCostume_C", "SetModelCaptureImageVisibility");

	Params::ShopMenuDetailsCostume_C_SetModelCaptureImageVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

