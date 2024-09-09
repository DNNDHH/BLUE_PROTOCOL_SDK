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
	 * 		Name   -> Function RankingMenu.RankingMenu_C.OffsetMyRank
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::OffsetMyRank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.OffsetMyRank");
		
		URankingMenu_C_OffsetMyRank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.GetNowRankingType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRankingType                                     RankingType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_C::GetNowRankingType(ESBRankingType* RankingType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.GetNowRankingType");
		
		URankingMenu_C_GetNowRankingType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RankingType != nullptr)
			*RankingType = params.RankingType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.GetMyItemPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_C::GetMyItemPosition(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.GetMyItemPosition");
		
		URankingMenu_C_GetMyItemPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.IsShowEmptyMyRankingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingMenu_C::IsShowEmptyMyRankingData(bool* Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.IsShowEmptyMyRankingData");
		
		URankingMenu_C_IsShowEmptyMyRankingData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Show != nullptr)
			*Show = params.Show;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.SetRankingHistory_ComboBoxSelectAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NotUpdateRankingHistory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingMenu_C::SetRankingHistory_ComboBoxSelectAt(int32_t Index, bool NotUpdateRankingHistory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.SetRankingHistory_ComboBoxSelectAt");
		
		URankingMenu_C_SetRankingHistory_ComboBoxSelectAt_Params params {};
		params.Index = Index;
		params.NotUpdateRankingHistory = NotUpdateRankingHistory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.ClearPage_ComboBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NotUpdatePage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingMenu_C::ClearPage_ComboBox(bool NotUpdatePage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.ClearPage_ComboBox");
		
		URankingMenu_C_ClearPage_ComboBox_Params params {};
		params.NotUpdatePage = NotUpdatePage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.SetClassType_ComboBoxSelectAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NotUpdateClassType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingMenu_C::SetClassType_ComboBoxSelectAt(int32_t Index, bool NotUpdateClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.SetClassType_ComboBoxSelectAt");
		
		URankingMenu_C_SetClassType_ComboBoxSelectAt_Params params {};
		params.Index = Index;
		params.NotUpdateClassType = NotUpdateClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.SetPage_ComboBoxSelectAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NotUpdatePage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingMenu_C::SetPage_ComboBoxSelectAt(int32_t Index, bool NotUpdatePage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.SetPage_ComboBoxSelectAt");
		
		URankingMenu_C_SetPage_ComboBoxSelectAt_Params params {};
		params.Index = Index;
		params.NotUpdatePage = NotUpdatePage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.On_RankingHistory_ComboBox_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* URankingMenu_C::On_RankingHistory_ComboBox_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.On_RankingHistory_ComboBox_GenerateWidget_1");
		
		URankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.On_ClassType_ComboBox_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* URankingMenu_C::On_ClassType_ComboBox_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.On_ClassType_ComboBox_GenerateWidget_1");
		
		URankingMenu_C_On_ClassType_ComboBox_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.On_Page_ComboBox_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* URankingMenu_C::On_Page_ComboBox_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.On_Page_ComboBox_GenerateWidget_1");
		
		URankingMenu_C_On_Page_ComboBox_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.SetHistoryComboBox
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::SetHistoryComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.SetHistoryComboBox");
		
		URankingMenu_C_SetHistoryComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.Set Page Combo Box Option
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLastIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_C::SetPageComboBoxOption(int32_t InLastIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.Set Page Combo Box Option");
		
		URankingMenu_C_SetPageComboBoxOption_Params params {};
		params.InLastIndex = InLastIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.SetClassComboBox
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::SetClassComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.SetClassComboBox");
		
		URankingMenu_C_SetClassComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.Construct");
		
		URankingMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.Destruct");
		
		URankingMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		URankingMenu_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.OnPress_Cancel");
		
		URankingMenu_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_C::BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
		
		URankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.ChangeFocusCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_C::ChangeFocusCategory(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.ChangeFocusCategory");
		
		URankingMenu_C_ChangeFocusCategory_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_C::BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
		
		URankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		URankingMenu_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_C::BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
		
		URankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.OnCompletedRankingHistory
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::OnCompletedRankingHistory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.OnCompletedRankingHistory");
		
		URankingMenu_C_OnCompletedRankingHistory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.OnCompletedRankingView
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::OnCompletedRankingView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.OnCompletedRankingView");
		
		URankingMenu_C_OnCompletedRankingView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.OutRangeMyRank
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::OutRangeMyRank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.OutRangeMyRank");
		
		URankingMenu_C_OutRangeMyRank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_NextRank_Btn_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::BndEvt__RankingMenu_NextRank_Btn_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_NextRank_Btn_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature");
		
		URankingMenu_C_BndEvt__RankingMenu_NextRank_Btn_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_MyRank_Btn_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::BndEvt__RankingMenu_MyRank_Btn_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_MyRank_Btn_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature");
		
		URankingMenu_C_BndEvt__RankingMenu_MyRank_Btn_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_PrevRank_Btn_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::BndEvt__RankingMenu_PrevRank_Btn_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_PrevRank_Btn_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature");
		
		URankingMenu_C_BndEvt__RankingMenu_PrevRank_Btn_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_TopRank_Btn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::BndEvt__RankingMenu_TopRank_Btn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_TopRank_Btn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature");
		
		URankingMenu_C_BndEvt__RankingMenu_TopRank_Btn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.OnFailedRankingView
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::OnFailedRankingView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.OnFailedRankingView");
		
		URankingMenu_C_OnFailedRankingView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_CmnBtn27_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::BndEvt__RankingMenu_CmnBtn27_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_CmnBtn27_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		URankingMenu_C_BndEvt__RankingMenu_CmnBtn27_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.ChangeStart
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::ChangeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.ChangeStart");
		
		URankingMenu_C_ChangeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.ChangeEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingMenu_C::ChangeEnd(bool PlayAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.ChangeEnd");
		
		URankingMenu_C_ChangeEnd_Params params {};
		params.PlayAnimation = PlayAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.ChangeSelectHistory
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::ChangeSelectHistory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.ChangeSelectHistory");
		
		URankingMenu_C_ChangeSelectHistory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.ChangeSelectClass
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::ChangeSelectClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.ChangeSelectClass");
		
		URankingMenu_C_ChangeSelectClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.RequestUpdateRankingView
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::RequestUpdateRankingView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.RequestUpdateRankingView");
		
		URankingMenu_C_RequestUpdateRankingView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.ChangeSelectPage
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::ChangeSelectPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.ChangeSelectPage");
		
		URankingMenu_C_ChangeSelectPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_SBButton_C_139_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::BndEvt__RankingMenu_SBButton_C_139_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_SBButton_C_139_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		URankingMenu_C_BndEvt__RankingMenu_SBButton_C_139_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.ExecuteUbergraph_RankingMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_C::ExecuteUbergraph_RankingMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.ExecuteUbergraph_RankingMenu");
		
		URankingMenu_C_ExecuteUbergraph_RankingMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu.RankingMenu_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingMenu_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu.RankingMenu_C.OnClose__DelegateSignature");
		
		URankingMenu_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URankingMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankingMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankingMenu.RankingMenu_C");
		return ptr;
	}

}


