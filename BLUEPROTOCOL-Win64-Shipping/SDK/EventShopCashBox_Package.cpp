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
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.SetClickInputState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopCashBox_C::SetClickInputState(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.SetClickInputState");
		
		UEventShopCashBox_C_SetClickInputState_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.UpdatePurchaseButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    PriceList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEventShopCashBox_C::UpdatePurchaseButton(TArray<int32_t>* PriceList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.UpdatePurchaseButton");
		
		UEventShopCashBox_C_UpdatePurchaseButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PriceList != nullptr)
			*PriceList = params.PriceList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.SetShopType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShopType                                          ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCashBox_C::SetShopType(EShopType ShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.SetShopType");
		
		UEventShopCashBox_C_SetShopType_Params params {};
		params.ShopType = ShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.GetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCashBox_C::GetAmount(int32_t TokenID, int32_t* Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.GetAmount");
		
		UEventShopCashBox_C_GetAmount_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Amount != nullptr)
			*Amount = params.Amount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.ResetAmount
	 * 		Flags  -> ()
	 */
	void UEventShopCashBox_C::ResetAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.ResetAmount");
		
		UEventShopCashBox_C_ResetAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.SetTokenAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCashBox_C::SetTokenAmount(int32_t TokenID, int32_t Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.SetTokenAmount");
		
		UEventShopCashBox_C_SetTokenAmount_Params params {};
		params.TokenID = TokenID;
		params.Price = Price;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.SetTokenList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TokenList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEventShopCashBox_C::SetTokenList(TArray<int32_t>* TokenList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.SetTokenList");
		
		UEventShopCashBox_C_SetTokenList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenList != nullptr)
			*TokenList = params.TokenList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.Init
	 * 		Flags  -> ()
	 */
	void UEventShopCashBox_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.Init");
		
		UEventShopCashBox_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UEventShopCashBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.Construct");
		
		UEventShopCashBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.BndEvt__EventShopCashBox_Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopCashBox_C::BndEvt__EventShopCashBox_Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.BndEvt__EventShopCashBox_Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UEventShopCashBox_C_BndEvt__EventShopCashBox_Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.ExecuteUbergraph_EventShopCashBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCashBox_C::ExecuteUbergraph_EventShopCashBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.ExecuteUbergraph_EventShopCashBox");
		
		UEventShopCashBox_C_ExecuteUbergraph_EventShopCashBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox.EventShopCashBox_C.OnPurchased__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEventShopCashBox_C::OnPurchased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox.EventShopCashBox_C.OnPurchased__DelegateSignature");
		
		UEventShopCashBox_C_OnPurchased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopCashBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopCashBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopCashBox.EventShopCashBox_C");
		return ptr;
	}

}


