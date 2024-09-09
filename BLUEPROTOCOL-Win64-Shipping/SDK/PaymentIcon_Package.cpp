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
	 * 		Name   -> Function PaymentIcon.PaymentIcon_C.OnLoaded_8C0C865A4CBAA0D5999B34AE45734207
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPaymentIcon_C::OnLoaded_8C0C865A4CBAA0D5999B34AE45734207(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentIcon.PaymentIcon_C.OnLoaded_8C0C865A4CBAA0D5999B34AE45734207");
		
		UPaymentIcon_C_OnLoaded_8C0C865A4CBAA0D5999B34AE45734207_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentIcon.PaymentIcon_C.SetIcon
	 * 		Flags  -> ()
	 */
	void UPaymentIcon_C::SetIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentIcon.PaymentIcon_C.SetIcon");
		
		UPaymentIcon_C_SetIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentIcon.PaymentIcon_C.BndEvt__PaymentIcon_Btn_Icon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPaymentIcon_C::BndEvt__PaymentIcon_Btn_Icon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentIcon.PaymentIcon_C.BndEvt__PaymentIcon_Btn_Icon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UPaymentIcon_C_BndEvt__PaymentIcon_Btn_Icon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentIcon.PaymentIcon_C.ExecuteUbergraph_PaymentIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPaymentIcon_C::ExecuteUbergraph_PaymentIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentIcon.PaymentIcon_C.ExecuteUbergraph_PaymentIcon");
		
		UPaymentIcon_C_ExecuteUbergraph_PaymentIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentIcon.PaymentIcon_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPaymentIcon_C::OnClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentIcon.PaymentIcon_C.OnClicked__DelegateSignature");
		
		UPaymentIcon_C_OnClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaymentIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaymentIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PaymentIcon.PaymentIcon_C");
		return ptr;
	}

}


