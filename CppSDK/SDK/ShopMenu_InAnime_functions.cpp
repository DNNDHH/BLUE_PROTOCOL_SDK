#pragma once

 

// Package: ShopMenu_InAnime

#include "Basic.hpp"

#include "ShopMenu_InAnime_classes.hpp"
#include "ShopMenu_InAnime_parameters.hpp"


namespace SDK
{

// Function ShopMenu_InAnime.ShopMenu_InAnime_C.ExecuteUbergraph_ShopMenu_InAnime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenu_InAnime_C::ExecuteUbergraph_ShopMenu_InAnime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenu_InAnime_C", "ExecuteUbergraph_ShopMenu_InAnime");

	Params::ShopMenu_InAnime_C_ExecuteUbergraph_ShopMenu_InAnime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenu_InAnime.ShopMenu_InAnime_C.PlayInAnim
// (BlueprintCallable, BlueprintEvent)

void UShopMenu_InAnime_C::PlayInAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenu_InAnime_C", "PlayInAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

