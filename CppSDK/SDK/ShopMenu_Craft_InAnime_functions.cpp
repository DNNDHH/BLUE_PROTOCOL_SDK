#pragma once

 

// Package: ShopMenu_Craft_InAnime

#include "Basic.hpp"

#include "ShopMenu_Craft_InAnime_classes.hpp"
#include "ShopMenu_Craft_InAnime_parameters.hpp"


namespace SDK
{

// Function ShopMenu_Craft_InAnime.ShopMenu_Craft_InAnime_C.ExecuteUbergraph_ShopMenu_Craft_InAnime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenu_Craft_InAnime_C::ExecuteUbergraph_ShopMenu_Craft_InAnime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenu_Craft_InAnime_C", "ExecuteUbergraph_ShopMenu_Craft_InAnime");

	Params::ShopMenu_Craft_InAnime_C_ExecuteUbergraph_ShopMenu_Craft_InAnime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenu_Craft_InAnime.ShopMenu_Craft_InAnime_C.WidgetAnimationEvt_NewAnimation_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UShopMenu_Craft_InAnime_C::WidgetAnimationEvt_NewAnimation_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenu_Craft_InAnime_C", "WidgetAnimationEvt_NewAnimation_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenu_Craft_InAnime.ShopMenu_Craft_InAnime_C.PlayInAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UShopMenu_Craft_InAnime_C::PlayInAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenu_Craft_InAnime_C", "PlayInAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

