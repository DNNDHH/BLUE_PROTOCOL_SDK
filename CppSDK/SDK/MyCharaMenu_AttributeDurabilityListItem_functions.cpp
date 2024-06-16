#pragma once

 

// Package: MyCharaMenu_AttributeDurabilityListItem

#include "Basic.hpp"

#include "MyCharaMenu_AttributeDurabilityListItem_classes.hpp"
#include "MyCharaMenu_AttributeDurabilityListItem_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttribute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBAttribute                            InAttribute                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AttributeDurabilityListItem_C::SetAttribute(ESBAttribute InAttribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AttributeDurabilityListItem_C", "SetAttribute");

	Params::MyCharaMenu_AttributeDurabilityListItem_C_SetAttribute Parms{};

	Parms.InAttribute = InAttribute;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeIconTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UMyCharaMenu_AttributeDurabilityListItem_C::SetAttributeIconTexture(TSoftObjectPtr<class UTexture2D> InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AttributeDurabilityListItem_C", "SetAttributeIconTexture");

	Params::MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeIconTexture Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeNameByTextId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AttributeDurabilityListItem_C::SetAttributeNameByTextId(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AttributeDurabilityListItem_C", "SetAttributeNameByTextId");

	Params::MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeNameByTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.SetAttributeDurabilityValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AttributeDurabilityListItem_C::SetAttributeDurabilityValue(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AttributeDurabilityListItem_C", "SetAttributeDurabilityValue");

	Params::MyCharaMenu_AttributeDurabilityListItem_C_SetAttributeDurabilityValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C.GetAttribute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBAttribute                            OutAttribute                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AttributeDurabilityListItem_C::GetAttribute(ESBAttribute* OutAttribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AttributeDurabilityListItem_C", "GetAttribute");

	Params::MyCharaMenu_AttributeDurabilityListItem_C_GetAttribute Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutAttribute != nullptr)
		*OutAttribute = Parms.OutAttribute;
}

}

