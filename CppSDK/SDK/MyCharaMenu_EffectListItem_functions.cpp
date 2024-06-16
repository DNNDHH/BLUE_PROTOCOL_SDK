#pragma once

 

// Package: MyCharaMenu_EffectListItem

#include "Basic.hpp"

#include "MyCharaMenu_EffectListItem_classes.hpp"
#include "MyCharaMenu_EffectListItem_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_EffectListItem.MyCharaMenu_EffectListItem_C.SetNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_EffectListItem_C::SetNameText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectListItem_C", "SetNameText");

	Params::MyCharaMenu_EffectListItem_C_SetNameText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

