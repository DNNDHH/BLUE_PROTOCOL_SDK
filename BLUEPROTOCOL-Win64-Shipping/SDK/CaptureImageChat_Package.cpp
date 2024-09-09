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
	 * 		Name   -> Function CaptureImageChat.CaptureImageChat_C.SetCaptureImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           CaptureImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCaptureImageChat_C::SetCaptureImage(class UTexture2DDynamic* CaptureImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageChat.CaptureImageChat_C.SetCaptureImage");
		
		UCaptureImageChat_C_SetCaptureImage_Params params {};
		params.CaptureImage = CaptureImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImageChat.CaptureImageChat_C.Construct
	 * 		Flags  -> ()
	 */
	void UCaptureImageChat_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageChat.CaptureImageChat_C.Construct");
		
		UCaptureImageChat_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImageChat.CaptureImageChat_C.ExecuteUbergraph_CaptureImageChat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCaptureImageChat_C::ExecuteUbergraph_CaptureImageChat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageChat.CaptureImageChat_C.ExecuteUbergraph_CaptureImageChat");
		
		UCaptureImageChat_C_ExecuteUbergraph_CaptureImageChat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaptureImageChat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaptureImageChat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CaptureImageChat.CaptureImageChat_C");
		return ptr;
	}

}


