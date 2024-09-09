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
	 * 		Name   -> Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.GetSelectBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSelectBtnId                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPurchaseTypeSwitchingTab_C::GetSelectBtn(int32_t* OutSelectBtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.GetSelectBtn");
		
		UPurchaseTypeSwitchingTab_C_GetSelectBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSelectBtnId != nullptr)
			*OutSelectBtnId = params.OutSelectBtnId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectedBtnID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPurchaseTypeSwitchingTab_C::SetBtnSelected(int32_t SelectedBtnID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.SetBtnSelected");
		
		UPurchaseTypeSwitchingTab_C_SetBtnSelected_Params params {};
		params.SelectedBtnID = SelectedBtnID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.SetBtnVisivility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   IsVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPurchaseTypeSwitchingTab_C::SetBtnVisivility(ESlateVisibility IsVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.SetBtnVisivility");
		
		UPurchaseTypeSwitchingTab_C_SetBtnVisivility_Params params {};
		params.IsVisibility = IsVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.CommonBtnClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BtnId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPurchaseTypeSwitchingTab_C::CommonBtnClicked(int32_t BtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.CommonBtnClicked");
		
		UPurchaseTypeSwitchingTab_C_CommonBtnClicked_Params params {};
		params.BtnId = BtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.BndEvt__PurchaseTypeSwitchingTab_RoseOrb_Gasha_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BtnId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPurchaseTypeSwitchingTab_C::BndEvt__PurchaseTypeSwitchingTab_RoseOrb_Gasha_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature(int32_t BtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.BndEvt__PurchaseTypeSwitchingTab_RoseOrb_Gasha_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature");
		
		UPurchaseTypeSwitchingTab_C_BndEvt__PurchaseTypeSwitchingTab_RoseOrb_Gasha_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature_Params params {};
		params.BtnId = BtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.BndEvt__PurchaseTypeSwitchingTab_Ticket_Gasha_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BtnId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPurchaseTypeSwitchingTab_C::BndEvt__PurchaseTypeSwitchingTab_Ticket_Gasha_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature(int32_t BtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.BndEvt__PurchaseTypeSwitchingTab_Ticket_Gasha_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature");
		
		UPurchaseTypeSwitchingTab_C_BndEvt__PurchaseTypeSwitchingTab_Ticket_Gasha_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature_Params params {};
		params.BtnId = BtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.Construct
	 * 		Flags  -> ()
	 */
	void UPurchaseTypeSwitchingTab_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.Construct");
		
		UPurchaseTypeSwitchingTab_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.ExecuteUbergraph_PurchaseTypeSwitchingTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPurchaseTypeSwitchingTab_C::ExecuteUbergraph_PurchaseTypeSwitchingTab(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.ExecuteUbergraph_PurchaseTypeSwitchingTab");
		
		UPurchaseTypeSwitchingTab_C_ExecuteUbergraph_PurchaseTypeSwitchingTab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BtnId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPurchaseTypeSwitchingTab_C::OnClicked__DelegateSignature(int32_t BtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C.OnClicked__DelegateSignature");
		
		UPurchaseTypeSwitchingTab_C_OnClicked__DelegateSignature_Params params {};
		params.BtnId = BtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPurchaseTypeSwitchingTab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPurchaseTypeSwitchingTab_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C");
		return ptr;
	}

}


