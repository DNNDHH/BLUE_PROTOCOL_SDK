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
	 * 		Name   -> Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.SetClassTypeForTutorialHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsUsingClassTypeForTutorialHelp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShowTutorialHelpBtn_C::SetClassTypeForTutorialHelp(bool bInIsUsingClassTypeForTutorialHelp, ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.SetClassTypeForTutorialHelp");
		
		UShowTutorialHelpBtn_C_SetClassTypeForTutorialHelp_Params params {};
		params.bInIsUsingClassTypeForTutorialHelp = bInIsUsingClassTypeForTutorialHelp;
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShowTutorialHelpBtn_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UShowTutorialHelpBtn_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.Destruct
	 * 		Flags  -> ()
	 */
	void UShowTutorialHelpBtn_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.Destruct");
		
		UShowTutorialHelpBtn_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.OnClose_Event_1
	 * 		Flags  -> ()
	 */
	void UShowTutorialHelpBtn_C::OnClose_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.OnClose_Event_1");
		
		UShowTutorialHelpBtn_C_OnClose_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.BndEvt__Btn_ShowHint_L_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShowTutorialHelpBtn_C::BndEvt__Btn_ShowHint_L_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.BndEvt__Btn_ShowHint_L_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UShowTutorialHelpBtn_C_BndEvt__Btn_ShowHint_L_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShowTutorialHelpBtn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.PreConstruct");
		
		UShowTutorialHelpBtn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.ExecuteUbergraph_ShowTutorialHelpBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShowTutorialHelpBtn_C::ExecuteUbergraph_ShowTutorialHelpBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.ExecuteUbergraph_ShowTutorialHelpBtn");
		
		UShowTutorialHelpBtn_C_ExecuteUbergraph_ShowTutorialHelpBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShowTutorialHelpBtn_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.OnClose__DelegateSignature");
		
		UShowTutorialHelpBtn_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.OnOpen__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShowTutorialHelpBtn_C::OnOpen__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShowTutorialHelpBtn.ShowTutorialHelpBtn_C.OnOpen__DelegateSignature");
		
		UShowTutorialHelpBtn_C_OnOpen__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShowTutorialHelpBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShowTutorialHelpBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShowTutorialHelpBtn.ShowTutorialHelpBtn_C");
		return ptr;
	}

}


