﻿/**
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
	 * 		Name   -> PredefinedFunction UPerkPassiveSkill_MGC_EPRegenWhileFindByEnemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerkPassiveSkill_MGC_EPRegenWhileFindByEnemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PerkPassiveSkill_MGC_EPRegenWhileFindByEnemy.PerkPassiveSkill_MGC_EPRegenWhileFindByEnemy_C");
		return ptr;
	}

}

