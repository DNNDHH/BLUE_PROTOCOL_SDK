#pragma once

 

// Package: UMG_AestheShopStepInfo_StepIcon

#include "Basic.hpp"

#include "UMG_AestheShopStepInfo_StepIcon_classes.hpp"
#include "UMG_AestheShopStepInfo_StepIcon_parameters.hpp"


namespace SDK
{

// Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.ExecuteUbergraph_UMG_AestheShopStepInfo_StepIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AestheShopStepInfo_StepIcon_C::ExecuteUbergraph_UMG_AestheShopStepInfo_StepIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AestheShopStepInfo_StepIcon_C", "ExecuteUbergraph_UMG_AestheShopStepInfo_StepIcon");

	Params::UMG_AestheShopStepInfo_StepIcon_C_ExecuteUbergraph_UMG_AestheShopStepInfo_StepIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AestheShopStepInfo_StepIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AestheShopStepInfo_StepIcon_C", "PreConstruct");

	Params::UMG_AestheShopStepInfo_StepIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.SetIconSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AestheShopStepInfo_StepIcon_C::SetIconSelected(bool InIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AestheShopStepInfo_StepIcon_C", "SetIconSelected");

	Params::UMG_AestheShopStepInfo_StepIcon_C_SetIconSelected Parms{};

	Parms.InIsSelected = InIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AestheShopStepInfo_StepIcon.UMG_AestheShopStepInfo_StepIcon_C.SetTitleTextId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AestheShopStepInfo_StepIcon_C::SetTitleTextId(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AestheShopStepInfo_StepIcon_C", "SetTitleTextId");

	Params::UMG_AestheShopStepInfo_StepIcon_C_SetTitleTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}

}

