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
	 * 		Name   -> Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.Set_Ability
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectListItemHead_C::Set_Ability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.Set_Ability");
		
		UMyCharaMenu_EffectListItemHead_C_Set_Ability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.Set LiquidMemory
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectListItemHead_C::SetLiquidMemory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.Set LiquidMemory");
		
		UMyCharaMenu_EffectListItemHead_C_SetLiquidMemory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.Set Other
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectListItemHead_C::SetOther()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.Set Other");
		
		UMyCharaMenu_EffectListItemHead_C_SetOther_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.SetPioneerAbility
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectListItemHead_C::SetPioneerAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.SetPioneerAbility");
		
		UMyCharaMenu_EffectListItemHead_C_SetPioneerAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.ExecuteUbergraph_MyCharaMenu_EffectListItemHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_EffectListItemHead_C::ExecuteUbergraph_MyCharaMenu_EffectListItemHead(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C.ExecuteUbergraph_MyCharaMenu_EffectListItemHead");
		
		UMyCharaMenu_EffectListItemHead_C_ExecuteUbergraph_MyCharaMenu_EffectListItemHead_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_EffectListItemHead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_EffectListItemHead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_EffectListItemHead.MyCharaMenu_EffectListItemHead_C");
		return ptr;
	}

}


