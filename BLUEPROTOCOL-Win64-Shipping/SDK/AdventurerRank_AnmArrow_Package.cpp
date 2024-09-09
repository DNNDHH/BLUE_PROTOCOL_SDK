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
	 * 		Name   -> Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.StopArrowAnim
	 * 		Flags  -> ()
	 */
	void UAdventurerRank_AnmArrow_C::StopArrowAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.StopArrowAnim");
		
		UAdventurerRank_AnmArrow_C_StopArrowAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.PlayArrowAnim
	 * 		Flags  -> ()
	 */
	void UAdventurerRank_AnmArrow_C::PlayArrowAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.PlayArrowAnim");
		
		UAdventurerRank_AnmArrow_C_PlayArrowAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.Construct
	 * 		Flags  -> ()
	 */
	void UAdventurerRank_AnmArrow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.Construct");
		
		UAdventurerRank_AnmArrow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.ExecuteUbergraph_AdventurerRank_AnmArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAdventurerRank_AnmArrow_C::ExecuteUbergraph_AdventurerRank_AnmArrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C.ExecuteUbergraph_AdventurerRank_AnmArrow");
		
		UAdventurerRank_AnmArrow_C_ExecuteUbergraph_AdventurerRank_AnmArrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdventurerRank_AnmArrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdventurerRank_AnmArrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdventurerRank_AnmArrow.AdventurerRank_AnmArrow_C");
		return ptr;
	}

}


