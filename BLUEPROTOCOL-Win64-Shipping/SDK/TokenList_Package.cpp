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
	 * 		Name   -> Function TokenList.TokenList_C.SetExpiredTokenListFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBExpiredTokenStates                       SBExpiredTokenStates                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UTokenList_C::SetExpiredTokenListFunc(const struct FSBExpiredTokenStates& SBExpiredTokenStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.SetExpiredTokenListFunc");
		
		UTokenList_C_SetExpiredTokenListFunc_Params params {};
		params.SBExpiredTokenStates = SBExpiredTokenStates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.SetTokenListFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBTokenStates                              TokenStates                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTokenList_C::SetTokenListFunc(const struct FSBTokenStates& TokenStates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.SetTokenListFunc");
		
		UTokenList_C_SetTokenListFunc_Params params {};
		params.TokenStates = TokenStates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.Construct
	 * 		Flags  -> ()
	 */
	void UTokenList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.Construct");
		
		UTokenList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.OnGetMyCharacterInfoDelegate_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTokenList_C::OnGetMyCharacterInfoDelegate__1(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.OnGetMyCharacterInfoDelegate_イベント_1");
		
		UTokenList_C_OnGetMyCharacterInfoDelegate__1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTokenList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.Destruct");
		
		UTokenList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.SetMoneyList
	 * 		Flags  -> ()
	 */
	void UTokenList_C::SetMoneyList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.SetMoneyList");
		
		UTokenList_C_SetMoneyList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.GetCryptocurerncy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCryptoCurrency                           Cryptocurrency                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UTokenList_C::GetCryptocurerncy(bool Result, int32_t RetCode, const struct FSBCryptoCurrency& Cryptocurrency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.GetCryptocurerncy");
		
		UTokenList_C_GetCryptocurerncy_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.Cryptocurrency = Cryptocurrency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.GetStateList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBTokenStates                              States                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTokenList_C::GetStateList(const struct FSBTokenStates& States)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.GetStateList");
		
		UTokenList_C_GetStateList_Params params {};
		params.States = States;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.OnGetExpiredList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBExpiredTokenStates                       States                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTokenList_C::OnGetExpiredList(const struct FSBExpiredTokenStates& States)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.OnGetExpiredList");
		
		UTokenList_C_OnGetExpiredList_Params params {};
		params.States = States;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.SetTokenList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenList_C::SetTokenList(int32_t Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.SetTokenList");
		
		UTokenList_C_SetTokenList_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.SetExpiredTokenList
	 * 		Flags  -> ()
	 */
	void UTokenList_C::SetExpiredTokenList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.SetExpiredTokenList");
		
		UTokenList_C_SetExpiredTokenList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.ExecuteUbergraph_TokenList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTokenList_C::ExecuteUbergraph_TokenList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.ExecuteUbergraph_TokenList");
		
		UTokenList_C_ExecuteUbergraph_TokenList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.OnMoneyListEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTokenList_C::OnMoneyListEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.OnMoneyListEnd__DelegateSignature");
		
		UTokenList_C_OnMoneyListEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.OnGetTokenListBlankText__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTokenList_C::OnGetTokenListBlankText__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.OnGetTokenListBlankText__DelegateSignature");
		
		UTokenList_C_OnGetTokenListBlankText__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TokenList.TokenList_C.OnGetExpiredBlankText__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTokenList_C::OnGetExpiredBlankText__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TokenList.TokenList_C.OnGetExpiredBlankText__DelegateSignature");
		
		UTokenList_C_OnGetExpiredBlankText__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTokenList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTokenList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TokenList.TokenList_C");
		return ptr;
	}

}


