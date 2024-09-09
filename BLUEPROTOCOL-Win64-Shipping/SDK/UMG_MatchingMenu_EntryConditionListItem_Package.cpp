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
	 * 		Name   -> Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.SetVisibleUnderline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_EntryConditionListItem_C::SetVisibleUnderline(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.SetVisibleUnderline");
		
		UUMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.GetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   OutPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_EntryConditionListItem_C::GetPosition(struct FVector2D* OutPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.GetPosition");
		
		UUMG_MatchingMenu_EntryConditionListItem_C_GetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPosition != nullptr)
			*OutPosition = params.OutPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_EntryConditionListItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.PreConstruct");
		
		UUMG_MatchingMenu_EntryConditionListItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.BndEvt__UMG_MatchingMenu_EntryConditionListItem_ButtonOpenWindow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_EntryConditionListItem_C::BndEvt__UMG_MatchingMenu_EntryConditionListItem_ButtonOpenWindow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.BndEvt__UMG_MatchingMenu_EntryConditionListItem_ButtonOpenWindow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_MatchingMenu_EntryConditionListItem_C_BndEvt__UMG_MatchingMenu_EntryConditionListItem_ButtonOpenWindow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_EntryConditionListItem_C::ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem");
		
		UUMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.OnPressedButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_EntryConditionListItem_C::OnPressedButton__DelegateSignature(int32_t Value, const struct FVector2D& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.OnPressedButton__DelegateSignature");
		
		UUMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature_Params params {};
		params.Value = Value;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_EntryConditionListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_EntryConditionListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C");
		return ptr;
	}

}


