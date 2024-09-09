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
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.UpdateCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStackTokenSelectorListItem_C*               OnSelect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackTokenSelectorListView_C::UpdateCheck(class UStackTokenSelectorListItem_C* OnSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.UpdateCheck");
		
		UStackTokenSelectorListView_C_UpdateCheck_Params params {};
		params.OnSelect = OnSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.Initialize
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListView_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.Initialize");
		
		UStackTokenSelectorListView_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.Construct
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.Construct");
		
		UStackTokenSelectorListView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnSelectTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStackTokenSelectorListItem_C*               Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackTokenSelectorListView_C::OnSelectTicket(class UStackTokenSelectorListItem_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnSelectTicket");
		
		UStackTokenSelectorListView_C_OnSelectTicket_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.Close
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListView_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.Close");
		
		UStackTokenSelectorListView_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListView_C::BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UStackTokenSelectorListView_C_BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.SetWindowPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackTokenSelectorListView_C::SetWindowPosition(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.SetWindowPosition");
		
		UStackTokenSelectorListView_C_SetWindowPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.Set Window Alignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InAlignment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackTokenSelectorListView_C::SetWindowAlignment(const struct FVector2D& InAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.Set Window Alignment");
		
		UStackTokenSelectorListView_C_SetWindowAlignment_Params params {};
		params.InAlignment = InAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListView_C::BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature");
		
		UStackTokenSelectorListView_C_BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListView_C::BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");
		
		UStackTokenSelectorListView_C_BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnPressCancel
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListView_C::OnPressCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnPressCancel");
		
		UStackTokenSelectorListView_C_OnPressCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.Destruct
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListView_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.Destruct");
		
		UStackTokenSelectorListView_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListView_C::WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1");
		
		UStackTokenSelectorListView_C_WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.ExecuteUbergraph_StackTokenSelectorListView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackTokenSelectorListView_C::ExecuteUbergraph_StackTokenSelectorListView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.ExecuteUbergraph_StackTokenSelectorListView");
		
		UStackTokenSelectorListView_C_ExecuteUbergraph_StackTokenSelectorListView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnSelectClose__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackTokenSelectorListView_C::OnSelectClose__DelegateSignature(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnSelectClose__DelegateSignature");
		
		UStackTokenSelectorListView_C_OnSelectClose__DelegateSignature_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListView_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListView.StackTokenSelectorListView_C.OnClose__DelegateSignature");
		
		UStackTokenSelectorListView_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackTokenSelectorListView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackTokenSelectorListView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackTokenSelectorListView.StackTokenSelectorListView_C");
		return ptr;
	}

}


