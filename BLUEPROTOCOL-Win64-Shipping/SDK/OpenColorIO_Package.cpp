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
	 * 		Name   -> Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FOpenColorIOColorConversionSettings         ConversionSettings                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    InputTexture                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      OutputRenderTarget                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenColorIOBlueprintLibrary::ApplyColorSpaceTransform(class UObject* WorldContextObject, const struct FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform");
		
		UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ConversionSettings = ConversionSettings;
		params.InputTexture = InputTexture;
		params.OutputRenderTarget = OutputRenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenColorIOBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenColorIOBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OpenColorIO.OpenColorIOBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenColorIOColorTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenColorIOColorTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OpenColorIO.OpenColorIOColorTransform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenColorIOConfiguration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenColorIOConfiguration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OpenColorIO.OpenColorIOConfiguration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSceneViewExtensionIsActiveFunctor>  IsActiveFunctions                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunctions(TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions");
		
		UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params params {};
		params.IsActiveFunctions = IsActiveFunctions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSceneViewExtensionIsActiveFunctor          IsActiveFunction                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunction(const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction");
		
		UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params params {};
		params.IsActiveFunction = IsActiveFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOpenColorIODisplayConfiguration            InDisplayConfiguration                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UOpenColorIODisplayExtensionWrapper::SetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration");
		
		UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params params {};
		params.InDisplayConfiguration = InDisplayConfiguration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
	 * 		Flags  -> ()
	 */
	void UOpenColorIODisplayExtensionWrapper::RemoveSceneExtension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension");
		
		UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOpenColorIODisplayConfiguration            InDisplayConfiguration                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FSceneViewExtensionIsActiveFunctor          IsActiveFunction                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UOpenColorIODisplayExtensionWrapper* UOpenColorIODisplayExtensionWrapper::CreateOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension");
		
		UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params params {};
		params.InDisplayConfiguration = InDisplayConfiguration;
		params.IsActiveFunction = IsActiveFunction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenColorIODisplayExtensionWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenColorIODisplayExtensionWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OpenColorIO.OpenColorIODisplayExtensionWrapper");
		return ptr;
	}

}


