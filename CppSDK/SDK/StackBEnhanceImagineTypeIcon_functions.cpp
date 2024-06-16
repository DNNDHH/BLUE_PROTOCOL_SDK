#pragma once

 

// Package: StackBEnhanceImagineTypeIcon

#include "Basic.hpp"

#include "StackBEnhanceImagineTypeIcon_classes.hpp"
#include "StackBEnhanceImagineTypeIcon_parameters.hpp"


namespace SDK
{

// Function StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C.SetMasterData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 SBMasterImagine                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStackBEnhanceImagineTypeIcon_C::SetMasterData(const struct FSBMasterImagine& SBMasterImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBEnhanceImagineTypeIcon_C", "SetMasterData");

	Params::StackBEnhanceImagineTypeIcon_C_SetMasterData Parms{};

	Parms.SBMasterImagine = std::move(SBMasterImagine);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C.SetIconColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBEnhanceImagineTypeIcon_C::SetIconColor(const struct FLinearColor& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBEnhanceImagineTypeIcon_C", "SetIconColor");

	Params::StackBEnhanceImagineTypeIcon_C_SetIconColor Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}

}

