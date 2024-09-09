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
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.CheckVersion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ok                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPaymentSelect_C::CheckVersion(const class FName& RowName, bool* Ok)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.CheckVersion");
		
		UPaymentSelect_C_CheckVersion_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ok != nullptr)
			*Ok = params.Ok;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.On_List_Payment_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UPaymentSelect_C::On_List_Payment_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.On_List_Payment_GenerateWidget_1");
		
		UPaymentSelect_C_On_List_Payment_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.CreatePaymentList
	 * 		Flags  -> ()
	 */
	void UPaymentSelect_C::CreatePaymentList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.CreatePaymentList");
		
		UPaymentSelect_C_CreatePaymentList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.Construct
	 * 		Flags  -> ()
	 */
	void UPaymentSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.Construct");
		
		UPaymentSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPaymentSelect_C::BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UPaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPaymentSelect_C::BndEvt__Btn_02_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");
		
		UPaymentSelect_C_BndEvt__Btn_02_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPaymentSelect_C::BndEvt__Btn_01_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UPaymentSelect_C_BndEvt__Btn_01_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UPaymentSelect_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UPaymentSelect_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.OnIconClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            IconIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPaymentSelect_C::OnIconClicked(int32_t IconIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.OnIconClicked");
		
		UPaymentSelect_C_OnIconClicked_Params params {};
		params.IconIndex = IconIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.OnClickClosed
	 * 		Flags  -> ()
	 */
	void UPaymentSelect_C::OnClickClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.OnClickClosed");
		
		UPaymentSelect_C_OnClickClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.Destruct
	 * 		Flags  -> ()
	 */
	void UPaymentSelect_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.Destruct");
		
		UPaymentSelect_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.BndEvt__PaymentSelect_Btn_Commerce_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPaymentSelect_C::BndEvt__PaymentSelect_Btn_Commerce_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.BndEvt__PaymentSelect_Btn_Commerce_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UPaymentSelect_C_BndEvt__PaymentSelect_Btn_Commerce_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.BndEvt__PaymentSelect_Btn_APayOne_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPaymentSelect_C::BndEvt__PaymentSelect_Btn_APayOne_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.BndEvt__PaymentSelect_Btn_APayOne_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UPaymentSelect_C_BndEvt__PaymentSelect_Btn_APayOne_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.ExecuteUbergraph_PaymentSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPaymentSelect_C::ExecuteUbergraph_PaymentSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.ExecuteUbergraph_PaymentSelect");
		
		UPaymentSelect_C_ExecuteUbergraph_PaymentSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.OnCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPaymentSelect_C::OnCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.OnCancel__DelegateSignature");
		
		UPaymentSelect_C_OnCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PaymentSelect.PaymentSelect_C.OnDecide__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Payment                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPaymentSelect_C::OnDecide__DelegateSignature(const class FString& Payment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PaymentSelect.PaymentSelect_C.OnDecide__DelegateSignature");
		
		UPaymentSelect_C_OnDecide__DelegateSignature_Params params {};
		params.Payment = Payment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPaymentSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPaymentSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PaymentSelect.PaymentSelect_C");
		return ptr;
	}

}


