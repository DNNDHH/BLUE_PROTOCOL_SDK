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
	 * 		Name   -> Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.SetText_ErrorCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_ErrorCode_C::SetText_ErrorCode(int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.SetText_ErrorCode");
		
		UBP_RsDialog_ErrorCode_C_SetText_ErrorCode_Params params {};
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_ErrorCode_C::BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UBP_RsDialog_ErrorCode_C_BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.ExecuteUbergraph_BP_RsDialog_ErrorCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_ErrorCode_C::ExecuteUbergraph_BP_RsDialog_ErrorCode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.ExecuteUbergraph_BP_RsDialog_ErrorCode");
		
		UBP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_ErrorCode_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.OnButtonClicked__DelegateSignature");
		
		UBP_RsDialog_ErrorCode_C_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RsDialog_ErrorCode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RsDialog_ErrorCode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C");
		return ptr;
	}

}


