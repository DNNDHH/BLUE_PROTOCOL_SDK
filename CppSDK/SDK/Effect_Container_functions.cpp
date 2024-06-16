#pragma once

 

// Package: Effect_Container

#include "Basic.hpp"

#include "Effect_Container_classes.hpp"
#include "Effect_Container_parameters.hpp"


namespace SDK
{

// Function Effect_Container.Effect_Container_C.ExecuteUbergraph_Effect_Container
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_Container_C::ExecuteUbergraph_Effect_Container(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Container_C", "ExecuteUbergraph_Effect_Container");

	Params::Effect_Container_C_ExecuteUbergraph_Effect_Container Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Container.Effect_Container_C.BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsOpen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffect_Container_C::BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature(bool IsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Container_C", "BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature");

	Params::Effect_Container_C_BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature Parms{};

	Parms.IsOpen = IsOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Container.Effect_Container_C.SetEffectList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPioneerAbilityList              PioneerAbilityList                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class USBWarehouseAbilityComponent*     WarehouseAbilityComponent                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsShowTooltip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsShowValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffect_Container_C::SetEffectList(class FName MapId, const struct FPioneerAbilityList& PioneerAbilityList, class USBWarehouseAbilityComponent* WarehouseAbilityComponent, bool IsShowTooltip, bool IsShowValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Container_C", "SetEffectList");

	Params::Effect_Container_C_SetEffectList Parms{};

	Parms.MapId = MapId;
	Parms.PioneerAbilityList = std::move(PioneerAbilityList);
	Parms.WarehouseAbilityComponent = WarehouseAbilityComponent;
	Parms.IsShowTooltip = IsShowTooltip;
	Parms.IsShowValue = IsShowValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Container.Effect_Container_C.CreateEffectActiveWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWarehouseAbilityListUIInfo    SBWarehouseAbilityListUIInfo                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class USBWarehouseAbilityComponent*     WarehouseAbilityComponent                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsShowTooltip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsShowValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffect_Container_C::CreateEffectActiveWidget(const struct FSBWarehouseAbilityListUIInfo& SBWarehouseAbilityListUIInfo, class USBWarehouseAbilityComponent* WarehouseAbilityComponent, bool IsShowTooltip, bool IsShowValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Container_C", "CreateEffectActiveWidget");

	Params::Effect_Container_C_CreateEffectActiveWidget Parms{};

	Parms.SBWarehouseAbilityListUIInfo = std::move(SBWarehouseAbilityListUIInfo);
	Parms.WarehouseAbilityComponent = WarehouseAbilityComponent;
	Parms.IsShowTooltip = IsShowTooltip;
	Parms.IsShowValue = IsShowValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Container.Effect_Container_C.SetTitle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_Container_C::SetTitle(class FName InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Container_C", "SetTitle");

	Params::Effect_Container_C_SetTitle Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Container.Effect_Container_C.GetValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   RecepiId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UEffect_Container_C::GetValue(const int32 RecepiId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Container_C", "GetValue");

	Params::Effect_Container_C_GetValue Parms{};

	Parms.RecepiId = RecepiId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Effect_Container.Effect_Container_C.GetTooltipText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBWarehouseAbilityComponent*     WarehouseAbilityComponent                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UEffect_Container_C::GetTooltipText(class USBWarehouseAbilityComponent* WarehouseAbilityComponent, const int32 ID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Container_C", "GetTooltipText");

	Params::Effect_Container_C_GetTooltipText Parms{};

	Parms.WarehouseAbilityComponent = WarehouseAbilityComponent;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

