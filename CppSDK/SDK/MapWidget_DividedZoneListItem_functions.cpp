#pragma once

 

// Package: MapWidget_DividedZoneListItem

#include "Basic.hpp"

#include "MapWidget_DividedZoneListItem_classes.hpp"
#include "MapWidget_DividedZoneListItem_parameters.hpp"


namespace SDK
{

// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_DividedZoneListItem_C* InSelf                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InDividedZoneId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_DividedZoneListItem_C::OnClicked__DelegateSignature(class UMapWidget_DividedZoneListItem_C* InSelf, const class FString& InDividedZoneId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneListItem_C", "OnClicked__DelegateSignature");

	Params::MapWidget_DividedZoneListItem_C_OnClicked__DelegateSignature Parms{};

	Parms.InSelf = InSelf;
	Parms.InDividedZoneId = std::move(InDividedZoneId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.ExecuteUbergraph_MapWidget_DividedZoneListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_DividedZoneListItem_C::ExecuteUbergraph_MapWidget_DividedZoneListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneListItem_C", "ExecuteUbergraph_MapWidget_DividedZoneListItem");

	Params::MapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_DividedZoneListItem_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneListItem_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_DividedZoneListItem_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneListItem_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_DividedZoneListItem_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneListItem_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_DividedZoneListItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneListItem_C", "PreConstruct");

	Params::MapWidget_DividedZoneListItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InDividedZoneId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_DividedZoneListItem_C::Setup(const class FString& InDividedZoneId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneListItem_C", "Setup");

	Params::MapWidget_DividedZoneListItem_C_Setup Parms{};

	Parms.InDividedZoneId = std::move(InDividedZoneId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.SetIsEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelectable                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_DividedZoneListItem_C::SetIsEnable(bool InIsSelectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneListItem_C", "SetIsEnable");

	Params::MapWidget_DividedZoneListItem_C_SetIsEnable Parms{};

	Parms.InIsSelectable = InIsSelectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_DividedZoneListItem_C::SetSelected(bool InIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_DividedZoneListItem_C", "SetSelected");

	Params::MapWidget_DividedZoneListItem_C_SetSelected Parms{};

	Parms.InIsSelected = InIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

