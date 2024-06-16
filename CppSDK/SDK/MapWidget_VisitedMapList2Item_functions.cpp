#pragma once

 

// Package: MapWidget_VisitedMapList2Item

#include "Basic.hpp"

#include "MapWidget_VisitedMapList2Item_classes.hpp"
#include "MapWidget_VisitedMapList2Item_parameters.hpp"


namespace SDK
{

// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2Item_C::OnClicked__DelegateSignature(const class FString& InMapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2Item_C", "OnClicked__DelegateSignature");

	Params::MapWidget_VisitedMapList2Item_C_OnClicked__DelegateSignature Parms{};

	Parms.InMapId = std::move(InMapId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.ExecuteUbergraph_MapWidget_VisitedMapList2Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2Item_C::ExecuteUbergraph_MapWidget_VisitedMapList2Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2Item_C", "ExecuteUbergraph_MapWidget_VisitedMapList2Item");

	Params::MapWidget_VisitedMapList2Item_C_ExecuteUbergraph_MapWidget_VisitedMapList2Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.BndEvt__MapWidget_VisitedMapList2Item_ListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_VisitedMapList2Item_C::BndEvt__MapWidget_VisitedMapList2Item_ListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2Item_C", "BndEvt__MapWidget_VisitedMapList2Item_ListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InCurrentMap                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_VisitedMapList2Item_C::Setup(const class FString& InMapId, bool InCurrentMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2Item_C", "Setup");

	Params::MapWidget_VisitedMapList2Item_C_Setup Parms{};

	Parms.InMapId = std::move(InMapId);
	Parms.InCurrentMap = InCurrentMap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.ChangeFaceIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2Item_C::ChangeFaceIconTexture(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2Item_C", "ChangeFaceIconTexture");

	Params::MapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Get Map Zone String
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_VisitedMapList2Item_C::Get_Map_Zone_String(int32 Param_Index, class FString* OutString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2Item_C", "Get Map Zone String");

	Params::MapWidget_VisitedMapList2Item_C_Get_Map_Zone_String Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);
}


// Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Get_ListButton_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMapWidget_VisitedMapList2Item_C::Get_ListButton_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_VisitedMapList2Item_C", "Get_ListButton_ToolTipWidget_0");

	Params::MapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

