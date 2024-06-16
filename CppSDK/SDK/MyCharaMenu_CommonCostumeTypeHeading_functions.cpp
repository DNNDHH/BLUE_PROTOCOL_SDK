#pragma once

 

// Package: MyCharaMenu_CommonCostumeTypeHeading

#include "Basic.hpp"

#include "MyCharaMenu_CommonCostumeTypeHeading_classes.hpp"
#include "MyCharaMenu_CommonCostumeTypeHeading_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CommonCostumeTypeHeading_C::ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CommonCostumeTypeHeading_C", "ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading");

	Params::MyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_CommonCostumeTypeHeading_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CommonCostumeTypeHeading_C", "PreConstruct");

	Params::MyCharaMenu_CommonCostumeTypeHeading_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleTextTable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTextTableAsset*                InTextTable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CommonCostumeTypeHeading_C::SetHeadingTitleTextTable(class USBTextTableAsset* InTextTable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CommonCostumeTypeHeading_C", "SetHeadingTitleTextTable");

	Params::MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextTable Parms{};

	Parms.InTextTable = InTextTable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleTextId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_CommonCostumeTypeHeading_C::SetHeadingTitleTextId(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CommonCostumeTypeHeading_C", "SetHeadingTitleTextId");

	Params::MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_CommonCostumeTypeHeading_C::SetHeadingTitleText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_CommonCostumeTypeHeading_C", "SetHeadingTitleText");

	Params::MyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

