#pragma once

 

// Package: WholeMapLowerIcons

#include "Basic.hpp"

#include "WholeMapLowerIcons_classes.hpp"
#include "WholeMapLowerIcons_parameters.hpp"


namespace SDK
{

// Function WholeMapLowerIcons.WholeMapLowerIcons_C.AddIcon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_Class                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ZOrder                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      IconWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapLowerIcons_C::AddIcon(class UClass* Param_Class, int32 ZOrder, class UUserWidget** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapLowerIcons_C", "AddIcon");

	Params::WholeMapLowerIcons_C_AddIcon Parms{};

	Parms.Param_Class = Param_Class;
	Parms.ZOrder = ZOrder;

	UObject::ProcessEvent(Func, &Parms);

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;
}


// Function WholeMapLowerIcons.WholeMapLowerIcons_C.OnCreateWarpPointExIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           PortalName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWholeMapLowerIcons_C::OnCreateWarpPointExIcon(const class FString& LevelName, const class FString& PortalName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapLowerIcons_C", "OnCreateWarpPointExIcon");

	Params::WholeMapLowerIcons_C_OnCreateWarpPointExIcon Parms{};

	Parms.LevelName = std::move(LevelName);
	Parms.PortalName = std::move(PortalName);

	UObject::ProcessEvent(Func, &Parms);
}

}

