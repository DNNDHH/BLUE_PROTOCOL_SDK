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
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.SetTitle
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::SetTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.SetTitle");
		
		UMailListAttachmentAcceptedResult_C_SetTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.CalcSellData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMailListAttachmentAcceptedResult_C::CalcSellData(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.CalcSellData");
		
		UMailListAttachmentAcceptedResult_C_CalcSellData_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.SetData_Work
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMailRewardData                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMailListAttachmentAcceptedResult_C::SetData_Work(const struct FSBMailRewardData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.SetData_Work");
		
		UMailListAttachmentAcceptedResult_C_SetData_Work_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.SetSallItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMailRewardData                           RewardData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMailListAttachmentAcceptedResult_C::SetSallItemData(struct FSBMailRewardData* RewardData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.SetSallItemData");
		
		UMailListAttachmentAcceptedResult_C_SetSallItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardData != nullptr)
			*RewardData = params.RewardData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.SetItemGenerated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMailListAttachmentAcceptedResult_C::SetItemGenerated(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.SetItemGenerated");
		
		UMailListAttachmentAcceptedResult_C_SetItemGenerated_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.Achievement_SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBAchievementRewardData                    Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMailListAttachmentAcceptedResult_C::Achievement_SetData(const struct FSBAchievementRewardData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.Achievement_SetData");
		
		UMailListAttachmentAcceptedResult_C_Achievement_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMailListAttachmentAcceptedResult_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.PreConstruct");
		
		UMailListAttachmentAcceptedResult_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.Construct
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.Construct");
		
		UMailListAttachmentAcceptedResult_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMailListAttachmentAcceptedResult_C_BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.Close
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.Close");
		
		UMailListAttachmentAcceptedResult_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.Set Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMailRewardData                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMailListAttachmentAcceptedResult_C::SetData(const struct FSBMailRewardData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.Set Data");
		
		UMailListAttachmentAcceptedResult_C_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_CmnClose03_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::BndEvt__MailListAttachmentAcceptedResult_CmnClose03_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_CmnClose03_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature");
		
		UMailListAttachmentAcceptedResult_C_BndEvt__MailListAttachmentAcceptedResult_CmnClose03_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_Btn_ContinueUse_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::BndEvt__MailListAttachmentAcceptedResult_Btn_ContinueUse_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_Btn_ContinueUse_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UMailListAttachmentAcceptedResult_C_BndEvt__MailListAttachmentAcceptedResult_Btn_ContinueUse_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UMailListAttachmentAcceptedResult_C_BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");
		
		UMailListAttachmentAcceptedResult_C_BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_Btn_ContinueUse_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::BndEvt__MailListAttachmentAcceptedResult_Btn_ContinueUse_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_Btn_ContinueUse_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UMailListAttachmentAcceptedResult_C_BndEvt__MailListAttachmentAcceptedResult_Btn_ContinueUse_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
		
		UMailListAttachmentAcceptedResult_C_BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UMailListAttachmentAcceptedResult_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.ESCClose
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::ESCClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.ESCClose");
		
		UMailListAttachmentAcceptedResult_C_ESCClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.ExecuteUbergraph_MailListAttachmentAcceptedResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMailListAttachmentAcceptedResult_C::ExecuteUbergraph_MailListAttachmentAcceptedResult(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.ExecuteUbergraph_MailListAttachmentAcceptedResult");
		
		UMailListAttachmentAcceptedResult_C_ExecuteUbergraph_MailListAttachmentAcceptedResult_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMailListAttachmentAcceptedResult_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C.OnClose__DelegateSignature");
		
		UMailListAttachmentAcceptedResult_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMailListAttachmentAcceptedResult_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMailListAttachmentAcceptedResult_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C");
		return ptr;
	}

}


