#pragma once

 

// Package: MyCharaMenu_EquippedCostumeInfoItem

#include "Basic.hpp"

#include "MyCharaMenu_EquippedCostumeInfoItem_classes.hpp"
#include "MyCharaMenu_EquippedCostumeInfoItem_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_EquippedCostumeInfoItem_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquippedCostumeInfoItem_C", "SetText");

	Params::MyCharaMenu_EquippedCostumeInfoItem_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C.SetIsGrayOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsGrayOut                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_EquippedCostumeInfoItem_C::SetIsGrayOut(bool InIsGrayOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquippedCostumeInfoItem_C", "SetIsGrayOut");

	Params::MyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut Parms{};

	Parms.InIsGrayOut = InIsGrayOut;

	UObject::ProcessEvent(Func, &Parms);
}

}

