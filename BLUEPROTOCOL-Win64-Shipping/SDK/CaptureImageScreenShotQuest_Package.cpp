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
	 * 		Name   -> Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.SetCaptureImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  CaptureImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCaptureImageScreenShotQuest_C::SetCaptureImage(class UTexture2D* CaptureImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.SetCaptureImage");
		
		UCaptureImageScreenShotQuest_C_SetCaptureImage_Params params {};
		params.CaptureImage = CaptureImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.Construct
	 * 		Flags  -> ()
	 */
	void UCaptureImageScreenShotQuest_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.Construct");
		
		UCaptureImageScreenShotQuest_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.ExecuteUbergraph_CaptureImageScreenShotQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCaptureImageScreenShotQuest_C::ExecuteUbergraph_CaptureImageScreenShotQuest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C.ExecuteUbergraph_CaptureImageScreenShotQuest");
		
		UCaptureImageScreenShotQuest_C_ExecuteUbergraph_CaptureImageScreenShotQuest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaptureImageScreenShotQuest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaptureImageScreenShotQuest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C");
		return ptr;
	}

}


