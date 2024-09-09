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
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.CanInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ok                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHistoryWindow_C::CanInput(bool* Ok)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.CanInput");
		
		UHistoryWindow_C_CanInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ok != nullptr)
			*Ok = params.Ok;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.FixExpired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBHistoryExpired                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UHistoryWindow_C::FixExpired(const struct FSBHistoryExpired& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.FixExpired");
		
		UHistoryWindow_C_FixExpired_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.GetRequestDate_DeleteAnnounce
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::GetRequestDate_DeleteAnnounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.GetRequestDate_DeleteAnnounce");
		
		UHistoryWindow_C_GetRequestDate_DeleteAnnounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.SetUIBlocker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHistoryWindow_C::SetUIBlocker(bool bLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.SetUIBlocker");
		
		UHistoryWindow_C_SetUIBlocker_Params params {};
		params.bLock = bLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.On_ComboBox_Count_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UHistoryWindow_C::On_ComboBox_Count_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.On_ComboBox_Count_GenerateWidget_1");
		
		UHistoryWindow_C_On_ComboBox_Count_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.On_ComboBox_Month_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UHistoryWindow_C::On_ComboBox_Month_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.On_ComboBox_Month_GenerateWidget_1");
		
		UHistoryWindow_C_On_ComboBox_Month_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.On_ComboBox_Year_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UHistoryWindow_C::On_ComboBox_Year_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.On_ComboBox_Year_GenerateWidget_1");
		
		UHistoryWindow_C_On_ComboBox_Year_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.CreateHistoryList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBCashHistory>                      List                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHistoryWindow_C::CreateHistoryList(TArray<struct FSBCashHistory>* List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.CreateHistoryList");
		
		UHistoryWindow_C_CreateHistoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (List != nullptr)
			*List = params.List;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.Create_MonthComboBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            First                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Last                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistoryWindow_C::Create_MonthComboBox(int32_t First, int32_t Last)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.Create_MonthComboBox");
		
		UHistoryWindow_C_Create_MonthComboBox_Params params {};
		params.First = First;
		params.Last = Last;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.Init_CountComboBox
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::Init_CountComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.Init_CountComboBox");
		
		UHistoryWindow_C_Init_CountComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.Init_YearComboBox
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::Init_YearComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.Init_YearComboBox");
		
		UHistoryWindow_C_Init_YearComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.Init_MonthComboBox
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::Init_MonthComboBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.Init_MonthComboBox");
		
		UHistoryWindow_C_Init_MonthComboBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.Init
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.Init");
		
		UHistoryWindow_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.Hide
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.Hide");
		
		UHistoryWindow_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.Show
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHistoryType                                     HistoryType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistoryWindow_C::Show(ESBHistoryType HistoryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.Show");
		
		UHistoryWindow_C_Show_Params params {};
		params.HistoryType = HistoryType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.Construct");
		
		UHistoryWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistoryWindow_C::BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
		
		UHistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistoryWindow_C::BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
		
		UHistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistoryWindow_C::BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
		
		UHistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UHistoryWindow_C_BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");
		
		UHistoryWindow_C_BndEvt__BtnCancel_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UHistoryWindow_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.BndEvt__HistoryWindow_BtnExit_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::BndEvt__HistoryWindow_BtnExit_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.BndEvt__HistoryWindow_BtnExit_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		UHistoryWindow_C_BndEvt__HistoryWindow_BtnExit_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.BndEvt__HistoryWindow_BtnAnnounce_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::BndEvt__HistoryWindow_BtnAnnounce_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.BndEvt__HistoryWindow_BtnAnnounce_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UHistoryWindow_C_BndEvt__HistoryWindow_BtnAnnounce_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.OnClosed_Announce
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::OnClosed_Announce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.OnClosed_Announce");
		
		UHistoryWindow_C_OnClosed_Announce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.OnEsc
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::OnEsc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.OnEsc");
		
		UHistoryWindow_C_OnEsc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.ShowWindow_DeleteAnnounce
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::ShowWindow_DeleteAnnounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.ShowWindow_DeleteAnnounce");
		
		UHistoryWindow_C_ShowWindow_DeleteAnnounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.ShowMessageDialog_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHistoryWindow_C::ShowMessageDialog_Event(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.ShowMessageDialog_Event");
		
		UHistoryWindow_C_ShowMessageDialog_Event_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.SetExpiredData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBHistoryExpired                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UHistoryWindow_C::SetExpiredData(const struct FSBHistoryExpired& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.SetExpiredData");
		
		UHistoryWindow_C_SetExpiredData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.ExecuteUbergraph_HistoryWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistoryWindow_C::ExecuteUbergraph_HistoryWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.ExecuteUbergraph_HistoryWindow");
		
		UHistoryWindow_C_ExecuteUbergraph_HistoryWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.OnRequestDel__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHistoryType                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistoryWindow_C::OnRequestDel__DelegateSignature(ESBHistoryType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.OnRequestDel__DelegateSignature");
		
		UHistoryWindow_C_OnRequestDel__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.OnRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHistoryType                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistoryWindow_C::OnRequest__DelegateSignature(ESBHistoryType Type, int32_t Year, int32_t Month, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.OnRequest__DelegateSignature");
		
		UHistoryWindow_C_OnRequest__DelegateSignature_Params params {};
		params.Type = Type;
		params.Year = Year;
		params.Month = Month;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HistoryWindow.HistoryWindow_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHistoryWindow_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HistoryWindow.HistoryWindow_C.OnClose__DelegateSignature");
		
		UHistoryWindow_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHistoryWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHistoryWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HistoryWindow.HistoryWindow_C");
		return ptr;
	}

}


