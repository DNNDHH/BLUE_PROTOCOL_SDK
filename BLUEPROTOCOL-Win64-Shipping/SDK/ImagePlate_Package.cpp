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
	 * 		Name   -> PredefinedFunction AImagePlate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AImagePlate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImagePlate.ImagePlate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagePlate.ImagePlateComponent.SetImagePlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FImagePlateParameters                       Plate                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UImagePlateComponent::SetImagePlate(const struct FImagePlateParameters& Plate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagePlate.ImagePlateComponent.SetImagePlate");
		
		UImagePlateComponent_SetImagePlate_Params params {};
		params.Plate = Plate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged
	 * 		Flags  -> ()
	 */
	void UImagePlateComponent::OnRenderTextureChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged");
		
		UImagePlateComponent_OnRenderTextureChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagePlate.ImagePlateComponent.GetPlate
	 * 		Flags  -> ()
	 */
	struct FImagePlateParameters UImagePlateComponent::GetPlate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagePlate.ImagePlateComponent.GetPlate");
		
		UImagePlateComponent_GetPlate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagePlateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagePlateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImagePlate.ImagePlateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagePlateSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagePlateSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImagePlate.ImagePlateSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagePlateFileSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagePlateFileSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImagePlate.ImagePlateFileSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagePlateFrustumComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagePlateFrustumComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImagePlate.ImagePlateFrustumComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneImagePlateSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneImagePlateSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImagePlate.MovieSceneImagePlateSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneImagePlateTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneImagePlateTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImagePlate.MovieSceneImagePlateTrack");
		return ptr;
	}

}


