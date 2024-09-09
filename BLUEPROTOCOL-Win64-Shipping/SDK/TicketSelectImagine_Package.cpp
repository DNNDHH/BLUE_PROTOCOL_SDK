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
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.UpdateRate
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::UpdateRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.UpdateRate");
		
		UTicketSelectImagine_C_UpdateRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.LoadImages
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::LoadImages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.LoadImages");
		
		UTicketSelectImagine_C_LoadImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.Initialize
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.Initialize");
		
		UTicketSelectImagine_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTicketSelectImagine_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.PreConstruct");
		
		UTicketSelectImagine_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.Construct
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.Construct");
		
		UTicketSelectImagine_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.OnTicketSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTicketSelectImagine_C::OnTicketSelected(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.OnTicketSelected");
		
		UTicketSelectImagine_C_OnTicketSelected_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.BndEvt__TicketSelectImagine_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::BndEvt__TicketSelectImagine_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.BndEvt__TicketSelectImagine_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UTicketSelectImagine_C_BndEvt__TicketSelectImagine_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.Destruct");
		
		UTicketSelectImagine_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.RequestClose
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::RequestClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.RequestClose");
		
		UTicketSelectImagine_C_RequestClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.onClosedTicketSelect
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::onClosedTicketSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.onClosedTicketSelect");
		
		UTicketSelectImagine_C_onClosedTicketSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2");
		
		UTicketSelectImagine_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.BndEvt__TicketSelectImagine_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::BndEvt__TicketSelectImagine_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.BndEvt__TicketSelectImagine_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature");
		
		UTicketSelectImagine_C_BndEvt__TicketSelectImagine_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.BndEvt__TicketSelectImagine_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::BndEvt__TicketSelectImagine_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.BndEvt__TicketSelectImagine_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UTicketSelectImagine_C_BndEvt__TicketSelectImagine_Btn_Decide_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.ExecuteUbergraph_TicketSelectImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTicketSelectImagine_C::ExecuteUbergraph_TicketSelectImagine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.ExecuteUbergraph_TicketSelectImagine");
		
		UTicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.OnDecide__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTicketSelectImagine_C::OnDecide__DelegateSignature(int32_t Ticket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.OnDecide__DelegateSignature");
		
		UTicketSelectImagine_C_OnDecide__DelegateSignature_Params params {};
		params.Ticket = Ticket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectImagine.TicketSelectImagine_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTicketSelectImagine_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectImagine.TicketSelectImagine_C.OnClose__DelegateSignature");
		
		UTicketSelectImagine_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTicketSelectImagine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTicketSelectImagine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TicketSelectImagine.TicketSelectImagine_C");
		return ptr;
	}

}


