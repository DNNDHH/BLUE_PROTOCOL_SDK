#pragma once

 

// Package: ShopMenuDetailsTacticalAbility

#include "Basic.hpp"

#include "ShopMenuDetailsTacticalAbility_classes.hpp"
#include "ShopMenuDetailsTacticalAbility_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.OnEndCloseDetailAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsTacticalAbility_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsTacticalAbility_C", "OnEndCloseDetailAnimation__DelegateSignature");

	Params::ShopMenuDetailsTacticalAbility_C_OnEndCloseDetailAnimation__DelegateSignature Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.OnClickZoomIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsTacticalAbility_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsTacticalAbility_C", "OnClickZoomIn__DelegateSignature");

	Params::ShopMenuDetailsTacticalAbility_C_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.ExecuteUbergraph_ShopMenuDetailsTacticalAbility
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsTacticalAbility_C::ExecuteUbergraph_ShopMenuDetailsTacticalAbility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsTacticalAbility_C", "ExecuteUbergraph_ShopMenuDetailsTacticalAbility");

	Params::ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_SkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsTacticalAbility_C::SetData(int32 Param_SkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsTacticalAbility_C", "SetData");

	Params::ShopMenuDetailsTacticalAbility_C_SetData Parms{};

	Parms.Param_SkillId = Param_SkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UShopMenuDetailsTacticalAbility_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsTacticalAbility_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.CloseDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsTacticalAbility_C::CloseDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsTacticalAbility_C", "CloseDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.ShowDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsTacticalAbility_C::ShowDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsTacticalAbility_C", "ShowDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsTacticalAbility_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsTacticalAbility_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.BuffIconsCollapsed
// (Public, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsTacticalAbility_C::BuffIconsCollapsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsTacticalAbility_C", "BuffIconsCollapsed");

	UObject::ProcessEvent(Func, nullptr);
}

}

