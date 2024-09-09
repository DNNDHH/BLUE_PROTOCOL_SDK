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
	 * 		Name   -> Function QuestBoard.QuestBoard_C.RandomPlayAnimation2
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::RandomPlayAnimation2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.RandomPlayAnimation2");
		
		UQuestBoard_C_RandomPlayAnimation2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.RandomPlayAnimation
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::RandomPlayAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.RandomPlayAnimation");
		
		UQuestBoard_C_RandomPlayAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.FindListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutListIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_C::FindListItem(int32_t InQuestIndex, int32_t* OutListIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.FindListItem");
		
		UQuestBoard_C_FindListItem_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutListIndex != nullptr)
			*OutListIndex = params.OutListIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.RemoveListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_C::RemoveListItem(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.RemoveListItem");
		
		UQuestBoard_C_RemoveListItem_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.ChangeQuestStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_C::ChangeQuestStatus(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.ChangeQuestStatus");
		
		UQuestBoard_C_ChangeQuestStatus_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.Destruct
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.Destruct");
		
		UQuestBoard_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.CreateQuestList
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::CreateQuestList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.CreateQuestList");
		
		UQuestBoard_C_CreateQuestList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.CreateListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FQuestBoardQuestData>                InQuestList                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UQuestBoard_C::CreateListItem(TArray<struct FQuestBoardQuestData> InQuestList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.CreateListItem");
		
		UQuestBoard_C_CreateListItem_Params params {};
		params.InQuestList = InQuestList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.Construct
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.Construct");
		
		UQuestBoard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.OnClick_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_C::OnClick_Event_1(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.OnClick_Event_1");
		
		UQuestBoard_C_OnClick_Event_1_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestDetail_FinishStatus                          FinishStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_C::BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature");
		
		UQuestBoard_C_BndEvt__QuestDetail_Accepted_K2Node_ComponentBoundEvent_103_OnFinish__DelegateSignature_Params params {};
		params.FinishStatus = FinishStatus;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.OnAnimationFinished");
		
		UQuestBoard_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.OnPress_Cancel");
		
		UQuestBoard_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.OnListItemSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestBoard_ListItem_C*                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_C::OnListItemSelected(class UQuestBoard_ListItem_C* item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.OnListItemSelected");
		
		UQuestBoard_C_OnListItemSelected_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UQuestBoard_C::BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature");
		
		UQuestBoard_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_4_OnApplyFilter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.BuildListItem
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::BuildListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.BuildListItem");
		
		UQuestBoard_C_BuildListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.RefreshDisplay
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::RefreshDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.RefreshDisplay");
		
		UQuestBoard_C_RefreshDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		UQuestBoard_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.onAnimTimer
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::onAnimTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.onAnimTimer");
		
		UQuestBoard_C_onAnimTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");
		
		UQuestBoard_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.ExecuteUbergraph_QuestBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_C::ExecuteUbergraph_QuestBoard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.ExecuteUbergraph_QuestBoard");
		
		UQuestBoard_C_ExecuteUbergraph_QuestBoard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard.QuestBoard_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuestBoard_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard.QuestBoard_C.OnClose__DelegateSignature");
		
		UQuestBoard_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestBoard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestBoard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestBoard.QuestBoard_C");
		return ptr;
	}

}


