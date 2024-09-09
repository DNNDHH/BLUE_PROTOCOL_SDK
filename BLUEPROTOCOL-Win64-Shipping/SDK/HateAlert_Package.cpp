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
	 * 		Name   -> Function HateAlert.HateAlert_C.ParentsCallTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHateAlert_C::ParentsCallTick(float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlert.HateAlert_C.ParentsCallTick");
		
		UHateAlert_C_ParentsCallTick_Params params {};
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlert.HateAlert_C.OnHide
	 * 		Flags  -> ()
	 */
	void UHateAlert_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlert.HateAlert_C.OnHide");
		
		UHateAlert_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlert.HateAlert_C.OnEnemyTarget
	 * 		Flags  -> ()
	 */
	void UHateAlert_C::OnEnemyTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlert.HateAlert_C.OnEnemyTarget");
		
		UHateAlert_C_OnEnemyTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlert.HateAlert_C.OnFindByEnemy
	 * 		Flags  -> ()
	 */
	void UHateAlert_C::OnFindByEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlert.HateAlert_C.OnFindByEnemy");
		
		UHateAlert_C_OnFindByEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlert.HateAlert_C.OnIsTrainingBattleState
	 * 		Flags  -> ()
	 */
	void UHateAlert_C::OnIsTrainingBattleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlert.HateAlert_C.OnIsTrainingBattleState");
		
		UHateAlert_C_OnIsTrainingBattleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HateAlert.HateAlert_C.ExecuteUbergraph_HateAlert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHateAlert_C::ExecuteUbergraph_HateAlert(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HateAlert.HateAlert_C.ExecuteUbergraph_HateAlert");
		
		UHateAlert_C_ExecuteUbergraph_HateAlert_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHateAlert_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHateAlert_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HateAlert.HateAlert_C");
		return ptr;
	}

}


