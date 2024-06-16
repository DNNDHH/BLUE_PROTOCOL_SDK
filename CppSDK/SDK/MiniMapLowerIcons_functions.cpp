#pragma once

 

// Package: MiniMapLowerIcons

#include "Basic.hpp"

#include "MiniMapLowerIcons_classes.hpp"
#include "MiniMapLowerIcons_parameters.hpp"


namespace SDK
{

// Function MiniMapLowerIcons.MiniMapLowerIcons_C.AddIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBMiniMapIconBase*               InIconWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ZOrder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBMiniMapIconBase*               IconWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapLowerIcons_C::AddIcon(class USBMiniMapIconBase*& InIconWidget, int32 ZOrder, class USBMiniMapIconBase** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapLowerIcons_C", "AddIcon");

	Params::MiniMapLowerIcons_C_AddIcon Parms{};

	Parms.InIconWidget = InIconWidget;
	Parms.ZOrder = ZOrder;

	UObject::ProcessEvent(Func, &Parms);

	InIconWidget = Parms.InIconWidget;

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;
}


// Function MiniMapLowerIcons.MiniMapLowerIcons_C.OnCreateWarpPointExIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           PortalName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMiniMapLowerIcons_C::OnCreateWarpPointExIcon(const class FString& LevelName, const class FString& PortalName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapLowerIcons_C", "OnCreateWarpPointExIcon");

	Params::MiniMapLowerIcons_C_OnCreateWarpPointExIcon Parms{};

	Parms.LevelName = std::move(LevelName);
	Parms.PortalName = std::move(PortalName);

	UObject::ProcessEvent(Func, &Parms);
}

}

