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
	 * 		Name   -> PredefinedFunction UPerkPassive_PFM_RapidSkillCoolTimeAll_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerkPassive_PFM_RapidSkillCoolTimeAll_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PerkPassive_PFM_RapidSkillCoolTimeAll.PerkPassive_PFM_RapidSkillCoolTimeAll_C");
		return ptr;
	}

}


