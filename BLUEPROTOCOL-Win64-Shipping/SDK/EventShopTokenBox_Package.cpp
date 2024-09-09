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
	 * 		Name   -> Function EventShopTokenBox.EventShopTokenBox_C.CheckCostOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ListId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_C::CheckCostOver(int32_t ListId, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox.EventShopTokenBox_C.CheckCostOver");
		
		UEventShopTokenBox_C_CheckCostOver_Params params {};
		params.ListId = ListId;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox.EventShopTokenBox_C.GetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_C::GetAmount(int32_t TokenID, int32_t* Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox.EventShopTokenBox_C.GetAmount");
		
		UEventShopTokenBox_C_GetAmount_Params params {};
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
	 * 		Name   -> Function EventShopTokenBox.EventShopTokenBox_C.SetTokenAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_C::SetTokenAmount(int32_t TokenID, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox.EventShopTokenBox_C.SetTokenAmount");
		
		UEventShopTokenBox_C_SetTokenAmount_Params params {};
		params.TokenID = TokenID;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox.EventShopTokenBox_C.ResetAmount
	 * 		Flags  -> ()
	 */
	void UEventShopTokenBox_C::ResetAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox.EventShopTokenBox_C.ResetAmount");
		
		UEventShopTokenBox_C_ResetAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox.EventShopTokenBox_C.SetTokenList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TokenList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEventShopTokenBox_C::SetTokenList(TArray<int32_t>* TokenList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox.EventShopTokenBox_C.SetTokenList");
		
		UEventShopTokenBox_C_SetTokenList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenList != nullptr)
			*TokenList = params.TokenList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox.EventShopTokenBox_C.Set Token Num
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_C::SetTokenNum(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox.EventShopTokenBox_C.Set Token Num");
		
		UEventShopTokenBox_C_SetTokenNum_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox.EventShopTokenBox_C.Init
	 * 		Flags  -> ()
	 */
	void UEventShopTokenBox_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox.EventShopTokenBox_C.Init");
		
		UEventShopTokenBox_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox.EventShopTokenBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UEventShopTokenBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox.EventShopTokenBox_C.Construct");
		
		UEventShopTokenBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox.EventShopTokenBox_C.ExecuteUbergraph_EventShopTokenBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_C::ExecuteUbergraph_EventShopTokenBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox.EventShopTokenBox_C.ExecuteUbergraph_EventShopTokenBox");
		
		UEventShopTokenBox_C_ExecuteUbergraph_EventShopTokenBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopTokenBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopTokenBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopTokenBox.EventShopTokenBox_C");
		return ptr;
	}

}


