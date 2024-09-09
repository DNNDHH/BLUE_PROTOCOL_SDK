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
	 * 		Name   -> Function AestheShop_InAnime.AestheShop_InAnime_C.PlayInAnim
	 * 		Flags  -> ()
	 */
	void UAestheShop_InAnime_C::PlayInAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_InAnime.AestheShop_InAnime_C.PlayInAnim");
		
		UAestheShop_InAnime_C_PlayInAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AestheShop_InAnime.AestheShop_InAnime_C.ExecuteUbergraph_AestheShop_InAnime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAestheShop_InAnime_C::ExecuteUbergraph_AestheShop_InAnime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AestheShop_InAnime.AestheShop_InAnime_C.ExecuteUbergraph_AestheShop_InAnime");
		
		UAestheShop_InAnime_C_ExecuteUbergraph_AestheShop_InAnime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAestheShop_InAnime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAestheShop_InAnime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AestheShop_InAnime.AestheShop_InAnime_C");
		return ptr;
	}

}


