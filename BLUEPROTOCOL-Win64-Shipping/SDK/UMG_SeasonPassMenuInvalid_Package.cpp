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
	 * 		Name   -> Function UMG_SeasonPassMenuInvalid.UMG_SeasonPassMenuInvalid_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassMenuInvalid_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuInvalid.UMG_SeasonPassMenuInvalid_C.Construct");
		
		UUMG_SeasonPassMenuInvalid_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassMenuInvalid.UMG_SeasonPassMenuInvalid_C.ExecuteUbergraph_UMG_SeasonPassMenuInvalid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassMenuInvalid_C::ExecuteUbergraph_UMG_SeasonPassMenuInvalid(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassMenuInvalid.UMG_SeasonPassMenuInvalid_C.ExecuteUbergraph_UMG_SeasonPassMenuInvalid");
		
		UUMG_SeasonPassMenuInvalid_C_ExecuteUbergraph_UMG_SeasonPassMenuInvalid_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassMenuInvalid_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassMenuInvalid_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassMenuInvalid.UMG_SeasonPassMenuInvalid_C");
		return ptr;
	}

}


