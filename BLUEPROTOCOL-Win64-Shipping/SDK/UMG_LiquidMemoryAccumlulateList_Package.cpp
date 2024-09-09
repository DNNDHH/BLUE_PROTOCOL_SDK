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
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.SetAccumlulateList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LiquidMemoryId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBLiquidMemoryAccumulateTokenInfo>  AccumlulateItemMaster                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FSBTokenState>                       InTokenList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsFullCharge                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::SetAccumlulateList(int32_t LiquidMemoryId, TArray<struct FSBLiquidMemoryAccumulateTokenInfo>* AccumlulateItemMaster, TArray<struct FSBTokenState>* InTokenList, bool IsFullCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.SetAccumlulateList");
		
		UUMG_LiquidMemoryAccumlulateList_C_SetAccumlulateList_Params params {};
		params.LiquidMemoryId = LiquidMemoryId;
		params.IsFullCharge = IsFullCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccumlulateItemMaster != nullptr)
			*AccumlulateItemMaster = params.AccumlulateItemMaster;
		if (InTokenList != nullptr)
			*InTokenList = params.InTokenList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.Construct");
		
		UUMG_LiquidMemoryAccumlulateList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.カスタムイベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBLiquidMemoryInfo>                 InUpdatedLiquidMemoryInfos                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::_1(int32_t InRetCode, TArray<struct FSBLiquidMemoryInfo> InUpdatedLiquidMemoryInfos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.カスタムイベント_1");
		
		UUMG_LiquidMemoryAccumlulateList_C__1_Params params {};
		params.InRetCode = InRetCode;
		params.InUpdatedLiquidMemoryInfos = InUpdatedLiquidMemoryInfos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.SelfClose
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::SelfClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.SelfClose");
		
		UUMG_LiquidMemoryAccumlulateList_C_SelfClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.OnUseDialogClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::OnUseDialogClosed(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.OnUseDialogClosed");
		
		UUMG_LiquidMemoryAccumlulateList_C_OnUseDialogClosed_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.OnUseTokenNumChanged
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::OnUseTokenNumChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.OnUseTokenNumChanged");
		
		UUMG_LiquidMemoryAccumlulateList_C_OnUseTokenNumChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_TransParentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::BndEvt__UMG_LiquidMemoryAccumlulateList_TransParentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_TransParentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_TransParentButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateList_C_BndEvt__UMG_LiquidMemoryAccumlulateList_ButtonUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.ExecuteUbergraph_UMG_LiquidMemoryAccumlulateList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::ExecuteUbergraph_UMG_LiquidMemoryAccumlulateList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.ExecuteUbergraph_UMG_LiquidMemoryAccumlulateList");
		
		UUMG_LiquidMemoryAccumlulateList_C_ExecuteUbergraph_UMG_LiquidMemoryAccumlulateList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.OnAccumulateCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_LiquidMemoryAccumlulateList_C::OnAccumulateCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C.OnAccumulateCompleted__DelegateSignature");
		
		UUMG_LiquidMemoryAccumlulateList_C_OnAccumulateCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_LiquidMemoryAccumlulateList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_LiquidMemoryAccumlulateList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_LiquidMemoryAccumlulateList.UMG_LiquidMemoryAccumlulateList_C");
		return ptr;
	}

}


