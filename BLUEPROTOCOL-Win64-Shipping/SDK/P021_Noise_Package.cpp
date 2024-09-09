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
	 * 		Name   -> Function P021_Noise.P021_Noise_C.PlayAnimReverseNoise
	 * 		Flags  -> ()
	 */
	void UP021_Noise_C::PlayAnimReverseNoise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021_Noise.P021_Noise_C.PlayAnimReverseNoise");
		
		UP021_Noise_C_PlayAnimReverseNoise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021_Noise.P021_Noise_C.PlayAnimForwardNoise
	 * 		Flags  -> ()
	 */
	void UP021_Noise_C::PlayAnimForwardNoise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021_Noise.P021_Noise_C.PlayAnimForwardNoise");
		
		UP021_Noise_C_PlayAnimForwardNoise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021_Noise.P021_Noise_C.Construct
	 * 		Flags  -> ()
	 */
	void UP021_Noise_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021_Noise.P021_Noise_C.Construct");
		
		UP021_Noise_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P021_Noise.P021_Noise_C.ExecuteUbergraph_P021_Noise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP021_Noise_C::ExecuteUbergraph_P021_Noise(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P021_Noise.P021_Noise_C.ExecuteUbergraph_P021_Noise");
		
		UP021_Noise_C_ExecuteUbergraph_P021_Noise_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP021_Noise_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP021_Noise_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P021_Noise.P021_Noise_C");
		return ptr;
	}

}


