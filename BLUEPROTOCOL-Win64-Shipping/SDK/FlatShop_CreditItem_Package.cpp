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
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.Get_Caution_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UFlatShop_CreditItem_C::Get_Caution_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.Get_Caution_ToolTipWidget_1");
		
		UFlatShop_CreditItem_C_Get_Caution_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetCreditLack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_CreditItem_C::SetCreditLack(bool IsLack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetCreditLack");
		
		UFlatShop_CreditItem_C_SetCreditLack_Params params {};
		params.IsLack = IsLack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetVisibilityExpired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_CreditItem_C::SetVisibilityExpired(bool InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetVisibilityExpired");
		
		UFlatShop_CreditItem_C_SetVisibilityExpired_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetAfterCreditNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_CreditItem_C::SetAfterCreditNum(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetAfterCreditNum");
		
		UFlatShop_CreditItem_C_SetAfterCreditNum_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetGashaTicketAmountColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLack                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_CreditItem_C::SetGashaTicketAmountColor(bool IsLack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetGashaTicketAmountColor");
		
		UFlatShop_CreditItem_C_SetGashaTicketAmountColor_Params params {};
		params.IsLack = IsLack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.Reset Count Move
	 * 		Flags  -> ()
	 */
	void UFlatShop_CreditItem_C::ResetCountMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.Reset Count Move");
		
		UFlatShop_CreditItem_C_ResetCountMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.ChangeToTicketType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_CreditItem_C::ChangeToTicketType(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.ChangeToTicketType");
		
		UFlatShop_CreditItem_C_ChangeToTicketType_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetCreditNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_CreditItem_C::SetCreditNum(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetCreditNum");
		
		UFlatShop_CreditItem_C_SetCreditNum_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.Set Credit Type
	 * 		Flags  -> ()
	 */
	void UFlatShop_CreditItem_C::SetCreditType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.Set Credit Type");
		
		UFlatShop_CreditItem_C_SetCreditType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.OnLoaded_52660D15417B61953E2BF591D987F44E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_CreditItem_C::OnLoaded_52660D15417B61953E2BF591D987F44E(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.OnLoaded_52660D15417B61953E2BF591D987F44E");
		
		UFlatShop_CreditItem_C_OnLoaded_52660D15417B61953E2BF591D987F44E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_CreditItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.PreConstruct");
		
		UFlatShop_CreditItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_CreditItem_C::SetIconTexture(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetIconTexture");
		
		UFlatShop_CreditItem_C_SetIconTexture_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_CreditItem.FlatShop_CreditItem_C.ExecuteUbergraph_FlatShop_CreditItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_CreditItem_C::ExecuteUbergraph_FlatShop_CreditItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_CreditItem.FlatShop_CreditItem_C.ExecuteUbergraph_FlatShop_CreditItem");
		
		UFlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlatShop_CreditItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlatShop_CreditItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FlatShop_CreditItem.FlatShop_CreditItem_C");
		return ptr;
	}

}


