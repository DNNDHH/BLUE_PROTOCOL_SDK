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
	 * 		Name   -> PredefinedFunction UMiniMapIconWarpPointDungeon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMiniMapIconWarpPointDungeon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MiniMapIconWarpPointDungeon.MiniMapIconWarpPointDungeon_C");
		return ptr;
	}

}


