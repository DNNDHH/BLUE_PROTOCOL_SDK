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
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.CalclateRewardBoostSupportItemNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BaseAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SupportItemId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CalculatedAmount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMaterialButtonView_C::CalclateRewardBoostSupportItemNum(int32_t BaseAmount, int32_t SupportItemId, int32_t* CalculatedAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.CalclateRewardBoostSupportItemNum");
		
		UMaterialButtonView_C_CalclateRewardBoostSupportItemNum_Params params {};
		params.BaseAmount = BaseAmount;
		params.SupportItemId = SupportItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CalculatedAmount != nullptr)
			*CalculatedAmount = params.CalculatedAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.GetCalculatedItemNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BaseAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SupportItemId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CalculatedAmount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMaterialButtonView_C::GetCalculatedItemNum(int32_t BaseAmount, int32_t SupportItemId, int32_t* CalculatedAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.GetCalculatedItemNum");
		
		UMaterialButtonView_C_GetCalculatedItemNum_Params params {};
		params.BaseAmount = BaseAmount;
		params.SupportItemId = SupportItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CalculatedAmount != nullptr)
			*CalculatedAmount = params.CalculatedAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.UpdateDiscountColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDiscount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialButtonView_C::UpdateDiscountColor(class UTextBlock* , bool* IsDiscount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.UpdateDiscountColor");
		
		UMaterialButtonView_C_UpdateDiscountColor_Params params {};
		params. = ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDiscount != nullptr)
			*IsDiscount = params.IsDiscount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.GetUseMoney
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Money                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMaterialButtonView_C::GetUseMoney(int32_t* Money)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.GetUseMoney");
		
		UMaterialButtonView_C_GetUseMoney_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Money != nullptr)
			*Money = params.Money;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                TargetItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FOwnItemInfo>                        GridView                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bUseTicket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialButtonView_C::SetData(const struct FOwnItemInfo& TargetItem, TArray<struct FOwnItemInfo>* GridView, bool bUseTicket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.SetData");
		
		UMaterialButtonView_C_SetData_Params params {};
		params.TargetItem = TargetItem;
		params.bUseTicket = bUseTicket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GridView != nullptr)
			*GridView = params.GridView;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.UpdateLackColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  ColorText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsLack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialButtonView_C::UpdateLackColor(class UTextBlock* ColorText, bool IsLack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.UpdateLackColor");
		
		UMaterialButtonView_C_UpdateLackColor_Params params {};
		params.ColorText = ColorText;
		params.IsLack = IsLack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.InitializeTickets
	 * 		Flags  -> ()
	 */
	void UMaterialButtonView_C::InitializeTickets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.InitializeTickets");
		
		UMaterialButtonView_C_InitializeTickets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.Initialize
	 * 		Flags  -> ()
	 */
	void UMaterialButtonView_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.Initialize");
		
		UMaterialButtonView_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.Construct
	 * 		Flags  -> ()
	 */
	void UMaterialButtonView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.Construct");
		
		UMaterialButtonView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.BndEvt__MaterialButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMaterialButtonView_C::BndEvt__MaterialButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.BndEvt__MaterialButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UMaterialButtonView_C_BndEvt__MaterialButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.ExecuteUbergraph_MaterialButtonView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMaterialButtonView_C::ExecuteUbergraph_MaterialButtonView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.ExecuteUbergraph_MaterialButtonView");
		
		UMaterialButtonView_C_ExecuteUbergraph_MaterialButtonView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MaterialButtonView.MaterialButtonView_C.OnReselect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMaterialButtonView_C::OnReselect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialButtonView.MaterialButtonView_C.OnReselect__DelegateSignature");
		
		UMaterialButtonView_C_OnReselect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialButtonView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialButtonView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MaterialButtonView.MaterialButtonView_C");
		return ptr;
	}

}


