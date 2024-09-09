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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum CameraCalibrationCore.ECalibrationPointVisualization
	 */
	enum class ECalibrationPointVisualization : uint8_t
	{
		CalibrationPointVisualizationCube    = 0,
		CalibrationPointVisualizationPyramid = 1,
		MAX                                  = 2
	};

	/**
	 * Enum CameraCalibrationCore.ELensDataCategory
	 */
	enum class ELensDataCategory : uint8_t
	{
		Focus       = 0,
		Iris        = 1,
		Zoom        = 2,
		Distortion  = 3,
		ImageCenter = 4,
		STMap       = 5,
		NodalOffset = 6,
		MAX         = 7
	};

	/**
	 * Enum CameraCalibrationCore.ELensDataMode
	 */
	enum class ELensDataMode : uint8_t
	{
		Parameters = 0,
		STMap      = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CameraCalibrationCore.DistortionInfo
	 * Size -> 0x0010
	 */
	struct FDistortionInfo
	{
	public:
		TArray<float>                                              Parameters;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.FocalLengthInfo
	 * Size -> 0x0008
	 */
	struct FFocalLengthInfo
	{
	public:
		struct FVector2D                                           FxFy;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.ImageCenterInfo
	 * Size -> 0x0008
	 */
	struct FImageCenterInfo
	{
	public:
		struct FVector2D                                           PrincipalPoint;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.LensDistortionState
	 * Size -> 0x0020
	 */
	struct FLensDistortionState
	{
	public:
		struct FDistortionInfo                                     DistortionInfo;                                          // 0x0000(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FFocalLengthInfo                                    FocalLengthInfo;                                         // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FImageCenterInfo                                    ImageCenter;                                             // 0x0018(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.LensInfo
	 * Size -> 0x0030
	 */
	struct FLensInfo
	{
	public:
		class FString                                              LensModelName;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LensSerialNumber;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LensModel;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SensorDimensions;                                        // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.EncodersTable
	 * Size -> 0x0100
	 */
	struct FEncodersTable
	{
	public:
		struct FRichCurve                                          Focus;                                                   // 0x0000(0x0080) NativeAccessSpecifierPublic
		struct FRichCurve                                          Iris;                                                    // 0x0080(0x0080) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.BaseLensTable
	 * Size -> 0x0010
	 */
	struct FBaseLensTable
	{
	public:
		unsigned char                                              UnknownData_7E5F[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class ULensFile>                            LensFile;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct CameraCalibrationCore.BaseFocusPoint
	 * Size -> 0x0008
	 */
	struct FBaseFocusPoint
	{
	public:
		unsigned char                                              UnknownData_5VTP[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CameraCalibrationCore.DistortionZoomPoint
	 * Size -> 0x0018
	 */
	struct FDistortionZoomPoint
	{
	public:
		float                                                      Zoom;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2D8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDistortionInfo                                     DistortionInfo;                                          // 0x0008(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.DistortionFocusPoint
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FDistortionFocusPoint : public FBaseFocusPoint
	{
	public:
		float                                                      Focus;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E96K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          MapBlendingCurve;                                        // 0x0010(0x0080) NativeAccessSpecifierPublic
		TArray<struct FDistortionZoomPoint>                        ZoomPoints;                                              // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.DistortionTable
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FDistortionTable : public FBaseLensTable
	{
	public:
		TArray<struct FDistortionFocusPoint>                       FocusPoints;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.FocalLengthZoomPoint
	 * Size -> 0x0010
	 */
	struct FFocalLengthZoomPoint
	{
	public:
		float                                                      Zoom;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFocalLengthInfo                                    FocalLengthInfo;                                         // 0x0004(0x0008) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsCalibrationPoint;                                     // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RX0Q[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CameraCalibrationCore.FocalLengthFocusPoint
	 * Size -> 0x0118 (FullSize[0x0120] - InheritedSize[0x0008])
	 */
	struct FFocalLengthFocusPoint : public FBaseFocusPoint
	{
	public:
		float                                                      Focus;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SMIC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          Fx;                                                      // 0x0010(0x0080) NativeAccessSpecifierPublic
		struct FRichCurve                                          Fy;                                                      // 0x0090(0x0080) NativeAccessSpecifierPublic
		TArray<struct FFocalLengthZoomPoint>                       ZoomPoints;                                              // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.FocalLengthTable
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FFocalLengthTable : public FBaseLensTable
	{
	public:
		TArray<struct FFocalLengthFocusPoint>                      FocusPoints;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.ImageCenterFocusPoint
	 * Size -> 0x0108 (FullSize[0x0110] - InheritedSize[0x0008])
	 */
	struct FImageCenterFocusPoint : public FBaseFocusPoint
	{
	public:
		float                                                      Focus;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFBL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          Cx;                                                      // 0x0010(0x0080) NativeAccessSpecifierPublic
		struct FRichCurve                                          Cy;                                                      // 0x0090(0x0080) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.ImageCenterTable
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FImageCenterTable : public FBaseLensTable
	{
	public:
		TArray<struct FImageCenterFocusPoint>                      FocusPoints;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.NodalOffsetFocusPoint
	 * Size -> 0x0308 (FullSize[0x0310] - InheritedSize[0x0008])
	 */
	struct FNodalOffsetFocusPoint : public FBaseFocusPoint
	{
	public:
		float                                                      Focus;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84EU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          LocationOffset[0x3];                                     // 0x0010(0x0180) NativeAccessSpecifierPublic
		struct FRichCurve                                          RotationOffset[0x3];                                     // 0x0190(0x0180) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.NodalOffsetTable
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FNodalOffsetTable : public FBaseLensTable
	{
	public:
		TArray<struct FNodalOffsetFocusPoint>                      FocusPoints;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.STMapInfo
	 * Size -> 0x0008
	 */
	struct FSTMapInfo
	{
	public:
		class UTexture*                                            DistortionMap;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.DistortionData
	 * Size -> 0x0018
	 */
	struct FDistortionData
	{
	public:
		TArray<struct FVector2D>                                   DistortedUVs;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		float                                                      OverscanFactor;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H52G[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CameraCalibrationCore.DerivedDistortionData
	 * Size -> 0x0030
	 */
	struct FDerivedDistortionData
	{
	public:
		struct FDistortionData                                     DistortionData;                                          // 0x0000(0x0018) Edit, EditConst, NativeAccessSpecifierPublic
		class UTextureRenderTarget2D*                              UndistortionDisplacementMap;                             // 0x0018(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureRenderTarget2D*                              DistortionDisplacementMap;                               // 0x0020(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJME[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CameraCalibrationCore.STMapZoomPoint
	 * Size -> 0x0048
	 */
	struct FSTMapZoomPoint
	{
	public:
		float                                                      Zoom;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D7IA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSTMapInfo                                          STMapInfo;                                               // 0x0008(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FDerivedDistortionData                              DerivedDistortionData;                                   // 0x0010(0x0030) Transient, NativeAccessSpecifierPublic
		bool                                                       bIsCalibrationPoint;                                     // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JA3M[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CameraCalibrationCore.STMapFocusPoint
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FSTMapFocusPoint : public FBaseFocusPoint
	{
	public:
		float                                                      Focus;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYWV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          MapBlendingCurve;                                        // 0x0010(0x0080) NativeAccessSpecifierPublic
		TArray<struct FSTMapZoomPoint>                             ZoomPoints;                                              // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.STMapTable
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FSTMapTable : public FBaseLensTable
	{
	public:
		TArray<struct FSTMapFocusPoint>                            FocusPoints;                                             // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.LensDataCategoryEditorColor
	 * Size -> 0x001C
	 */
	struct FLensDataCategoryEditorColor
	{
	public:
		struct FColor                                              Focus;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Iris;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Zoom;                                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Distortion;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ImageCenter;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              STMap;                                                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              NodalOffset;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.DistortionHandlerPicker
	 * Size -> 0x0028
	 */
	struct FDistortionHandlerPicker
	{
	public:
		class UCineCameraComponent*                                TargetCameraComponent;                                   // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               DistortionProducerID;                                    // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HandlerDisplayName;                                      // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.DataTablePointInfoBase
	 * Size -> 0x0008
	 */
	struct FDataTablePointInfoBase
	{
	public:
		float                                                      Focus;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Zoom;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.NodalPointOffset
	 * Size -> 0x0020
	 */
	struct FNodalPointOffset
	{
	public:
		struct FVector                                             LocationOffset;                                          // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZ5M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               RotationOffset;                                          // 0x0010(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.NodalOffsetPointInfo
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FNodalOffsetPointInfo : public FDataTablePointInfoBase
	{
	public:
		unsigned char                                              UnknownData_KF86[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNodalPointOffset                                   NodalPointOffset;                                        // 0x0010(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.ImageCenterPointInfo
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FImageCenterPointInfo : public FDataTablePointInfoBase
	{
	public:
		struct FImageCenterInfo                                    ImageCenterInfo;                                         // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.STMapPointInfo
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FSTMapPointInfo : public FDataTablePointInfoBase
	{
	public:
		struct FSTMapInfo                                          STMapInfo;                                               // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.FocalLengthPointInfo
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FFocalLengthPointInfo : public FDataTablePointInfoBase
	{
	public:
		struct FFocalLengthInfo                                    FocalLengthInfo;                                         // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.DistortionPointInfo
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FDistortionPointInfo : public FDataTablePointInfoBase
	{
	public:
		struct FDistortionInfo                                     DistortionInfo;                                          // 0x0008(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.LensFilePicker
	 * Size -> 0x0010
	 */
	struct FLensFilePicker
	{
	public:
		bool                                                       bUseDefaultLensFile;                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CC2X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULensFile*                                           LensFile;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CameraCalibrationCore.SphericalDistortionParameters
	 * Size -> 0x0014
	 */
	struct FSphericalDistortionParameters
	{
	public:
		float                                                      K1;                                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2;                                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K3;                                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      P1;                                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      P2;                                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
