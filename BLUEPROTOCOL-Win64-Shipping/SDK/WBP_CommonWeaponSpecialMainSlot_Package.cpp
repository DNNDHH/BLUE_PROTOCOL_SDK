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
	 * 		Name   -> Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.SetTagAbility2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InDelta                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonWeaponSpecialMainSlot_C::SetTagAbility2(int32_t InDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.SetTagAbility2");
		
		UWBP_CommonWeaponSpecialMainSlot_C_SetTagAbility2_Params params {};
		params.InDelta = InDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.SetTagAbility1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InDelta                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonWeaponSpecialMainSlot_C::SetTagAbility1(int32_t InDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.SetTagAbility1");
		
		UWBP_CommonWeaponSpecialMainSlot_C_SetTagAbility1_Params params {};
		params.InDelta = InDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.SetTagEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InDelta                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CommonWeaponSpecialMainSlot_C::SetTagEffect(int32_t InDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.SetTagEffect");
		
		UWBP_CommonWeaponSpecialMainSlot_C_SetTagEffect_Params params {};
		params.InDelta = InDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.InitTag
	 * 		Flags  -> ()
	 */
	void UWBP_CommonWeaponSpecialMainSlot_C::InitTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.InitTag");
		
		UWBP_CommonWeaponSpecialMainSlot_C_InitTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_CommonWeaponSpecialMainSlot_C::Setup(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.Setup");
		
		UWBP_CommonWeaponSpecialMainSlot_C_Setup_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CommonWeaponSpecialMainSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CommonWeaponSpecialMainSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C");
		return ptr;
	}

}


