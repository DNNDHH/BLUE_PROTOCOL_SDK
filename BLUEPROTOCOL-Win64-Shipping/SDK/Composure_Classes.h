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
	 * Class Composure.CompEditorImagePreviewInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCompEditorImagePreviewInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompImageColorPickerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCompImageColorPickerInterface : public UCompEditorImagePreviewInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposurePipelineBaseActor
	 * Size -> 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
	 */
	class AComposurePipelineBaseActor : public AActor
	{
	public:
		bool                                                       bAutoRun;                                                // 0x0228(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoRunChildElementsAndSelf;                            // 0x0229(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_USFW[0x16];                                  // 0x022A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetAutoRunChildrenAndSelf(bool bAutoRunChildAndSelf);
		void SetAutoRun(bool bNewAutoRunVal);
		bool IsActivelyRunning();
		void EnqueueRendering(bool bCameraCutThisFrame);
		bool AreChildrenAndSelfAutoRun();
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingElement
	 * Size -> 0x02D8 (FullSize[0x0518] - InheritedSize[0x0240])
	 */
	class ACompositingElement : public AComposurePipelineBaseActor
	{
	public:
		unsigned char                                              UnknownData_D6DZ[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UComposureCompositingTargetComponent*                CompositingTarget;                                       // 0x0248(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UComposurePostProcessingPassProxy*                   PostProcessProxy;                                        // 0x0250(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UCompositingElementInput*>                    Inputs;                                                  // 0x0258(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UCompositingElementTransform*>                TransformPasses;                                         // 0x0268(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UCompositingElementOutput*>                   Outputs;                                                 // 0x0278(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		ESceneCameraLinkType                                       CameraSource;                                            // 0x0288(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GI9Z[0x3];                                   // 0x0289(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TLazyObjectPtr<class ACameraActor>                         TargetCameraActor;                                       // 0x028C(0x001C) Edit, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInheritedSourceType                                       ResolutionSource;                                        // 0x02A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I18M[0x3];                                   // 0x02A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FIntPoint                                           RenderResolution;                                        // 0x02AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextureRenderTargetFormat                                 RenderFormat;                                            // 0x02B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSharedTargetPool;                                    // 0x02B5(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59LM[0x32];                                  // 0x02B6(0x0032) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FreezeFrameMask;                                         // 0x02E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K2GL[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTransformPassRendered_BP;                              // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFinalPassRendered_BP;                                  // 0x0300(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FName                                                CompShotIdName;                                          // 0x0310(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ACompositingElement*                                 Parent;                                                  // 0x0318(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ACompositingElement*>                         ChildLayers;                                             // 0x0320(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QA5K[0x4];                                   // 0x0330(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OutputOpacity;                                           // 0x0334(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class UCompositingElementInput*, ECompPassConstructionType> UserConstructedInputs;                                   // 0x0338(0x0050) NativeAccessSpecifierPrivate
		TMap<class UCompositingElementTransform*, ECompPassConstructionType> UserConstructedTransforms;                               // 0x0388(0x0050) NativeAccessSpecifierPrivate
		TMap<class UCompositingElementOutput*, ECompPassConstructionType> UserConstructedOutputs;                                  // 0x03D8(0x0050) NativeAccessSpecifierPrivate
		TArray<class UCompositingElementInput*>                    InternalInputs;                                          // 0x0428(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPrivate, CPF_SkipSerialization
		TArray<class UCompositingElementTransform*>                InternalTransformPasses;                                 // 0x0438(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPrivate, CPF_SkipSerialization
		TArray<class UCompositingElementOutput*>                   InternalOutputs;                                         // 0x0448(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPrivate, CPF_SkipSerialization
		class UAlphaTransformPass*                                 InternalAlphaPass;                                       // 0x0458(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YUMW[0xB8];                                  // 0x0460(0x00B8) MISSED OFFSET (PADDING)

	public:
		void SetTargetCamera(class ACameraActor* NewCameraActor);
		void SetRenderResolution(const struct FIntPoint& NewResolution);
		void SetOpacity(float NewOpacity);
		void SetElementName(const class FName& NewName);
		void SetEditorColorPickingTarget(class UTextureRenderTarget2D* PickingTarget);
		void SetEditorColorPickerDisplayImage(class UTexture* PickerDisplayImage);
		class UTextureRenderTarget2D* RequestNamedRenderTarget(const class FName& ReferenceName, float RenderPercentage, ETargetUsageFlags UsageTag);
		class UTextureRenderTarget2D* RenderCompositingMaterialToTarget(struct FCompositingMaterial* CompMaterial, class UTextureRenderTarget2D* RenderTarget, const class FName& ResultLookupName);
		class UTexture* RenderCompositingMaterial(struct FCompositingMaterial* CompMaterial, float RenderScale, const class FName& ResultLookupName, ETargetUsageFlags UsageTag);
		class UTexture* RenderCompElement(bool bCameraCutThisFrame);
		bool ReleaseOwnedTarget(class UTextureRenderTarget2D* OwnedTarget);
		void RegisterPassResult(const class FName& ReferenceName, class UTexture* PassResult, bool bSetAsLatestRenderResult);
		bool IsSubElement();
		TArray<class UCompositingElementTransform*> GetTransformsList();
		struct FIntPoint GetRenderResolution();
		int32_t GetRenderPriority();
		TArray<class UCompositingElementOutput*> GetOutputsList();
		float GetOpacity();
		class UTexture* GetLatestRenderResult();
		TArray<class UCompositingElementInput*> GetInputsList();
		class ACompositingElement* GetElementParent();
		class FName GetCompElementName();
		TArray<class ACompositingElement*> GetChildElements();
		class UCompositingElementTransform* FindTransformPass(class UClass* TransformType, class UTexture** PassResult, const class FName& OptionalPassName);
		class ACameraActor* FindTargetCamera();
		class UCompositingElementOutput* FindOutputPass(class UClass* OutputType, const class FName& OptionalPassName);
		class UTexture* FindNamedRenderResult(const class FName& PassName, bool bSearchSubElements);
		class UCompositingElementInput* FindInputPass(class UClass* InputType, class UTexture** PassResult, const class FName& OptionalPassName);
		bool DeletePass(class UCompositingElementPass* PassToDelete);
		class UCompositingElementTransform* CreateNewTransformPass(const class FName& PassName, class UClass* TransformType);
		class UCompositingElementOutput* CreateNewOutputPass(const class FName& PassName, class UClass* OutputType);
		class UCompositingElementInput* CreateNewInputPass(const class FName& PassName, class UClass* InputType);
		class UCompositingElementTransform* AddNewTransformPass(const class FName& PassName, class UClass* TransformType);
		class UCompositingElementOutput* AddNewOutputPass(const class FName& PassName, class UClass* OutputType);
		class UCompositingElementInput* AddNewInputPass(const class FName& PassName, class UClass* InputType);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingCaptureBase
	 * Size -> 0x0048 (FullSize[0x0560] - InheritedSize[0x0518])
	 */
	class ACompositingCaptureBase : public ACompositingElement
	{
	public:
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D;                                 // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyDistortion;                                        // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E845[0x7];                                   // 0x0521(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDistortionHandlerPicker                            DistortionSource;                                        // 0x0528(0x0028) Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		float                                                      OverscanFactor;                                          // 0x0550(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OriginalFocalLength;                                     // 0x0554(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            LastDistortionMID;                                       // 0x0558(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UpdateDistortion();
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingPickerAsyncTask
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UCompositingPickerAsyncTask : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_VCK7[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPick;                                                  // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAccept;                                                // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UTextureRenderTarget2D*                              PickerTarget;                                            // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            PickerDisplayImage;                                      // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q14D[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		class UCompositingPickerAsyncTask* OpenCompositingPicker(class UTextureRenderTarget2D* PickerTarget, class UTexture* DisplayImage, const class FText& WindowTitle, bool bAverageColorOnDrag, bool bUseImplicitGamma);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingElementPass
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UCompositingElementPass : public UObject
	{
	public:
		bool                                                       bEnabled;                                                // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8ZH4[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PassName;                                                // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F4RP[0x2C];                                  // 0x0034(0x002C) MISSED OFFSET (PADDING)

	public:
		void SetPassEnabled(bool bSetEnabledTo);
		void Reset();
		class UTextureRenderTarget2D* RequestRenderTarget(const struct FIntPoint& Dimensions, ETextureRenderTargetFormat Format);
		class UTextureRenderTarget2D* RequestNativelyFormattedTarget(float RenderScale);
		bool ReleaseRenderTarget(class UTextureRenderTarget2D* AssignedTarget);
		void OnFrameEnd();
		void OnFrameBegin(bool bCameraCutThisFrame);
		void OnEnabled();
		void OnDisabled();
		bool IsPassEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingElementInput
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UCompositingElementInput : public UCompositingElementPass
	{
	public:
		bool                                                       bIntermediate;                                           // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXTY[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		class UTexture* GenerateInput();
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingMediaInput
	 * Size -> 0x0170 (FullSize[0x01D8] - InheritedSize[0x0068])
	 */
	class UCompositingMediaInput : public UCompositingElementInput
	{
	public:
		struct FCompositingMaterial                                MediaTransformMaterial;                                  // 0x0068(0x0158) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  DefaultMaterial;                                         // 0x01C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  DefaultTestPlateMaterial;                                // 0x01C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            FallbackMID;                                             // 0x01D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.MediaTextureCompositingInput
	 * Size -> 0x0008 (FullSize[0x01E0] - InheritedSize[0x01D8])
	 */
	class UMediaTextureCompositingInput : public UCompositingMediaInput
	{
	public:
		class UMediaTexture*                                       MediaSource;                                             // 0x01D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingInputInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCompositingInputInterface : public UInterface
	{
	public:
		void OnFrameEnd(class UCompositingInputInterfaceProxy* Proxy);
		void OnFrameBegin(class UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame);
		class UTexture* GenerateInput(class UCompositingInputInterfaceProxy* Proxy);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingInputInterfaceProxy
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UCompositingInputInterfaceProxy : public UCompositingElementInput
	{
	public:
		unsigned char                                              CompositingInput[0x10];                                  // 0x0068(0x0010) UNKNOWN PROPERTY: InterfaceProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingElementOutput
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UCompositingElementOutput : public UCompositingElementPass
	{
	public:
		void RelayOutput(class UTexture* FinalResult, class UComposurePostProcessingPassProxy* PostProcessProxy);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ColorConverterOutputPass
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UColorConverterOutputPass : public UCompositingElementOutput
	{
	public:
		unsigned char                                              UnknownData_3BQA[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCompositingElementTransform*                        ColorConverter;                                          // 0x0068(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DefaultConverterClass;                                   // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingMediaCaptureOutput
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class UCompositingMediaCaptureOutput : public UColorConverterOutputPass
	{
	public:
		class UMediaOutput*                                        CaptureOutput;                                           // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaCapture*                                       ActiveCapture;                                           // 0x0080(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.RenderTargetCompositingOutput
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class URenderTargetCompositingOutput : public UCompositingElementOutput
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.EXRFileCompositingOutput
	 * Size -> 0x0038 (FullSize[0x0098] - InheritedSize[0x0060])
	 */
	class UEXRFileCompositingOutput : public UCompositingElementOutput
	{
	public:
		struct FDirectoryPath                                      OutputDirectiory;                                        // 0x0060(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              FilenameFormat;                                          // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameRate                                          OutputFrameRate;                                         // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EExrCompressionOptions                                     Compression;                                             // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H51L[0xF];                                   // 0x0089(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingElementTransform
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UCompositingElementTransform : public UCompositingElementPass
	{
	public:
		bool                                                       bIntermediate;                                           // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L71P[0xF];                                   // 0x0061(0x000F) MISSED OFFSET (PADDING)

	public:
		class UTexture* FindNamedPrePassResult(const class FName& PassLookupName);
		class UTexture* ApplyTransform(class UTexture* Input, class UComposurePostProcessingPassProxy* PostProcessProxy, class ACameraActor* TargetCamera);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingPostProcessPass
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UCompositingPostProcessPass : public UCompositingElementTransform
	{
	public:
		float                                                      RenderScale;                                             // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSXY[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UComposurePostProcessPassPolicy*>             PostProcessPasses;                                       // 0x0078(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingElementMaterialPass
	 * Size -> 0x0158 (FullSize[0x01E0] - InheritedSize[0x0088])
	 */
	class UCompositingElementMaterialPass : public UCompositingPostProcessPass
	{
	public:
		struct FCompositingMaterial                                Material;                                                // 0x0088(0x0158) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		bool SetParameterMapping(const class FName& TextureParamName, const class FName& ComposureLayerName);
		void SetMaterialInterface(class UMaterialInterface* NewMaterial);
		void ApplyMaterialParams(class UMaterialInstanceDynamic* Mid);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingTonemapPass
	 * Size -> 0x0170 (FullSize[0x01E0] - InheritedSize[0x0070])
	 */
	class UCompositingTonemapPass : public UCompositingElementTransform
	{
	public:
		struct FColorGradingSettings                               ColorGradingSettings;                                    // 0x0070(0x0150) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FFilmStockSettings                                  FilmStockSettings;                                       // 0x01C0(0x0014) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ChromaticAberration;                                     // 0x01D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UComposureTonemapperPassPolicy*                      TonemapPolicy;                                           // 0x01D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.MultiPassChromaKeyer
	 * Size -> 0x0170 (FullSize[0x01E0] - InheritedSize[0x0070])
	 */
	class UMultiPassChromaKeyer : public UCompositingElementTransform
	{
	public:
		TArray<struct FLinearColor>                                KeyColors;                                               // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCompositingMaterial                                KeyerMaterial;                                           // 0x0080(0x0158) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTexture*                                            DefaultWhiteTexture;                                     // 0x01D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.MultiPassDespill
	 * Size -> 0x0170 (FullSize[0x01E0] - InheritedSize[0x0070])
	 */
	class UMultiPassDespill : public UCompositingElementTransform
	{
	public:
		TArray<struct FLinearColor>                                KeyColors;                                               // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCompositingMaterial                                KeyerMaterial;                                           // 0x0080(0x0158) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTexture*                                            DefaultWhiteTexture;                                     // 0x01D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.AlphaTransformPass
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UAlphaTransformPass : public UCompositingElementTransform
	{
	public:
		float                                                      AlphaScale;                                              // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U87B[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  DefaultMaterial;                                         // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            AlphaTransformMID;                                       // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingOpenColorIOPass
	 * Size -> 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
	 */
	class UCompositingOpenColorIOPass : public UCompositingElementTransform
	{
	public:
		struct FOpenColorIOColorConversionSettings                 ColorConversionSettings;                                 // 0x0070(0x0058) Edit, BlueprintVisible, Interp, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposureBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UComposureBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetUVMapSettingsToMaterialParameters(const struct FComposureUVMapSettings& UVMapSettings, class UMaterialInstanceDynamic* Material);
		void RequestRedrawComposureViewport();
		bool RenameComposureElement(const class FName& OriginalElementName, const class FName& NewElementName);
		void RefreshComposureElementList();
		bool IsComposureElementDrawing(class ACompositingElement* CompElement);
		void InvertUVDisplacementMapEncodingParameters(const struct FVector2D& In, struct FVector2D* Out);
		void GetRedGreenUVFactorsFromChromaticAberration(float ChromaticAberrationAmount, struct FVector2D* RedGreenUVFactors);
		void GetProjectionMatrixFromPostMoveSettings(const struct FComposurePostMoveSettings& PostMoveSettings, float HorizontalFOVAngle, float AspectRatio, struct FMatrix* ProjectionMatrix);
		void GetPlayerDisplayGamma(class APlayerCameraManager* PlayerCameraManager, float* DisplayGamma);
		void GetCroppingUVTransformationMatrixFromPostMoveSettings(const struct FComposurePostMoveSettings& PostMoveSettings, float AspectRatio, struct FMatrix* CropingUVTransformationMatrix, struct FMatrix* UncropingUVTransformationMatrix);
		class ACompositingElement* GetComposureElement(const class FName& ElementName);
		void DeleteComposureElementAndChildren(const class FName& ElementToDelete);
		class UComposurePlayerCompositingTarget* CreatePlayerCompositingTarget(class UObject* WorldContextObject);
		class ACompositingElement* CreateComposureElement(const class FName& ElementName, class UClass* ClassType, class AActor* LevelContext);
		void CopyCameraSettingsToSceneCapture(class UCameraComponent* SrcCamera, class USceneCaptureComponent2D* DstCaptureComponent, float OriginalFocalLength, float OverscanFactor);
		bool AttachComposureElement(const class FName& ParentName, const class FName& ChildName);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposureGameSettings
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UComposureGameSettings : public UObject
	{
	public:
		struct FSoftObjectPath                                     StaticVideoPlateDebugImage;                              // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSceneCapWarnOfMissingCam;                               // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDEL[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     FallbackCompositingTexture;                              // 0x0048(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            FallbackCompositingTextureObj;                           // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposurePostProcessPass
	 * Size -> 0x0020 (FullSize[0x0228] - InheritedSize[0x0208])
	 */
	class UComposurePostProcessPass : public USceneComponent
	{
	public:
		class USceneCaptureComponent2D*                            SceneCapture;                                            // 0x0208(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UComposurePostProcessBlendable*                      BlendableInterface;                                      // 0x0210(0x0008) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  SetupMaterial;                                           // 0x0218(0x0008) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  TonemapperReplacement;                                   // 0x0220(0x0008) ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSetupMaterial(class UMaterialInterface* Material);
		void SetOutputRenderTarget(class UTextureRenderTarget2D* RenderTarget);
		class UMaterialInterface* GetSetupMaterial();
		class UTextureRenderTarget2D* GetOutputRenderTarget();
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposureLensBloomPass
	 * Size -> 0x00C8 (FullSize[0x02F0] - InheritedSize[0x0228])
	 */
	class UComposureLensBloomPass : public UComposurePostProcessPass
	{
	public:
		struct FLensBloomSettings                                  Settings;                                                // 0x0228(0x00B8) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            TonemapperReplacingMID;                                  // 0x02E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F8WZ[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetTonemapperReplacingMaterial(class UMaterialInstanceDynamic* Material);
		void BloomToRenderTarget();
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposurePostProcessPassPolicy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UComposurePostProcessPassPolicy : public UObject
	{
	public:
		void SetupPostProcess(class USceneCaptureComponent2D* SceneCapture, class UMaterialInterface** TonemapperOverride);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposureLensBloomPassPolicy
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UComposureLensBloomPassPolicy : public UComposurePostProcessPassPolicy
	{
	public:
		struct FLensBloomSettings                                  Settings;                                                // 0x0028(0x00B8) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ReplacementMaterial;                                     // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BloomIntensityParamName;                                 // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            TonemapperReplacmentMID;                                 // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposurePlayerCompositingCameraModifier
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UComposurePlayerCompositingCameraModifier : public UCameraModifier
	{
	public:
		unsigned char                                              UnknownData_H1QI[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Target[0x10];                                            // 0x0050(0x0010) UNKNOWN PROPERTY: InterfaceProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposurePlayerCompositingInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UComposurePlayerCompositingInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposurePlayerCompositingTarget
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UComposurePlayerCompositingTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_A0LZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerCameraManager*                                PlayerCameraManager;                                     // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UComposurePlayerCompositingCameraModifier*           PlayerCameraModifier;                                    // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            ReplaceTonemapperMID;                                    // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XKIJ[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetRenderTarget(class UTextureRenderTarget2D* RenderTarget);
		class APlayerCameraManager* SetPlayerCameraManager(class APlayerCameraManager* PlayerCameraManager);
		class APlayerCameraManager* GetPlayerCameraManager();
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposureCompositingTargetComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UComposureCompositingTargetComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_WW2W[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            DisplayTexture;                                          // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetDisplayTexture(class UTexture* DisplayTexture);
		class UTexture* GetDisplayTexture();
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposurePostProcessBlendable
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UComposurePostProcessBlendable : public UObject
	{
	public:
		unsigned char                                              UnknownData_6O9Y[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UComposurePostProcessPass*                           Target;                                                  // 0x0030(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposurePostProcessingPassProxy
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class UComposurePostProcessingPassProxy : public UComposurePostProcessPass
	{
	public:
		class UMaterialInstanceDynamic*                            SetupMID;                                                // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization

	public:
		void Execute(class UTexture* PrePassInput, class UComposurePostProcessPassPolicy* PostProcessPass);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposureTonemapperPass
	 * Size -> 0x0178 (FullSize[0x03A0] - InheritedSize[0x0228])
	 */
	class UComposureTonemapperPass : public UComposurePostProcessPass
	{
	public:
		unsigned char                                              UnknownData_8398[0x8];                                   // 0x0228(0x0008) Fix Super Size
		struct FColorGradingSettings                               ColorGradingSettings;                                    // 0x0230(0x0150) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FFilmStockSettings                                  FilmStockSettings;                                       // 0x0380(0x0014) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ChromaticAberration;                                     // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1ID[0x8];                                   // 0x0398(0x0008) MISSED OFFSET (PADDING)

	public:
		void TonemapToRenderTarget();
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.ComposureTonemapperPassPolicy
	 * Size -> 0x0178 (FullSize[0x01A0] - InheritedSize[0x0028])
	 */
	class UComposureTonemapperPassPolicy : public UComposurePostProcessPassPolicy
	{
	public:
		unsigned char                                              UnknownData_23DV[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColorGradingSettings                               ColorGradingSettings;                                    // 0x0030(0x0150) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FFilmStockSettings                                  FilmStockSettings;                                       // 0x0180(0x0014) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ChromaticAberration;                                     // 0x0194(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQM2[0x8];                                   // 0x0198(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.CompositingTextureLookupTable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCompositingTextureLookupTable : public UInterface
	{
	public:
		bool FindNamedPassResult(const class FName& LookupName, class UTexture** OutTexture);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.MovieSceneComposureExportClient
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneComposureExportClient : public UInterface
	{
	public:
		void InitializeForExport(class UMovieSceneComposureExportInitializer* ExportInitializer);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.MovieSceneComposureExportInitializer
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMovieSceneComposureExportInitializer : public UObject
	{
	public:
		unsigned char                                              UnknownData_M9AN[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void ExportSceneCaptureBuffers(class ACompositingElement* CompShotElement, class USceneCaptureComponent2D* SceneCapture, TArray<class FString> BuffersToExport);
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.MovieSceneComposureExportTrack
	 * Size -> 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
	 */
	class UMovieSceneComposureExportTrack : public UMovieSceneTrack
	{
	public:
		unsigned char                                              UnknownData_B0EB[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneComposureExportPass                      Pass;                                                    // 0x0098(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TEEU[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x00B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.MovieSceneComposureExportSection
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UMovieSceneComposureExportSection : public UMovieSceneSection
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.MovieSceneComposurePostMoveSettingsSection
	 * Size -> 0x03C0 (FullSize[0x04A8] - InheritedSize[0x00E8])
	 */
	class UMovieSceneComposurePostMoveSettingsSection : public UMovieSceneSection
	{
	public:
		struct FMovieSceneFloatChannel                             Pivot[0x2];                                              // 0x00E8(0x0140) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Translation[0x2];                                        // 0x0228(0x0140) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             RotationAngle;                                           // 0x0368(0x00A0) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Scale;                                                   // 0x0408(0x00A0) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.MovieSceneComposurePostMoveSettingsTrack
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UMovieSceneComposurePostMoveSettingsTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_1991[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.PlayerViewportCompositingOutput
	 * Size -> 0x0038 (FullSize[0x00B0] - InheritedSize[0x0078])
	 */
	class UPlayerViewportCompositingOutput : public UColorConverterOutputPass
	{
	public:
		unsigned char                                              UnknownData_W1S5[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerIndex;                                             // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_62Z7[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerCompOutputCameraModifier*                     ActiveCamModifier;                                       // 0x0088(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization
		class UMaterialInterface*                                  TonemapperBaseMat;                                       // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  PreTonemapBaseMat;                                       // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            ViewportOverrideMID;                                     // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization
		unsigned char                                              UnknownData_Y8CJ[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Composure.PlayerCompOutputCameraModifier
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UPlayerCompOutputCameraModifier : public UCameraModifier
	{
	public:
		class UPlayerViewportCompositingOutput*                    Owner;                                                   // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
