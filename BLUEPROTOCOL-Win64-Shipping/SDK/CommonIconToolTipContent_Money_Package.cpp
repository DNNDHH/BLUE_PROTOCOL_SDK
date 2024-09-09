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
	 * 		Name   -> Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.Set Option
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InOptionText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonIconToolTipContent_Money_C::SetOption(const class FText& InOptionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.Set Option");
		
		UCommonIconToolTipContent_Money_C_SetOption_Params params {};
		params.InOptionText = InOptionText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.SetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InAmountText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonIconToolTipContent_Money_C::SetAmount(int32_t InAmount, const class FText& InAmountText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.SetAmount");
		
		UCommonIconToolTipContent_Money_C_SetAmount_Params params {};
		params.InAmount = InAmount;
		params.InAmountText = InAmountText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.ExecuteUbergraph_CommonIconToolTipContent_Money
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_Money_C::ExecuteUbergraph_CommonIconToolTipContent_Money(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C.ExecuteUbergraph_CommonIconToolTipContent_Money");
		
		UCommonIconToolTipContent_Money_C_ExecuteUbergraph_CommonIconToolTipContent_Money_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContent_Money_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContent_Money_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContent_Money.CommonIconToolTipContent_Money_C");
		return ptr;
	}

}


