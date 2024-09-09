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
	 * 		Name   -> Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_ChargeRoseOrb_C::BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UBP_RsDialog_ChargeRoseOrb_C_BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_ChargeRoseOrb_C::BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UBP_RsDialog_ChargeRoseOrb_C_BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.ExecuteUbergraph_BP_RsDialog_ChargeRoseOrb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_ChargeRoseOrb_C::ExecuteUbergraph_BP_RsDialog_ChargeRoseOrb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.ExecuteUbergraph_BP_RsDialog_ChargeRoseOrb");
		
		UBP_RsDialog_ChargeRoseOrb_C_ExecuteUbergraph_BP_RsDialog_ChargeRoseOrb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_ChargeRoseOrb_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.OnButtonClicked__DelegateSignature");
		
		UBP_RsDialog_ChargeRoseOrb_C_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RsDialog_ChargeRoseOrb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RsDialog_ChargeRoseOrb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C");
		return ptr;
	}

}


