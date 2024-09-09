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
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PlayAnimOut
	 * 		Flags  -> ()
	 */
	void UWBP_FilterSelecterWindow_C::PlayAnimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PlayAnimOut");
		
		UWBP_FilterSelecterWindow_C_PlayAnimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PlayAnimIn
	 * 		Flags  -> ()
	 */
	void UWBP_FilterSelecterWindow_C::PlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PlayAnimIn");
		
		UWBP_FilterSelecterWindow_C_PlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.SetWindowPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FilterSelecterWindow_C::SetWindowPosition(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.SetWindowPosition");
		
		UWBP_FilterSelecterWindow_C_SetWindowPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.ChangeFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFilter_Type                                       FilterType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FilterSelecterWindow_C::ChangeFilterType(EFilter_Type FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.ChangeFilterType");
		
		UWBP_FilterSelecterWindow_C_ChangeFilterType_Params params {};
		params.FilterType = FilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_FilterSelecterWindow_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.PreConstruct");
		
		UWBP_FilterSelecterWindow_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_FilterSelecterWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.Construct");
		
		UWBP_FilterSelecterWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_FilterSelecterWindow_C::BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature");
		
		UWBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_FilterSelecterWindow_C::BndEvt__FilterSelector_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature");
		
		UWBP_FilterSelecterWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_FilterSelecterWindow_C::BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_FilterSelecterWindow_C_BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UWBP_FilterSelecterWindow_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnPress_Cancel");
		
		UWBP_FilterSelecterWindow_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.ExecuteUbergraph_WBP_FilterSelecterWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FilterSelecterWindow_C::ExecuteUbergraph_WBP_FilterSelecterWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.ExecuteUbergraph_WBP_FilterSelecterWindow");
		
		UWBP_FilterSelecterWindow_C_ExecuteUbergraph_WBP_FilterSelecterWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnFilterApply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_FilterSelecterWindow_C::OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnFilterApply__DelegateSignature");
		
		UWBP_FilterSelecterWindow_C_OnFilterApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_FilterSelecterWindow_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C.OnClose__DelegateSignature");
		
		UWBP_FilterSelecterWindow_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_FilterSelecterWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_FilterSelecterWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C");
		return ptr;
	}

}


