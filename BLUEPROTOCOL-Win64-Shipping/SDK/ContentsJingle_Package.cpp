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
	 * 		Name   -> Function ContentsJingle.ContentsJingle_C.IsAnyAnimationPlaying?
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPlaying                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContentsJingle_C::IsAnyAnimationPlaying(bool* bIsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentsJingle.ContentsJingle_C.IsAnyAnimationPlaying?");
		
		UContentsJingle_C_IsAnyAnimationPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsPlaying != nullptr)
			*bIsPlaying = params.bIsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentsJingle.ContentsJingle_C.Construct
	 * 		Flags  -> ()
	 */
	void UContentsJingle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentsJingle.ContentsJingle_C.Construct");
		
		UContentsJingle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ContentsJingle.ContentsJingle_C.ExecuteUbergraph_ContentsJingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UContentsJingle_C::ExecuteUbergraph_ContentsJingle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContentsJingle.ContentsJingle_C.ExecuteUbergraph_ContentsJingle");
		
		UContentsJingle_C_ExecuteUbergraph_ContentsJingle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContentsJingle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContentsJingle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContentsJingle.ContentsJingle_C");
		return ptr;
	}

}


