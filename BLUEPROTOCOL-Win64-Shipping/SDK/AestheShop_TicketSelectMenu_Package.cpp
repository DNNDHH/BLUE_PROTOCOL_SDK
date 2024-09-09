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
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.GetTicketTokenNameTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMasterToken>                        InTokenMasterDataArray                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InTicketTokenId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBTextTableHash                            OutTextID                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketSelectMenu_C::GetTicketTokenNameTextId(TArray<struct FMasterToken>* InTokenMasterDataArray, int32_t InTicketTokenId, bool* OutIsValid, struct FSBTextTableHash* OutTextID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.GetTicketTokenNameTextId");
		
		UAestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId_Params params {};
		params.InTicketTokenId = InTicketTokenId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTokenMasterDataArray != nullptr)
			*InTokenMasterDataArray = params.InTokenMasterDataArray;
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutTextID != nullptr)
			*OutTextID = params.OutTextID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetCourseDetailVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAestheShop_TicketSelectMenu_C::SetCourseDetailVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetCourseDetailVisibility");
		
		UAestheShop_TicketSelectMenu_C_SetCourseDetailVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetupCourseDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCourseId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketSelectMenu_C::SetupCourseDetail(int32_t InCourseId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetupCourseDetail");
		
		UAestheShop_TicketSelectMenu_C_SetupCourseDetail_Params params {};
		params.InCourseId = InCourseId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.GetHoldTicketTokenAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBCharacterToken>                   InHoldTicketTokens                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InTicketTokenId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutAmount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketSelectMenu_C::GetHoldTicketTokenAmount(TArray<struct FSBCharacterToken>* InHoldTicketTokens, int32_t InTicketTokenId, bool* OutIsValid, int32_t* OutAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.GetHoldTicketTokenAmount");
		
		UAestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount_Params params {};
		params.InTicketTokenId = InTicketTokenId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InHoldTicketTokens != nullptr)
			*InHoldTicketTokens = params.InHoldTicketTokens;
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutAmount != nullptr)
			*OutAmount = params.OutAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.CheckIfCourseIsUsable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCourseId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InHoldTicketNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsUsable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutIsSeasonPass                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAestheShop_TicketSelectMenu_C::CheckIfCourseIsUsable(int32_t InCourseId, int32_t InHoldTicketNum, bool* OutIsUsable, bool* OutIsSeasonPass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.CheckIfCourseIsUsable");
		
		UAestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable_Params params {};
		params.InCourseId = InCourseId;
		params.InHoldTicketNum = InHoldTicketNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsUsable != nullptr)
			*OutIsUsable = params.OutIsUsable;
		if (OutIsSeasonPass != nullptr)
			*OutIsSeasonPass = params.OutIsSeasonPass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.CreateCourseItemList
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::CreateCourseItemList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.CreateCourseItemList");
		
		UAestheShop_TicketSelectMenu_C_CreateCourseItemList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetListItemSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTicketTokenId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAestheShop_TicketSelectMenu_C::SetListItemSelected(int32_t InTicketTokenId, bool InIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetListItemSelected");
		
		UAestheShop_TicketSelectMenu_C_SetListItemSelected_Params params {};
		params.InTicketTokenId = InTicketTokenId;
		params.InIsSelected = InIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Close
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Close");
		
		UAestheShop_TicketSelectMenu_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAestheShop_TicketSelectMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.PreConstruct");
		
		UAestheShop_TicketSelectMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Construct");
		
		UAestheShop_TicketSelectMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Destruct");
		
		UAestheShop_TicketSelectMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UAestheShop_TicketSelectMenu_C_BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OpenLastConfirmDialog
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::OpenLastConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OpenLastConfirmDialog");
		
		UAestheShop_TicketSelectMenu_C_OpenLastConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnEndLastConfirmDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketSelectMenu_C::OnEndLastConfirmDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnEndLastConfirmDialog");
		
		UAestheShop_TicketSelectMenu_C_OnEndLastConfirmDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnPress_Cancel");
		
		UAestheShop_TicketSelectMenu_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UAestheShop_TicketSelectMenu_C_BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UAestheShop_TicketSelectMenu_C_BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCourseDecided
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::OnCourseDecided()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCourseDecided");
		
		UAestheShop_TicketSelectMenu_C_OnCourseDecided_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCourseListItemSelectedイベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCourseId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTicketTokenId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InHoldTicketTokenAmount                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketSelectMenu_C::OnCourseListItemSelected(int32_t InCourseId, int32_t InTicketTokenId, int32_t InHoldTicketTokenAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCourseListItemSelectedイベント");
		
		UAestheShop_TicketSelectMenu_C_OnCourseListItemSelected_Params params {};
		params.InCourseId = InCourseId;
		params.InTicketTokenId = InTicketTokenId;
		params.InHoldTicketTokenAmount = InHoldTicketTokenAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature");
		
		UAestheShop_TicketSelectMenu_C_BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UAestheShop_TicketSelectMenu_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCheckStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketSelectMenu_C::OnCheckStatus(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCheckStatus");
		
		UAestheShop_TicketSelectMenu_C_OnCheckStatus_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.AdventureBoardError_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketSelectMenu_C::AdventureBoardError_Event(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.AdventureBoardError_Event");
		
		UAestheShop_TicketSelectMenu_C_AdventureBoardError_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OpenSeasonPassExpiredDialog
	 * 		Flags  -> ()
	 */
	void UAestheShop_TicketSelectMenu_C::OpenSeasonPassExpiredDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OpenSeasonPassExpiredDialog");
		
		UAestheShop_TicketSelectMenu_C_OpenSeasonPassExpiredDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnSeasonPassExpiredDialogClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketSelectMenu_C::OnSeasonPassExpiredDialogClosed(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnSeasonPassExpiredDialogClosed");
		
		UAestheShop_TicketSelectMenu_C_OnSeasonPassExpiredDialogClosed_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.ExecuteUbergraph_AestheShop_TicketSelectMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketSelectMenu_C::ExecuteUbergraph_AestheShop_TicketSelectMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.ExecuteUbergraph_AestheShop_TicketSelectMenu");
		
		UAestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCourseDecided                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InCourseId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTicketTokenId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InUseTicketNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_TicketSelectMenu_C::OnClose__DelegateSignature(bool InIsCourseDecided, int32_t InCourseId, int32_t InTicketTokenId, int32_t InUseTicketNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnClose__DelegateSignature");
		
		UAestheShop_TicketSelectMenu_C_OnClose__DelegateSignature_Params params {};
		params.InIsCourseDecided = InIsCourseDecided;
		params.InCourseId = InCourseId;
		params.InTicketTokenId = InTicketTokenId;
		params.InUseTicketNum = InUseTicketNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAestheShop_TicketSelectMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAestheShop_TicketSelectMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C");
		return ptr;
	}

}


