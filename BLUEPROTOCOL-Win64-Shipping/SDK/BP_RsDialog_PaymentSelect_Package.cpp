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
	 * 		Name   -> Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.ExecutionConfirmText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogPaymentType                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_PaymentSelect_C::ExecutionConfirmText(ERsDialogPaymentType Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.ExecutionConfirmText");
		
		UBP_RsDialog_PaymentSelect_C_ExecutionConfirmText_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.SetPaymentInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogPaymentType                               PaymentType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PurchasePrice                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_PaymentSelect_C::SetPaymentInfo(ERsDialogPaymentType PaymentType, int32_t PurchasePrice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.SetPaymentInfo");
		
		UBP_RsDialog_PaymentSelect_C_SetPaymentInfo_Params params {};
		params.PaymentType = PaymentType;
		params.PurchasePrice = PurchasePrice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.BndEvt__Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_PaymentSelect_C::BndEvt__Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.BndEvt__Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UBP_RsDialog_PaymentSelect_C_BndEvt__Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.ExecuteUbergraph_BP_RsDialog_PaymentSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_PaymentSelect_C::ExecuteUbergraph_BP_RsDialog_PaymentSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.ExecuteUbergraph_BP_RsDialog_PaymentSelect");
		
		UBP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_PaymentSelect_C::OnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.OnButtonClicked__DelegateSignature");
		
		UBP_RsDialog_PaymentSelect_C_OnButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RsDialog_PaymentSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RsDialog_PaymentSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C");
		return ptr;
	}

}


