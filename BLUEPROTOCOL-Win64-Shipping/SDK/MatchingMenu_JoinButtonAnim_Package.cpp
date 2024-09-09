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
	 * 		Name   -> Function MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C.PressAfterAnim
	 * 		Flags  -> ()
	 */
	void UMatchingMenu_JoinButtonAnim_C::PressAfterAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C.PressAfterAnim");
		
		UMatchingMenu_JoinButtonAnim_C_PressAfterAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C.Construct
	 * 		Flags  -> ()
	 */
	void UMatchingMenu_JoinButtonAnim_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C.Construct");
		
		UMatchingMenu_JoinButtonAnim_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C.ExecuteUbergraph_MatchingMenu_JoinButtonAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMatchingMenu_JoinButtonAnim_C::ExecuteUbergraph_MatchingMenu_JoinButtonAnim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C.ExecuteUbergraph_MatchingMenu_JoinButtonAnim");
		
		UMatchingMenu_JoinButtonAnim_C_ExecuteUbergraph_MatchingMenu_JoinButtonAnim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchingMenu_JoinButtonAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchingMenu_JoinButtonAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MatchingMenu_JoinButtonAnim.MatchingMenu_JoinButtonAnim_C");
		return ptr;
	}

}


