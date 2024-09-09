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
	 * 		Name   -> Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnEntryReleased
	 * 		Flags  -> ()
	 */
	void UUMG_AdminGotoBookmarkWindowItem_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnEntryReleased");
		
		UUMG_AdminGotoBookmarkWindowItem_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_AdminGotoBookmarkWindowItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnItemExpansionChanged");
		
		UUMG_AdminGotoBookmarkWindowItem_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_AdminGotoBookmarkWindowItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnItemSelectionChanged");
		
		UUMG_AdminGotoBookmarkWindowItem_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnListItemObjectSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AdminGotoBookmarkWindowItem_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnListItemObjectSet");
		
		UUMG_AdminGotoBookmarkWindowItem_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AdminGotoBookmarkWindowItem_C::BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");
		
		UUMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnUpdateData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBAdminGotoBookmarkItem*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AdminGotoBookmarkWindowItem_C::OnUpdateData(class USBAdminGotoBookmarkItem* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnUpdateData");
		
		UUMG_AdminGotoBookmarkWindowItem_C_OnUpdateData_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.ApplyData
	 * 		Flags  -> ()
	 */
	void UUMG_AdminGotoBookmarkWindowItem_C::ApplyData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.ApplyData");
		
		UUMG_AdminGotoBookmarkWindowItem_C_ApplyData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BndEvt__Button_Move_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_AdminGotoBookmarkWindowItem_C::BndEvt__Button_Move_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BndEvt__Button_Move_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_AdminGotoBookmarkWindowItem_C_BndEvt__Button_Move_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.SetIdWarpMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFlag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_AdminGotoBookmarkWindowItem_C::SetIdWarpMode(bool bFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.SetIdWarpMode");
		
		UUMG_AdminGotoBookmarkWindowItem_C_SetIdWarpMode_Params params {};
		params.bFlag = bFlag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AdminGotoBookmarkWindowItem_C::ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem");
		
		UUMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnClickedMoveButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBAdminGotoBookmarkItem*                    Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AdminGotoBookmarkWindowItem_C::OnClickedMoveButton__DelegateSignature(class USBAdminGotoBookmarkItem* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnClickedMoveButton__DelegateSignature");
		
		UUMG_AdminGotoBookmarkWindowItem_C_OnClickedMoveButton__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_AdminGotoBookmarkWindowItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_AdminGotoBookmarkWindowItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C");
		return ptr;
	}

}


