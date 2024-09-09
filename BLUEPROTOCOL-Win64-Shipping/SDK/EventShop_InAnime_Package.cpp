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
	 * 		Name   -> Function EventShop_InAnime.EventShop_InAnime_C.PlayInAnim
	 * 		Flags  -> ()
	 */
	void UEventShop_InAnime_C::PlayInAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShop_InAnime.EventShop_InAnime_C.PlayInAnim");
		
		UEventShop_InAnime_C_PlayInAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShop_InAnime.EventShop_InAnime_C.ExecuteUbergraph_EventShop_InAnime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShop_InAnime_C::ExecuteUbergraph_EventShop_InAnime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShop_InAnime.EventShop_InAnime_C.ExecuteUbergraph_EventShop_InAnime");
		
		UEventShop_InAnime_C_ExecuteUbergraph_EventShop_InAnime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShop_InAnime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShop_InAnime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShop_InAnime.EventShop_InAnime_C");
		return ptr;
	}

}


