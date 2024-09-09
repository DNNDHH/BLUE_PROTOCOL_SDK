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
	 * 		Name   -> Function AdventurerRank_GuideMessage.AdventurerRank_GuideMessage_C.SetAdventureBoardName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        AdventureBoardName                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAdventurerRank_GuideMessage_C::SetAdventureBoardName(const class FText& AdventureBoardName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRank_GuideMessage.AdventurerRank_GuideMessage_C.SetAdventureBoardName");
		
		UAdventurerRank_GuideMessage_C_SetAdventureBoardName_Params params {};
		params.AdventureBoardName = AdventureBoardName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdventurerRank_GuideMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdventurerRank_GuideMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdventurerRank_GuideMessage.AdventurerRank_GuideMessage_C");
		return ptr;
	}

}


