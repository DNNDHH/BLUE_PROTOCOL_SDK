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
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.SetBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PartyMenu_Button_C::SetBtn(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.SetBtn");
		
		UUMG_PartyMenu_Button_C_SetBtn_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.PlayBtnAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PartyMenu_Button_C::PlayBtnAnim(bool bInActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.PlayBtnAnim");
		
		UUMG_PartyMenu_Button_C_PlayBtnAnim_Params params {};
		params.bInActive = bInActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.SetButtonType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPartyButtonType                                   Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMenu_Button_C::SetButtonType(EPartyButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.SetButtonType");
		
		UUMG_PartyMenu_Button_C_SetButtonType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMenu_Button_C::CustomEvent_1(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.CustomEvent_1");
		
		UUMG_PartyMenu_Button_C_CustomEvent_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.ResetButtonState
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMenu_Button_C::ResetButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.ResetButtonState");
		
		UUMG_PartyMenu_Button_C_ResetButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectIndex                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMenu_Button_C::CustomEvent_2(int32_t SelectIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.CustomEvent_2");
		
		UUMG_PartyMenu_Button_C_CustomEvent_2_Params params {};
		params.SelectIndex = SelectIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMenu_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_PartyMenu_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMenu_Button_C::BndEvt__ContentButton_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_PartyMenu_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMenu_Button_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PartyMenu_Button_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMenu_Button_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Tick");
		
		UUMG_PartyMenu_Button_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMenu_Button_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Construct");
		
		UUMG_PartyMenu_Button_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.PartyUnbindDelegates
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMenu_Button_C::PartyUnbindDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.PartyUnbindDelegates");
		
		UUMG_PartyMenu_Button_C_PartyUnbindDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMenu_Button_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Destruct");
		
		UUMG_PartyMenu_Button_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.ExecuteUbergraph_UMG_PartyMenu_Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PartyMenu_Button_C::ExecuteUbergraph_UMG_PartyMenu_Button(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.ExecuteUbergraph_UMG_PartyMenu_Button");
		
		UUMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.OnOpenPartyMenu__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PartyMenu_Button_C::OnOpenPartyMenu__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.OnOpenPartyMenu__DelegateSignature");
		
		UUMG_PartyMenu_Button_C_OnOpenPartyMenu__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_PartyMenu_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_PartyMenu_Button_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PartyMenu_Button.UMG_PartyMenu_Button_C");
		return ptr;
	}

}


