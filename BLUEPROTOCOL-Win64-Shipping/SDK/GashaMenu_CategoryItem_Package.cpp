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
	 * 		Name   -> Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.SetRibbon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RibbonType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaMenu_CategoryItem_C::SetRibbon(int32_t RibbonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.SetRibbon");
		
		UGashaMenu_CategoryItem_C_SetRibbon_Params params {};
		params.RibbonType = RibbonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.GetTabText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TextId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaMenu_CategoryItem_C::GetTabText(int32_t* TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.GetTabText");
		
		UGashaMenu_CategoryItem_C_GetTabText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextId != nullptr)
			*TextId = params.TextId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGashaMenu_CategoryItem_C::SetBtnSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.SetBtnSelected");
		
		UGashaMenu_CategoryItem_C_SetBtnSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.Set Tab Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TextId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaMenu_CategoryItem_C::SetTabText(int32_t TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.Set Tab Text");
		
		UGashaMenu_CategoryItem_C_SetTabText_Params params {};
		params.TextId = TextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGashaMenu_CategoryItem_C::BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UGashaMenu_CategoryItem_C_BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.ExecuteUbergraph_GashaMenu_CategoryItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaMenu_CategoryItem_C::ExecuteUbergraph_GashaMenu_CategoryItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.ExecuteUbergraph_GashaMenu_CategoryItem");
		
		UGashaMenu_CategoryItem_C_ExecuteUbergraph_GashaMenu_CategoryItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.OnBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BtnId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGashaMenu_CategoryItem_C::OnBtnClicked__DelegateSignature(int32_t BtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GashaMenu_CategoryItem.GashaMenu_CategoryItem_C.OnBtnClicked__DelegateSignature");
		
		UGashaMenu_CategoryItem_C_OnBtnClicked__DelegateSignature_Params params {};
		params.BtnId = BtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGashaMenu_CategoryItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGashaMenu_CategoryItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GashaMenu_CategoryItem.GashaMenu_CategoryItem_C");
		return ptr;
	}

}


