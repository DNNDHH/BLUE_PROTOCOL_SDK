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
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.IsPerkSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bSelected                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInhelitPerkSelector_C::IsPerkSelected(const struct FSBStackBPerk& Perk, bool* bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.IsPerkSelected");
		
		UInhelitPerkSelector_C_IsPerkSelected_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelected != nullptr)
			*bSelected = params.bSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.IsPerkContains
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isContains                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInhelitPerkSelector_C::IsPerkContains(bool* isContains)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.IsPerkContains");
		
		UInhelitPerkSelector_C_IsPerkContains_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isContains != nullptr)
			*isContains = params.isContains;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.AllSelectNone
	 * 		Flags  -> ()
	 */
	void UInhelitPerkSelector_C::AllSelectNone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.AllSelectNone");
		
		UInhelitPerkSelector_C_AllSelectNone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.GenerateList
	 * 		Flags  -> ()
	 */
	void UInhelitPerkSelector_C::GenerateList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.GenerateList");
		
		UInhelitPerkSelector_C_GenerateList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.Construct
	 * 		Flags  -> ()
	 */
	void UInhelitPerkSelector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.Construct");
		
		UInhelitPerkSelector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.OnSelectListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlugSetMenuPartSlotButton_C*                SelectedButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInhelitPerkSelector_C::OnSelectListItem(class UPlugSetMenuPartSlotButton_C* SelectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.OnSelectListItem");
		
		UInhelitPerkSelector_C_OnSelectListItem_Params params {};
		params.SelectedButton = SelectedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelotPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInhelitPerkSelector_C::BndEvt__InhelotPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelotPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UInhelitPerkSelector_C_BndEvt__InhelotPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelotPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInhelitPerkSelector_C::BndEvt__InhelotPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelotPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UInhelitPerkSelector_C_BndEvt__InhelotPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInhelitPerkSelector_C::BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UInhelitPerkSelector_C_BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInhelitPerkSelector_C::BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UInhelitPerkSelector_C_BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInhelitPerkSelector_C::BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UInhelitPerkSelector_C_BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInhelitPerkSelector_C::BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UInhelitPerkSelector_C_BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInhelitPerkSelector_C::BndEvt__InhelitPerkSelector_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.BndEvt__InhelitPerkSelector_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UInhelitPerkSelector_C_BndEvt__InhelitPerkSelector_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.ExecuteUbergraph_InhelitPerkSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInhelitPerkSelector_C::ExecuteUbergraph_InhelitPerkSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.ExecuteUbergraph_InhelitPerkSelector");
		
		UInhelitPerkSelector_C_ExecuteUbergraph_InhelitPerkSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInhelitPerkSelector_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.OnClose__DelegateSignature");
		
		UInhelitPerkSelector_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkSelector.InhelitPerkSelector_C.OnSelectChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               Before                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSBStackBPerk                               Select                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInhelitPerkSelector_C::OnSelectChange__DelegateSignature(const struct FSBStackBPerk& Before, const struct FSBStackBPerk& Select)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkSelector.InhelitPerkSelector_C.OnSelectChange__DelegateSignature");
		
		UInhelitPerkSelector_C_OnSelectChange__DelegateSignature_Params params {};
		params.Before = Before;
		params.Select = Select;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInhelitPerkSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInhelitPerkSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InhelitPerkSelector.InhelitPerkSelector_C");
		return ptr;
	}

}


