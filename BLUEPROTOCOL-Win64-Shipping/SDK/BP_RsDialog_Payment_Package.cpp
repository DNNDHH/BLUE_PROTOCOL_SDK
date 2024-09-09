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
	 * 		Name   -> Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__BP_PaymentSelect02_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_Payment_C::BndEvt__BP_PaymentSelect02_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__BP_PaymentSelect02_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");
		
		UBP_RsDialog_Payment_C_BndEvt__BP_PaymentSelect02_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.SetDialogInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogProductTitleType                          ProductTilteType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemSetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ProductName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            RankFrom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RankTo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowPurchaseNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PurchaseNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERsDialogPaymentType                               PaymentType01                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PurchasePrice01                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERsDialogPaymentType                               PaymentType02                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PurchasePrice02                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_Payment_C::SetDialogInfo(ERsDialogProductTitleType ProductTilteType, int32_t ItemSetId, const class FText& ProductName, int32_t RankFrom, int32_t RankTo, bool ShowPurchaseNum, int32_t PurchaseNum, ERsDialogPaymentType PaymentType01, int32_t PurchasePrice01, ERsDialogPaymentType PaymentType02, int32_t PurchasePrice02)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.SetDialogInfo");
		
		UBP_RsDialog_Payment_C_SetDialogInfo_Params params {};
		params.ProductTilteType = ProductTilteType;
		params.ItemSetId = ItemSetId;
		params.ProductName = ProductName;
		params.RankFrom = RankFrom;
		params.RankTo = RankTo;
		params.ShowPurchaseNum = ShowPurchaseNum;
		params.PurchaseNum = PurchaseNum;
		params.PaymentType01 = PaymentType01;
		params.PurchasePrice01 = PurchasePrice01;
		params.PaymentType02 = PaymentType02;
		params.PurchasePrice02 = PurchasePrice02;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__BP_PaymentSelect01_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_Payment_C::BndEvt__BP_PaymentSelect01_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__BP_PaymentSelect01_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");
		
		UBP_RsDialog_Payment_C_BndEvt__BP_PaymentSelect01_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialog_Payment_C::BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UBP_RsDialog_Payment_C_BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.ExecuteUbergraph_BP_RsDialog_Payment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_Payment_C::ExecuteUbergraph_BP_RsDialog_Payment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.ExecuteUbergraph_BP_RsDialog_Payment");
		
		UBP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_Payment_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.OnButtonClicked__DelegateSignature");
		
		UBP_RsDialog_Payment_C_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RsDialog_Payment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RsDialog_Payment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RsDialog_Payment.BP_RsDialog_Payment_C");
		return ptr;
	}

}


