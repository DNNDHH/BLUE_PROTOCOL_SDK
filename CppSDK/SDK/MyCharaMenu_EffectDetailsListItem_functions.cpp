#pragma once

 

// Package: MyCharaMenu_EffectDetailsListItem

#include "Basic.hpp"

#include "MyCharaMenu_EffectDetailsListItem_classes.hpp"
#include "MyCharaMenu_EffectDetailsListItem_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_EffectDetailsListItem.MyCharaMenu_EffectDetailsListItem_C.SetEffectNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_EffectDetailsListItem_C::SetEffectNameText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsListItem_C", "SetEffectNameText");

	Params::MyCharaMenu_EffectDetailsListItem_C_SetEffectNameText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectDetailsListItem.MyCharaMenu_EffectDetailsListItem_C.SetEffectDescText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_EffectDetailsListItem_C::SetEffectDescText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectDetailsListItem_C", "SetEffectDescText");

	Params::MyCharaMenu_EffectDetailsListItem_C_SetEffectDescText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

