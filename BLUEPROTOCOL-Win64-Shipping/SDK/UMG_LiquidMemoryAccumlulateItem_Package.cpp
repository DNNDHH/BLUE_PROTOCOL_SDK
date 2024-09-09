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
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.SetLimitOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLimitOver                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::SetLimitOver(bool IsLimitOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.SetLimitOver");
		
		UUMG_LiquidMemoryAccumlulateItem_C_SetLimitOver_Params params {};
		params.IsLimitOver = IsLimitOver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.GetUseToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UseNum                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::GetUseToken(int32_t* TokenID, int32_t* UseNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.GetUseToken");
		
		UUMG_LiquidMemoryAccumlulateItem_C_GetUseToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenID != nullptr)
			*TokenID = params.TokenID;
		if (UseNum != nullptr)
			*UseNum = params.UseNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBTokenState                               TokenState                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsFullCharge                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::SetData(const struct FSBTokenState& TokenState, bool IsFullCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.SetData");
		
		UUMG_LiquidMemoryAccumlulateItem_C_SetData_Params params {};
		params.TokenState = TokenState;
		params.IsFullCharge = IsFullCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.Construct");
		
		UUMG_LiquidMemoryAccumlulateItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateItem_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_78_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.StartRepeatMinus
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::StartRepeatMinus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.StartRepeatMinus");
		
		UUMG_LiquidMemoryAccumlulateItem_C_StartRepeatMinus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.NumberMinus
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::NumberMinus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.NumberMinus");
		
		UUMG_LiquidMemoryAccumlulateItem_C_NumberMinus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateItem_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_198_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateItem_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_53_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.StartRepeatPlus
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::StartRepeatPlus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.StartRepeatPlus");
		
		UUMG_LiquidMemoryAccumlulateItem_C_StartRepeatPlus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.NumberPlus
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::NumberPlus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.NumberPlus");
		
		UUMG_LiquidMemoryAccumlulateItem_C_NumberPlus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateItem_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_219_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.ExecuteUbergraph_UMG_LiquidMemoryAccumlulateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::ExecuteUbergraph_UMG_LiquidMemoryAccumlulateItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.ExecuteUbergraph_UMG_LiquidMemoryAccumlulateItem");
		
		UUMG_LiquidMemoryAccumlulateItem_C_ExecuteUbergraph_UMG_LiquidMemoryAccumlulateItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.OnUseTokenNumChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateItem_C::OnUseTokenNumChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C.OnUseTokenNumChanged__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateItem_C_OnUseTokenNumChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LiquidMemoryAccumlulateItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LiquidMemoryAccumlulateItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LiquidMemoryAccumlulateItem.UMG_LiquidMemoryAccumlulateItem_C");
		return ptr;
	}

}


