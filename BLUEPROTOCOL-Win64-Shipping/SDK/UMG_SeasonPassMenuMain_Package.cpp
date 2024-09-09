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
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateSubMenuExcramationIcon
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::UpdateSubMenuExcramationIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateSubMenuExcramationIcon");
		
		UUMG_SeasonPassMenuMain_C_UpdateSubMenuExcramationIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateBookmarkButton
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::UpdateBookmarkButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateBookmarkButton");
		
		UUMG_SeasonPassMenuMain_C_UpdateBookmarkButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.TermRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubMenuTermReason                                 InReason                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESubMenuTermRequestReply UUMG_SeasonPassMenuMain_C::TermRequest(ESubMenuTermReason InReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.TermRequest");
		
		UUMG_SeasonPassMenuMain_C_TermRequest_Params params {};
		params.InReason = InReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.Initialize Open Menu Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bInit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassMenuMain_C::InitializeOpenMenuType(const class FString& InputPin, bool bInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.Initialize Open Menu Type");
		
		UUMG_SeasonPassMenuMain_C_InitializeOpenMenuType_Params params {};
		params.InputPin = InputPin;
		params.bInit = bInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SetTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bChangeTab                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassMenuMain_C::SetTab(int32_t InSelect, bool bInit, bool bChangeTab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SetTab");
		
		UUMG_SeasonPassMenuMain_C_SetTab_Params params {};
		params.InSelect = InSelect;
		params.bInit = bInit;
		params.bChangeTab = bChangeTab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SwitchOut
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::SwitchOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SwitchOut");
		
		UUMG_SeasonPassMenuMain_C_SwitchOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.TermRequesTiming
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::TermRequesTiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.TermRequesTiming");
		
		UUMG_SeasonPassMenuMain_C_TermRequesTiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SwitchSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenBookMarkType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuMain_C::SwitchSelect(const class FString& OpenBookMarkType, const class FName& ParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SwitchSelect");
		
		UUMG_SeasonPassMenuMain_C_SwitchSelect_Params params {};
		params.OpenBookMarkType = OpenBookMarkType;
		params.ParamName = ParamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassQuestMenu_K2Node_ComponentBoundEvent_12_OnChangeBookmarkType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BookmarkType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuMain_C::BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassQuestMenu_K2Node_ComponentBoundEvent_12_OnChangeBookmarkType__DelegateSignature(const class FString& BookmarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassQuestMenu_K2Node_ComponentBoundEvent_12_OnChangeBookmarkType__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassQuestMenu_K2Node_ComponentBoundEvent_12_OnChangeBookmarkType__DelegateSignature_Params params {};
		params.BookmarkType = BookmarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuMain_C::BndEvt__UMG_SeasonPassMenuMain_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuReward_v106_K2Node_ComponentBoundEvent_6_OnClickRewardItemIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassMenuRewardItemData*             RewardItemData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuMain_C::BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuReward_v106_K2Node_ComponentBoundEvent_6_OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuReward_v106_K2Node_ComponentBoundEvent_6_OnClickRewardItemIcon__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuReward_v106_K2Node_ComponentBoundEvent_6_OnClickRewardItemIcon__DelegateSignature_Params params {};
		params.RewardItemData = RewardItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_11_OnClickUpgrade__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_11_OnClickUpgrade__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_11_OnClickUpgrade__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_11_OnClickUpgrade__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_13_OnClickBuyRankUp__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_13_OnClickBuyRankUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_13_OnClickBuyRankUp__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_13_OnClickBuyRankUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_10_OnClickSeasonPassRewardAll__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_10_OnClickSeasonPassRewardAll__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_10_OnClickSeasonPassRewardAll__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_10_OnClickSeasonPassRewardAll__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassMenuRewardData*                 RewardData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuMain_C::SetData(class USBSeasonPassMenuRewardData* RewardData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SetData");
		
		UUMG_SeasonPassMenuMain_C_SetData_Params params {};
		params.RewardData = RewardData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateDesign
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::UpdateDesign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateDesign");
		
		UUMG_SeasonPassMenuMain_C_UpdateDesign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateDesignAndData
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::UpdateDesignAndData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateDesignAndData");
		
		UUMG_SeasonPassMenuMain_C_UpdateDesignAndData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnUpdateData
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::OnUpdateData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnUpdateData");
		
		UUMG_SeasonPassMenuMain_C_OnUpdateData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SwitchIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenBookMarkType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuMain_C::SwitchIn(const class FString& OpenBookMarkType, const class FName& ParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SwitchIn");
		
		UUMG_SeasonPassMenuMain_C_SwitchIn_Params params {};
		params.OpenBookMarkType = OpenBookMarkType;
		params.ParamName = ParamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateBookmarkStatusButton
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::UpdateBookmarkStatusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateBookmarkStatusButton");
		
		UUMG_SeasonPassMenuMain_C_UpdateBookmarkStatusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BookmarkUpdateRequest
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::BookmarkUpdateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BookmarkUpdateRequest");
		
		UUMG_SeasonPassMenuMain_C_BookmarkUpdateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.Construct");
		
		UUMG_SeasonPassMenuMain_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.TabChangeInit
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::TabChangeInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.TabChangeInit");
		
		UUMG_SeasonPassMenuMain_C_TabChangeInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.AutoDeliveryQuestLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuMain_C::AutoDeliveryQuestLoad(int32_t ReturnCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.AutoDeliveryQuestLoad");
		
		UUMG_SeasonPassMenuMain_C_AutoDeliveryQuestLoad_Params params {};
		params.ReturnCode = ReturnCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SubMenuUpdateEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuMain_C::SubMenuUpdateEvent(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SubMenuUpdateEvent");
		
		UUMG_SeasonPassMenuMain_C_SubMenuUpdateEvent_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.Destruct");
		
		UUMG_SeasonPassMenuMain_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnInAnimationFinished
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::OnInAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnInAnimationFinished");
		
		UUMG_SeasonPassMenuMain_C_OnInAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.ExecuteUbergraph_UMG_SeasonPassMenuMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuMain_C::ExecuteUbergraph_UMG_SeasonPassMenuMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.ExecuteUbergraph_UMG_SeasonPassMenuMain");
		
		UUMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnCheckAutoRankup__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDoCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassMenuMain_C::OnCheckAutoRankup__DelegateSignature(bool bDoCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnCheckAutoRankup__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_OnCheckAutoRankup__DelegateSignature_Params params {};
		params.bDoCheck = bDoCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnChangeBookmarkType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BookmarkType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuMain_C::OnChangeBookmarkType__DelegateSignature(const class FString& BookmarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnChangeBookmarkType__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_OnChangeBookmarkType__DelegateSignature_Params params {};
		params.BookmarkType = BookmarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickSeasonPassRewardAll__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::OnClickSeasonPassRewardAll__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickSeasonPassRewardAll__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_OnClickSeasonPassRewardAll__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickQuest__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::OnClickQuest__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickQuest__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_OnClickQuest__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickBuyRankUp__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::OnClickBuyRankUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickBuyRankUp__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_OnClickBuyRankUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickPointShop__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::OnClickPointShop__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickPointShop__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_OnClickPointShop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickRankUp__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::OnClickRankUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickRankUp__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_OnClickRankUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickRewardItemIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassMenuRewardItemData*             RewardItemData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuMain_C::OnClickRewardItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickRewardItemIcon__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_OnClickRewardItemIcon__DelegateSignature_Params params {};
		params.RewardItemData = RewardItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickUpgrade__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuMain_C::OnClickUpgrade__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickUpgrade__DelegateSignature");
		
		UUMG_SeasonPassMenuMain_C_OnClickUpgrade__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassMenuMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassMenuMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C");
		return ptr;
	}

}


