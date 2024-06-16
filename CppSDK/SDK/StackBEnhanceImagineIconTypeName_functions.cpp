#pragma once

 

// Package: StackBEnhanceImagineIconTypeName

#include "Basic.hpp"

#include "StackBEnhanceImagineIconTypeName_classes.hpp"
#include "StackBEnhanceImagineIconTypeName_parameters.hpp"


namespace SDK
{

// Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.ExecuteUbergraph_StackBEnhanceImagineIconTypeName
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBEnhanceImagineIconTypeName_C::ExecuteUbergraph_StackBEnhanceImagineIconTypeName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBEnhanceImagineIconTypeName_C", "ExecuteUbergraph_StackBEnhanceImagineIconTypeName");

	Params::StackBEnhanceImagineIconTypeName_C_ExecuteUbergraph_StackBEnhanceImagineIconTypeName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStackBEnhanceImagineIconTypeName_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBEnhanceImagineIconTypeName_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.SetMasterData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 SBMasterImagine                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStackBEnhanceImagineIconTypeName_C::SetMasterData(const struct FSBMasterImagine& SBMasterImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBEnhanceImagineIconTypeName_C", "SetMasterData");

	Params::StackBEnhanceImagineIconTypeName_C_SetMasterData Parms{};

	Parms.SBMasterImagine = std::move(SBMasterImagine);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.SetFontColorSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     ImgColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      TxtColor                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                     IconColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FontSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBEnhanceImagineIconTypeName_C::SetFontColorSize(const struct FLinearColor& ImgColor, const struct FSlateColor& TxtColor, const struct FLinearColor& IconColor, float FontSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBEnhanceImagineIconTypeName_C", "SetFontColorSize");

	Params::StackBEnhanceImagineIconTypeName_C_SetFontColorSize Parms{};

	Parms.ImgColor = std::move(ImgColor);
	Parms.TxtColor = std::move(TxtColor);
	Parms.IconColor = std::move(IconColor);
	Parms.FontSize = FontSize;

	UObject::ProcessEvent(Func, &Parms);
}

}

