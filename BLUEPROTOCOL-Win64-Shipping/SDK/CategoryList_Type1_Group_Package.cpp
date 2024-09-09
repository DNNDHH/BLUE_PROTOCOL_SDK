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
	 * 		Name   -> Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetAllNewIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_Group_C::SetAllNewIcon(bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetAllNewIcon");
		
		UCategoryList_Type1_Group_C_SetAllNewIcon_Params params {};
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetNewIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_Group_C::SetNewIcon(int32_t InId, bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetNewIcon");
		
		UCategoryList_Type1_Group_C_SetNewIcon_Params params {};
		params.InId = InId;
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetButtonSelectIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_Group_C::SetButtonSelectIndex(int32_t Index, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetButtonSelectIndex");
		
		UCategoryList_Type1_Group_C_SetButtonSelectIndex_Params params {};
		params.Index = Index;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.CheckListNewIconVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_Group_C::CheckListNewIconVisible(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.CheckListNewIconVisible");
		
		UCategoryList_Type1_Group_C_CheckListNewIconVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetButtonSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_Group_C::SetButtonSelected(int32_t ID, bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetButtonSelected");
		
		UCategoryList_Type1_Group_C_SetButtonSelected_Params params {};
		params.ID = ID;
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.AddListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCategoryList_Type1_Item_C*                  ListItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_Group_C::AddListItem(class UCategoryList_Type1_Item_C* ListItem, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.AddListItem");
		
		UCategoryList_Type1_Group_C_AddListItem_Params params {};
		params.ListItem = ListItem;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetGroupNameText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NameText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCategoryList_Type1_Group_C::SetGroupNameText(const class FText& NameText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetGroupNameText");
		
		UCategoryList_Type1_Group_C_SetGroupNameText_Params params {};
		params.NameText = NameText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.BndEvt__CategoryList_Type1_Group_ExpandableArea_64_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UExpandableArea*                             Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_Group_C::BndEvt__CategoryList_Type1_Group_ExpandableArea_64_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.BndEvt__CategoryList_Type1_Group_ExpandableArea_64_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature");
		
		UCategoryList_Type1_Group_C_BndEvt__CategoryList_Type1_Group_ExpandableArea_64_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature_Params params {};
		params.Area = Area;
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.BndEvt__CategoryList_Type1_Group_ExpandableArea_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UExpandableArea*                             Area                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCategoryList_Type1_Group_C::BndEvt__CategoryList_Type1_Group_ExpandableArea_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.BndEvt__CategoryList_Type1_Group_ExpandableArea_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature");
		
		UCategoryList_Type1_Group_C_BndEvt__CategoryList_Type1_Group_ExpandableArea_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature_Params params {};
		params.Area = Area;
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.ExecuteUbergraph_CategoryList_Type1_Group
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCategoryList_Type1_Group_C::ExecuteUbergraph_CategoryList_Type1_Group(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.ExecuteUbergraph_CategoryList_Type1_Group");
		
		UCategoryList_Type1_Group_C_ExecuteUbergraph_CategoryList_Type1_Group_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCategoryList_Type1_Group_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCategoryList_Type1_Group_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CategoryList_Type1_Group.CategoryList_Type1_Group_C");
		return ptr;
	}

}


