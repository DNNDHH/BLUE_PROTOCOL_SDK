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
	 * 		Name   -> Function SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary.RemoveFromParentPrePostProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USBUIExtendRendererBlueprintFunctionLibrary::RemoveFromParentPrePostProcess(class UUserWidget* UserWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary.RemoveFromParentPrePostProcess");
		
		USBUIExtendRendererBlueprintFunctionLibrary_RemoveFromParentPrePostProcess_Params params {};
		params.UserWidget = UserWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary.AddToViewportPrePostProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USBUIExtendRendererBlueprintFunctionLibrary::AddToViewportPrePostProcess(class UUserWidget* UserWidget, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary.AddToViewportPrePostProcess");
		
		USBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess_Params params {};
		params.UserWidget = UserWidget;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USBUIExtendRendererBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBUIExtendRendererBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBUIExtendRenderer.SBUIExtendRendererSubsystem.RemoveFromParentPrePostProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USBUIExtendRendererSubsystem::RemoveFromParentPrePostProcess(class UUserWidget* UserWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBUIExtendRenderer.SBUIExtendRendererSubsystem.RemoveFromParentPrePostProcess");
		
		USBUIExtendRendererSubsystem_RemoveFromParentPrePostProcess_Params params {};
		params.UserWidget = UserWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SBUIExtendRenderer.SBUIExtendRendererSubsystem.AddToViewportPrePostProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 UserWidget                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USBUIExtendRendererSubsystem::AddToViewportPrePostProcess(class UUserWidget* UserWidget, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SBUIExtendRenderer.SBUIExtendRendererSubsystem.AddToViewportPrePostProcess");
		
		USBUIExtendRendererSubsystem_AddToViewportPrePostProcess_Params params {};
		params.UserWidget = UserWidget;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USBUIExtendRendererSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USBUIExtendRendererSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SBUIExtendRenderer.SBUIExtendRendererSubsystem");
		return ptr;
	}

}


