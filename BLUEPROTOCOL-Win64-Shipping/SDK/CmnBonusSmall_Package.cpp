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
	 * 		Name   -> Function CmnBonusSmall.CmnBonusSmall_C.UpdateVisibilityByMasterImagineRecepi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMasterImagineRecepi                        MasterImagineRecepi                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCmnBonusSmall_C::UpdateVisibilityByMasterImagineRecepi(const struct FMasterImagineRecepi& MasterImagineRecepi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBonusSmall.CmnBonusSmall_C.UpdateVisibilityByMasterImagineRecepi");
		
		UCmnBonusSmall_C_UpdateVisibilityByMasterImagineRecepi_Params params {};
		params.MasterImagineRecepi = MasterImagineRecepi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnBonusSmall.CmnBonusSmall_C.ExecuteUbergraph_CmnBonusSmall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnBonusSmall_C::ExecuteUbergraph_CmnBonusSmall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnBonusSmall.CmnBonusSmall_C.ExecuteUbergraph_CmnBonusSmall");
		
		UCmnBonusSmall_C_ExecuteUbergraph_CmnBonusSmall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnBonusSmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnBonusSmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnBonusSmall.CmnBonusSmall_C");
		return ptr;
	}

}


