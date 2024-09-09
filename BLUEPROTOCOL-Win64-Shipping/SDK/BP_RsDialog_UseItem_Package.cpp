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
	 * 		Name   -> Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_UseItem_C::BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UBP_RsDialog_UseItem_C_BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.SetDialogInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogProductTitleType                          ProductTitleType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemSetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ProductName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            RankFrom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RankTo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        EffectDescription                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RsDialog_UseItem_C::SetDialogInfo(ERsDialogProductTitleType ProductTitleType, int32_t ItemSetId, const class FText& ProductName, int32_t RankFrom, int32_t RankTo, const class FText& EffectDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.SetDialogInfo");
		
		UBP_RsDialog_UseItem_C_SetDialogInfo_Params params {};
		params.ProductTitleType = ProductTitleType;
		params.ItemSetId = ItemSetId;
		params.ProductName = ProductName;
		params.RankFrom = RankFrom;
		params.RankTo = RankTo;
		params.EffectDescription = EffectDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_UseItem_C::BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UBP_RsDialog_UseItem_C_BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.ExecuteUbergraph_BP_RsDialog_UseItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_UseItem_C::ExecuteUbergraph_BP_RsDialog_UseItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.ExecuteUbergraph_BP_RsDialog_UseItem");
		
		UBP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_UseItem_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.OnButtonClicked__DelegateSignature");
		
		UBP_RsDialog_UseItem_C_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RsDialog_UseItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RsDialog_UseItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RsDialog_UseItem.BP_RsDialog_UseItem_C");
		return ptr;
	}

}


