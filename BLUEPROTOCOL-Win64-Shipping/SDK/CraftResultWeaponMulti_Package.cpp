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
	 * 		Name   -> Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.PlayAnimIn
	 * 		Flags  -> ()
	 */
	void UCraftResultWeaponMulti_C::PlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.PlayAnimIn");
		
		UCraftResultWeaponMulti_C_PlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.UpdateCriticalCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<bool>                                       CriticalCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCraftResultWeaponMulti_C::UpdateCriticalCount(TArray<bool>* CriticalCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.UpdateCriticalCount");
		
		UCraftResultWeaponMulti_C_UpdateCriticalCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CriticalCount != nullptr)
			*CriticalCount = params.CriticalCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.Set Result
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCraftMasterData                            Recepi                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<class FString>                              Uids                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            StorageNo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       Criticals                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCraftResultWeaponMulti_C::SetResult(const struct FCraftMasterData& Recepi, TArray<class FString> Uids, int32_t StorageNo, TArray<bool> Criticals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.Set Result");
		
		UCraftResultWeaponMulti_C_SetResult_Params params {};
		params.Recepi = Recepi;
		params.Uids = Uids;
		params.StorageNo = StorageNo;
		params.Criticals = Criticals;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.ExecuteUbergraph_CraftResultWeaponMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftResultWeaponMulti_C::ExecuteUbergraph_CraftResultWeaponMulti(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.ExecuteUbergraph_CraftResultWeaponMulti");
		
		UCraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftResultWeaponMulti_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftResultWeaponMulti_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftResultWeaponMulti.CraftResultWeaponMulti_C");
		return ptr;
	}

}


