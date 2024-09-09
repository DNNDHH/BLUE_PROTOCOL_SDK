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
	 * 		Name   -> Function AdventurerRank_LineEffect.AdventurerRank_LineEffect_C.Construct
	 * 		Flags  -> ()
	 */
	void UAdventurerRank_LineEffect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRank_LineEffect.AdventurerRank_LineEffect_C.Construct");
		
		UAdventurerRank_LineEffect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRank_LineEffect.AdventurerRank_LineEffect_C.ExecuteUbergraph_AdventurerRank_LineEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAdventurerRank_LineEffect_C::ExecuteUbergraph_AdventurerRank_LineEffect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRank_LineEffect.AdventurerRank_LineEffect_C.ExecuteUbergraph_AdventurerRank_LineEffect");
		
		UAdventurerRank_LineEffect_C_ExecuteUbergraph_AdventurerRank_LineEffect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdventurerRank_LineEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdventurerRank_LineEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdventurerRank_LineEffect.AdventurerRank_LineEffect_C");
		return ptr;
	}

}


