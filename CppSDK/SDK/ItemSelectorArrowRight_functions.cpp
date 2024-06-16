#pragma once

 

// Package: ItemSelectorArrowRight

#include "Basic.hpp"

#include "ItemSelectorArrowRight_classes.hpp"
#include "ItemSelectorArrowRight_parameters.hpp"


namespace SDK
{

// Function ItemSelectorArrowRight.ItemSelectorArrowRight_C.PlayAnim
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemSelectorArrowRight_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemSelectorArrowRight_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

