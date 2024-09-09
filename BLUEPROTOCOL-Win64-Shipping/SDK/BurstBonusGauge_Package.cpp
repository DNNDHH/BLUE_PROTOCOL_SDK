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
	 * 		Name   -> Function BurstBonusGauge.BurstBonusGauge_C.StopAnim
	 * 		Flags  -> ()
	 */
	void UBurstBonusGauge_C::StopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurstBonusGauge.BurstBonusGauge_C.StopAnim");
		
		UBurstBonusGauge_C_StopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimBlink2
	 * 		Flags  -> ()
	 */
	void UBurstBonusGauge_C::PlayAnimBlink2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimBlink2");
		
		UBurstBonusGauge_C_PlayAnimBlink2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimBlink1
	 * 		Flags  -> ()
	 */
	void UBurstBonusGauge_C::PlayAnimBlink1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimBlink1");
		
		UBurstBonusGauge_C_PlayAnimBlink1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimNormal
	 * 		Flags  -> ()
	 */
	void UBurstBonusGauge_C::PlayAnimNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimNormal");
		
		UBurstBonusGauge_C_PlayAnimNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BurstBonusGauge.BurstBonusGauge_C.SetGaugeSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InSize                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurstBonusGauge_C::SetGaugeSize(const struct FVector2D& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurstBonusGauge.BurstBonusGauge_C.SetGaugeSize");
		
		UBurstBonusGauge_C_SetGaugeSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BurstBonusGauge.BurstBonusGauge_C.SetDefaultGaugeSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InDefaultGaugeSize                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBurstBonusGauge_C::SetDefaultGaugeSize(const struct FVector2D& InDefaultGaugeSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurstBonusGauge.BurstBonusGauge_C.SetDefaultGaugeSize");
		
		UBurstBonusGauge_C_SetDefaultGaugeSize_Params params {};
		params.InDefaultGaugeSize = InDefaultGaugeSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BurstBonusGauge.BurstBonusGauge_C.OnUpdateTime
	 * 		Flags  -> ()
	 */
	void UBurstBonusGauge_C::OnUpdateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurstBonusGauge.BurstBonusGauge_C.OnUpdateTime");
		
		UBurstBonusGauge_C_OnUpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BurstBonusGauge.BurstBonusGauge_C.OnUpdateLV
	 * 		Flags  -> ()
	 */
	void UBurstBonusGauge_C::OnUpdateLV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurstBonusGauge.BurstBonusGauge_C.OnUpdateLV");
		
		UBurstBonusGauge_C_OnUpdateLV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BurstBonusGauge.BurstBonusGauge_C.OnSetup
	 * 		Flags  -> ()
	 */
	void UBurstBonusGauge_C::OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurstBonusGauge.BurstBonusGauge_C.OnSetup");
		
		UBurstBonusGauge_C_OnSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BurstBonusGauge.BurstBonusGauge_C.UpdateGaugeSwitcher
	 * 		Flags  -> ()
	 */
	void UBurstBonusGauge_C::UpdateGaugeSwitcher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BurstBonusGauge.BurstBonusGauge_C.UpdateGaugeSwitcher");
		
		UBurstBonusGauge_C_UpdateGaugeSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBurstBonusGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBurstBonusGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BurstBonusGauge.BurstBonusGauge_C");
		return ptr;
	}

}


