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
	 * 		Name   -> Function CaptureImageFace.CaptureImageFace_C.SetCaptureImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           CaptureImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCaptureImageFace_C::SetCaptureImage(class UTexture2DDynamic* CaptureImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageFace.CaptureImageFace_C.SetCaptureImage");
		
		UCaptureImageFace_C_SetCaptureImage_Params params {};
		params.CaptureImage = CaptureImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImageFace.CaptureImageFace_C.Construct
	 * 		Flags  -> ()
	 */
	void UCaptureImageFace_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageFace.CaptureImageFace_C.Construct");
		
		UCaptureImageFace_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImageFace.CaptureImageFace_C.LoadFaceImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCaptureImageFace_C::LoadFaceImage(const class FString& CharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageFace.CaptureImageFace_C.LoadFaceImage");
		
		UCaptureImageFace_C_LoadFaceImage_Params params {};
		params.CharacterId = CharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImageFace.CaptureImageFace_C.LoadPlayerFaceImage
	 * 		Flags  -> ()
	 */
	void UCaptureImageFace_C::LoadPlayerFaceImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageFace.CaptureImageFace_C.LoadPlayerFaceImage");
		
		UCaptureImageFace_C_LoadPlayerFaceImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CaptureImageFace.CaptureImageFace_C.ExecuteUbergraph_CaptureImageFace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCaptureImageFace_C::ExecuteUbergraph_CaptureImageFace(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CaptureImageFace.CaptureImageFace_C.ExecuteUbergraph_CaptureImageFace");
		
		UCaptureImageFace_C_ExecuteUbergraph_CaptureImageFace_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCaptureImageFace_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCaptureImageFace_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CaptureImageFace.CaptureImageFace_C");
		return ptr;
	}

}


