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
	 * 		Name   -> Function QuestBoard_ListItem.QuestBoard_ListItem_C.GetQuestIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_ListItem_C::GetQuestIndex(int32_t* QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItem.QuestBoard_ListItem_C.GetQuestIndex");
		
		UQuestBoard_ListItem_C_GetQuestIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestIndex != nullptr)
			*QuestIndex = params.QuestIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetVisibleNewIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestBoard_ListItem_C::SetVisibleNewIcon(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetVisibleNewIcon");
		
		UQuestBoard_ListItem_C_SetVisibleNewIcon_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard_ListItem.QuestBoard_ListItem_C.HideNewIcon
	 * 		Flags  -> ()
	 */
	void UQuestBoard_ListItem_C::HideNewIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItem.QuestBoard_ListItem_C.HideNewIcon");
		
		UQuestBoard_ListItem_C_HideNewIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestBoard_ListItem_C::SetBtnSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetBtnSelected");
		
		UQuestBoard_ListItem_C_SetBtnSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetQuestStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_ListItem_C::SetQuestStatus(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetQuestStatus");
		
		UQuestBoard_ListItem_C_SetQuestStatus_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetInfo
	 * 		Flags  -> ()
	 */
	void UQuestBoard_ListItem_C::SetInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItem.QuestBoard_ListItem_C.SetInfo");
		
		UQuestBoard_ListItem_C_SetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard_ListItem.QuestBoard_ListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UQuestBoard_ListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItem.QuestBoard_ListItem_C.Construct");
		
		UQuestBoard_ListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard_ListItem.QuestBoard_ListItem_C.BndEvt__SBButton_C_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuestBoard_ListItem_C::BndEvt__SBButton_C_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItem.QuestBoard_ListItem_C.BndEvt__SBButton_C_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UQuestBoard_ListItem_C_BndEvt__SBButton_C_76_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard_ListItem.QuestBoard_ListItem_C.ExecuteUbergraph_QuestBoard_ListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_ListItem_C::ExecuteUbergraph_QuestBoard_ListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItem.QuestBoard_ListItem_C.ExecuteUbergraph_QuestBoard_ListItem");
		
		UQuestBoard_ListItem_C_ExecuteUbergraph_QuestBoard_ListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard_ListItem.QuestBoard_ListItem_C.OnBtnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestBoard_ListItem_C*                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_ListItem_C::OnBtnSelected__DelegateSignature(class UQuestBoard_ListItem_C* item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItem.QuestBoard_ListItem_C.OnBtnSelected__DelegateSignature");
		
		UQuestBoard_ListItem_C_OnBtnSelected__DelegateSignature_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard_ListItem.QuestBoard_ListItem_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_ListItem_C::OnClick__DelegateSignature(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItem.QuestBoard_ListItem_C.OnClick__DelegateSignature");
		
		UQuestBoard_ListItem_C_OnClick__DelegateSignature_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestBoard_ListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestBoard_ListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestBoard_ListItem.QuestBoard_ListItem_C");
		return ptr;
	}

}


