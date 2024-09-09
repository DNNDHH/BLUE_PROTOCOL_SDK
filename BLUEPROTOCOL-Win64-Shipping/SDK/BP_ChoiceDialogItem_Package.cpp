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
	 * 		Name   -> Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UBP_ChoiceDialogItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.Construct");
		
		UBP_ChoiceDialogItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_ChoiceDialogItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");
		
		UBP_ChoiceDialogItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_ChoiceDialogItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UBP_ChoiceDialogItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.ExecuteUbergraph_BP_ChoiceDialogItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ChoiceDialogItem_C::ExecuteUbergraph_BP_ChoiceDialogItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.ExecuteUbergraph_BP_ChoiceDialogItem");
		
		UBP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_ChoiceDialogItem_C*                      Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ChoiceDialogItem_C::OnClicked__DelegateSignature(class UBP_ChoiceDialogItem_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.OnClicked__DelegateSignature");
		
		UBP_ChoiceDialogItem_C_OnClicked__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ChoiceDialogItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ChoiceDialogItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ChoiceDialogItem.BP_ChoiceDialogItem_C");
		return ptr;
	}

}


