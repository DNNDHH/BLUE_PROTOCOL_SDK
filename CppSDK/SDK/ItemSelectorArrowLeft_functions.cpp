#pragma once

 

// Package: ItemSelectorArrowLeft

#include "Basic.hpp"

#include "ItemSelectorArrowLeft_classes.hpp"
#include "ItemSelectorArrowLeft_parameters.hpp"


namespace SDK
{

// Function ItemSelectorArrowLeft.ItemSelectorArrowLeft_C.PlayAnim
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemSelectorArrowLeft_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorArrowLeft_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

