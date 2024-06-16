#pragma once

 

// Package: BP_RsDialog_ProductTitle

#include "Basic.hpp"

#include "BP_RsDialog_ProductTitle_classes.hpp"
#include "BP_RsDialog_ProductTitle_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_ProductTitle.BP_RsDialog_ProductTitle_C.ExecuteUbergraph_BP_RsDialog_ProductTitle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ProductTitle_C::ExecuteUbergraph_BP_RsDialog_ProductTitle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductTitle_C", "ExecuteUbergraph_BP_RsDialog_ProductTitle");

	Params::BP_RsDialog_ProductTitle_C_ExecuteUbergraph_BP_RsDialog_ProductTitle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ProductTitle.BP_RsDialog_ProductTitle_C.LoadTexture_CmnIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ProductTitle_C::LoadTexture_CmnIcon(int32 ItemSetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductTitle_C", "LoadTexture_CmnIcon");

	Params::BP_RsDialog_ProductTitle_C_LoadTexture_CmnIcon Parms{};

	Parms.ItemSetId = ItemSetId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ProductTitle.BP_RsDialog_ProductTitle_C.SetProductTitleInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogProductTitleType               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ProductName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   RankFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RankTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ProductTitle_C::SetProductTitleInfo(ERsDialogProductTitleType Type, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductTitle_C", "SetProductTitleInfo");

	Params::BP_RsDialog_ProductTitle_C_SetProductTitleInfo Parms{};

	Parms.Type = Type;
	Parms.ItemSetId = ItemSetId;
	Parms.ProductName = std::move(ProductName);
	Parms.RankFrom = RankFrom;
	Parms.RankTo = RankTo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ProductTitle.BP_RsDialog_ProductTitle_C.SetSelectNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ProductTitle_C::SetSelectNum(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ProductTitle_C", "SetSelectNum");

	Params::BP_RsDialog_ProductTitle_C_SetSelectNum Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}

}

