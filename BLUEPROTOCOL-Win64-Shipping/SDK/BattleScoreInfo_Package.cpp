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
	 * 		Name   -> Function BattleScoreInfo.BattleScoreInfo_C.SetFirstState
	 * 		Flags  -> ()
	 */
	void UBattleScoreInfo_C::SetFirstState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfo.BattleScoreInfo_C.SetFirstState");
		
		UBattleScoreInfo_C_SetFirstState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfo.BattleScoreInfo_C.SetBattleScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InBattleScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleScoreInfo_C::SetBattleScore(int32_t InBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfo.BattleScoreInfo_C.SetBattleScore");
		
		UBattleScoreInfo_C_SetBattleScore_Params params {};
		params.InBattleScore = InBattleScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfo.BattleScoreInfo_C.SetImagineLevelSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InOwnItemInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InForceLevelSyncOff                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleScoreInfo_C::SetImagineLevelSync(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType, bool InForceLevelSyncOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfo.BattleScoreInfo_C.SetImagineLevelSync");
		
		UBattleScoreInfo_C_SetImagineLevelSync_Params params {};
		params.InOwnItemInfo = InOwnItemInfo;
		params.InClassType = InClassType;
		params.InForceLevelSyncOff = InForceLevelSyncOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfo.BattleScoreInfo_C.SetLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleScoreInfo_C::SetLevel(int32_t InLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfo.BattleScoreInfo_C.SetLevel");
		
		UBattleScoreInfo_C_SetLevel_Params params {};
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfo.BattleScoreInfo_C.SetSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleScoreInfoSwitcher_C*                  InSwitcher                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleScoreInfo_C::SetSwitcher(class UBattleScoreInfoSwitcher_C* InSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfo.BattleScoreInfo_C.SetSwitcher");
		
		UBattleScoreInfo_C_SetSwitcher_Params params {};
		params.InSwitcher = InSwitcher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfo.BattleScoreInfo_C.SetUseText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseBattleScore                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UBattleScoreInfoSwitcher_C*                  InSwitcher                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleScoreInfo_C::SetUseText(bool UseBattleScore, bool UseLevel, class UBattleScoreInfoSwitcher_C* InSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfo.BattleScoreInfo_C.SetUseText");
		
		UBattleScoreInfo_C_SetUseText_Params params {};
		params.UseBattleScore = UseBattleScore;
		params.UseLevel = UseLevel;
		params.InSwitcher = InSwitcher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfo.BattleScoreInfo_C.OnChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ToBattleScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleScoreInfo_C::OnChange(bool ToBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfo.BattleScoreInfo_C.OnChange");
		
		UBattleScoreInfo_C_OnChange_Params params {};
		params.ToBattleScore = ToBattleScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfo.BattleScoreInfo_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBattleScoreInfo_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfo.BattleScoreInfo_C.Destruct");
		
		UBattleScoreInfo_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfo.BattleScoreInfo_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleScoreInfo_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfo.BattleScoreInfo_C.PreConstruct");
		
		UBattleScoreInfo_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleScoreInfo.BattleScoreInfo_C.ExecuteUbergraph_BattleScoreInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleScoreInfo_C::ExecuteUbergraph_BattleScoreInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleScoreInfo.BattleScoreInfo_C.ExecuteUbergraph_BattleScoreInfo");
		
		UBattleScoreInfo_C_ExecuteUbergraph_BattleScoreInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleScoreInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleScoreInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattleScoreInfo.BattleScoreInfo_C");
		return ptr;
	}

}


