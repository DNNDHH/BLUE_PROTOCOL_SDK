#pragma once

 

// Package: CameraCalibrationCore

#include "Basic.hpp"

#include "CameraCalibrationCore_classes.hpp"
#include "CameraCalibrationCore_parameters.hpp"


namespace SDK
{

// Function CameraCalibrationCore.CameraCalibrationSubsystem.FindOrCreateDistortionModelHandler
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDistortionHandlerPicker         DistortionHandlerPicker                                (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TSubclassOf<class ULensModel>           LensModelClass                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULensDistortionModelHandlerBase*  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULensDistortionModelHandlerBase* UCameraCalibrationSubsystem::FindOrCreateDistortionModelHandler(struct FDistortionHandlerPicker& DistortionHandlerPicker, const TSubclassOf<class ULensModel> LensModelClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "FindOrCreateDistortionModelHandler");

	Params::CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler Parms{};

	Parms.DistortionHandlerPicker = std::move(DistortionHandlerPicker);
	Parms.LensModelClass = LensModelClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	DistortionHandlerPicker = std::move(Parms.DistortionHandlerPicker);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDistortionModelHandlers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCineCameraComponent*             Component                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class ULensDistortionModelHandlerBase*>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ULensDistortionModelHandlerBase*> UCameraCalibrationSubsystem::GetDistortionModelHandlers(class UCineCameraComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetDistortionModelHandlers");

	Params::CameraCalibrationSubsystem_GetDistortionModelHandlers Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.SetDefaultLensFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULensFile*                        NewDefaultLensFile                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraCalibrationSubsystem::SetDefaultLensFile(class ULensFile* NewDefaultLensFile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "SetDefaultLensFile");

	Params::CameraCalibrationSubsystem_SetDefaultLensFile Parms{};

	Parms.NewDefaultLensFile = NewDefaultLensFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.UnregisterDistortionModelHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCineCameraComponent*             Component                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULensDistortionModelHandlerBase*  Handler                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraCalibrationSubsystem::UnregisterDistortionModelHandler(class UCineCameraComponent* Component, class ULensDistortionModelHandlerBase* Handler)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "UnregisterDistortionModelHandler");

	Params::CameraCalibrationSubsystem_UnregisterDistortionModelHandler Parms{};

	Parms.Component = Component;
	Parms.Handler = Handler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.FindDistortionModelHandler
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDistortionHandlerPicker         DistortionHandlerPicker                                (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                                    bUpdatePicker                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULensDistortionModelHandlerBase*  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULensDistortionModelHandlerBase* UCameraCalibrationSubsystem::FindDistortionModelHandler(struct FDistortionHandlerPicker& DistortionHandlerPicker, bool bUpdatePicker) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "FindDistortionModelHandler");

	Params::CameraCalibrationSubsystem_FindDistortionModelHandler Parms{};

	Parms.DistortionHandlerPicker = std::move(DistortionHandlerPicker);
	Parms.bUpdatePicker = bUpdatePicker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	DistortionHandlerPicker = std::move(Parms.DistortionHandlerPicker);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationStep
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             Param_Name                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCameraCalibrationStep>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UCameraCalibrationStep> UCameraCalibrationSubsystem::GetCameraCalibrationStep(class FName Param_Name) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetCameraCalibrationStep");

	Params::CameraCalibrationSubsystem_GetCameraCalibrationStep Parms{};

	Parms.Param_Name = Param_Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationSteps
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UCameraCalibrationSubsystem::GetCameraCalibrationSteps() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetCameraCalibrationSteps");

	Params::CameraCalibrationSubsystem_GetCameraCalibrationSteps Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             Param_Name                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCameraNodalOffsetAlgo>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UCameraNodalOffsetAlgo> UCameraCalibrationSubsystem::GetCameraNodalOffsetAlgo(class FName Param_Name) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetCameraNodalOffsetAlgo");

	Params::CameraCalibrationSubsystem_GetCameraNodalOffsetAlgo Parms{};

	Parms.Param_Name = Param_Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgos
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UCameraCalibrationSubsystem::GetCameraNodalOffsetAlgos() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetCameraNodalOffsetAlgos");

	Params::CameraCalibrationSubsystem_GetCameraNodalOffsetAlgos Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDefaultLensFile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULensFile*                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULensFile* UCameraCalibrationSubsystem::GetDefaultLensFile() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetDefaultLensFile");

	Params::CameraCalibrationSubsystem_GetDefaultLensFile Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetLensFile
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLensFilePicker                  Picker                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class ULensFile*                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULensFile* UCameraCalibrationSubsystem::GetLensFile(const struct FLensFilePicker& Picker) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetLensFile");

	Params::CameraCalibrationSubsystem_GetLensFile Parms{};

	Parms.Picker = std::move(Picker);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetRegisteredLensModel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             ModelName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULensModel>           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULensModel> UCameraCalibrationSubsystem::GetRegisteredLensModel(class FName ModelName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationSubsystem", "GetRegisteredLensModel");

	Params::CameraCalibrationSubsystem_GetRegisteredLensModel Parms{};

	Parms.ModelName = ModelName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CalibrationPointComponent.RebuildVertices
// (Final, Native, Public, BlueprintCallable)

void UCalibrationPointComponent::RebuildVertices()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalibrationPointComponent", "RebuildVertices");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.CalibrationPointComponent.GetNamespacedPointNames
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>                   OutNamespacedNames                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCalibrationPointComponent::GetNamespacedPointNames(TArray<class FString>* OutNamespacedNames) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalibrationPointComponent", "GetNamespacedPointNames");

	Params::CalibrationPointComponent_GetNamespacedPointNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNamespacedNames != nullptr)
		*OutNamespacedNames = std::move(Parms.OutNamespacedNames);
}


// Function CameraCalibrationCore.CalibrationPointComponent.GetWorldLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           InPointName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          OutLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCalibrationPointComponent::GetWorldLocation(const class FString& InPointName, struct FVector* OutLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalibrationPointComponent", "GetWorldLocation");

