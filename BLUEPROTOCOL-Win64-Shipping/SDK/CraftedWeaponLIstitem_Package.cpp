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
	 * 		Name   -> Function CraftedWeaponLIstitem.CraftedWeaponLIstitem_C.Update All Text Critical Color
	 * 		Flags  -> ()
	 */
	void UCraftedWeaponLIstitem_C::UpdateAllTextCriticalColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftedWeaponLIstitem.CraftedWeaponLIstitem_C.Update All Text Critical Color");
		
		UCraftedWeaponLIstitem_C_UpdateAllTextCriticalColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftedWeaponLIstitem.CraftedWeaponLIstitem_C.Construct
	 * 		Flags  -> ()
	 */
	void UCraftedWeaponLIstitem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftedWeaponLIstitem.CraftedWeaponLIstitem_C.Construct");
		
		UCraftedWeaponLIstitem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftedWeaponLIstitem.CraftedWeaponLIstitem_C.ExecuteUbergraph_CraftedWeaponLIstitem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftedWeaponLIstitem_C::ExecuteUbergraph_CraftedWeaponLIstitem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftedWeaponLIstitem.CraftedWeaponLIstitem_C.ExecuteUbergraph_CraftedWeaponLIstitem");
		
		UCraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftedWeaponLIstitem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftedWeaponLIstitem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftedWeaponLIstitem.CraftedWeaponLIstitem_C");
		return ptr;
	}

}


