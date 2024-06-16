#pragma once

 

// Package: ShortcutRingDragDropInterface

#include "Basic.hpp"

#include "ShortcutRingDragDropInterface_classes.hpp"
#include "ShortcutRingDragDropInterface_parameters.hpp"


namespace SDK
{

// Function ShortcutRingDragDropInterface.ShortcutRingDragDropInterface_C.GetShortcutItemInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShortcutItemInfo                OutShortcutItemInfo                                    (Parm, OutParm)

void IShortcutRingDragDropInterface_C::GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRingDragDropInterface_C", "GetShortcutItemInfo");

	Params::ShortcutRingDragDropInterface_C_GetShortcutItemInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutShortcutItemInfo != nullptr)
		*OutShortcutItemInfo = std::move(Parms.OutShortcutItemInfo);
}

}

