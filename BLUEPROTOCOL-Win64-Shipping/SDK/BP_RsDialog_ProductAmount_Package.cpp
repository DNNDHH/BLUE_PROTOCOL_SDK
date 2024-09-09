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
	 * 		Name   -> Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_ProductAmount_C::SetAmount(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetAmount");
		
		UBP_RsDialog_ProductAmount_C_SetAmount_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.Construct
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_ProductAmount_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.Construct");
		
		UBP_RsDialog_ProductAmount_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetPaymentType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogPaymentType                               Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_ProductAmount_C::SetPaymentType(ERsDialogPaymentType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetPaymentType");
		
		UBP_RsDialog_ProductAmount_C_SetPaymentType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RsDialog_ProductAmount_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.PreConstruct");
		
		UBP_RsDialog_ProductAmount_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetAmountColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RsDialog_ProductAmount_C::SetAmountColor(bool IsLack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetAmountColor");
		
		UBP_RsDialog_ProductAmount_C_SetAmountColor_Params params {};
		params.IsLack = IsLack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetSelectNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_ProductAmount_C::SetSelectNum(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetSelectNum");
		
		UBP_RsDialog_ProductAmount_C_SetSelectNum_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetRibbon_PaidOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PaidOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RsDialog_ProductAmount_C::SetRibbon_PaidOnly(bool PaidOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.SetRibbon_PaidOnly");
		
		UBP_RsDialog_ProductAmount_C_SetRibbon_PaidOnly_Params params {};
		params.PaidOnly = PaidOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.ExecuteUbergraph_BP_RsDialog_ProductAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_ProductAmount_C::ExecuteUbergraph_BP_RsDialog_ProductAmount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C.ExecuteUbergraph_BP_RsDialog_ProductAmount");
		
		UBP_RsDialog_ProductAmount_C_ExecuteUbergraph_BP_RsDialog_ProductAmount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RsDialog_ProductAmount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RsDialog_ProductAmount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RsDialog_ProductAmount.BP_RsDialog_ProductAmount_C");
		return ptr;
	}

}


