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
	 * 		Name   -> Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.SetCaptureImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           CaptureImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCaptureImagePhotoMode_C::SetCaptureImage(class UTexture2DDynamic* CaptureImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.SetCaptureImage");
		
		UCaptureImagePhotoMode_C_SetCaptureImage_Params params {};
		params.CaptureImage = CaptureImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.Construct
	 * 		Flags  -> ()
	 */
	void UCaptureImagePhotoMode_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.Construct");
		
		UCaptureImagePhotoMode_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.SetCaptureImageByCharacterId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCaptureImagePhotoMode_C::SetCaptureImageByCharacterId(const class FString& CharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.SetCaptureImageByCharacterId");
		
		UCaptureImagePhotoMode_C_SetCaptureImageByCharacterId_Params params {};
		params.CharacterId = CharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.ExecuteUbergraph_CaptureImagePhotoMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCaptureImagePhotoMode_C::ExecuteUbergraph_CaptureImagePhotoMode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImagePhotoMode.CaptureImagePhotoMode_C.ExecuteUbergraph_CaptureImagePhotoMode");
		
		UCaptureImagePhotoMode_C_ExecuteUbergraph_CaptureImagePhotoMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaptureImagePhotoMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaptureImagePhotoMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CaptureImagePhotoMode.CaptureImagePhotoMode_C");
		return ptr;
	}

}


