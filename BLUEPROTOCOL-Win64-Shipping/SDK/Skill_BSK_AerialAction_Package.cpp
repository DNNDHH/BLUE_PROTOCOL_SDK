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
	 * 		Name   -> PredefinedFunction USkill_BSK_AerialAction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkill_BSK_AerialAction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Skill_BSK_AerialAction.Skill_BSK_AerialAction_C");
		return ptr;
	}

}


