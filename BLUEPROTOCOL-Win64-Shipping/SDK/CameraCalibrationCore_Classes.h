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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class CameraCalibrationCore.CalibrationPointComponent
	 * Size -> 0x0068 (FullSize[0x0560] - InheritedSize[0x04F8])
	 */
	class UCalibrationPointComponent : public UProceduralMeshComponent
	{
	public:
		TMap<class FString, struct FVector>                        SubPoints;                                               // 0x04F8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bVisualizePointsInEditor;                                // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXGO[0x3];                                   // 0x0549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PointVisualizationScale;                                 // 0x054C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECalibrationPointVisualization                             VisualizationShape;                                      // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVIW[0xF];                                   // 0x0551(0x000F) MISSED OFFSET (PADDING)

	public:
		void RebuildVertices();
		bool NamespacedSubpointName(const class FString& InSubpointName, class FString* OutNamespacedName);
		bool GetWorldLocation(const class FString& InPointName, struct FVector* OutLocation);
		void GetNamespacedPointNames(TArray<class FString>* OutNamespacedNames);
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.CameraCalibrationCheckerboard
	 * Size -> 0x0058 (FullSize[0x0280] - InheritedSize[0x0228])
	 */
	class ACameraCalibrationCheckerboard : public AActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCalibrationPointComponent*                          TopLeft;                                                 // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCalibrationPointComponent*                          TopRight;                                                // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCalibrationPointComponent*                          BottomLeft;                                              // 0x0240(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCalibrationPointComponent*                          BottomRight;                                             // 0x0248(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCalibrationPointComponent*                          Center;                                                  // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCornerRows;                                           // 0x0258(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCornerCols;                                           // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SquareSideLength;                                        // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         CubeMesh;                                                // 0x0268(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  OddCubeMaterial;                                         // 0x0270(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  EvenCubeMaterial;                                        // 0x0278(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void Rebuild();
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.CameraCalibrationSettings
	 * Size -> 0x0128 (FullSize[0x0160] - InheritedSize[0x0038])
	 */
	class UCameraCalibrationSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              StartupLensFile[0x28];                                   // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FIntPoint                                           DisplacementMapResolution;                               // 0x0060(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CalibrationInputTolerance;                               // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5X8Q[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultUndistortionDisplacementMaterials[0x50];          // 0x0070(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              DefaultDistortionDisplacementMaterials[0x50];            // 0x00C0(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              DefaultDistortionMaterials[0x50];                        // 0x0110(0x0050) UNKNOWN PROPERTY: MapProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.CameraCalibrationEditorSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UCameraCalibrationEditorSettings : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.CameraCalibrationStep
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCameraCalibrationStep : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.CameraCalibrationSubsystem
	 * Size -> 0x01F0 (FullSize[0x0220] - InheritedSize[0x0030])
	 */
	class UCameraCalibrationSubsystem : public UEngineSubsystem
	{
	public:
		class ULensFile*                                           DefaultLensFile;                                         // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, class UClass*>                           LensModelMap;                                            // 0x0038(0x0050) Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		TMap<class FName, class UClass*>                           CameraNodalOffsetAlgosMap;                               // 0x0088(0x0050) Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		TMap<class FName, class UClass*>                           CameraCalibrationStepsMap;                               // 0x00D8(0x0050) Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5X3H[0xF8];                                  // 0x0128(0x00F8) MISSED OFFSET (PADDING)

	public:
		void UnregisterDistortionModelHandler(class UCineCameraComponent* Component, class ULensDistortionModelHandlerBase* Handler);
		void SetDefaultLensFile(class ULensFile* NewDefaultLensFile);
		class UClass* GetRegisteredLensModel(const class FName& ModelName);
		class ULensFile* GetLensFile(const struct FLensFilePicker& Picker);
		TArray<class ULensDistortionModelHandlerBase*> GetDistortionModelHandlers(class UCineCameraComponent* Component);
		class ULensFile* GetDefaultLensFile();
		TArray<class FName> GetCameraNodalOffsetAlgos();
		class UClass* GetCameraNodalOffsetAlgo(const class FName& Name);
		TArray<class FName> GetCameraCalibrationSteps();
		class UClass* GetCameraCalibrationStep(const class FName& Name);
		class ULensDistortionModelHandlerBase* FindOrCreateDistortionModelHandler(struct FDistortionHandlerPicker* DistortionHandlerPicker, class UClass* LensModelClass);
		class ULensDistortionModelHandlerBase* FindDistortionModelHandler(struct FDistortionHandlerPicker* DistortionHandlerPicker, bool bUpdatePicker);
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.CameraLensDistortionAlgo
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCameraLensDistortionAlgo : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.CameraNodalOffsetAlgo
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCameraNodalOffsetAlgo : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.LensDistortionModelHandlerBase
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class ULensDistortionModelHandlerBase : public UObject
	{
	public:
		class UClass*                                              LensModelClass;                                          // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            DistortionPostProcessMID;                                // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLensDistortionState                                CurrentState;                                            // 0x0038(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class FString                                              DisplayName;                                             // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OverscanFactor;                                          // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UQDS[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            UndistortionDisplacementMapMID;                          // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            DistortionDisplacementMapMID;                            // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextureRenderTarget2D*                              UndistortionDisplacementMapRT;                           // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextureRenderTarget2D*                              DistortionDisplacementMapRT;                             // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               DistortionProducerID;                                    // 0x0090(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GXRX[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetDistortionState(const struct FLensDistortionState& InNewState);
		bool IsModelSupported(class UClass* ModelToSupport);
		class UTextureRenderTarget2D* GetUndistortionDisplacementMap();
		class UTextureRenderTarget2D* GetDistortionDisplacementMap();
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.LensFile
	 * Size -> 0x0260 (FullSize[0x0288] - InheritedSize[0x0028])
	 */
	class ULensFile : public UObject
	{
	public:
		unsigned char                                              UnknownData_EVG8[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLensInfo                                           LensInfo;                                                // 0x0030(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		ELensDataMode                                              DataMode;                                                // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0D6A[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         UserMetadata;                                            // 0x0068(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEncodersTable                                      EncodersTable;                                           // 0x00B8(0x0100) NativeAccessSpecifierPublic
		struct FDistortionTable                                    DistortionTable;                                         // 0x01B8(0x0020) NativeAccessSpecifierPublic
		struct FFocalLengthTable                                   FocalLengthTable;                                        // 0x01D8(0x0020) NativeAccessSpecifierPublic
		struct FImageCenterTable                                   ImageCenterTable;                                        // 0x01F8(0x0020) NativeAccessSpecifierPublic
		struct FNodalOffsetTable                                   NodalOffsetTable;                                        // 0x0218(0x0020) NativeAccessSpecifierPublic
		struct FSTMapTable                                         STMapTable;                                              // 0x0238(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3OLR[0x10];                                  // 0x0258(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTextureRenderTarget2D*>                      UndistortionDisplacementMapHolders;                      // 0x0268(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UTextureRenderTarget2D*>                      DistortionDisplacementMapHolders;                        // 0x0278(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		void RemoveZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InZoom);
		void RemoveFocusPoint(ELensDataCategory InDataCategory, float InFocus);
		bool HasSamples(ELensDataCategory InDataCategory);
		bool HasIrisEncoderMapping();
		bool HasFocusEncoderMapping();
		TArray<struct FSTMapPointInfo> GetSTMapPoints();
		bool GetSTMapPoint(float InFocus, float InZoom, struct FSTMapInfo* OutSTMapInfo);
		TArray<struct FNodalOffsetPointInfo> GetNodalOffsetPoints();
		bool GetNodalOffsetPoint(float InFocus, float InZoom, struct FNodalPointOffset* OutNodalPointOffset);
		TArray<struct FImageCenterPointInfo> GetImageCenterPoints();
		bool GetImageCenterPoint(float InFocus, float InZoom, struct FImageCenterInfo* OutImageCenterInfo);
		TArray<struct FFocalLengthPointInfo> GetFocalLengthPoints();
		bool GetFocalLengthPoint(float InFocus, float InZoom, struct FFocalLengthInfo* OutFocalLengthInfo);
		TArray<struct FDistortionPointInfo> GetDistortionPoints();
		bool GetDistortionPoint(float InFocus, float InZoom, struct FDistortionInfo* OutDistortionInfo);
		float EvaluateNormalizedIris(float InNormalizedValue);
		float EvaluateNormalizedFocus(float InNormalizedValue);
		bool EvaluateNodalPointOffset(float InFocus, float InZoom, struct FNodalPointOffset* OutEvaluatedValue);
		bool EvaluateImageCenterParameters(float InFocus, float InZoom, struct FImageCenterInfo* OutEvaluatedValue);
		bool EvaluateFocalLength(float InFocus, float InZoom, struct FFocalLengthInfo* OutEvaluatedValue);
		bool EvaluateDistortionParameters(float InFocus, float InZoom, struct FDistortionInfo* OutEvaluatedValue);
		bool EvaluateDistortionData(float InFocus, float InZoom, const struct FVector2D& InFilmback, class ULensDistortionModelHandlerBase* InLensHandler);
		void ClearData(ELensDataCategory InDataCategory);
		void ClearAll();
		void AddSTMapPoint(float NewFocus, float NewZoom, const struct FSTMapInfo& NewPoint);
		void AddNodalOffsetPoint(float NewFocus, float NewZoom, const struct FNodalPointOffset& NewPoint);
		void AddImageCenterPoint(float NewFocus, float NewZoom, const struct FImageCenterInfo& NewPoint);
		void AddFocalLengthPoint(float NewFocus, float NewZoom, const struct FFocalLengthInfo& NewFocalLength);
		void AddDistortionPoint(float NewFocus, float NewZoom, const struct FDistortionInfo& NewPoint, const struct FFocalLengthInfo& NewFocalLength);
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.LensModel
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULensModel : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.SphericalLensDistortionModelHandler
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class USphericalLensDistortionModelHandler : public ULensDistortionModelHandlerBase
	{
	public:
		unsigned char                                              UnknownData_IKDF[0x18];                                  // 0x00A8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CameraCalibrationCore.SphericalLensModel
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USphericalLensModel : public ULensModel
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
