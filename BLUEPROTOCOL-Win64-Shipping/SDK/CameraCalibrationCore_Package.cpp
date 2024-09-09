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
	 * 		Name   -> Function CameraCalibrationCore.CalibrationPointComponent.RebuildVertices
	 * 		Flags  -> ()
	 */
	void UCalibrationPointComponent::RebuildVertices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CalibrationPointComponent.RebuildVertices");
		
		UCalibrationPointComponent_RebuildVertices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CalibrationPointComponent.NamespacedSubpointName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSubpointName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutNamespacedName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCalibrationPointComponent::NamespacedSubpointName(const class FString& InSubpointName, class FString* OutNamespacedName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CalibrationPointComponent.NamespacedSubpointName");
		
		UCalibrationPointComponent_NamespacedSubpointName_Params params {};
		params.InSubpointName = InSubpointName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNamespacedName != nullptr)
			*OutNamespacedName = params.OutNamespacedName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CalibrationPointComponent.GetWorldLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPointName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCalibrationPointComponent::GetWorldLocation(const class FString& InPointName, struct FVector* OutLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CalibrationPointComponent.GetWorldLocation");
		
		UCalibrationPointComponent_GetWorldLocation_Params params {};
		params.InPointName = InPointName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLocation != nullptr)
			*OutLocation = params.OutLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CalibrationPointComponent.GetNamespacedPointNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              OutNamespacedNames                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UCalibrationPointComponent::GetNamespacedPointNames(TArray<class FString>* OutNamespacedNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CalibrationPointComponent.GetNamespacedPointNames");
		
		UCalibrationPointComponent_GetNamespacedPointNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNamespacedNames != nullptr)
			*OutNamespacedNames = params.OutNamespacedNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCalibrationPointComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCalibrationPointComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.CalibrationPointComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationCheckerboard.Rebuild
	 * 		Flags  -> ()
	 */
	void ACameraCalibrationCheckerboard::Rebuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationCheckerboard.Rebuild");
		
		ACameraCalibrationCheckerboard_Rebuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACameraCalibrationCheckerboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraCalibrationCheckerboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.CameraCalibrationCheckerboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraCalibrationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraCalibrationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.CameraCalibrationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraCalibrationEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraCalibrationEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.CameraCalibrationEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraCalibrationStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraCalibrationStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.CameraCalibrationStep");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.UnregisterDistortionModelHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCineCameraComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULensDistortionModelHandlerBase*             Handler                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraCalibrationSubsystem::UnregisterDistortionModelHandler(class UCineCameraComponent* Component, class ULensDistortionModelHandlerBase* Handler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.UnregisterDistortionModelHandler");
		
		UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Params params {};
		params.Component = Component;
		params.Handler = Handler;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.SetDefaultLensFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULensFile*                                   NewDefaultLensFile                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCameraCalibrationSubsystem::SetDefaultLensFile(class ULensFile* NewDefaultLensFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.SetDefaultLensFile");
		
		UCameraCalibrationSubsystem_SetDefaultLensFile_Params params {};
		params.NewDefaultLensFile = NewDefaultLensFile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.GetRegisteredLensModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ModelName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UCameraCalibrationSubsystem::GetRegisteredLensModel(const class FName& ModelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.GetRegisteredLensModel");
		
		UCameraCalibrationSubsystem_GetRegisteredLensModel_Params params {};
		params.ModelName = ModelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.GetLensFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLensFilePicker                             Picker                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class ULensFile* UCameraCalibrationSubsystem::GetLensFile(const struct FLensFilePicker& Picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.GetLensFile");
		
		UCameraCalibrationSubsystem_GetLensFile_Params params {};
		params.Picker = Picker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDistortionModelHandlers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCineCameraComponent*                        Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ULensDistortionModelHandlerBase*> UCameraCalibrationSubsystem::GetDistortionModelHandlers(class UCineCameraComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDistortionModelHandlers");
		
		UCameraCalibrationSubsystem_GetDistortionModelHandlers_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDefaultLensFile
	 * 		Flags  -> ()
	 */
	class ULensFile* UCameraCalibrationSubsystem::GetDefaultLensFile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDefaultLensFile");
		
		UCameraCalibrationSubsystem_GetDefaultLensFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgos
	 * 		Flags  -> ()
	 */
	TArray<class FName> UCameraCalibrationSubsystem::GetCameraNodalOffsetAlgos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgos");
		
		UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UCameraCalibrationSubsystem::GetCameraNodalOffsetAlgo(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgo");
		
		UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationSteps
	 * 		Flags  -> ()
	 */
	TArray<class FName> UCameraCalibrationSubsystem::GetCameraCalibrationSteps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationSteps");
		
		UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UCameraCalibrationSubsystem::GetCameraCalibrationStep(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationStep");
		
		UCameraCalibrationSubsystem_GetCameraCalibrationStep_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.FindOrCreateDistortionModelHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDistortionHandlerPicker                    DistortionHandlerPicker                                    (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      LensModelClass                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULensDistortionModelHandlerBase* UCameraCalibrationSubsystem::FindOrCreateDistortionModelHandler(struct FDistortionHandlerPicker* DistortionHandlerPicker, class UClass* LensModelClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.FindOrCreateDistortionModelHandler");
		
		UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Params params {};
		params.LensModelClass = LensModelClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistortionHandlerPicker != nullptr)
			*DistortionHandlerPicker = params.DistortionHandlerPicker;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.CameraCalibrationSubsystem.FindDistortionModelHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDistortionHandlerPicker                    DistortionHandlerPicker                                    (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdatePicker                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULensDistortionModelHandlerBase* UCameraCalibrationSubsystem::FindDistortionModelHandler(struct FDistortionHandlerPicker* DistortionHandlerPicker, bool bUpdatePicker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.CameraCalibrationSubsystem.FindDistortionModelHandler");
		
		UCameraCalibrationSubsystem_FindDistortionModelHandler_Params params {};
		params.bUpdatePicker = bUpdatePicker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistortionHandlerPicker != nullptr)
			*DistortionHandlerPicker = params.DistortionHandlerPicker;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraCalibrationSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraCalibrationSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.CameraCalibrationSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraLensDistortionAlgo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraLensDistortionAlgo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.CameraLensDistortionAlgo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCameraNodalOffsetAlgo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCameraNodalOffsetAlgo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.CameraNodalOffsetAlgo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensDistortionModelHandlerBase.SetDistortionState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLensDistortionState                        InNewState                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULensDistortionModelHandlerBase::SetDistortionState(const struct FLensDistortionState& InNewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensDistortionModelHandlerBase.SetDistortionState");
		
		ULensDistortionModelHandlerBase_SetDistortionState_Params params {};
		params.InNewState = InNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensDistortionModelHandlerBase.IsModelSupported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ModelToSupport                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULensDistortionModelHandlerBase::IsModelSupported(class UClass* ModelToSupport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensDistortionModelHandlerBase.IsModelSupported");
		
		ULensDistortionModelHandlerBase_IsModelSupported_Params params {};
		params.ModelToSupport = ModelToSupport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetUndistortionDisplacementMap
	 * 		Flags  -> ()
	 */
	class UTextureRenderTarget2D* ULensDistortionModelHandlerBase::GetUndistortionDisplacementMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetUndistortionDisplacementMap");
		
		ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetDistortionDisplacementMap
	 * 		Flags  -> ()
	 */
	class UTextureRenderTarget2D* ULensDistortionModelHandlerBase::GetDistortionDisplacementMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetDistortionDisplacementMap");
		
		ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULensDistortionModelHandlerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULensDistortionModelHandlerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.LensDistortionModelHandlerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.RemoveZoomPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELensDataCategory                                  InDataCategory                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InZoom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULensFile::RemoveZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.RemoveZoomPoint");
		
		ULensFile_RemoveZoomPoint_Params params {};
		params.InDataCategory = InDataCategory;
		params.InFocus = InFocus;
		params.InZoom = InZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.RemoveFocusPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELensDataCategory                                  InDataCategory                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULensFile::RemoveFocusPoint(ELensDataCategory InDataCategory, float InFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.RemoveFocusPoint");
		
		ULensFile_RemoveFocusPoint_Params params {};
		params.InDataCategory = InDataCategory;
		params.InFocus = InFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.HasSamples
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELensDataCategory                                  InDataCategory                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULensFile::HasSamples(ELensDataCategory InDataCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.HasSamples");
		
		ULensFile_HasSamples_Params params {};
		params.InDataCategory = InDataCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.HasIrisEncoderMapping
	 * 		Flags  -> ()
	 */
	bool ULensFile::HasIrisEncoderMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.HasIrisEncoderMapping");
		
		ULensFile_HasIrisEncoderMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.HasFocusEncoderMapping
	 * 		Flags  -> ()
	 */
	bool ULensFile::HasFocusEncoderMapping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.HasFocusEncoderMapping");
		
		ULensFile_HasFocusEncoderMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.GetSTMapPoints
	 * 		Flags  -> ()
	 */
	TArray<struct FSTMapPointInfo> ULensFile::GetSTMapPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.GetSTMapPoints");
		
		ULensFile_GetSTMapPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.GetSTMapPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InZoom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSTMapInfo                                  OutSTMapInfo                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULensFile::GetSTMapPoint(float InFocus, float InZoom, struct FSTMapInfo* OutSTMapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.GetSTMapPoint");
		
		ULensFile_GetSTMapPoint_Params params {};
		params.InFocus = InFocus;
		params.InZoom = InZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSTMapInfo != nullptr)
			*OutSTMapInfo = params.OutSTMapInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.GetNodalOffsetPoints
	 * 		Flags  -> ()
	 */
	TArray<struct FNodalOffsetPointInfo> ULensFile::GetNodalOffsetPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.GetNodalOffsetPoints");
		
		ULensFile_GetNodalOffsetPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.GetNodalOffsetPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InZoom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FNodalPointOffset                           OutNodalPointOffset                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULensFile::GetNodalOffsetPoint(float InFocus, float InZoom, struct FNodalPointOffset* OutNodalPointOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.GetNodalOffsetPoint");
		
		ULensFile_GetNodalOffsetPoint_Params params {};
		params.InFocus = InFocus;
		params.InZoom = InZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNodalPointOffset != nullptr)
			*OutNodalPointOffset = params.OutNodalPointOffset;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.GetImageCenterPoints
	 * 		Flags  -> ()
	 */
	TArray<struct FImageCenterPointInfo> ULensFile::GetImageCenterPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.GetImageCenterPoints");
		
		ULensFile_GetImageCenterPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.GetImageCenterPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InZoom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FImageCenterInfo                            OutImageCenterInfo                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULensFile::GetImageCenterPoint(float InFocus, float InZoom, struct FImageCenterInfo* OutImageCenterInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.GetImageCenterPoint");
		
		ULensFile_GetImageCenterPoint_Params params {};
		params.InFocus = InFocus;
		params.InZoom = InZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImageCenterInfo != nullptr)
			*OutImageCenterInfo = params.OutImageCenterInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.GetFocalLengthPoints
	 * 		Flags  -> ()
	 */
	TArray<struct FFocalLengthPointInfo> ULensFile::GetFocalLengthPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.GetFocalLengthPoints");
		
		ULensFile_GetFocalLengthPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.GetFocalLengthPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InZoom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFocalLengthInfo                            OutFocalLengthInfo                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULensFile::GetFocalLengthPoint(float InFocus, float InZoom, struct FFocalLengthInfo* OutFocalLengthInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.GetFocalLengthPoint");
		
		ULensFile_GetFocalLengthPoint_Params params {};
		params.InFocus = InFocus;
		params.InZoom = InZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFocalLengthInfo != nullptr)
			*OutFocalLengthInfo = params.OutFocalLengthInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.GetDistortionPoints
	 * 		Flags  -> ()
	 */
	TArray<struct FDistortionPointInfo> ULensFile::GetDistortionPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.GetDistortionPoints");
		
		ULensFile_GetDistortionPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.GetDistortionPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InZoom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDistortionInfo                             OutDistortionInfo                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool ULensFile::GetDistortionPoint(float InFocus, float InZoom, struct FDistortionInfo* OutDistortionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.GetDistortionPoint");
		
		ULensFile_GetDistortionPoint_Params params {};
		params.InFocus = InFocus;
		params.InZoom = InZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDistortionInfo != nullptr)
			*OutDistortionInfo = params.OutDistortionInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.EvaluateNormalizedIris
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InNormalizedValue                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULensFile::EvaluateNormalizedIris(float InNormalizedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.EvaluateNormalizedIris");
		
		ULensFile_EvaluateNormalizedIris_Params params {};
		params.InNormalizedValue = InNormalizedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.EvaluateNormalizedFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InNormalizedValue                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ULensFile::EvaluateNormalizedFocus(float InNormalizedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.EvaluateNormalizedFocus");
		
		ULensFile_EvaluateNormalizedFocus_Params params {};
		params.InNormalizedValue = InNormalizedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.EvaluateNodalPointOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InZoom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FNodalPointOffset                           OutEvaluatedValue                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULensFile::EvaluateNodalPointOffset(float InFocus, float InZoom, struct FNodalPointOffset* OutEvaluatedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.EvaluateNodalPointOffset");
		
		ULensFile_EvaluateNodalPointOffset_Params params {};
		params.InFocus = InFocus;
		params.InZoom = InZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEvaluatedValue != nullptr)
			*OutEvaluatedValue = params.OutEvaluatedValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.EvaluateImageCenterParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InZoom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FImageCenterInfo                            OutEvaluatedValue                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULensFile::EvaluateImageCenterParameters(float InFocus, float InZoom, struct FImageCenterInfo* OutEvaluatedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.EvaluateImageCenterParameters");
		
		ULensFile_EvaluateImageCenterParameters_Params params {};
		params.InFocus = InFocus;
		params.InZoom = InZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEvaluatedValue != nullptr)
			*OutEvaluatedValue = params.OutEvaluatedValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.EvaluateFocalLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InZoom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFocalLengthInfo                            OutEvaluatedValue                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ULensFile::EvaluateFocalLength(float InFocus, float InZoom, struct FFocalLengthInfo* OutEvaluatedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.EvaluateFocalLength");
		
		ULensFile_EvaluateFocalLength_Params params {};
		params.InFocus = InFocus;
		params.InZoom = InZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEvaluatedValue != nullptr)
			*OutEvaluatedValue = params.OutEvaluatedValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.EvaluateDistortionParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InZoom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDistortionInfo                             OutEvaluatedValue                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool ULensFile::EvaluateDistortionParameters(float InFocus, float InZoom, struct FDistortionInfo* OutEvaluatedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.EvaluateDistortionParameters");
		
		ULensFile_EvaluateDistortionParameters_Params params {};
		params.InFocus = InFocus;
		params.InZoom = InZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEvaluatedValue != nullptr)
			*OutEvaluatedValue = params.OutEvaluatedValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.EvaluateDistortionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InZoom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InFilmback                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULensDistortionModelHandlerBase*             InLensHandler                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULensFile::EvaluateDistortionData(float InFocus, float InZoom, const struct FVector2D& InFilmback, class ULensDistortionModelHandlerBase* InLensHandler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.EvaluateDistortionData");
		
		ULensFile_EvaluateDistortionData_Params params {};
		params.InFocus = InFocus;
		params.InZoom = InZoom;
		params.InFilmback = InFilmback;
		params.InLensHandler = InLensHandler;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.ClearData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELensDataCategory                                  InDataCategory                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULensFile::ClearData(ELensDataCategory InDataCategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.ClearData");
		
		ULensFile_ClearData_Params params {};
		params.InDataCategory = InDataCategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.ClearAll
	 * 		Flags  -> ()
	 */
	void ULensFile::ClearAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.ClearAll");
		
		ULensFile_ClearAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.AddSTMapPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewZoom                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSTMapInfo                                  NewPoint                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULensFile::AddSTMapPoint(float NewFocus, float NewZoom, const struct FSTMapInfo& NewPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.AddSTMapPoint");
		
		ULensFile_AddSTMapPoint_Params params {};
		params.NewFocus = NewFocus;
		params.NewZoom = NewZoom;
		params.NewPoint = NewPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.AddNodalOffsetPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewZoom                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FNodalPointOffset                           NewPoint                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULensFile::AddNodalOffsetPoint(float NewFocus, float NewZoom, const struct FNodalPointOffset& NewPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.AddNodalOffsetPoint");
		
		ULensFile_AddNodalOffsetPoint_Params params {};
		params.NewFocus = NewFocus;
		params.NewZoom = NewZoom;
		params.NewPoint = NewPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.AddImageCenterPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewZoom                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FImageCenterInfo                            NewPoint                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULensFile::AddImageCenterPoint(float NewFocus, float NewZoom, const struct FImageCenterInfo& NewPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.AddImageCenterPoint");
		
		ULensFile_AddImageCenterPoint_Params params {};
		params.NewFocus = NewFocus;
		params.NewZoom = NewZoom;
		params.NewPoint = NewPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.AddFocalLengthPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewZoom                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFocalLengthInfo                            NewFocalLength                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULensFile::AddFocalLengthPoint(float NewFocus, float NewZoom, const struct FFocalLengthInfo& NewFocalLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.AddFocalLengthPoint");
		
		ULensFile_AddFocalLengthPoint_Params params {};
		params.NewFocus = NewFocus;
		params.NewZoom = NewZoom;
		params.NewFocalLength = NewFocalLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CameraCalibrationCore.LensFile.AddDistortionPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewZoom                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDistortionInfo                             NewPoint                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FFocalLengthInfo                            NewFocalLength                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULensFile::AddDistortionPoint(float NewFocus, float NewZoom, const struct FDistortionInfo& NewPoint, const struct FFocalLengthInfo& NewFocalLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CameraCalibrationCore.LensFile.AddDistortionPoint");
		
		ULensFile_AddDistortionPoint_Params params {};
		params.NewFocus = NewFocus;
		params.NewZoom = NewZoom;
		params.NewPoint = NewPoint;
		params.NewFocalLength = NewFocalLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULensFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULensFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.LensFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULensModel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULensModel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.LensModel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphericalLensDistortionModelHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphericalLensDistortionModelHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.SphericalLensDistortionModelHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphericalLensModel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphericalLensModel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CameraCalibrationCore.SphericalLensModel");
		return ptr;
	}

}


