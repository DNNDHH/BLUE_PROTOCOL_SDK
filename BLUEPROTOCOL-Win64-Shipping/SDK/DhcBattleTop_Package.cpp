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
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.SetGoToDhcMapBtnTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTop_C::SetGoToDhcMapBtnTextId(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.SetGoToDhcMapBtnTextId");
		
		UDhcBattleTop_C_SetGoToDhcMapBtnTextId_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.SetSelectedClassTypeAndScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBDhcBattleHighScoreInfo                   InScoreInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InIsScoreInfoEmpty                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTop_C::SetSelectedClassTypeAndScore(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.SetSelectedClassTypeAndScore");
		
		UDhcBattleTop_C_SetSelectedClassTypeAndScore_Params params {};
		params.InClassType = InClassType;
		params.InScoreInfo = InScoreInfo;
		params.InIsScoreInfoEmpty = InIsScoreInfoEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.SetLayout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsScoreMeasured                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTop_C::SetLayout(bool InIsScoreMeasured)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.SetLayout");
		
		UDhcBattleTop_C_SetLayout_Params params {};
		params.InIsScoreMeasured = InIsScoreMeasured;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.SetupInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDhcBattleInfo                            InInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UDhcBattleTop_C::SetupInfo(const struct FSBDhcBattleInfo& InInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.SetupInfo");
		
		UDhcBattleTop_C_SetupInfo_Params params {};
		params.InInfo = InInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.Close
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.Close");
		
		UDhcBattleTop_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.Open
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.Open");
		
		UDhcBattleTop_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.Construct
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.Construct");
		
		UDhcBattleTop_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.BndEvt__DPSCheckerTop_CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::BndEvt__DPSCheckerTop_CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.BndEvt__DPSCheckerTop_CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		UDhcBattleTop_C_BndEvt__DPSCheckerTop_CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.OnPress_Cancel");
		
		UDhcBattleTop_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.OnLoadHighScoreInfoDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBDhcBattleInfo                            InInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UDhcBattleTop_C::OnLoadHighScoreInfoDelegate(int32_t InRetCode, const struct FSBDhcBattleInfo& InInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.OnLoadHighScoreInfoDelegate");
		
		UDhcBattleTop_C_OnLoadHighScoreInfoDelegate_Params params {};
		params.InRetCode = InRetCode;
		params.InInfo = InInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.ActivateUIBlockerFrontRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InActivate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTop_C::ActivateUIBlockerFrontRow(bool InActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.ActivateUIBlockerFrontRow");
		
		UDhcBattleTop_C_ActivateUIBlockerFrontRow_Params params {};
		params.InActivate = InActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.Destruct
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.Destruct");
		
		UDhcBattleTop_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.BindOnLoadHighScoreInfoDelegate
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::BindOnLoadHighScoreInfoDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.BindOnLoadHighScoreInfoDelegate");
		
		UDhcBattleTop_C_BindOnLoadHighScoreInfoDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.UnbindOnLoadHighScoreInfoDelegate
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::UnbindOnLoadHighScoreInfoDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.UnbindOnLoadHighScoreInfoDelegate");
		
		UDhcBattleTop_C_UnbindOnLoadHighScoreInfoDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_GotoDhcMapBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::BndEvt__DhcBattleTop_GotoDhcMapBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_GotoDhcMapBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UDhcBattleTop_C_BndEvt__DhcBattleTop_GotoDhcMapBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_BackBtn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::BndEvt__DhcBattleTop_BackBtn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_BackBtn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UDhcBattleTop_C_BndEvt__DhcBattleTop_BackBtn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBDhcBattleHighScoreInfo                   InScoreInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InIsScoreInfoEmpty                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTop_C::BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature");
		
		UDhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature_Params params {};
		params.InClassType = InClassType;
		params.InScoreInfo = InScoreInfo;
		params.InIsScoreInfoEmpty = InIsScoreInfoEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.OnSelectDialogResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectIndex                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTop_C::OnSelectDialogResult(int32_t SelectIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.OnSelectDialogResult");
		
		UDhcBattleTop_C_OnSelectDialogResult_Params params {};
		params.SelectIndex = SelectIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.UpdateClassTypeListItemSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBDhcBattleHighScoreInfo                   InScoreInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InIsScoreInfoEmpty                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTop_C::UpdateClassTypeListItemSelected(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.UpdateClassTypeListItemSelected");
		
		UDhcBattleTop_C_UpdateClassTypeListItemSelected_Params params {};
		params.InClassType = InClassType;
		params.InScoreInfo = InScoreInfo;
		params.InIsScoreInfoEmpty = InIsScoreInfoEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_PlayerStatusParam_K2Node_ComponentBoundEvent_4_OnDetailedStatusClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::BndEvt__DhcBattleTop_PlayerStatusParam_K2Node_ComponentBoundEvent_4_OnDetailedStatusClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_PlayerStatusParam_K2Node_ComponentBoundEvent_4_OnDetailedStatusClicked__DelegateSignature");
		
		UDhcBattleTop_C_BndEvt__DhcBattleTop_PlayerStatusParam_K2Node_ComponentBoundEvent_4_OnDetailedStatusClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.ActivateBtnFullScreenForDetailedAttrResistStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InActivate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTop_C::ActivateBtnFullScreenForDetailedAttrResistStatus(bool InActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.ActivateBtnFullScreenForDetailedAttrResistStatus");
		
		UDhcBattleTop_C_ActivateBtnFullScreenForDetailedAttrResistStatus_Params params {};
		params.InActivate = InActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.OnCloseDetailedAttrResistStatus
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::OnCloseDetailedAttrResistStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.OnCloseDetailedAttrResistStatus");
		
		UDhcBattleTop_C_OnCloseDetailedAttrResistStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_BtnFullScreenForDetailedAttrResistStatus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::BndEvt__DhcBattleTop_BtnFullScreenForDetailedAttrResistStatus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_BtnFullScreenForDetailedAttrResistStatus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UDhcBattleTop_C_BndEvt__DhcBattleTop_BtnFullScreenForDetailedAttrResistStatus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.EscDetailedStatus
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::EscDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.EscDetailedStatus");
		
		UDhcBattleTop_C_EscDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.UnbindDetailedAttrResistStatusEvents
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::UnbindDetailedAttrResistStatusEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.UnbindDetailedAttrResistStatusEvents");
		
		UDhcBattleTop_C_UnbindDetailedAttrResistStatusEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.WarpEnd
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::WarpEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.WarpEnd");
		
		UDhcBattleTop_C_WarpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.PartyWarpEndEvent
	 * 		Flags  -> ()
	 */
	void UDhcBattleTop_C::PartyWarpEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.PartyWarpEndEvent");
		
		UDhcBattleTop_C_PartyWarpEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.ExecuteUbergraph_DhcBattleTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDhcBattleTop_C::ExecuteUbergraph_DhcBattleTop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.ExecuteUbergraph_DhcBattleTop");
		
		UDhcBattleTop_C_ExecuteUbergraph_DhcBattleTop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DhcBattleTop.DhcBattleTop_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InGoToNext                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDhcBattleTop_C::OnClose__DelegateSignature(bool InGoToNext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DhcBattleTop.DhcBattleTop_C.OnClose__DelegateSignature");
		
		UDhcBattleTop_C_OnClose__DelegateSignature_Params params {};
		params.InGoToNext = InGoToNext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDhcBattleTop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDhcBattleTop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DhcBattleTop.DhcBattleTop_C");
		return ptr;
	}

}


