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
	 * 		Name   -> Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.SearchBattleScoreInfo
	 * 		Flags  -> ()
	 */
	void UBattleScoreInfoSwitcher_C::SearchBattleScoreInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.SearchBattleScoreInfo");
		
		UBattleScoreInfoSwitcher_C_SearchBattleScoreInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.Construct
	 * 		Flags  -> ()
	 */
	void UBattleScoreInfoSwitcher_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.Construct");
		
		UBattleScoreInfoSwitcher_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBattleScoreInfoSwitcher_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.Destruct");
		
		UBattleScoreInfoSwitcher_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.OnSwitchTiming
	 * 		Flags  -> ()
	 */
	void UBattleScoreInfoSwitcher_C::OnSwitchTiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.OnSwitchTiming");
		
		UBattleScoreInfoSwitcher_C_OnSwitchTiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.ExecuteUbergraph_BattleScoreInfoSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleScoreInfoSwitcher_C::ExecuteUbergraph_BattleScoreInfoSwitcher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.ExecuteUbergraph_BattleScoreInfoSwitcher");
		
		UBattleScoreInfoSwitcher_C_ExecuteUbergraph_BattleScoreInfoSwitcher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.OnSwitching__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToBattleScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleScoreInfoSwitcher_C::OnSwitching__DelegateSignature(bool ToBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C.OnSwitching__DelegateSignature");
		
		UBattleScoreInfoSwitcher_C_OnSwitching__DelegateSignature_Params params {};
		params.ToBattleScore = ToBattleScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleScoreInfoSwitcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleScoreInfoSwitcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattleScoreInfoSwitcher.BattleScoreInfoSwitcher_C");
		return ptr;
	}

}


