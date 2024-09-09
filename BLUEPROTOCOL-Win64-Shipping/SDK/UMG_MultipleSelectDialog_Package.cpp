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
	 * 		Name   -> Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.HandleInit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FText>                                Selections                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_MultipleSelectDialog_C::HandleInit(const class FText& Message, TArray<class FText> Selections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.HandleInit");
		
		UUMG_MultipleSelectDialog_C_HandleInit_Params params {};
		params.Message = Message;
		params.Selections = Selections;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.OnSelected_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MultipleSelectDialog_C::OnSelected_Event_1(int32_t SelectIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.OnSelected_Event_1");
		
		UUMG_MultipleSelectDialog_C_OnSelected_Event_1_Params params {};
		params.SelectIndex = SelectIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_MultipleSelectDialog_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.Destruct");
		
		UUMG_MultipleSelectDialog_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_MultipleSelectDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.Construct");
		
		UUMG_MultipleSelectDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UUMG_MultipleSelectDialog_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.CustomEvent_1");
		
		UUMG_MultipleSelectDialog_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.SetCancelAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectIndex                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MultipleSelectDialog_C::SetCancelAction(int32_t SelectIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.SetCancelAction");
		
		UUMG_MultipleSelectDialog_C_SetCancelAction_Params params {};
		params.SelectIndex = SelectIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.SetDialogPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MultipleSelectDialog_C::SetDialogPosition(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.SetDialogPosition");
		
		UUMG_MultipleSelectDialog_C_SetDialogPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UUMG_MultipleSelectDialog_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UUMG_MultipleSelectDialog_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.ExecuteUbergraph_UMG_MultipleSelectDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MultipleSelectDialog_C::ExecuteUbergraph_UMG_MultipleSelectDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.ExecuteUbergraph_UMG_MultipleSelectDialog");
		
		UUMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MultipleSelectDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MultipleSelectDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C");
		return ptr;
	}

}


