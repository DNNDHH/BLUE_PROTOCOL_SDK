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
	 * 		Name   -> Function HudCustomMenu.HudCustomMenu_C.SetApplyButtonEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHudCustomMenu_C::SetApplyButtonEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomMenu.HudCustomMenu_C.SetApplyButtonEnabled");
		
		UHudCustomMenu_C_SetApplyButtonEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomMenu.HudCustomMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UHudCustomMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomMenu.HudCustomMenu_C.Construct");
		
		UHudCustomMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomMenu.HudCustomMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHudCustomMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomMenu.HudCustomMenu_C.Destruct");
		
		UHudCustomMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomMenu.HudCustomMenu_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHudCustomMenu_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomMenu.HudCustomMenu_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature");
		
		UHudCustomMenu_C_BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomMenu.HudCustomMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UHudCustomMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomMenu.HudCustomMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UHudCustomMenu_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomMenu.HudCustomMenu_C.BndEvt__HudCustomMenu_BtnAppli_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHudCustomMenu_C::BndEvt__HudCustomMenu_BtnAppli_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomMenu.HudCustomMenu_C.BndEvt__HudCustomMenu_BtnAppli_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UHudCustomMenu_C_BndEvt__HudCustomMenu_BtnAppli_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomMenu.HudCustomMenu_C.BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHudCustomMenu_C::BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomMenu.HudCustomMenu_C.BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UHudCustomMenu_C_BndEvt__HudCustomMenu_BtnContinue_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomMenu.HudCustomMenu_C.ExecuteUbergraph_HudCustomMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHudCustomMenu_C::ExecuteUbergraph_HudCustomMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomMenu.HudCustomMenu_C.ExecuteUbergraph_HudCustomMenu");
		
		UHudCustomMenu_C_ExecuteUbergraph_HudCustomMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomMenu.HudCustomMenu_C.OnApplied__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHudCustomMenu_C::OnApplied__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomMenu.HudCustomMenu_C.OnApplied__DelegateSignature");
		
		UHudCustomMenu_C_OnApplied__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomMenu.HudCustomMenu_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsCancel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHudCustomMenu_C::OnClose__DelegateSignature(bool bIsCancel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomMenu.HudCustomMenu_C.OnClose__DelegateSignature");
		
		UHudCustomMenu_C_OnClose__DelegateSignature_Params params {};
		params.bIsCancel = bIsCancel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudCustomMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudCustomMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudCustomMenu.HudCustomMenu_C");
		return ptr;
	}

}


