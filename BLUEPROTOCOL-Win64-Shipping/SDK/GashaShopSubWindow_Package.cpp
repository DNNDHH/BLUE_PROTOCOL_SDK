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
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.ListenCancelKey
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::ListenCancelKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.ListenCancelKey");
		
		UGashaShopSubWindow_C_ListenCancelKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGashaShopSubWindow_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.SetText");
		
		UGashaShopSubWindow_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.Update Warning Comment
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::UpdateWarningComment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.Update Warning Comment");
		
		UGashaShopSubWindow_C_UpdateWarningComment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.Set Credit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBGashaCurrencyType                               CurrencyType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PaidOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGashaShopSubWindow_C::SetCredit(int32_t Price, ESBGashaCurrencyType CurrencyType, bool PaidOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.Set Credit");
		
		UGashaShopSubWindow_C_SetCredit_Params params {};
		params.Price = Price;
		params.CurrencyType = CurrencyType;
		params.PaidOnly = PaidOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.SetWarningComment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GashaId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGashaShopSubWindow_C::SetWarningComment(const class FString& GashaId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.SetWarningComment");
		
		UGashaShopSubWindow_C_SetWarningComment_Params params {};
		params.GashaId = GashaId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.SelectTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBGashaTickets                             TicketData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaShopSubWindow_C::SelectTicket(const struct FSBGashaTickets& TicketData, int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.SelectTicket");
		
		UGashaShopSubWindow_C_SelectTicket_Params params {};
		params.TicketData = TicketData;
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.SetExecutionInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTickets                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InTitleName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBGashaPurchaseType                               PurchaseType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBGashaPrices                              GashaPrice                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FSBGashaTickets>                     GashaTickets                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InitSkip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Gender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PaidOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGashaShopSubWindow_C::SetExecutionInfo(bool IsTickets, const class FString& InTitleName, ESBGashaPurchaseType PurchaseType, int32_t Amount, int32_t Price, const struct FSBGashaPrices& GashaPrice, TArray<struct FSBGashaTickets>* GashaTickets, bool InitSkip, int32_t Gender, bool PaidOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.SetExecutionInfo");
		
		UGashaShopSubWindow_C_SetExecutionInfo_Params params {};
		params.IsTickets = IsTickets;
		params.InTitleName = InTitleName;
		params.PurchaseType = PurchaseType;
		params.Amount = Amount;
		params.Price = Price;
		params.GashaPrice = GashaPrice;
		params.InitSkip = InitSkip;
		params.Gender = Gender;
		params.PaidOnly = PaidOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GashaTickets != nullptr)
			*GashaTickets = params.GashaTickets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.Set Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBGashaReward>                      InRewardList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGashaShopSubWindow_C::SetInfo(TArray<struct FSBGashaReward>* InRewardList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.Set Info");
		
		UGashaShopSubWindow_C_SetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRewardList != nullptr)
			*InRewardList = params.InRewardList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.Update Product List
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::UpdateProductList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.Update Product List");
		
		UGashaShopSubWindow_C_UpdateProductList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.StepUpConstruct
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::StepUpConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.StepUpConstruct");
		
		UGashaShopSubWindow_C_StepUpConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBGashaInfo                                GashaInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature_Params params {};
		params.GashaInfo = GashaInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.Construct");
		
		UGashaShopSubWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.Close
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.Close");
		
		UGashaShopSubWindow_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UGashaShopSubWindow_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__Btn_On_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__Btn_On_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__Btn_On_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__Btn_On_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__Btn_Off_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__Btn_Off_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__Btn_Off_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__Btn_Off_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__CloseBtnLackOfTickets_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__CloseBtnLackOfTickets_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__CloseBtnLackOfTickets_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__CloseBtnLackOfTickets_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_7_EventRotateAnimFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__GashaLever_K2Node_ComponentBoundEvent_7_EventRotateAnimFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_7_EventRotateAnimFinished__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__GashaLever_K2Node_ComponentBoundEvent_7_EventRotateAnimFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.SelectTicketAnimFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBGashaTickets                             TicketData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaShopSubWindow_C::SelectTicketAnimFinished(const struct FSBGashaTickets& TicketData, int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.SelectTicketAnimFinished");
		
		UGashaShopSubWindow_C_SelectTicketAnimFinished_Params params {};
		params.TicketData = TicketData;
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_0_OnRoseOrbClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_0_OnRoseOrbClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_0_OnRoseOrbClicked__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_0_OnRoseOrbClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_8_OnBPPointClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_8_OnBPPointClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_8_OnBPPointClicked__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_8_OnBPPointClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.OnTicketGashaLever
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::OnTicketGashaLever()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.OnTicketGashaLever");
		
		UGashaShopSubWindow_C_OnTicketGashaLever_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.Destruct");
		
		UGashaShopSubWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_Btn_Exit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_Btn_Exit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_Btn_Exit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_Btn_Exit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_CloseBtnLackOfTickets_1_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_CloseBtnLackOfTickets_1_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_CloseBtnLackOfTickets_1_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_CloseBtnLackOfTickets_1_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_Btn_Commerce_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::BndEvt__GashaShopSubWindow_Btn_Commerce_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.BndEvt__GashaShopSubWindow_Btn_Commerce_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature");
		
		UGashaShopSubWindow_C_BndEvt__GashaShopSubWindow_Btn_Commerce_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.ExecuteUbergraph_GashaShopSubWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaShopSubWindow_C::ExecuteUbergraph_GashaShopSubWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.ExecuteUbergraph_GashaShopSubWindow");
		
		UGashaShopSubWindow_C_ExecuteUbergraph_GashaShopSubWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.OnShopBPPBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::OnShopBPPBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.OnShopBPPBtn__DelegateSignature");
		
		UGashaShopSubWindow_C_OnShopBPPBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.OnShopRoseOrbBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::OnShopRoseOrbBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.OnShopRoseOrbBtn__DelegateSignature");
		
		UGashaShopSubWindow_C_OnShopRoseOrbBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.OnChangeSkipBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSkip                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGashaShopSubWindow_C::OnChangeSkipBtn__DelegateSignature(bool IsSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.OnChangeSkipBtn__DelegateSignature");
		
		UGashaShopSubWindow_C_OnChangeSkipBtn__DelegateSignature_Params params {};
		params.IsSkip = IsSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.OnExecution__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBGashaTickets                             TicketData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            TicketPlayCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaShopSubWindow_C::OnExecution__DelegateSignature(const struct FSBGashaTickets& TicketData, int32_t TicketPlayCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.OnExecution__DelegateSignature");
		
		UGashaShopSubWindow_C_OnExecution__DelegateSignature_Params params {};
		params.TicketData = TicketData;
		params.TicketPlayCount = TicketPlayCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaShopSubWindow.GashaShopSubWindow_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaShopSubWindow_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaShopSubWindow.GashaShopSubWindow_C.OnClose__DelegateSignature");
		
		UGashaShopSubWindow_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGashaShopSubWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGashaShopSubWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GashaShopSubWindow.GashaShopSubWindow_C");
		return ptr;
	}

}


