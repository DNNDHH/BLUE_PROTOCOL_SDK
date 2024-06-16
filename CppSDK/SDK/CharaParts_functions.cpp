#pragma once

 

// Package: CharaParts

#include "Basic.hpp"

#include "CharaParts_classes.hpp"
#include "CharaParts_parameters.hpp"


namespace SDK
{

// Function CharaParts.CharaPartsData.GetDefaultColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   Param_Index                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCharaPartsColorData             ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FCharaPartsColorData UCharaPartsData::GetDefaultColor(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaPartsData", "GetDefaultColor");

	Params::CharaPartsData_GetDefaultColor Parms{};

	Parms.Param_Index = Param_Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CharaParts.CharaPartsData.GetCheckedSubLocationArray
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<ECharaPartsLocation>             CharaPartsLocationArray                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCharaPartsData::GetCheckedSubLocationArray(TArray<ECharaPartsLocation>* CharaPartsLocationArray) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaPartsData", "GetCheckedSubLocationArray");

	Params::CharaPartsData_GetCheckedSubLocationArray Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (CharaPartsLocationArray != nullptr)
		*CharaPartsLocationArray = std::move(Parms.CharaPartsLocationArray);
}


// Function CharaParts.CharaPartsData.GetPartsMaterialColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ColorParameterIndex                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   HueIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   MaterialColorListIndex                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FLinearColor               ReturnValue                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

const struct FLinearColor UCharaPartsData::GetPartsMaterialColor(int32 ColorParameterIndex, int32 HueIndex, int32 MaterialColorListIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaPartsData", "GetPartsMaterialColor");

	Params::CharaPartsData_GetPartsMaterialColor Parms{};

	Parms.ColorParameterIndex = ColorParameterIndex;
	Parms.HueIndex = HueIndex;
	Parms.MaterialColorListIndex = MaterialColorListIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

