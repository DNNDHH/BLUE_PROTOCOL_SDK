#pragma once

 

// Package: ShopMenuDetailsJesture

#include "Basic.hpp"

#include "ShopMenuDetailsJesture_classes.hpp"
#include "ShopMenuDetailsJesture_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.OnEndCloseDetailAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsJesture_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsJesture_C", "OnEndCloseDetailAnimation__DelegateSignature");

	Params::ShopMenuDetailsJesture_C_OnEndCloseDetailAnimation__DelegateSignature Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.ExecuteUbergraph_ShopMenuDetailsJesture
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsJesture_C::ExecuteUbergraph_ShopMenuDetailsJesture(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsJesture_C", "ExecuteUbergraph_ShopMenuDetailsJesture");

	Params::ShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsJesture_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsJesture_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.OnEmoteFinished
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsJesture_C::OnEmoteFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsJesture_C", "OnEmoteFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.SetCaptureStudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerSceneCapture2D_Studio_C*Param_CaptureStudio                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsJesture_C::SetCaptureStudio(class ABP_PlayerSceneCapture2D_Studio_C* Param_CaptureStudio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsJesture_C", "SetCaptureStudio");

	Params::ShopMenuDetailsJesture_C_SetCaptureStudio Parms{};

	Parms.Param_CaptureStudio = Param_CaptureStudio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsJesture_C::SetData(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsJesture_C", "SetData");

	Params::ShopMenuDetailsJesture_C_SetData Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UShopMenuDetailsJesture_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsJesture_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.CloseDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsJesture_C::CloseDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsJesture_C", "CloseDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.ShowDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsJesture_C::ShowDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsJesture_C", "ShowDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsJesture_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsJesture_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

