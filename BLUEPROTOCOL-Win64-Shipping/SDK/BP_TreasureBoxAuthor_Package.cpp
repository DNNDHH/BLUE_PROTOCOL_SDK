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
	 * 		Name   -> Function BP_TreasureBoxAuthor.BP_TreasureBoxAuthor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBoxAuthor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxAuthor.BP_TreasureBoxAuthor_C.UserConstructionScript");
		
		ABP_TreasureBoxAuthor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TreasureBoxAuthor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TreasureBoxAuthor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureBoxAuthor.BP_TreasureBoxAuthor_C");
		return ptr;
	}

}


