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
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetHelpText
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::SetHelpText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetHelpText");
		
		UUMG_SeasonPassQuestMenu_C_SetHelpText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.InitTab
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::InitTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.InitTab");
		
		UUMG_SeasonPassQuestMenu_C_InitTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetUIBlocker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBlock                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestMenu_C::SetUIBlocker(bool IsBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetUIBlocker");
		
		UUMG_SeasonPassQuestMenu_C_SetUIBlocker_Params params {};
		params.IsBlock = IsBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateQuestItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListManager               InQuestListManager                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestMenu_C::UpdateQuestItemList(const struct FSBSeasonPassQuestListManager& InQuestListManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateQuestItemList");
		
		UUMG_SeasonPassQuestMenu_C_UpdateQuestItemList_Params params {};
		params.InQuestListManager = InQuestListManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateCycleQuestData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestCycleType                        InCycleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::UpdateCycleQuestData(ESBSeasonPassQuestCycleType InCycleType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateCycleQuestData");
		
		UUMG_SeasonPassQuestMenu_C_UpdateCycleQuestData_Params params {};
		params.InCycleType = InCycleType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ConvertFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InComboBoxSelect                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBSeasonPassQuestFilterType                       OutFilterType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::ConvertFilterType(const class FString& InComboBoxSelect, ESBSeasonPassQuestFilterType* OutFilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ConvertFilterType");
		
		UUMG_SeasonPassQuestMenu_C_ConvertFilterType_Params params {};
		params.InComboBoxSelect = InComboBoxSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFilterType != nullptr)
			*OutFilterType = params.OutFilterType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateWeekRewardDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTabSelect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::UpdateWeekRewardDesc(int32_t InTabSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateWeekRewardDesc");
		
		UUMG_SeasonPassQuestMenu_C_UpdateWeekRewardDesc_Params params {};
		params.InTabSelect = InTabSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateSubMenuExclation
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::UpdateSubMenuExclation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateSubMenuExclation");
		
		UUMG_SeasonPassQuestMenu_C_UpdateSubMenuExclation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateSubMenuExclationType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestCycleType                        InCycle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::UpdateSubMenuExclationType(ESBSeasonPassQuestCycleType InCycle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateSubMenuExclationType");
		
		UUMG_SeasonPassQuestMenu_C_UpdateSubMenuExclationType_Params params {};
		params.InCycle = InCycle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetForeceClearCount
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::SetForeceClearCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetForeceClearCount");
		
		UUMG_SeasonPassQuestMenu_C_SetForeceClearCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ReloadUpdate
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::ReloadUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ReloadUpdate");
		
		UUMG_SeasonPassQuestMenu_C_ReloadUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ForceClearUpdate
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::ForceClearUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ForceClearUpdate");
		
		UUMG_SeasonPassQuestMenu_C_ForceClearUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Set Ticket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::SetTicket(int32_t Tab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Set Ticket");
		
		UUMG_SeasonPassQuestMenu_C_SetTicket_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Set Season Filter List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::SetSeasonFilterList(int32_t Tab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Set Season Filter List");
		
		UUMG_SeasonPassQuestMenu_C_SetSeasonFilterList_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.On_filter_combobox_GenerateWidget_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UUMG_SeasonPassQuestMenu_C::On_filter_combobox_GenerateWidget_2(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.On_filter_combobox_GenerateWidget_2");
		
		UUMG_SeasonPassQuestMenu_C_On_filter_combobox_GenerateWidget_2_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.On_filter_combobox_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UUMG_SeasonPassQuestMenu_C::On_filter_combobox_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.On_filter_combobox_GenerateWidget_1");
		
		UUMG_SeasonPassQuestMenu_C_On_filter_combobox_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Update Quest Data
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::UpdateQuestData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Update Quest Data");
		
		UUMG_SeasonPassQuestMenu_C_UpdateQuestData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.DisplayRmShop
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::DisplayRmShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.DisplayRmShop");
		
		UUMG_SeasonPassQuestMenu_C_DisplayRmShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetData
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::SetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetData");
		
		UUMG_SeasonPassQuestMenu_C_SetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.InitFilterString
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::InitFilterString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.InitFilterString");
		
		UUMG_SeasonPassQuestMenu_C_InitFilterString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSelectString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::SetFilterType(const class FString& InSelectString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetFilterType");
		
		UUMG_SeasonPassQuestMenu_C_SetFilterType_Params params {};
		params.InSelectString = InSelectString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.InitParam
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::InitParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.InitParam");
		
		UUMG_SeasonPassQuestMenu_C_InitParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Initialize Open Menu Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bInit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestMenu_C::InitializeOpenMenuType(const class FString& InputPin, bool bInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Initialize Open Menu Type");
		
		UUMG_SeasonPassQuestMenu_C_InitializeOpenMenuType_Params params {};
		params.InputPin = InputPin;
		params.bInit = bInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SwitchOut
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::SwitchOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SwitchOut");
		
		UUMG_SeasonPassQuestMenu_C_SwitchOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.TermRequesTiming
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::TermRequesTiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.TermRequesTiming");
		
		UUMG_SeasonPassQuestMenu_C_TermRequesTiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SwitchSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenBookMarkType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::SwitchSelect(const class FString& OpenBookMarkType, const class FName& ParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SwitchSelect");
		
		UUMG_SeasonPassQuestMenu_C_SwitchSelect_Params params {};
		params.OpenBookMarkType = OpenBookMarkType;
		params.ParamName = ParamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Construct");
		
		UUMG_SeasonPassQuestMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UUMG_SeasonPassQuestMenu_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateGeneralData
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::UpdateGeneralData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateGeneralData");
		
		UUMG_SeasonPassQuestMenu_C_UpdateGeneralData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::SetTab(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetTab");
		
		UUMG_SeasonPassQuestMenu_C_SetTab_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BookmarkUpdateRequest
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::BookmarkUpdateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BookmarkUpdateRequest");
		
		UUMG_SeasonPassQuestMenu_C_BookmarkUpdateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateBookmarkStatusButton
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::UpdateBookmarkStatusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateBookmarkStatusButton");
		
		UUMG_SeasonPassQuestMenu_C_UpdateBookmarkStatusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateCheckEvent
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::UpdateCheckEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateCheckEvent");
		
		UUMG_SeasonPassQuestMenu_C_UpdateCheckEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SwitchIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenBookMarkType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::SwitchIn(const class FString& OpenBookMarkType, const class FName& ParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SwitchIn");
		
		UUMG_SeasonPassQuestMenu_C_SwitchIn_Params params {};
		params.OpenBookMarkType = OpenBookMarkType;
		params.ParamName = ParamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BindSubMenuExcramation
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestMenu_C::BindSubMenuExcramation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BindSubMenuExcramation");
		
		UUMG_SeasonPassQuestMenu_C_BindSubMenuExcramation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SubMenuExramation_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::SubMenuExramation_Event(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SubMenuExramation_Event");
		
		UUMG_SeasonPassQuestMenu_C_SubMenuExramation_Event_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BndEvt__UMG_SeasonPassQuestMenu_Seasonfilter_combobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::BndEvt__UMG_SeasonPassQuestMenu_Seasonfilter_combobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BndEvt__UMG_SeasonPassQuestMenu_Seasonfilter_combobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestMenu_C_BndEvt__UMG_SeasonPassQuestMenu_Seasonfilter_combobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ExecuteUbergraph_UMG_SeasonPassQuestMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::ExecuteUbergraph_UMG_SeasonPassQuestMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ExecuteUbergraph_UMG_SeasonPassQuestMenu");
		
		UUMG_SeasonPassQuestMenu_C_ExecuteUbergraph_UMG_SeasonPassQuestMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.OnChangeBookmarkType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BookmarkType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestMenu_C::OnChangeBookmarkType__DelegateSignature(const class FString& BookmarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.OnChangeBookmarkType__DelegateSignature");
		
		UUMG_SeasonPassQuestMenu_C_OnChangeBookmarkType__DelegateSignature_Params params {};
		params.BookmarkType = BookmarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C");
		return ptr;
	}

}


