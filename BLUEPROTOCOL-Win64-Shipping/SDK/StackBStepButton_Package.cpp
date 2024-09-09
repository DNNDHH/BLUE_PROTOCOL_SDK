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
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.SetButtonName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TextId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBStepButton_C::SetButtonName(int32_t TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.SetButtonName");
		
		UStackBStepButton_C_SetButtonName_Params params {};
		params.TextId = TextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.SetBeginSelectView
	 * 		Flags  -> ()
	 */
	void UStackBStepButton_C::SetBeginSelectView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.SetBeginSelectView");
		
		UStackBStepButton_C_SetBeginSelectView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.SetButtonNo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBStepButton_C::SetButtonNo(int32_t Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.SetButtonNo");
		
		UStackBStepButton_C_SetButtonNo_Params params {};
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.ClearSelectedView
	 * 		Flags  -> ()
	 */
	void UStackBStepButton_C::ClearSelectedView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.ClearSelectedView");
		
		UStackBStepButton_C_ClearSelectedView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.SelectView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStackBStepButton_C::SelectView(bool bButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.SelectView");
		
		UStackBStepButton_C_SelectView_Params params {};
		params.bButton = bButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.GetAppendedView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 View                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBStepButton_C::GetAppendedView(class UUserWidget** View)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.GetAppendedView");
		
		UStackBStepButton_C_GetAppendedView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (View != nullptr)
			*View = params.View;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.Terminate
	 * 		Flags  -> ()
	 */
	void UStackBStepButton_C::Terminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.Terminate");
		
		UStackBStepButton_C_Terminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.SetSelectedView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 AppendedWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBStepButton_C::SetSelectedView(class UUserWidget* AppendedWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.SetSelectedView");
		
		UStackBStepButton_C_SetSelectedView_Params params {};
		params.AppendedWidget = AppendedWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.Destruct
	 * 		Flags  -> ()
	 */
	void UStackBStepButton_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.Destruct");
		
		UStackBStepButton_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.BndEvt__StackBoostStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackBStepButton_C::BndEvt__StackBoostStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.BndEvt__StackBoostStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UStackBStepButton_C_BndEvt__StackBoostStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackBStepButton_C::BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UStackBStepButton_C_BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UStackBStepButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.Construct");
		
		UStackBStepButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackBStepButton_C::BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UStackBStepButton_C_BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackBStepButton_C::BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UStackBStepButton_C_BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackBStepButton_C::BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");
		
		UStackBStepButton_C_BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.ExecuteUbergraph_StackBStepButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBStepButton_C::ExecuteUbergraph_StackBStepButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.ExecuteUbergraph_StackBStepButton");
		
		UStackBStepButton_C_ExecuteUbergraph_StackBStepButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBStepButton.StackBStepButton_C.OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackBStepButton_C::OnSelect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBStepButton.StackBStepButton_C.OnSelect__DelegateSignature");
		
		UStackBStepButton_C_OnSelect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackBStepButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackBStepButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackBStepButton.StackBStepButton_C");
		return ptr;
	}

}


