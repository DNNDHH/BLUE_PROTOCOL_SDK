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
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.GenerateTexts
	 * 		Flags  -> ()
	 */
	void UHudCustomSlot_C::GenerateTexts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.GenerateTexts");
		
		UHudCustomSlot_C_GenerateTexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.CollectBtnTxt
	 * 		Flags  -> ()
	 */
	void UHudCustomSlot_C::CollectBtnTxt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.CollectBtnTxt");
		
		UHudCustomSlot_C_CollectBtnTxt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHudCustomSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.PreConstruct");
		
		UHudCustomSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.Construct
	 * 		Flags  -> ()
	 */
	void UHudCustomSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.Construct");
		
		UHudCustomSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.OnTextInputed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      OnButton                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InputText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHudCustomSlot_C::OnTextInputed(EDialogResult OnButton, const class FText& InputText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.OnTextInputed");
		
		UHudCustomSlot_C_OnTextInputed_Params params {};
		params.OnButton = OnButton;
		params.InputText = InputText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHudCustomSlot_C::BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UHudCustomSlot_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UHudCustomSlot_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.OnPress_Cancel");
		
		UHudCustomSlot_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHudCustomSlot_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.Destruct");
		
		UHudCustomSlot_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHudCustomSlot_C::BndEvt__Btn_CS1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UHudCustomSlot_C_BndEvt__Btn_CS1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHudCustomSlot_C::BndEvt__Btn_CS2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UHudCustomSlot_C_BndEvt__Btn_CS2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHudCustomSlot_C::BndEvt__Btn_CS3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.BndEvt__Btn_CS3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UHudCustomSlot_C_BndEvt__Btn_CS3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.ExecuteUbergraph_HudCustomSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHudCustomSlot_C::ExecuteUbergraph_HudCustomSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.ExecuteUbergraph_HudCustomSlot");
		
		UHudCustomSlot_C_ExecuteUbergraph_HudCustomSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HudCustomSlot.HudCustomSlot_C.RequestSave__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCustomHudLayoutSlot                             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHudCustomSlot_C::RequestSave__DelegateSignature(ESBCustomHudLayoutSlot Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudCustomSlot.HudCustomSlot_C.RequestSave__DelegateSignature");
		
		UHudCustomSlot_C_RequestSave__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudCustomSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudCustomSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudCustomSlot.HudCustomSlot_C");
		return ptr;
	}

}


