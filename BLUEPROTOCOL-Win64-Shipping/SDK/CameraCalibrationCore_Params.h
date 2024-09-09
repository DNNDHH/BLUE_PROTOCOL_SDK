#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CameraCalibrationCore.CalibrationPointComponent.RebuildVertices
	 */
	struct UCalibrationPointComponent_RebuildVertices_Params
	{	};

	/**
	 * Function CameraCalibrationCore.CalibrationPointComponent.NamespacedSubpointName
	 */
	struct UCalibrationPointComponent_NamespacedSubpointName_Params
	{
	public:
		class FString                                              InSubpointName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutNamespacedName;                                       // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CalibrationPointComponent.GetWorldLocation
	 */
	struct UCalibrationPointComponent_GetWorldLocation_Params
	{
	public:
		class FString                                              InPointName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutLocation;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CalibrationPointComponent.GetNamespacedPointNames
	 */
	struct UCalibrationPointComponent_GetNamespacedPointNames_Params
	{
	public:
		TArray<class FString>                                      OutNamespacedNames;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationCheckerboard.Rebuild
	 */
	struct ACameraCalibrationCheckerboard_Rebuild_Params
	{	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.UnregisterDistortionModelHandler
	 */
	struct UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Params
	{
	public:
		class UCineCameraComponent*                                Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULensDistortionModelHandlerBase*                     Handler;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.SetDefaultLensFile
	 */
	struct UCameraCalibrationSubsystem_SetDefaultLensFile_Params
	{
	public:
		class ULensFile*                                           NewDefaultLensFile;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.GetRegisteredLensModel
	 */
	struct UCameraCalibrationSubsystem_GetRegisteredLensModel_Params
	{
	public:
		class FName                                                ModelName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.GetLensFile
	 */
	struct UCameraCalibrationSubsystem_GetLensFile_Params
	{
	public:
		struct FLensFilePicker                                     Picker;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class ULensFile*                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDistortionModelHandlers
	 */
	struct UCameraCalibrationSubsystem_GetDistortionModelHandlers_Params
	{
	public:
		class UCineCameraComponent*                                Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class ULensDistortionModelHandlerBase*>             ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.GetDefaultLensFile
	 */
	struct UCameraCalibrationSubsystem_GetDefaultLensFile_Params
	{
	public:
		class ULensFile*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgos
	 */
	struct UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgo
	 */
	struct UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationSteps
	 */
	struct UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Params
	{
	public:
		TArray<class FName>                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationStep
	 */
	struct UCameraCalibrationSubsystem_GetCameraCalibrationStep_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.FindOrCreateDistortionModelHandler
	 */
	struct UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Params
	{
	public:
		struct FDistortionHandlerPicker                            DistortionHandlerPicker;                                 // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UClass*                                              LensModelClass;                                          // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULensDistortionModelHandlerBase*                     ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.CameraCalibrationSubsystem.FindDistortionModelHandler
	 */
	struct UCameraCalibrationSubsystem_FindDistortionModelHandler_Params
	{
	public:
		struct FDistortionHandlerPicker                            DistortionHandlerPicker;                                 // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bUpdatePicker;                                           // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2501[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULensDistortionModelHandlerBase*                     ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensDistortionModelHandlerBase.SetDistortionState
	 */
	struct ULensDistortionModelHandlerBase_SetDistortionState_Params
	{
	public:
		struct FLensDistortionState                                InNewState;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensDistortionModelHandlerBase.IsModelSupported
	 */
	struct ULensDistortionModelHandlerBase_IsModelSupported_Params
	{
	public:
		class UClass*                                              ModelToSupport;                                          // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetUndistortionDisplacementMap
	 */
	struct ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensDistortionModelHandlerBase.GetDistortionDisplacementMap
	 */
	struct ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.RemoveZoomPoint
	 */
	struct ULensFile_RemoveZoomPoint_Params
	{
	public:
		ELensDataCategory                                          InDataCategory;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MOJG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InFocus;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InZoom;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.RemoveFocusPoint
	 */
	struct ULensFile_RemoveFocusPoint_Params
	{
	public:
		ELensDataCategory                                          InDataCategory;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MV8N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InFocus;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.HasSamples
	 */
	struct ULensFile_HasSamples_Params
	{
	public:
		ELensDataCategory                                          InDataCategory;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.HasIrisEncoderMapping
	 */
	struct ULensFile_HasIrisEncoderMapping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.HasFocusEncoderMapping
	 */
	struct ULensFile_HasFocusEncoderMapping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.GetSTMapPoints
	 */
	struct ULensFile_GetSTMapPoints_Params
	{
	public:
		TArray<struct FSTMapPointInfo>                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.GetSTMapPoint
	 */
	struct ULensFile_GetSTMapPoint_Params
	{
	public:
		float                                                      InFocus;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InZoom;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSTMapInfo                                          OutSTMapInfo;                                            // 0x0008(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.GetNodalOffsetPoints
	 */
	struct ULensFile_GetNodalOffsetPoints_Params
	{
	public:
		TArray<struct FNodalOffsetPointInfo>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.GetNodalOffsetPoint
	 */
	struct ULensFile_GetNodalOffsetPoint_Params
	{
	public:
		float                                                      InFocus;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InZoom;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7DDW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FNodalPointOffset                                   OutNodalPointOffset;                                     // 0x0010(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.GetImageCenterPoints
	 */
	struct ULensFile_GetImageCenterPoints_Params
	{
	public:
		TArray<struct FImageCenterPointInfo>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.GetImageCenterPoint
	 */
	struct ULensFile_GetImageCenterPoint_Params
	{
	public:
		float                                                      InFocus;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InZoom;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FImageCenterInfo                                    OutImageCenterInfo;                                      // 0x0008(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.GetFocalLengthPoints
	 */
	struct ULensFile_GetFocalLengthPoints_Params
	{
	public:
		TArray<struct FFocalLengthPointInfo>                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.GetFocalLengthPoint
	 */
	struct ULensFile_GetFocalLengthPoint_Params
	{
	public:
		float                                                      InFocus;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InZoom;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFocalLengthInfo                                    OutFocalLengthInfo;                                      // 0x0008(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.GetDistortionPoints
	 */
	struct ULensFile_GetDistortionPoints_Params
	{
	public:
		TArray<struct FDistortionPointInfo>                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.GetDistortionPoint
	 */
	struct ULensFile_GetDistortionPoint_Params
	{
	public:
		float                                                      InFocus;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InZoom;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDistortionInfo                                     OutDistortionInfo;                                       // 0x0008(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.EvaluateNormalizedIris
	 */
	struct ULensFile_EvaluateNormalizedIris_Params
	{
	public:
		float                                                      InNormalizedValue;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.EvaluateNormalizedFocus
	 */
	struct ULensFile_EvaluateNormalizedFocus_Params
	{
	public:
		float                                                      InNormalizedValue;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.EvaluateNodalPointOffset
	 */
	struct ULensFile_EvaluateNodalPointOffset_Params
	{
	public:
		float                                                      InFocus;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InZoom;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M0UP[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FNodalPointOffset                                   OutEvaluatedValue;                                       // 0x0010(0x0020)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.EvaluateImageCenterParameters
	 */
	struct ULensFile_EvaluateImageCenterParameters_Params
	{
	public:
		float                                                      InFocus;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InZoom;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FImageCenterInfo                                    OutEvaluatedValue;                                       // 0x0008(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.EvaluateFocalLength
	 */
	struct ULensFile_EvaluateFocalLength_Params
	{
	public:
		float                                                      InFocus;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InZoom;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFocalLengthInfo                                    OutEvaluatedValue;                                       // 0x0008(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.EvaluateDistortionParameters
	 */
	struct ULensFile_EvaluateDistortionParameters_Params
	{
	public:
		float                                                      InFocus;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InZoom;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDistortionInfo                                     OutEvaluatedValue;                                       // 0x0008(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.EvaluateDistortionData
	 */
	struct ULensFile_EvaluateDistortionData_Params
	{
	public:
		float                                                      InFocus;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InZoom;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InFilmback;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULensDistortionModelHandlerBase*                     InLensHandler;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.ClearData
	 */
	struct ULensFile_ClearData_Params
	{
	public:
		ELensDataCategory                                          InDataCategory;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.ClearAll
	 */
	struct ULensFile_ClearAll_Params
	{	};

	/**
	 * Function CameraCalibrationCore.LensFile.AddSTMapPoint
	 */
	struct ULensFile_AddSTMapPoint_Params
	{
	public:
		float                                                      NewFocus;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewZoom;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSTMapInfo                                          NewPoint;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.AddNodalOffsetPoint
	 */
	struct ULensFile_AddNodalOffsetPoint_Params
	{
	public:
		float                                                      NewFocus;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewZoom;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_URGN[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FNodalPointOffset                                   NewPoint;                                                // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.AddImageCenterPoint
	 */
	struct ULensFile_AddImageCenterPoint_Params
	{
	public:
		float                                                      NewFocus;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewZoom;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FImageCenterInfo                                    NewPoint;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.AddFocalLengthPoint
	 */
	struct ULensFile_AddFocalLengthPoint_Params
	{
	public:
		float                                                      NewFocus;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewZoom;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFocalLengthInfo                                    NewFocalLength;                                          // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CameraCalibrationCore.LensFile.AddDistortionPoint
	 */
	struct ULensFile_AddDistortionPoint_Params
	{
	public:
		float                                                      NewFocus;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewZoom;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDistortionInfo                                     NewPoint;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FFocalLengthInfo                                    NewFocalLength;                                          // 0x0018(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
