#pragma once

 

// Package: CameraCalibrationCore

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CameraCalibrationCore_structs.hpp"


namespace SDK::Params
{

// Function CameraCalibrationCore.CameraCalibrationSubsystem.FindOrCreateDistortionModelHandler
// 0x0038 (0x0038 - 0x0000)
struct CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler final
{
public:
	struct FDistortionHandlerPicker               DistortionHandlerPicker;                           // 0x0000(0x0028)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class ULensModel>                 LensModelClass;                                    // 0x0028(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULensDistortionModelHandlerBase*        ReturnValue;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler");
static_assert(sizeof(CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler) == 0x000038, "Wrong size on CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler");
static_assert(offsetof(CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler, DistortionHandlerPicker) == 0x000000, "Member 'CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler::DistortionHandlerPicker' has a wrong offset!");
static_assert(offsetof(CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler, LensModelClass) == 0x000028, "Member 'CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler::LensModelClass' has a wrong offset!");
static_assert(offsetof(CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler, ReturnValue) == 0x000030, "Member 'CameraCalibrationSubsystem_FindOrCreateDistortionModelHandler::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDistortionModelHandlers
// 0x0018 (0x0018 - 0x0000)
struct CameraCalibrationSubsystem_GetDistortionModelHandlers final
{
public:
	class UCineCameraComponent*                   Component;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULensDistortionModelHandlerBase*> ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_GetDistortionModelHandlers) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_GetDistortionModelHandlers");
static_assert(sizeof(CameraCalibrationSubsystem_GetDistortionModelHandlers) == 0x000018, "Wrong size on CameraCalibrationSubsystem_GetDistortionModelHandlers");
static_assert(offsetof(CameraCalibrationSubsystem_GetDistortionModelHandlers, Component) == 0x000000, "Member 'CameraCalibrationSubsystem_GetDistortionModelHandlers::Component' has a wrong offset!");
static_assert(offsetof(CameraCalibrationSubsystem_GetDistortionModelHandlers, ReturnValue) == 0x000008, "Member 'CameraCalibrationSubsystem_GetDistortionModelHandlers::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.CameraCalibrationSubsystem.SetDefaultLensFile
// 0x0008 (0x0008 - 0x0000)
struct CameraCalibrationSubsystem_SetDefaultLensFile final
{
public:
	class ULensFile*                              NewDefaultLensFile;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_SetDefaultLensFile) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_SetDefaultLensFile");
static_assert(sizeof(CameraCalibrationSubsystem_SetDefaultLensFile) == 0x000008, "Wrong size on CameraCalibrationSubsystem_SetDefaultLensFile");
static_assert(offsetof(CameraCalibrationSubsystem_SetDefaultLensFile, NewDefaultLensFile) == 0x000000, "Member 'CameraCalibrationSubsystem_SetDefaultLensFile::NewDefaultLensFile' has a wrong offset!");

// Function CameraCalibrationCore.CameraCalibrationSubsystem.UnregisterDistortionModelHandler
// 0x0010 (0x0010 - 0x0000)
struct CameraCalibrationSubsystem_UnregisterDistortionModelHandler final
{
public:
	class UCineCameraComponent*                   Component;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULensDistortionModelHandlerBase*        Handler;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_UnregisterDistortionModelHandler) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_UnregisterDistortionModelHandler");
static_assert(sizeof(CameraCalibrationSubsystem_UnregisterDistortionModelHandler) == 0x000010, "Wrong size on CameraCalibrationSubsystem_UnregisterDistortionModelHandler");
static_assert(offsetof(CameraCalibrationSubsystem_UnregisterDistortionModelHandler, Component) == 0x000000, "Member 'CameraCalibrationSubsystem_UnregisterDistortionModelHandler::Component' has a wrong offset!");
static_assert(offsetof(CameraCalibrationSubsystem_UnregisterDistortionModelHandler, Handler) == 0x000008, "Member 'CameraCalibrationSubsystem_UnregisterDistortionModelHandler::Handler' has a wrong offset!");

// Function CameraCalibrationCore.CameraCalibrationSubsystem.FindDistortionModelHandler
// 0x0038 (0x0038 - 0x0000)
struct CameraCalibrationSubsystem_FindDistortionModelHandler final
{
public:
	struct FDistortionHandlerPicker               DistortionHandlerPicker;                           // 0x0000(0x0028)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          bUpdatePicker;                                     // 0x0028(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10AD[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULensDistortionModelHandlerBase*        ReturnValue;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_FindDistortionModelHandler) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_FindDistortionModelHandler");
static_assert(sizeof(CameraCalibrationSubsystem_FindDistortionModelHandler) == 0x000038, "Wrong size on CameraCalibrationSubsystem_FindDistortionModelHandler");
static_assert(offsetof(CameraCalibrationSubsystem_FindDistortionModelHandler, DistortionHandlerPicker) == 0x000000, "Member 'CameraCalibrationSubsystem_FindDistortionModelHandler::DistortionHandlerPicker' has a wrong offset!");
static_assert(offsetof(CameraCalibrationSubsystem_FindDistortionModelHandler, bUpdatePicker) == 0x000028, "Member 'CameraCalibrationSubsystem_FindDistortionModelHandler::bUpdatePicker' has a wrong offset!");
static_assert(offsetof(CameraCalibrationSubsystem_FindDistortionModelHandler, ReturnValue) == 0x000030, "Member 'CameraCalibrationSubsystem_FindDistortionModelHandler::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationStep
// 0x0010 (0x0010 - 0x0000)
struct CameraCalibrationSubsystem_GetCameraCalibrationStep final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraCalibrationStep>     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_GetCameraCalibrationStep) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_GetCameraCalibrationStep");
static_assert(sizeof(CameraCalibrationSubsystem_GetCameraCalibrationStep) == 0x000010, "Wrong size on CameraCalibrationSubsystem_GetCameraCalibrationStep");
static_assert(offsetof(CameraCalibrationSubsystem_GetCameraCalibrationStep, Param_Name) == 0x000000, "Member 'CameraCalibrationSubsystem_GetCameraCalibrationStep::Param_Name' has a wrong offset!");
static_assert(offsetof(CameraCalibrationSubsystem_GetCameraCalibrationStep, ReturnValue) == 0x000008, "Member 'CameraCalibrationSubsystem_GetCameraCalibrationStep::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationSteps
// 0x0010 (0x0010 - 0x0000)
struct CameraCalibrationSubsystem_GetCameraCalibrationSteps final
{
public:
	TArray<class FName>                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_GetCameraCalibrationSteps) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_GetCameraCalibrationSteps");
static_assert(sizeof(CameraCalibrationSubsystem_GetCameraCalibrationSteps) == 0x000010, "Wrong size on CameraCalibrationSubsystem_GetCameraCalibrationSteps");
static_assert(offsetof(CameraCalibrationSubsystem_GetCameraCalibrationSteps, ReturnValue) == 0x000000, "Member 'CameraCalibrationSubsystem_GetCameraCalibrationSteps::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgo
// 0x0010 (0x0010 - 0x0000)
struct CameraCalibrationSubsystem_GetCameraNodalOffsetAlgo final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraNodalOffsetAlgo>     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_GetCameraNodalOffsetAlgo) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_GetCameraNodalOffsetAlgo");
static_assert(sizeof(CameraCalibrationSubsystem_GetCameraNodalOffsetAlgo) == 0x000010, "Wrong size on CameraCalibrationSubsystem_GetCameraNodalOffsetAlgo");
static_assert(offsetof(CameraCalibrationSubsystem_GetCameraNodalOffsetAlgo, Param_Name) == 0x000000, "Member 'CameraCalibrationSubsystem_GetCameraNodalOffsetAlgo::Param_Name' has a wrong offset!");
static_assert(offsetof(CameraCalibrationSubsystem_GetCameraNodalOffsetAlgo, ReturnValue) == 0x000008, "Member 'CameraCalibrationSubsystem_GetCameraNodalOffsetAlgo::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgos
// 0x0010 (0x0010 - 0x0000)
struct CameraCalibrationSubsystem_GetCameraNodalOffsetAlgos final
{
public:
	TArray<class FName>                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_GetCameraNodalOffsetAlgos) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_GetCameraNodalOffsetAlgos");
static_assert(sizeof(CameraCalibrationSubsystem_GetCameraNodalOffsetAlgos) == 0x000010, "Wrong size on CameraCalibrationSubsystem_GetCameraNodalOffsetAlgos");
static_assert(offsetof(CameraCalibrationSubsystem_GetCameraNodalOffsetAlgos, ReturnValue) == 0x000000, "Member 'CameraCalibrationSubsystem_GetCameraNodalOffsetAlgos::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDefaultLensFile
// 0x0008 (0x0008 - 0x0000)
struct CameraCalibrationSubsystem_GetDefaultLensFile final
{
public:
	class ULensFile*                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_GetDefaultLensFile) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_GetDefaultLensFile");
static_assert(sizeof(CameraCalibrationSubsystem_GetDefaultLensFile) == 0x000008, "Wrong size on CameraCalibrationSubsystem_GetDefaultLensFile");
static_assert(offsetof(CameraCalibrationSubsystem_GetDefaultLensFile, ReturnValue) == 0x000000, "Member 'CameraCalibrationSubsystem_GetDefaultLensFile::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetLensFile
// 0x0018 (0x0018 - 0x0000)
struct CameraCalibrationSubsystem_GetLensFile final
{
public:
	struct FLensFilePicker                        Picker;                                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class ULensFile*                              ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_GetLensFile) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_GetLensFile");
static_assert(sizeof(CameraCalibrationSubsystem_GetLensFile) == 0x000018, "Wrong size on CameraCalibrationSubsystem_GetLensFile");
static_assert(offsetof(CameraCalibrationSubsystem_GetLensFile, Picker) == 0x000000, "Member 'CameraCalibrationSubsystem_GetLensFile::Picker' has a wrong offset!");
static_assert(offsetof(CameraCalibrationSubsystem_GetLensFile, ReturnValue) == 0x000010, "Member 'CameraCalibrationSubsystem_GetLensFile::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.CameraCalibrationSubsystem.GetRegisteredLensModel
// 0x0010 (0x0010 - 0x0000)
struct CameraCalibrationSubsystem_GetRegisteredLensModel final
{
public:
	class FName                                   ModelName;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULensModel>                 ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraCalibrationSubsystem_GetRegisteredLensModel) == 0x000008, "Wrong alignment on CameraCalibrationSubsystem_GetRegisteredLensModel");
static_assert(sizeof(CameraCalibrationSubsystem_GetRegisteredLensModel) == 0x000010, "Wrong size on CameraCalibrationSubsystem_GetRegisteredLensModel");
static_assert(offsetof(CameraCalibrationSubsystem_GetRegisteredLensModel, ModelName) == 0x000000, "Member 'CameraCalibrationSubsystem_GetRegisteredLensModel::ModelName' has a wrong offset!");
static_assert(offsetof(CameraCalibrationSubsystem_GetRegisteredLensModel, ReturnValue) == 0x000008, "Member 'CameraCalibrationSubsystem_GetRegisteredLensModel::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.CalibrationPointComponent.GetNamespacedPointNames
// 0x0010 (0x0010 - 0x0000)
struct CalibrationPointComponent_GetNamespacedPointNames final
{
public:
	TArray<class FString>                         OutNamespacedNames;                                // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(CalibrationPointComponent_GetNamespacedPointNames) == 0x000008, "Wrong alignment on CalibrationPointComponent_GetNamespacedPointNames");
static_assert(sizeof(CalibrationPointComponent_GetNamespacedPointNames) == 0x000010, "Wrong size on CalibrationPointComponent_GetNamespacedPointNames");
static_assert(offsetof(CalibrationPointComponent_GetNamespacedPointNames, OutNamespacedNames) == 0x000000, "Member 'CalibrationPointComponent_GetNamespacedPointNames::OutNamespacedNames' has a wrong offset!");

// Function CameraCalibrationCore.CalibrationPointComponent.GetWorldLocation
// 0x0020 (0x0020 - 0x0000)
struct CalibrationPointComponent_GetWorldLocation final
{
public:
	class FString                                 InPointName;                                       // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                OutLocation;                                       // 0x0010(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10B0[0x3];                                     // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CalibrationPointComponent_GetWorldLocation) == 0x000008, "Wrong alignment on CalibrationPointComponent_GetWorldLocation");
static_assert(sizeof(CalibrationPointComponent_GetWorldLocation) == 0x000020, "Wrong size on CalibrationPointComponent_GetWorldLocation");
static_assert(offsetof(CalibrationPointComponent_GetWorldLocation, InPointName) == 0x000000, "Member 'CalibrationPointComponent_GetWorldLocation::InPointName' has a wrong offset!");
static_assert(offsetof(CalibrationPointComponent_GetWorldLocation, OutLocation) == 0x000010, "Member 'CalibrationPointComponent_GetWorldLocation::OutLocation' has a wrong offset!");
static_assert(offsetof(CalibrationPointComponent_GetWorldLocation, ReturnValue) == 0x00001C, "Member 'CalibrationPointComponent_GetWorldLocation::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.CalibrationPointComponent.NamespacedSubpointName
// 0x0028 (0x0028 - 0x0000)
struct CalibrationPointComponent_NamespacedSubpointName final
{
public:
	class FString                                 InSubpointName;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 OutNamespacedName;                                 // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10B1[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CalibrationPointComponent_NamespacedSubpointName) == 0x000008, "Wrong alignment on CalibrationPointComponent_NamespacedSubpointName");
static_assert(sizeof(CalibrationPointComponent_NamespacedSubpointName) == 0x000028, "Wrong size on CalibrationPointComponent_NamespacedSubpointName");
static_assert(offsetof(CalibrationPointComponent_NamespacedSubpointName, InSubpointName) == 0x000000, "Member 'CalibrationPointComponent_NamespacedSubpointName::InSubpointName' has a wrong offset!");
static_assert(offsetof(CalibrationPointComponent_NamespacedSubpointName, OutNamespacedName) == 0x000010, "Member 'CalibrationPointComponent_NamespacedSubpointName::OutNamespacedName' has a wrong offset!");
static_assert(offsetof(CalibrationPointComponent_NamespacedSubpointName, ReturnValue) == 0x000020, "Member 'CalibrationPointComponent_NamespacedSubpointName::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensDistortionModelHandlerBase.SetDistortionState
// 0x0020 (0x0020 - 0x0000)
struct LensDistortionModelHandlerBase_SetDistortionState final
{
public:
	struct FLensDistortionState                   InNewState;                                        // 0x0000(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensDistortionModelHandlerBase_SetDistortionState) == 0x000008, "Wrong alignment on LensDistortionModelHandlerBase_SetDistortionState");
static_assert(sizeof(LensDistortionModelHandlerBase_SetDistortionState) == 0x000020, "Wrong size on LensDistortionModelHandlerBase_SetDistortionState");
static_assert(offsetof(LensDistortionModelHandlerBase_SetDistortionState, InNewState) == 0x000000, "Member 'LensDistortionModelHandlerBase_SetDistortionState::InNewState' has a wrong offset!");

// Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetDistortionDisplacementMap
// 0x0008 (0x0008 - 0x0000)
struct LensDistortionModelHandlerBase_GetDistortionDisplacementMap final
{
public:
	class UTextureRenderTarget2D*                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensDistortionModelHandlerBase_GetDistortionDisplacementMap) == 0x000008, "Wrong alignment on LensDistortionModelHandlerBase_GetDistortionDisplacementMap");
static_assert(sizeof(LensDistortionModelHandlerBase_GetDistortionDisplacementMap) == 0x000008, "Wrong size on LensDistortionModelHandlerBase_GetDistortionDisplacementMap");
static_assert(offsetof(LensDistortionModelHandlerBase_GetDistortionDisplacementMap, ReturnValue) == 0x000000, "Member 'LensDistortionModelHandlerBase_GetDistortionDisplacementMap::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetUndistortionDisplacementMap
// 0x0008 (0x0008 - 0x0000)
struct LensDistortionModelHandlerBase_GetUndistortionDisplacementMap final
{
public:
	class UTextureRenderTarget2D*                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensDistortionModelHandlerBase_GetUndistortionDisplacementMap) == 0x000008, "Wrong alignment on LensDistortionModelHandlerBase_GetUndistortionDisplacementMap");
static_assert(sizeof(LensDistortionModelHandlerBase_GetUndistortionDisplacementMap) == 0x000008, "Wrong size on LensDistortionModelHandlerBase_GetUndistortionDisplacementMap");
static_assert(offsetof(LensDistortionModelHandlerBase_GetUndistortionDisplacementMap, ReturnValue) == 0x000000, "Member 'LensDistortionModelHandlerBase_GetUndistortionDisplacementMap::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensDistortionModelHandlerBase.IsModelSupported
// 0x0010 (0x0010 - 0x0000)
struct LensDistortionModelHandlerBase_IsModelSupported final
{
public:
	TSubclassOf<class ULensModel>                 ModelToSupport;                                    // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10B5[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensDistortionModelHandlerBase_IsModelSupported) == 0x000008, "Wrong alignment on LensDistortionModelHandlerBase_IsModelSupported");
static_assert(sizeof(LensDistortionModelHandlerBase_IsModelSupported) == 0x000010, "Wrong size on LensDistortionModelHandlerBase_IsModelSupported");
static_assert(offsetof(LensDistortionModelHandlerBase_IsModelSupported, ModelToSupport) == 0x000000, "Member 'LensDistortionModelHandlerBase_IsModelSupported::ModelToSupport' has a wrong offset!");
static_assert(offsetof(LensDistortionModelHandlerBase_IsModelSupported, ReturnValue) == 0x000008, "Member 'LensDistortionModelHandlerBase_IsModelSupported::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.AddDistortionPoint
// 0x0020 (0x0020 - 0x0000)
struct LensFile_AddDistortionPoint final
{
public:
	float                                         NewFocus;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NewZoom;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDistortionInfo                        NewPoint;                                          // 0x0008(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFocalLengthInfo                       NewFocalLength;                                    // 0x0018(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_AddDistortionPoint) == 0x000008, "Wrong alignment on LensFile_AddDistortionPoint");
static_assert(sizeof(LensFile_AddDistortionPoint) == 0x000020, "Wrong size on LensFile_AddDistortionPoint");
static_assert(offsetof(LensFile_AddDistortionPoint, NewFocus) == 0x000000, "Member 'LensFile_AddDistortionPoint::NewFocus' has a wrong offset!");
static_assert(offsetof(LensFile_AddDistortionPoint, NewZoom) == 0x000004, "Member 'LensFile_AddDistortionPoint::NewZoom' has a wrong offset!");
static_assert(offsetof(LensFile_AddDistortionPoint, NewPoint) == 0x000008, "Member 'LensFile_AddDistortionPoint::NewPoint' has a wrong offset!");
static_assert(offsetof(LensFile_AddDistortionPoint, NewFocalLength) == 0x000018, "Member 'LensFile_AddDistortionPoint::NewFocalLength' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.AddFocalLengthPoint
// 0x0010 (0x0010 - 0x0000)
struct LensFile_AddFocalLengthPoint final
{
public:
	float                                         NewFocus;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NewZoom;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFocalLengthInfo                       NewFocalLength;                                    // 0x0008(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_AddFocalLengthPoint) == 0x000004, "Wrong alignment on LensFile_AddFocalLengthPoint");
static_assert(sizeof(LensFile_AddFocalLengthPoint) == 0x000010, "Wrong size on LensFile_AddFocalLengthPoint");
static_assert(offsetof(LensFile_AddFocalLengthPoint, NewFocus) == 0x000000, "Member 'LensFile_AddFocalLengthPoint::NewFocus' has a wrong offset!");
static_assert(offsetof(LensFile_AddFocalLengthPoint, NewZoom) == 0x000004, "Member 'LensFile_AddFocalLengthPoint::NewZoom' has a wrong offset!");
static_assert(offsetof(LensFile_AddFocalLengthPoint, NewFocalLength) == 0x000008, "Member 'LensFile_AddFocalLengthPoint::NewFocalLength' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.AddImageCenterPoint
// 0x0010 (0x0010 - 0x0000)
struct LensFile_AddImageCenterPoint final
{
public:
	float                                         NewFocus;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NewZoom;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImageCenterInfo                       NewPoint;                                          // 0x0008(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_AddImageCenterPoint) == 0x000004, "Wrong alignment on LensFile_AddImageCenterPoint");
static_assert(sizeof(LensFile_AddImageCenterPoint) == 0x000010, "Wrong size on LensFile_AddImageCenterPoint");
static_assert(offsetof(LensFile_AddImageCenterPoint, NewFocus) == 0x000000, "Member 'LensFile_AddImageCenterPoint::NewFocus' has a wrong offset!");
static_assert(offsetof(LensFile_AddImageCenterPoint, NewZoom) == 0x000004, "Member 'LensFile_AddImageCenterPoint::NewZoom' has a wrong offset!");
static_assert(offsetof(LensFile_AddImageCenterPoint, NewPoint) == 0x000008, "Member 'LensFile_AddImageCenterPoint::NewPoint' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.AddNodalOffsetPoint
// 0x0030 (0x0030 - 0x0000)
struct LensFile_AddNodalOffsetPoint final
{
public:
	float                                         NewFocus;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NewZoom;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10B9[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNodalPointOffset                      NewPoint;                                          // 0x0010(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_AddNodalOffsetPoint) == 0x000010, "Wrong alignment on LensFile_AddNodalOffsetPoint");
static_assert(sizeof(LensFile_AddNodalOffsetPoint) == 0x000030, "Wrong size on LensFile_AddNodalOffsetPoint");
static_assert(offsetof(LensFile_AddNodalOffsetPoint, NewFocus) == 0x000000, "Member 'LensFile_AddNodalOffsetPoint::NewFocus' has a wrong offset!");
static_assert(offsetof(LensFile_AddNodalOffsetPoint, NewZoom) == 0x000004, "Member 'LensFile_AddNodalOffsetPoint::NewZoom' has a wrong offset!");
static_assert(offsetof(LensFile_AddNodalOffsetPoint, NewPoint) == 0x000010, "Member 'LensFile_AddNodalOffsetPoint::NewPoint' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.AddSTMapPoint
// 0x0010 (0x0010 - 0x0000)
struct LensFile_AddSTMapPoint final
{
public:
	float                                         NewFocus;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NewZoom;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSTMapInfo                             NewPoint;                                          // 0x0008(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_AddSTMapPoint) == 0x000008, "Wrong alignment on LensFile_AddSTMapPoint");
static_assert(sizeof(LensFile_AddSTMapPoint) == 0x000010, "Wrong size on LensFile_AddSTMapPoint");
static_assert(offsetof(LensFile_AddSTMapPoint, NewFocus) == 0x000000, "Member 'LensFile_AddSTMapPoint::NewFocus' has a wrong offset!");
static_assert(offsetof(LensFile_AddSTMapPoint, NewZoom) == 0x000004, "Member 'LensFile_AddSTMapPoint::NewZoom' has a wrong offset!");
static_assert(offsetof(LensFile_AddSTMapPoint, NewPoint) == 0x000008, "Member 'LensFile_AddSTMapPoint::NewPoint' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.ClearData
// 0x0001 (0x0001 - 0x0000)
struct LensFile_ClearData final
{
public:
	ELensDataCategory                             InDataCategory;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_ClearData) == 0x000001, "Wrong alignment on LensFile_ClearData");
static_assert(sizeof(LensFile_ClearData) == 0x000001, "Wrong size on LensFile_ClearData");
static_assert(offsetof(LensFile_ClearData, InDataCategory) == 0x000000, "Member 'LensFile_ClearData::InDataCategory' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.RemoveFocusPoint
// 0x0008 (0x0008 - 0x0000)
struct LensFile_RemoveFocusPoint final
{
public:
	ELensDataCategory                             InDataCategory;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10BA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InFocus;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_RemoveFocusPoint) == 0x000004, "Wrong alignment on LensFile_RemoveFocusPoint");
static_assert(sizeof(LensFile_RemoveFocusPoint) == 0x000008, "Wrong size on LensFile_RemoveFocusPoint");
static_assert(offsetof(LensFile_RemoveFocusPoint, InDataCategory) == 0x000000, "Member 'LensFile_RemoveFocusPoint::InDataCategory' has a wrong offset!");
static_assert(offsetof(LensFile_RemoveFocusPoint, InFocus) == 0x000004, "Member 'LensFile_RemoveFocusPoint::InFocus' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.RemoveZoomPoint
// 0x000C (0x000C - 0x0000)
struct LensFile_RemoveZoomPoint final
{
public:
	ELensDataCategory                             InDataCategory;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10BB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InFocus;                                           // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InZoom;                                            // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_RemoveZoomPoint) == 0x000004, "Wrong alignment on LensFile_RemoveZoomPoint");
static_assert(sizeof(LensFile_RemoveZoomPoint) == 0x00000C, "Wrong size on LensFile_RemoveZoomPoint");
static_assert(offsetof(LensFile_RemoveZoomPoint, InDataCategory) == 0x000000, "Member 'LensFile_RemoveZoomPoint::InDataCategory' has a wrong offset!");
static_assert(offsetof(LensFile_RemoveZoomPoint, InFocus) == 0x000004, "Member 'LensFile_RemoveZoomPoint::InFocus' has a wrong offset!");
static_assert(offsetof(LensFile_RemoveZoomPoint, InZoom) == 0x000008, "Member 'LensFile_RemoveZoomPoint::InZoom' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.EvaluateDistortionData
// 0x0020 (0x0020 - 0x0000)
struct LensFile_EvaluateDistortionData final
{
public:
	float                                         InFocus;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InZoom;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              InFilmback;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULensDistortionModelHandlerBase*        InLensHandler;                                     // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10BC[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensFile_EvaluateDistortionData) == 0x000008, "Wrong alignment on LensFile_EvaluateDistortionData");
static_assert(sizeof(LensFile_EvaluateDistortionData) == 0x000020, "Wrong size on LensFile_EvaluateDistortionData");
static_assert(offsetof(LensFile_EvaluateDistortionData, InFocus) == 0x000000, "Member 'LensFile_EvaluateDistortionData::InFocus' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateDistortionData, InZoom) == 0x000004, "Member 'LensFile_EvaluateDistortionData::InZoom' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateDistortionData, InFilmback) == 0x000008, "Member 'LensFile_EvaluateDistortionData::InFilmback' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateDistortionData, InLensHandler) == 0x000010, "Member 'LensFile_EvaluateDistortionData::InLensHandler' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateDistortionData, ReturnValue) == 0x000018, "Member 'LensFile_EvaluateDistortionData::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.EvaluateDistortionParameters
// 0x0020 (0x0020 - 0x0000)
struct LensFile_EvaluateDistortionParameters final
{
public:
	float                                         InFocus;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InZoom;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDistortionInfo                        OutEvaluatedValue;                                 // 0x0008(0x0010)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10BD[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensFile_EvaluateDistortionParameters) == 0x000008, "Wrong alignment on LensFile_EvaluateDistortionParameters");
static_assert(sizeof(LensFile_EvaluateDistortionParameters) == 0x000020, "Wrong size on LensFile_EvaluateDistortionParameters");
static_assert(offsetof(LensFile_EvaluateDistortionParameters, InFocus) == 0x000000, "Member 'LensFile_EvaluateDistortionParameters::InFocus' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateDistortionParameters, InZoom) == 0x000004, "Member 'LensFile_EvaluateDistortionParameters::InZoom' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateDistortionParameters, OutEvaluatedValue) == 0x000008, "Member 'LensFile_EvaluateDistortionParameters::OutEvaluatedValue' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateDistortionParameters, ReturnValue) == 0x000018, "Member 'LensFile_EvaluateDistortionParameters::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.EvaluateFocalLength
// 0x0014 (0x0014 - 0x0000)
struct LensFile_EvaluateFocalLength final
{
public:
	float                                         InFocus;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InZoom;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFocalLengthInfo                       OutEvaluatedValue;                                 // 0x0008(0x0008)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10BE[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensFile_EvaluateFocalLength) == 0x000004, "Wrong alignment on LensFile_EvaluateFocalLength");
static_assert(sizeof(LensFile_EvaluateFocalLength) == 0x000014, "Wrong size on LensFile_EvaluateFocalLength");
static_assert(offsetof(LensFile_EvaluateFocalLength, InFocus) == 0x000000, "Member 'LensFile_EvaluateFocalLength::InFocus' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateFocalLength, InZoom) == 0x000004, "Member 'LensFile_EvaluateFocalLength::InZoom' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateFocalLength, OutEvaluatedValue) == 0x000008, "Member 'LensFile_EvaluateFocalLength::OutEvaluatedValue' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateFocalLength, ReturnValue) == 0x000010, "Member 'LensFile_EvaluateFocalLength::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.EvaluateImageCenterParameters
// 0x0014 (0x0014 - 0x0000)
struct LensFile_EvaluateImageCenterParameters final
{
public:
	float                                         InFocus;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InZoom;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImageCenterInfo                       OutEvaluatedValue;                                 // 0x0008(0x0008)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10BF[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensFile_EvaluateImageCenterParameters) == 0x000004, "Wrong alignment on LensFile_EvaluateImageCenterParameters");
static_assert(sizeof(LensFile_EvaluateImageCenterParameters) == 0x000014, "Wrong size on LensFile_EvaluateImageCenterParameters");
static_assert(offsetof(LensFile_EvaluateImageCenterParameters, InFocus) == 0x000000, "Member 'LensFile_EvaluateImageCenterParameters::InFocus' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateImageCenterParameters, InZoom) == 0x000004, "Member 'LensFile_EvaluateImageCenterParameters::InZoom' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateImageCenterParameters, OutEvaluatedValue) == 0x000008, "Member 'LensFile_EvaluateImageCenterParameters::OutEvaluatedValue' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateImageCenterParameters, ReturnValue) == 0x000010, "Member 'LensFile_EvaluateImageCenterParameters::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.EvaluateNodalPointOffset
// 0x0040 (0x0040 - 0x0000)
struct LensFile_EvaluateNodalPointOffset final
{
public:
	float                                         InFocus;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InZoom;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C0[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNodalPointOffset                      OutEvaluatedValue;                                 // 0x0010(0x0020)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C1[0xF];                                     // 0x0031(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensFile_EvaluateNodalPointOffset) == 0x000010, "Wrong alignment on LensFile_EvaluateNodalPointOffset");
static_assert(sizeof(LensFile_EvaluateNodalPointOffset) == 0x000040, "Wrong size on LensFile_EvaluateNodalPointOffset");
static_assert(offsetof(LensFile_EvaluateNodalPointOffset, InFocus) == 0x000000, "Member 'LensFile_EvaluateNodalPointOffset::InFocus' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateNodalPointOffset, InZoom) == 0x000004, "Member 'LensFile_EvaluateNodalPointOffset::InZoom' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateNodalPointOffset, OutEvaluatedValue) == 0x000010, "Member 'LensFile_EvaluateNodalPointOffset::OutEvaluatedValue' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateNodalPointOffset, ReturnValue) == 0x000030, "Member 'LensFile_EvaluateNodalPointOffset::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.EvaluateNormalizedFocus
// 0x0008 (0x0008 - 0x0000)
struct LensFile_EvaluateNormalizedFocus final
{
public:
	float                                         InNormalizedValue;                                 // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_EvaluateNormalizedFocus) == 0x000004, "Wrong alignment on LensFile_EvaluateNormalizedFocus");
static_assert(sizeof(LensFile_EvaluateNormalizedFocus) == 0x000008, "Wrong size on LensFile_EvaluateNormalizedFocus");
static_assert(offsetof(LensFile_EvaluateNormalizedFocus, InNormalizedValue) == 0x000000, "Member 'LensFile_EvaluateNormalizedFocus::InNormalizedValue' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateNormalizedFocus, ReturnValue) == 0x000004, "Member 'LensFile_EvaluateNormalizedFocus::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.EvaluateNormalizedIris
// 0x0008 (0x0008 - 0x0000)
struct LensFile_EvaluateNormalizedIris final
{
public:
	float                                         InNormalizedValue;                                 // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_EvaluateNormalizedIris) == 0x000004, "Wrong alignment on LensFile_EvaluateNormalizedIris");
static_assert(sizeof(LensFile_EvaluateNormalizedIris) == 0x000008, "Wrong size on LensFile_EvaluateNormalizedIris");
static_assert(offsetof(LensFile_EvaluateNormalizedIris, InNormalizedValue) == 0x000000, "Member 'LensFile_EvaluateNormalizedIris::InNormalizedValue' has a wrong offset!");
static_assert(offsetof(LensFile_EvaluateNormalizedIris, ReturnValue) == 0x000004, "Member 'LensFile_EvaluateNormalizedIris::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.GetDistortionPoint
// 0x0020 (0x0020 - 0x0000)
struct LensFile_GetDistortionPoint final
{
public:
	float                                         InFocus;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InZoom;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDistortionInfo                        OutDistortionInfo;                                 // 0x0008(0x0010)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C2[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensFile_GetDistortionPoint) == 0x000008, "Wrong alignment on LensFile_GetDistortionPoint");
static_assert(sizeof(LensFile_GetDistortionPoint) == 0x000020, "Wrong size on LensFile_GetDistortionPoint");
static_assert(offsetof(LensFile_GetDistortionPoint, InFocus) == 0x000000, "Member 'LensFile_GetDistortionPoint::InFocus' has a wrong offset!");
static_assert(offsetof(LensFile_GetDistortionPoint, InZoom) == 0x000004, "Member 'LensFile_GetDistortionPoint::InZoom' has a wrong offset!");
static_assert(offsetof(LensFile_GetDistortionPoint, OutDistortionInfo) == 0x000008, "Member 'LensFile_GetDistortionPoint::OutDistortionInfo' has a wrong offset!");
static_assert(offsetof(LensFile_GetDistortionPoint, ReturnValue) == 0x000018, "Member 'LensFile_GetDistortionPoint::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.GetDistortionPoints
// 0x0010 (0x0010 - 0x0000)
struct LensFile_GetDistortionPoints final
{
public:
	TArray<struct FDistortionPointInfo>           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_GetDistortionPoints) == 0x000008, "Wrong alignment on LensFile_GetDistortionPoints");
static_assert(sizeof(LensFile_GetDistortionPoints) == 0x000010, "Wrong size on LensFile_GetDistortionPoints");
static_assert(offsetof(LensFile_GetDistortionPoints, ReturnValue) == 0x000000, "Member 'LensFile_GetDistortionPoints::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.GetFocalLengthPoint
// 0x0014 (0x0014 - 0x0000)
struct LensFile_GetFocalLengthPoint final
{
public:
	float                                         InFocus;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InZoom;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFocalLengthInfo                       OutFocalLengthInfo;                                // 0x0008(0x0008)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C3[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensFile_GetFocalLengthPoint) == 0x000004, "Wrong alignment on LensFile_GetFocalLengthPoint");
static_assert(sizeof(LensFile_GetFocalLengthPoint) == 0x000014, "Wrong size on LensFile_GetFocalLengthPoint");
static_assert(offsetof(LensFile_GetFocalLengthPoint, InFocus) == 0x000000, "Member 'LensFile_GetFocalLengthPoint::InFocus' has a wrong offset!");
static_assert(offsetof(LensFile_GetFocalLengthPoint, InZoom) == 0x000004, "Member 'LensFile_GetFocalLengthPoint::InZoom' has a wrong offset!");
static_assert(offsetof(LensFile_GetFocalLengthPoint, OutFocalLengthInfo) == 0x000008, "Member 'LensFile_GetFocalLengthPoint::OutFocalLengthInfo' has a wrong offset!");
static_assert(offsetof(LensFile_GetFocalLengthPoint, ReturnValue) == 0x000010, "Member 'LensFile_GetFocalLengthPoint::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.GetFocalLengthPoints
// 0x0010 (0x0010 - 0x0000)
struct LensFile_GetFocalLengthPoints final
{
public:
	TArray<struct FFocalLengthPointInfo>          ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_GetFocalLengthPoints) == 0x000008, "Wrong alignment on LensFile_GetFocalLengthPoints");
static_assert(sizeof(LensFile_GetFocalLengthPoints) == 0x000010, "Wrong size on LensFile_GetFocalLengthPoints");
static_assert(offsetof(LensFile_GetFocalLengthPoints, ReturnValue) == 0x000000, "Member 'LensFile_GetFocalLengthPoints::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.GetImageCenterPoint
// 0x0014 (0x0014 - 0x0000)
struct LensFile_GetImageCenterPoint final
{
public:
	float                                         InFocus;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InZoom;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImageCenterInfo                       OutImageCenterInfo;                                // 0x0008(0x0008)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C4[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensFile_GetImageCenterPoint) == 0x000004, "Wrong alignment on LensFile_GetImageCenterPoint");
static_assert(sizeof(LensFile_GetImageCenterPoint) == 0x000014, "Wrong size on LensFile_GetImageCenterPoint");
static_assert(offsetof(LensFile_GetImageCenterPoint, InFocus) == 0x000000, "Member 'LensFile_GetImageCenterPoint::InFocus' has a wrong offset!");
static_assert(offsetof(LensFile_GetImageCenterPoint, InZoom) == 0x000004, "Member 'LensFile_GetImageCenterPoint::InZoom' has a wrong offset!");
static_assert(offsetof(LensFile_GetImageCenterPoint, OutImageCenterInfo) == 0x000008, "Member 'LensFile_GetImageCenterPoint::OutImageCenterInfo' has a wrong offset!");
static_assert(offsetof(LensFile_GetImageCenterPoint, ReturnValue) == 0x000010, "Member 'LensFile_GetImageCenterPoint::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.GetImageCenterPoints
// 0x0010 (0x0010 - 0x0000)
struct LensFile_GetImageCenterPoints final
{
public:
	TArray<struct FImageCenterPointInfo>          ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_GetImageCenterPoints) == 0x000008, "Wrong alignment on LensFile_GetImageCenterPoints");
static_assert(sizeof(LensFile_GetImageCenterPoints) == 0x000010, "Wrong size on LensFile_GetImageCenterPoints");
static_assert(offsetof(LensFile_GetImageCenterPoints, ReturnValue) == 0x000000, "Member 'LensFile_GetImageCenterPoints::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.GetNodalOffsetPoint
// 0x0040 (0x0040 - 0x0000)
struct LensFile_GetNodalOffsetPoint final
{
public:
	float                                         InFocus;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InZoom;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C5[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNodalPointOffset                      OutNodalPointOffset;                               // 0x0010(0x0020)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C6[0xF];                                     // 0x0031(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensFile_GetNodalOffsetPoint) == 0x000010, "Wrong alignment on LensFile_GetNodalOffsetPoint");
static_assert(sizeof(LensFile_GetNodalOffsetPoint) == 0x000040, "Wrong size on LensFile_GetNodalOffsetPoint");
static_assert(offsetof(LensFile_GetNodalOffsetPoint, InFocus) == 0x000000, "Member 'LensFile_GetNodalOffsetPoint::InFocus' has a wrong offset!");
static_assert(offsetof(LensFile_GetNodalOffsetPoint, InZoom) == 0x000004, "Member 'LensFile_GetNodalOffsetPoint::InZoom' has a wrong offset!");
static_assert(offsetof(LensFile_GetNodalOffsetPoint, OutNodalPointOffset) == 0x000010, "Member 'LensFile_GetNodalOffsetPoint::OutNodalPointOffset' has a wrong offset!");
static_assert(offsetof(LensFile_GetNodalOffsetPoint, ReturnValue) == 0x000030, "Member 'LensFile_GetNodalOffsetPoint::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.GetNodalOffsetPoints
// 0x0010 (0x0010 - 0x0000)
struct LensFile_GetNodalOffsetPoints final
{
public:
	TArray<struct FNodalOffsetPointInfo>          ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_GetNodalOffsetPoints) == 0x000008, "Wrong alignment on LensFile_GetNodalOffsetPoints");
static_assert(sizeof(LensFile_GetNodalOffsetPoints) == 0x000010, "Wrong size on LensFile_GetNodalOffsetPoints");
static_assert(offsetof(LensFile_GetNodalOffsetPoints, ReturnValue) == 0x000000, "Member 'LensFile_GetNodalOffsetPoints::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.GetSTMapPoint
// 0x0018 (0x0018 - 0x0000)
struct LensFile_GetSTMapPoint final
{
public:
	float                                         InFocus;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InZoom;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSTMapInfo                             OutSTMapInfo;                                      // 0x0008(0x0008)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C7[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(LensFile_GetSTMapPoint) == 0x000008, "Wrong alignment on LensFile_GetSTMapPoint");
static_assert(sizeof(LensFile_GetSTMapPoint) == 0x000018, "Wrong size on LensFile_GetSTMapPoint");
static_assert(offsetof(LensFile_GetSTMapPoint, InFocus) == 0x000000, "Member 'LensFile_GetSTMapPoint::InFocus' has a wrong offset!");
static_assert(offsetof(LensFile_GetSTMapPoint, InZoom) == 0x000004, "Member 'LensFile_GetSTMapPoint::InZoom' has a wrong offset!");
static_assert(offsetof(LensFile_GetSTMapPoint, OutSTMapInfo) == 0x000008, "Member 'LensFile_GetSTMapPoint::OutSTMapInfo' has a wrong offset!");
static_assert(offsetof(LensFile_GetSTMapPoint, ReturnValue) == 0x000010, "Member 'LensFile_GetSTMapPoint::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.GetSTMapPoints
// 0x0010 (0x0010 - 0x0000)
struct LensFile_GetSTMapPoints final
{
public:
	TArray<struct FSTMapPointInfo>                ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_GetSTMapPoints) == 0x000008, "Wrong alignment on LensFile_GetSTMapPoints");
static_assert(sizeof(LensFile_GetSTMapPoints) == 0x000010, "Wrong size on LensFile_GetSTMapPoints");
static_assert(offsetof(LensFile_GetSTMapPoints, ReturnValue) == 0x000000, "Member 'LensFile_GetSTMapPoints::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.HasFocusEncoderMapping
// 0x0001 (0x0001 - 0x0000)
struct LensFile_HasFocusEncoderMapping final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_HasFocusEncoderMapping) == 0x000001, "Wrong alignment on LensFile_HasFocusEncoderMapping");
static_assert(sizeof(LensFile_HasFocusEncoderMapping) == 0x000001, "Wrong size on LensFile_HasFocusEncoderMapping");
static_assert(offsetof(LensFile_HasFocusEncoderMapping, ReturnValue) == 0x000000, "Member 'LensFile_HasFocusEncoderMapping::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.HasIrisEncoderMapping
// 0x0001 (0x0001 - 0x0000)
struct LensFile_HasIrisEncoderMapping final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_HasIrisEncoderMapping) == 0x000001, "Wrong alignment on LensFile_HasIrisEncoderMapping");
static_assert(sizeof(LensFile_HasIrisEncoderMapping) == 0x000001, "Wrong size on LensFile_HasIrisEncoderMapping");
static_assert(offsetof(LensFile_HasIrisEncoderMapping, ReturnValue) == 0x000000, "Member 'LensFile_HasIrisEncoderMapping::ReturnValue' has a wrong offset!");

// Function CameraCalibrationCore.LensFile.HasSamples
// 0x0002 (0x0002 - 0x0000)
struct LensFile_HasSamples final
{
public:
	ELensDataCategory                             InDataCategory;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LensFile_HasSamples) == 0x000001, "Wrong alignment on LensFile_HasSamples");
static_assert(sizeof(LensFile_HasSamples) == 0x000002, "Wrong size on LensFile_HasSamples");
static_assert(offsetof(LensFile_HasSamples, InDataCategory) == 0x000000, "Member 'LensFile_HasSamples::InDataCategory' has a wrong offset!");
static_assert(offsetof(LensFile_HasSamples, ReturnValue) == 0x000001, "Member 'LensFile_HasSamples::ReturnValue' has a wrong offset!");

}
