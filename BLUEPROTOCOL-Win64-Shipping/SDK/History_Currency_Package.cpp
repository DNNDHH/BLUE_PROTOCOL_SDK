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
	 * 		Name   -> Function History_Currency.History_Currency_C.SetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Paid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Free                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistory_Currency_C::SetAmount(int32_t Paid, int32_t Free)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function History_Currency.History_Currency_C.SetAmount");
		
		UHistory_Currency_C_SetAmount_Params params {};
		params.Paid = Paid;
		params.Free = Free;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function History_Currency.History_Currency_C.SwitchShopType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHistoryType                                     HistoryType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistory_Currency_C::SwitchShopType(ESBHistoryType HistoryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function History_Currency.History_Currency_C.SwitchShopType");
		
		UHistory_Currency_C_SwitchShopType_Params params {};
		params.HistoryType = HistoryType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function History_Currency.History_Currency_C.Construct
	 * 		Flags  -> ()
	 */
	void UHistory_Currency_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function History_Currency.History_Currency_C.Construct");
		
		UHistory_Currency_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function History_Currency.History_Currency_C.ExecuteUbergraph_History_Currency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistory_Currency_C::ExecuteUbergraph_History_Currency(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function History_Currency.History_Currency_C.ExecuteUbergraph_History_Currency");
		
		UHistory_Currency_C_ExecuteUbergraph_History_Currency_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHistory_Currency_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHistory_Currency_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass History_Currency.History_Currency_C");
		return ptr;
	}

}


