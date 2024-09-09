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
	 * 		Name   -> Function BPI_PlayerController.BPI_PlayerController_C.SetDebugMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDebugMenu_C*                                DebugMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerController_C::SetDebugMenu(class UDebugMenu_C* DebugMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_PlayerController.BPI_PlayerController_C.SetDebugMenu");
		
		UBPI_PlayerController_C_SetDebugMenu_Params params {};
		params.DebugMenu = DebugMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerController.BPI_PlayerController_C");
		return ptr;
	}

}


