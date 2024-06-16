#pragma once

 

// Package: MapWidget_FuncIconItem

#include "Basic.hpp"

#include "MapWidget_FuncIconItem_classes.hpp"
#include "MapWidget_FuncIconItem_parameters.hpp"


namespace SDK
{

// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMapWidget_FuncIconItem_C*        InPressedIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_FuncIconItem_C::OnPressed__DelegateSignature(class UMapWidget_FuncIconItem_C* InPressedIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconItem_C", "OnPressed__DelegateSignature");

	Params::MapWidget_FuncIconItem_C_OnPressed__DelegateSignature Parms{};

	Parms.InPressedIcon = InPressedIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.ExecuteUbergraph_MapWidget_FuncIconItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_FuncIconItem_C::ExecuteUbergraph_MapWidget_FuncIconItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconItem_C", "ExecuteUbergraph_MapWidget_FuncIconItem");

	Params::MapWidget_FuncIconItem_C_ExecuteUbergraph_MapWidget_FuncIconItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_FuncIconItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconItem_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_428_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetIconEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_FuncIconItem_C::SetIconEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconItem_C", "SetIconEnable");

	Params::MapWidget_FuncIconItem_C_SetIconEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_FuncIconItem_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconItem_C", "SetText");

	Params::MapWidget_FuncIconItem_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetTextId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_FuncIconItem_C::SetTextId(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconItem_C", "SetTextId");

	Params::MapWidget_FuncIconItem_C_SetTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_FuncIconItem.MapWidget_FuncIconItem_C.SetIconTextureByFuncIconType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapFuncIconType                        InFuncIconType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_FuncIconItem_C::SetIconTextureByFuncIconType(EMapFuncIconType InFuncIconType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_FuncIconItem_C", "SetIconTextureByFuncIconType");

	Params::MapWidget_FuncIconItem_C_SetIconTextureByFuncIconType Parms{};

	Parms.InFuncIconType = InFuncIconType;

	UObject::ProcessEvent(Func, &Parms);
}

}