	Params::CalibrationPointComponent_GetWorldLocation Parms{};

	Parms.InPointName = std::move(InPointName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CalibrationPointComponent.NamespacedSubpointName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           InSubpointName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           OutNamespacedName                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCalibrationPointComponent::NamespacedSubpointName(const class FString& InSubpointName, class FString* OutNamespacedName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CalibrationPointComponent", "NamespacedSubpointName");

	Params::CalibrationPointComponent_NamespacedSubpointName Parms{};

	Parms.InSubpointName = std::move(InSubpointName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNamespacedName != nullptr)
		*OutNamespacedName = std::move(Parms.OutNamespacedName);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.CameraCalibrationCheckerboard.Rebuild
// (Final, Native, Public, BlueprintCallable)

void ACameraCalibrationCheckerboard::Rebuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraCalibrationCheckerboard", "Rebuild");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.LensDistortionModelHandlerBase.SetDistortionState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLensDistortionState             InNewState                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULensDistortionModelHandlerBase::SetDistortionState(const struct FLensDistortionState& InNewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensDistortionModelHandlerBase", "SetDistortionState");

	Params::LensDistortionModelHandlerBase_SetDistortionState Parms{};

	Parms.InNewState = std::move(InNewState);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetDistortionDisplacementMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* ULensDistortionModelHandlerBase::GetDistortionDisplacementMap() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensDistortionModelHandlerBase", "GetDistortionDisplacementMap");

	Params::LensDistortionModelHandlerBase_GetDistortionDisplacementMap Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetUndistortionDisplacementMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* ULensDistortionModelHandlerBase::GetUndistortionDisplacementMap() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensDistortionModelHandlerBase", "GetUndistortionDisplacementMap");

	Params::LensDistortionModelHandlerBase_GetUndistortionDisplacementMap Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensDistortionModelHandlerBase.IsModelSupported
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class ULensModel>           ModelToSupport                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensDistortionModelHandlerBase::IsModelSupported(const TSubclassOf<class ULensModel>& ModelToSupport) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensDistortionModelHandlerBase", "IsModelSupported");

	Params::LensDistortionModelHandlerBase_IsModelSupported Parms{};

	Parms.ModelToSupport = ModelToSupport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.AddDistortionPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                                   NewFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   NewZoom                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDistortionInfo                  NewPoint                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFocalLengthInfo                 NewFocalLength                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULensFile::AddDistortionPoint(float NewFocus, float NewZoom, const struct FDistortionInfo& NewPoint, const struct FFocalLengthInfo& NewFocalLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "AddDistortionPoint");

	Params::LensFile_AddDistortionPoint Parms{};

	Parms.NewFocus = NewFocus;
	Parms.NewZoom = NewZoom;
	Parms.NewPoint = std::move(NewPoint);
	Parms.NewFocalLength = std::move(NewFocalLength);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.LensFile.AddFocalLengthPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                                   NewFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   NewZoom                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFocalLengthInfo                 NewFocalLength                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULensFile::AddFocalLengthPoint(float NewFocus, float NewZoom, const struct FFocalLengthInfo& NewFocalLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "AddFocalLengthPoint");

	Params::LensFile_AddFocalLengthPoint Parms{};

	Parms.NewFocus = NewFocus;
	Parms.NewZoom = NewZoom;
	Parms.NewFocalLength = std::move(NewFocalLength);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.LensFile.AddImageCenterPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                                   NewFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   NewZoom                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImageCenterInfo                 NewPoint                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULensFile::AddImageCenterPoint(float NewFocus, float NewZoom, const struct FImageCenterInfo& NewPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "AddImageCenterPoint");

	Params::LensFile_AddImageCenterPoint Parms{};

	Parms.NewFocus = NewFocus;
	Parms.NewZoom = NewZoom;
	Parms.NewPoint = std::move(NewPoint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.LensFile.AddNodalOffsetPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                                   NewFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   NewZoom                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNodalPointOffset                NewPoint                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULensFile::AddNodalOffsetPoint(float NewFocus, float NewZoom, const struct FNodalPointOffset& NewPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "AddNodalOffsetPoint");

	Params::LensFile_AddNodalOffsetPoint Parms{};

	Parms.NewFocus = NewFocus;
	Parms.NewZoom = NewZoom;
	Parms.NewPoint = std::move(NewPoint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.LensFile.AddSTMapPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                                   NewFocus                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   NewZoom                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSTMapInfo                       NewPoint                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void ULensFile::AddSTMapPoint(float NewFocus, float NewZoom, const struct FSTMapInfo& NewPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "AddSTMapPoint");

	Params::LensFile_AddSTMapPoint Parms{};

	Parms.NewFocus = NewFocus;
	Parms.NewZoom = NewZoom;
	Parms.NewPoint = std::move(NewPoint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.LensFile.ClearAll
// (Final, Native, Public, BlueprintCallable)

void ULensFile::ClearAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "ClearAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.LensFile.ClearData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELensDataCategory                       InDataCategory                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensFile::ClearData(ELensDataCategory InDataCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "ClearData");

	Params::LensFile_ClearData Parms{};

	Parms.InDataCategory = InDataCategory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.LensFile.RemoveFocusPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELensDataCategory                       InDataCategory                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensFile::RemoveFocusPoint(ELensDataCategory InDataCategory, float InFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "RemoveFocusPoint");

	Params::LensFile_RemoveFocusPoint Parms{};

	Parms.InDataCategory = InDataCategory;
	Parms.InFocus = InFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.LensFile.RemoveZoomPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ELensDataCategory                       InDataCategory                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InZoom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULensFile::RemoveZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InZoom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "RemoveZoomPoint");

	Params::LensFile_RemoveZoomPoint Parms{};

	Parms.InDataCategory = InDataCategory;
	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CameraCalibrationCore.LensFile.EvaluateDistortionData
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InZoom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        InFilmback                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULensDistortionModelHandlerBase*  InLensHandler                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::EvaluateDistortionData(float InFocus, float InZoom, const struct FVector2D& InFilmback, class ULensDistortionModelHandlerBase* InLensHandler) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "EvaluateDistortionData");

	Params::LensFile_EvaluateDistortionData Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;
	Parms.InFilmback = std::move(InFilmback);
	Parms.InLensHandler = InLensHandler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.EvaluateDistortionParameters
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InZoom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDistortionInfo                  OutEvaluatedValue                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::EvaluateDistortionParameters(float InFocus, float InZoom, struct FDistortionInfo* OutEvaluatedValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "EvaluateDistortionParameters");

	Params::LensFile_EvaluateDistortionParameters Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEvaluatedValue != nullptr)
		*OutEvaluatedValue = std::move(Parms.OutEvaluatedValue);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.EvaluateFocalLength
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InZoom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFocalLengthInfo                 OutEvaluatedValue                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::EvaluateFocalLength(float InFocus, float InZoom, struct FFocalLengthInfo* OutEvaluatedValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "EvaluateFocalLength");

	Params::LensFile_EvaluateFocalLength Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEvaluatedValue != nullptr)
		*OutEvaluatedValue = std::move(Parms.OutEvaluatedValue);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.EvaluateImageCenterParameters
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InZoom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImageCenterInfo                 OutEvaluatedValue                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::EvaluateImageCenterParameters(float InFocus, float InZoom, struct FImageCenterInfo* OutEvaluatedValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "EvaluateImageCenterParameters");

