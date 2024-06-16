#pragma once

 

// Package: UMG_AestheShopStepInfo

#include "Basic.hpp"

#include "UMG_AestheShopStepInfo_classes.hpp"
#include "UMG_AestheShopStepInfo_parameters.hpp"


namespace SDK
{

// Function UMG_AestheShopStepInfo.UMG_AestheShopStepInfo_C.ExecuteUbergraph_UMG_AestheShopStepInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AestheShopStepInfo_C::ExecuteUbergraph_UMG_AestheShopStepInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AestheShopStepInfo_C", "ExecuteUbergraph_UMG_AestheShopStepInfo");

	Params::UMG_AestheShopStepInfo_C_ExecuteUbergraph_UMG_AestheShopStepInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AestheShopStepInfo.UMG_AestheShopStepInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AestheShopStepInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AestheShopStepInfo_C", "PreConstruct");

	Params::UMG_AestheShopStepInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AestheShopStepInfo.UMG_AestheShopStepInfo_C.SetStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_AestheShop_Step                       InStep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AestheShopStepInfo_C::SetStep(E_AestheShop_Step InStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AestheShopStepInfo_C", "SetStep");

	Params::UMG_AestheShopStepInfo_C_SetStep Parms{};

	Parms.InStep = InStep;

	UObject::ProcessEvent(Func, &Parms);
}

}

