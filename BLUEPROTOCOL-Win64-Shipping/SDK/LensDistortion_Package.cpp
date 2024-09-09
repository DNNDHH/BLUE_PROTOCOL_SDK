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
	 * 		Name   -> Function LensDistortion.LensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLensDistortionCameraModel                  A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLensDistortionCameraModel                  B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(const struct FLensDistortionCameraModel& A, const struct FLensDistortionCameraModel& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels");
		
		ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LensDistortion.LensDistortionBlueprintLibrary.GetUndistortOverscanFactor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLensDistortionCameraModel                  CameraModel                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DistortedHorizontalFOV                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DistortedAspectRatio                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UndistortOverscanFactor                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULensDistortionBlueprintLibrary::GetUndistortOverscanFactor(const struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float* UndistortOverscanFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.GetUndistortOverscanFactor");
		
		ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Params params {};
		params.CameraModel = CameraModel;
		params.DistortedHorizontalFOV = DistortedHorizontalFOV;
		params.DistortedAspectRatio = DistortedAspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UndistortOverscanFactor != nullptr)
			*UndistortOverscanFactor = params.UndistortOverscanFactor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LensDistortion.LensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLensDistortionCameraModel                  A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLensDistortionCameraModel                  B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(const struct FLensDistortionCameraModel& A, const struct FLensDistortionCameraModel& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels");
		
		ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LensDistortion.LensDistortionBlueprintLibrary.DrawUVDisplacementToRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLensDistortionCameraModel                  CameraModel                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DistortedHorizontalFOV                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DistortedAspectRatio                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UndistortOverscanFactor                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      OutputRenderTarget                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutputMultiply                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutputAdd                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULensDistortionBlueprintLibrary::DrawUVDisplacementToRenderTarget(class UObject* WorldContextObject, const struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float UndistortOverscanFactor, class UTextureRenderTarget2D* OutputRenderTarget, float OutputMultiply, float OutputAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LensDistortion.LensDistortionBlueprintLibrary.DrawUVDisplacementToRenderTarget");
		
		ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CameraModel = CameraModel;
		params.DistortedHorizontalFOV = DistortedHorizontalFOV;
		params.DistortedAspectRatio = DistortedAspectRatio;
		params.UndistortOverscanFactor = UndistortOverscanFactor;
		params.OutputRenderTarget = OutputRenderTarget;
		params.OutputMultiply = OutputMultiply;
		params.OutputAdd = OutputAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULensDistortionBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULensDistortionBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LensDistortion.LensDistortionBlueprintLibrary");
		return ptr;
	}

}


