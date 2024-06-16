#pragma once

 

// Package: FlatShop_ProductItem_DescItemText

#include "Basic.hpp"

#include "FlatShop_ProductItem_DescItemText_classes.hpp"
#include "FlatShop_ProductItem_DescItemText_parameters.hpp"


namespace SDK
{

// Function FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C.SetProductInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Product                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlatShop_ProductItem_DescItemText_C::SetProductInfo(bool Product)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItemText_C", "SetProductInfo");

	Params::FlatShop_ProductItem_DescItemText_C_SetProductInfo Parms{};

	Parms.Product = Product;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Desc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UFlatShop_ProductItem_DescItemText_C::SetDescription(const class FText& Desc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItemText_C", "SetDescription");

	Params::FlatShop_ProductItem_DescItemText_C_SetDescription Parms{};

	Parms.Desc = std::move(Desc);

	UObject::ProcessEvent(Func, &Parms);
}

}

