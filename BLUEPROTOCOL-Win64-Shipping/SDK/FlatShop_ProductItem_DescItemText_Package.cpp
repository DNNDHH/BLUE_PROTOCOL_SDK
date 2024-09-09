/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C.SetDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFlatShop_ProductItem_DescItemText_C::SetDescription(const class FText& Desc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C.SetDescription");
		
		UFlatShop_ProductItem_DescItemText_C_SetDescription_Params params {};
		params.Desc = Desc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C.SetProductInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Product                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_ProductItem_DescItemText_C::SetProductInfo(bool Product)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C.SetProductInfo");
		
		UFlatShop_ProductItem_DescItemText_C_SetProductInfo_Params params {};
		params.Product = Product;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlatShop_ProductItem_DescItemText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlatShop_ProductItem_DescItemText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FlatShop_ProductItem_DescItemText.FlatShop_ProductItem_DescItemText_C");
		return ptr;
	}

}


