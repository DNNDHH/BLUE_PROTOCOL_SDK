#pragma once

 

// Package: AestheShop_InAnime

#include "Basic.hpp"

#include "AestheShop_InAnime_classes.hpp"
#include "AestheShop_InAnime_parameters.hpp"


namespace SDK
{

// Function AestheShop_InAnime.AestheShop_InAnime_C.ExecuteUbergraph_AestheShop_InAnime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_InAnime_C::ExecuteUbergraph_AestheShop_InAnime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_InAnime_C", "ExecuteUbergraph_AestheShop_InAnime");

	Params::AestheShop_InAnime_C_ExecuteUbergraph_AestheShop_InAnime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_InAnime.AestheShop_InAnime_C.PlayInAnim
// (BlueprintCallable, BlueprintEvent)

void UAestheShop_InAnime_C::PlayInAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_InAnime_C", "PlayInAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

