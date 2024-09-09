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
	 * 		Name   -> Function GashaMenu_ProductListRateLine.GashaMenu_ProductListRateLine_C.Construct
	 * 		Flags  -> ()
	 */
	void UGashaMenu_ProductListRateLine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaMenu_ProductListRateLine.GashaMenu_ProductListRateLine_C.Construct");
		
		UGashaMenu_ProductListRateLine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaMenu_ProductListRateLine.GashaMenu_ProductListRateLine_C.ExecuteUbergraph_GashaMenu_ProductListRateLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaMenu_ProductListRateLine_C::ExecuteUbergraph_GashaMenu_ProductListRateLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaMenu_ProductListRateLine.GashaMenu_ProductListRateLine_C.ExecuteUbergraph_GashaMenu_ProductListRateLine");
		
		UGashaMenu_ProductListRateLine_C_ExecuteUbergraph_GashaMenu_ProductListRateLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGashaMenu_ProductListRateLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGashaMenu_ProductListRateLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GashaMenu_ProductListRateLine.GashaMenu_ProductListRateLine_C");
		return ptr;
	}

}


