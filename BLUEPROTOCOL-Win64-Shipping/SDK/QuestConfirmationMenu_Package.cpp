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
	 * 		Name   -> Function QuestConfirmationMenu.QuestConfirmationMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UQuestConfirmationMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestConfirmationMenu.QuestConfirmationMenu_C.Construct");
		
		UQuestConfirmationMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestConfirmationMenu.QuestConfirmationMenu_C.BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestDetail_FinishStatus                          FinishStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestConfirmationMenu_C::BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestConfirmationMenu.QuestConfirmationMenu_C.BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature");
		
		UQuestConfirmationMenu_C_BndEvt__QuestDetail_K2Node_ComponentBoundEvent_33_OnFinish__DelegateSignature_Params params {};
		params.FinishStatus = FinishStatus;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestConfirmationMenu.QuestConfirmationMenu_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UQuestConfirmationMenu_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestConfirmationMenu.QuestConfirmationMenu_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1");
		
		UQuestConfirmationMenu_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestConfirmationMenu.QuestConfirmationMenu_C.ExecuteUbergraph_QuestConfirmationMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestConfirmationMenu_C::ExecuteUbergraph_QuestConfirmationMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestConfirmationMenu.QuestConfirmationMenu_C.ExecuteUbergraph_QuestConfirmationMenu");
		
		UQuestConfirmationMenu_C_ExecuteUbergraph_QuestConfirmationMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestConfirmationMenu.QuestConfirmationMenu_C.OnFinish__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestDetail_FinishStatus                          FinishStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestConfirmationMenu_C::OnFinish__DelegateSignature(EQuestDetail_FinishStatus FinishStatus, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestConfirmationMenu.QuestConfirmationMenu_C.OnFinish__DelegateSignature");
		
		UQuestConfirmationMenu_C_OnFinish__DelegateSignature_Params params {};
		params.FinishStatus = FinishStatus;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestConfirmationMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestConfirmationMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestConfirmationMenu.QuestConfirmationMenu_C");
		return ptr;
	}

}


