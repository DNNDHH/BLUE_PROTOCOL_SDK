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
	 * 		Name   -> Function UMG_SeasonPassQuest_Effect.UMG_SeasonPassQuest_Effect_C.PlayAnim
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuest_Effect_C::PlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuest_Effect.UMG_SeasonPassQuest_Effect_C.PlayAnim");
		
		UUMG_SeasonPassQuest_Effect_C_PlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuest_Effect.UMG_SeasonPassQuest_Effect_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuest_Effect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuest_Effect.UMG_SeasonPassQuest_Effect_C.Construct");
		
		UUMG_SeasonPassQuest_Effect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuest_Effect.UMG_SeasonPassQuest_Effect_C.ExecuteUbergraph_UMG_SeasonPassQuest_Effect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuest_Effect_C::ExecuteUbergraph_UMG_SeasonPassQuest_Effect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuest_Effect.UMG_SeasonPassQuest_Effect_C.ExecuteUbergraph_UMG_SeasonPassQuest_Effect");
		
		UUMG_SeasonPassQuest_Effect_C_ExecuteUbergraph_UMG_SeasonPassQuest_Effect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuest_Effect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuest_Effect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuest_Effect.UMG_SeasonPassQuest_Effect_C");
		return ptr;
	}

}


