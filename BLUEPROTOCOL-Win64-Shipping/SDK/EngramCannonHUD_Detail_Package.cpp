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
	 * 		Name   -> Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.Finalize Damage Effect
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_Detail_C::FinalizeDamageEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.Finalize Damage Effect");
		
		UEngramCannonHUD_Detail_C_FinalizeDamageEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.PlayDamageEffect
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_Detail_C::PlayDamageEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.PlayDamageEffect");
		
		UEngramCannonHUD_Detail_C_PlayDamageEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.PlayNoiseAnim
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_Detail_C::PlayNoiseAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.PlayNoiseAnim");
		
		UEngramCannonHUD_Detail_C_PlayNoiseAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_Detail_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.Destruct");
		
		UEngramCannonHUD_Detail_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.FinishDamageEffect
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_Detail_C::FinishDamageEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.FinishDamageEffect");
		
		UEngramCannonHUD_Detail_C_FinishDamageEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.ExecuteUbergraph_EngramCannonHUD_Detail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEngramCannonHUD_Detail_C::ExecuteUbergraph_EngramCannonHUD_Detail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_Detail.EngramCannonHUD_Detail_C.ExecuteUbergraph_EngramCannonHUD_Detail");
		
		UEngramCannonHUD_Detail_C_ExecuteUbergraph_EngramCannonHUD_Detail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramCannonHUD_Detail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramCannonHUD_Detail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EngramCannonHUD_Detail.EngramCannonHUD_Detail_C");
		return ptr;
	}

}


