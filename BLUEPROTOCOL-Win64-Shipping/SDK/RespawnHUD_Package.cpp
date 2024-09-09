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
	 * 		Name   -> Function RespawnHUD.RespawnHUD_C.UpdateRespawnGauge
	 * 		Flags  -> ()
	 */
	void URespawnHUD_C::UpdateRespawnGauge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnHUD.RespawnHUD_C.UpdateRespawnGauge");
		
		URespawnHUD_C_UpdateRespawnGauge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RespawnHUD.RespawnHUD_C.GetResurrectionRemainTimeRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URespawnHUD_C::GetResurrectionRemainTimeRate(float* Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnHUD.RespawnHUD_C.GetResurrectionRemainTimeRate");
		
		URespawnHUD_C_GetResurrectionRemainTimeRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rate != nullptr)
			*Rate = params.Rate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RespawnHUD.RespawnHUD_C.BattleAreaDisableMessage
	 * 		Flags  -> ()
	 */
	void URespawnHUD_C::BattleAreaDisableMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnHUD.RespawnHUD_C.BattleAreaDisableMessage");
		
		URespawnHUD_C_BattleAreaDisableMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RespawnHUD.RespawnHUD_C.ShowRespawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URespawnHUD_C::ShowRespawn(float InTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnHUD.RespawnHUD_C.ShowRespawn");
		
		URespawnHUD_C_ShowRespawn_Params params {};
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RespawnHUD.RespawnHUD_C.ShowCountDownDialog_Event
	 * 		Flags  -> ()
	 */
	void URespawnHUD_C::ShowCountDownDialog_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnHUD.RespawnHUD_C.ShowCountDownDialog_Event");
		
		URespawnHUD_C_ShowCountDownDialog_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RespawnHUD.RespawnHUD_C.EndCounddownDynamicDlegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECountdownResult                                   Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URespawnHUD_C::EndCounddownDynamicDlegate_Event(ECountdownResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnHUD.RespawnHUD_C.EndCounddownDynamicDlegate_Event");
		
		URespawnHUD_C_EndCounddownDynamicDlegate_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RespawnHUD.RespawnHUD_C.ShowBattleAreaDialog_Event
	 * 		Flags  -> ()
	 */
	void URespawnHUD_C::ShowBattleAreaDialog_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnHUD.RespawnHUD_C.ShowBattleAreaDialog_Event");
		
		URespawnHUD_C_ShowBattleAreaDialog_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RespawnHUD.RespawnHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void URespawnHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnHUD.RespawnHUD_C.Construct");
		
		URespawnHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RespawnHUD.RespawnHUD_C.OnUpdateGauge
	 * 		Flags  -> ()
	 */
	void URespawnHUD_C::OnUpdateGauge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnHUD.RespawnHUD_C.OnUpdateGauge");
		
		URespawnHUD_C_OnUpdateGauge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RespawnHUD.RespawnHUD_C.ExecuteUbergraph_RespawnHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URespawnHUD_C::ExecuteUbergraph_RespawnHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RespawnHUD.RespawnHUD_C.ExecuteUbergraph_RespawnHUD");
		
		URespawnHUD_C_ExecuteUbergraph_RespawnHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URespawnHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RespawnHUD.RespawnHUD_C");
		return ptr;
	}

}


