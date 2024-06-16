#pragma once

 

// Package: BuffIconFunctionLibrary

#include "Basic.hpp"

#include "BuffIconFunctionLibrary_classes.hpp"
#include "BuffIconFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BuffIconFunctionLibrary.BuffIconFunctionLibrary_C.FindIconAssetData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBStatusAilmentIconType                IconType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLarge                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFind                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             TextId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bBuff                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBStatusAilmentPlateType               Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffIconFunctionLibrary_C::FindIconAssetData(ESBStatusAilmentIconType IconType, bool bLarge, class UObject* __WorldContext, class UTexture2D** Texture, bool* IsFind, class FName* TextId, bool* bBuff, ESBStatusAilmentPlateType* Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BuffIconFunctionLibrary_C", "FindIconAssetData");

	Params::BuffIconFunctionLibrary_C_FindIconAssetData Parms{};

	Parms.IconType = IconType;
	Parms.bLarge = bLarge;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (IsFind != nullptr)
		*IsFind = Parms.IsFind;

	if (TextId != nullptr)
		*TextId = Parms.TextId;

	if (bBuff != nullptr)
		*bBuff = Parms.bBuff;

	if (Type != nullptr)
		*Type = Parms.Type;
}

}

