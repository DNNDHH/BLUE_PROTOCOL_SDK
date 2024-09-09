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
	 * 		Name   -> Function QuestDetailForMap.QuestDetailForMap_C.IsShowMoveButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetailForMap_C::IsShowMoveButton(bool* OutParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetailForMap.QuestDetailForMap_C.IsShowMoveButton");
		
		UQuestDetailForMap_C_IsShowMoveButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutParam != nullptr)
			*OutParam = params.OutParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetailForMap.QuestDetailForMap_C.SetMoveButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InShowButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetailForMap_C::SetMoveButton(bool InShowButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetailForMap.QuestDetailForMap_C.SetMoveButton");
		
		UQuestDetailForMap_C_SetMoveButton_Params params {};
		params.InShowButton = InShowButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetailForMap.QuestDetailForMap_C.Construct
	 * 		Flags  -> ()
	 */
	void UQuestDetailForMap_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetailForMap.QuestDetailForMap_C.Construct");
		
		UQuestDetailForMap_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetailForMap.QuestDetailForMap_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UQuestDetailForMap_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetailForMap.QuestDetailForMap_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2");
		
		UQuestDetailForMap_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestConfirmationMenuEx_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuestDetailForMap_C::BndEvt__QuestConfirmationMenuEx_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestConfirmationMenuEx_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UQuestDetailForMap_C_BndEvt__QuestConfirmationMenuEx_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetailForMap.QuestDetailForMap_C.OnMenuFinish
	 * 		Flags  -> ()
	 */
	void UQuestDetailForMap_C::OnMenuFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetailForMap.QuestDetailForMap_C.OnMenuFinish");
		
		UQuestDetailForMap_C_OnMenuFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetailForMap.QuestDetailForMap_C.Destruct
	 * 		Flags  -> ()
	 */
	void UQuestDetailForMap_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetailForMap.QuestDetailForMap_C.Destruct");
		
		UQuestDetailForMap_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestDetailForMap_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuestDetailForMap_C::BndEvt__QuestDetailForMap_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestDetailForMap_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");
		
		UQuestDetailForMap_C_BndEvt__QuestDetailForMap_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestDetailForMap_MoveToQuestListBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuestDetailForMap_C::BndEvt__QuestDetailForMap_MoveToQuestListBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetailForMap.QuestDetailForMap_C.BndEvt__QuestDetailForMap_MoveToQuestListBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UQuestDetailForMap_C_BndEvt__QuestDetailForMap_MoveToQuestListBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetailForMap.QuestDetailForMap_C.ExecuteUbergraph_QuestDetailForMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetailForMap_C::ExecuteUbergraph_QuestDetailForMap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetailForMap.QuestDetailForMap_C.ExecuteUbergraph_QuestDetailForMap");
		
		UQuestDetailForMap_C_ExecuteUbergraph_QuestDetailForMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetailForMap.QuestDetailForMap_C.OnFinish__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestDetail_FinishStatus                          FinishStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetailForMap_C::OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetailForMap.QuestDetailForMap_C.OnFinish__DelegateSignature");
		
		UQuestDetailForMap_C_OnFinish__DelegateSignature_Params params {};
		params.FinishStatus = FinishStatus;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetailForMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetailForMap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetailForMap.QuestDetailForMap_C");
		return ptr;
	}

}