	Params::LensFile_EvaluateImageCenterParameters Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEvaluatedValue != nullptr)
		*OutEvaluatedValue = std::move(Parms.OutEvaluatedValue);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.EvaluateNodalPointOffset
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InZoom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNodalPointOffset                OutEvaluatedValue                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::EvaluateNodalPointOffset(float InFocus, float InZoom, struct FNodalPointOffset* OutEvaluatedValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "EvaluateNodalPointOffset");

	Params::LensFile_EvaluateNodalPointOffset Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutEvaluatedValue != nullptr)
		*OutEvaluatedValue = std::move(Parms.OutEvaluatedValue);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.EvaluateNormalizedFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InNormalizedValue                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULensFile::EvaluateNormalizedFocus(float InNormalizedValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "EvaluateNormalizedFocus");

	Params::LensFile_EvaluateNormalizedFocus Parms{};

	Parms.InNormalizedValue = InNormalizedValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.EvaluateNormalizedIris
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InNormalizedValue                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULensFile::EvaluateNormalizedIris(float InNormalizedValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "EvaluateNormalizedIris");

	Params::LensFile_EvaluateNormalizedIris Parms{};

	Parms.InNormalizedValue = InNormalizedValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.GetDistortionPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InZoom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDistortionInfo                  OutDistortionInfo                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::GetDistortionPoint(float InFocus, float InZoom, struct FDistortionInfo* OutDistortionInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "GetDistortionPoint");

	Params::LensFile_GetDistortionPoint Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDistortionInfo != nullptr)
		*OutDistortionInfo = std::move(Parms.OutDistortionInfo);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.GetDistortionPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FDistortionPointInfo>     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FDistortionPointInfo> ULensFile::GetDistortionPoints() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "GetDistortionPoints");

	Params::LensFile_GetDistortionPoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.GetFocalLengthPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InZoom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFocalLengthInfo                 OutFocalLengthInfo                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::GetFocalLengthPoint(float InFocus, float InZoom, struct FFocalLengthInfo* OutFocalLengthInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "GetFocalLengthPoint");

	Params::LensFile_GetFocalLengthPoint Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutFocalLengthInfo != nullptr)
		*OutFocalLengthInfo = std::move(Parms.OutFocalLengthInfo);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.GetFocalLengthPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFocalLengthPointInfo>    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FFocalLengthPointInfo> ULensFile::GetFocalLengthPoints() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "GetFocalLengthPoints");

	Params::LensFile_GetFocalLengthPoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.GetImageCenterPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InZoom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImageCenterInfo                 OutImageCenterInfo                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::GetImageCenterPoint(float InFocus, float InZoom, struct FImageCenterInfo* OutImageCenterInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "GetImageCenterPoint");

	Params::LensFile_GetImageCenterPoint Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutImageCenterInfo != nullptr)
		*OutImageCenterInfo = std::move(Parms.OutImageCenterInfo);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.GetImageCenterPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FImageCenterPointInfo>    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FImageCenterPointInfo> ULensFile::GetImageCenterPoints() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "GetImageCenterPoints");

	Params::LensFile_GetImageCenterPoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.GetNodalOffsetPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InZoom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNodalPointOffset                OutNodalPointOffset                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::GetNodalOffsetPoint(float InFocus, float InZoom, struct FNodalPointOffset* OutNodalPointOffset) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "GetNodalOffsetPoint");

	Params::LensFile_GetNodalOffsetPoint Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNodalPointOffset != nullptr)
		*OutNodalPointOffset = std::move(Parms.OutNodalPointOffset);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.GetNodalOffsetPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FNodalOffsetPointInfo>    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FNodalOffsetPointInfo> ULensFile::GetNodalOffsetPoints() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "GetNodalOffsetPoints");

	Params::LensFile_GetNodalOffsetPoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.GetSTMapPoint
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   InFocus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InZoom                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSTMapInfo                       OutSTMapInfo                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::GetSTMapPoint(float InFocus, float InZoom, struct FSTMapInfo* OutSTMapInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "GetSTMapPoint");

	Params::LensFile_GetSTMapPoint Parms{};

	Parms.InFocus = InFocus;
	Parms.InZoom = InZoom;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSTMapInfo != nullptr)
		*OutSTMapInfo = std::move(Parms.OutSTMapInfo);

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.GetSTMapPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSTMapPointInfo>          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FSTMapPointInfo> ULensFile::GetSTMapPoints() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "GetSTMapPoints");

	Params::LensFile_GetSTMapPoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.HasFocusEncoderMapping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::HasFocusEncoderMapping() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "HasFocusEncoderMapping");

	Params::LensFile_HasFocusEncoderMapping Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.HasIrisEncoderMapping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::HasIrisEncoderMapping() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "HasIrisEncoderMapping");

	Params::LensFile_HasIrisEncoderMapping Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CameraCalibrationCore.LensFile.HasSamples
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ELensDataCategory                       InDataCategory                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULensFile::HasSamples(ELensDataCategory InDataCategory) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensFile", "HasSamples");

	Params::LensFile_HasSamples Parms{};

	Parms.InDataCategory = InDataCategory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
