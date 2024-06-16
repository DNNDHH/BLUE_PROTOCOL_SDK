#pragma once

 

// Package: UMG_LiquidMemoryShop_EffectStar

#include "Basic.hpp"

#include "UMG_LiquidMemoryShop_EffectStar_classes.hpp"
#include "UMG_LiquidMemoryShop_EffectStar_parameters.hpp"


namespace SDK
{

// Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryShop_EffectStar_C::ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_EffectStar_C", "ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar");

	Params::UMG_LiquidMemoryShop_EffectStar_C_ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LiquidMemoryShop_EffectStar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_EffectStar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryShop_EffectStar_C::PlayAnim(int32 CurNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_EffectStar_C", "PlayAnim");

	Params::UMG_LiquidMemoryShop_EffectStar_C_PlayAnim Parms{};

	Parms.CurNum = CurNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C.StopAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryShop_EffectStar_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryShop_EffectStar_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

