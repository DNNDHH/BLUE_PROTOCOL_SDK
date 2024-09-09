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
	 * 		Name   -> Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaCapture::UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D");
		
		UMediaCapture_UpdateTextureRenderTarget2D_Params params {};
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MediaIOCore.MediaCapture.StopCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAllowPendingFrameToBeProcess                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaCapture::StopCapture(bool bAllowPendingFrameToBeProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.StopCapture");
		
		UMediaCapture_StopCapture_Params params {};
		params.bAllowPendingFrameToBeProcess = bAllowPendingFrameToBeProcess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MediaIOCore.MediaCapture.SetMediaOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMediaOutput*                                InMediaOutput                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaCapture::SetMediaOutput(class UMediaOutput* InMediaOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.SetMediaOutput");
		
		UMediaCapture_SetMediaOutput_Params params {};
		params.InMediaOutput = InMediaOutput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MediaIOCore.MediaCapture.GetState
	 * 		Flags  -> ()
	 */
	EMediaCaptureState UMediaCapture::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetState");
		
		UMediaCapture_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MediaIOCore.MediaCapture.GetDesiredSize
	 * 		Flags  -> ()
	 */
	struct FIntPoint UMediaCapture::GetDesiredSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetDesiredSize");
		
		UMediaCapture_GetDesiredSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
	 * 		Flags  -> ()
	 */
	EPixelFormat UMediaCapture::GetDesiredPixelFormat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetDesiredPixelFormat");
		
		UMediaCapture_GetDesiredPixelFormat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMediaCaptureOptions                        CaptureOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMediaCapture::CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D");
		
		UMediaCapture_CaptureTextureRenderTarget2D_Params params {};
		params.RenderTarget = RenderTarget;
		params.CaptureOptions = CaptureOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMediaCaptureOptions                        CaptureOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMediaCapture::CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport");
		
		UMediaCapture_CaptureActiveSceneViewport_Params params {};
		params.CaptureOptions = CaptureOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMediaCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaIOCore.MediaCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFileMediaCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFileMediaCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaIOCore.FileMediaCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MediaIOCore.MediaOutput.Validate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutFailureReason                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaOutput::Validate(class FString* OutFailureReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaOutput.Validate");
		
		UMediaOutput_Validate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFailureReason != nullptr)
			*OutFailureReason = params.OutFailureReason;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MediaIOCore.MediaOutput.CreateMediaCapture
	 * 		Flags  -> ()
	 */
	class UMediaCapture* UMediaOutput::CreateMediaCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaOutput.CreateMediaCapture");
		
		UMediaOutput_CreateMediaCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMediaOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaIOCore.MediaOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFileMediaOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFileMediaOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaIOCore.FileMediaOutput");
		return ptr;
	}

}


