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
	 * 		Name   -> Function CaptureImageMatching.CaptureImageMatching_C.SetCaptureImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           CaptureImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCaptureImageMatching_C::SetCaptureImage(class UTexture2DDynamic* CaptureImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageMatching.CaptureImageMatching_C.SetCaptureImage");
		
		UCaptureImageMatching_C_SetCaptureImage_Params params {};
		params.CaptureImage = CaptureImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImageMatching.CaptureImageMatching_C.Construct
	 * 		Flags  -> ()
	 */
	void UCaptureImageMatching_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageMatching.CaptureImageMatching_C.Construct");
		
		UCaptureImageMatching_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImageMatching.CaptureImageMatching_C.ExecuteUbergraph_CaptureImageMatching
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCaptureImageMatching_C::ExecuteUbergraph_CaptureImageMatching(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageMatching.CaptureImageMatching_C.ExecuteUbergraph_CaptureImageMatching");
		
		UCaptureImageMatching_C_ExecuteUbergraph_CaptureImageMatching_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaptureImageMatching_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaptureImageMatching_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CaptureImageMatching.CaptureImageMatching_C");
		return ptr;
	}

}


