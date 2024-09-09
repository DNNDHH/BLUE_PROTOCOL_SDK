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
	 * Function Composure.ComposurePipelineBaseActor.SetAutoRunChildrenAndSelf
	 */
	struct AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Params
	{
	public:
		bool                                                       bAutoRunChildAndSelf;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePipelineBaseActor.SetAutoRun
	 */
	struct AComposurePipelineBaseActor_SetAutoRun_Params
	{
	public:
		bool                                                       bNewAutoRunVal;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePipelineBaseActor.IsActivelyRunning
	 */
	struct AComposurePipelineBaseActor_IsActivelyRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePipelineBaseActor.EnqueueRendering
	 */
	struct AComposurePipelineBaseActor_EnqueueRendering_Params
	{
	public:
		bool                                                       bCameraCutThisFrame;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePipelineBaseActor.AreChildrenAndSelfAutoRun
	 */
	struct AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.SetTargetCamera
	 */
	struct ACompositingElement_SetTargetCamera_Params
	{
	public:
		class ACameraActor*                                        NewCameraActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.SetRenderResolution
	 */
	struct ACompositingElement_SetRenderResolution_Params
	{
	public:
		struct FIntPoint                                           NewResolution;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.SetOpacity
	 */
	struct ACompositingElement_SetOpacity_Params
	{
	public:
		float                                                      NewOpacity;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.SetElementName
	 */
	struct ACompositingElement_SetElementName_Params
	{
	public:
		class FName                                                NewName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.SetEditorColorPickingTarget
	 */
	struct ACompositingElement_SetEditorColorPickingTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              PickingTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.SetEditorColorPickerDisplayImage
	 */
	struct ACompositingElement_SetEditorColorPickerDisplayImage_Params
	{
	public:
		class UTexture*                                            PickerDisplayImage;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.RequestNamedRenderTarget
	 */
	struct ACompositingElement_RequestNamedRenderTarget_Params
	{
	public:
		class FName                                                ReferenceName;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RenderPercentage;                                        // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETargetUsageFlags                                          UsageTag;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RYBH[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.RenderCompositingMaterialToTarget
	 */
	struct ACompositingElement_RenderCompositingMaterialToTarget_Params
	{
	public:
		struct FCompositingMaterial                                CompMaterial;                                            // 0x0000(0x0158)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0158(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ResultLookupName;                                        // 0x0160(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0168(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.RenderCompositingMaterial
	 */
	struct ACompositingElement_RenderCompositingMaterial_Params
	{
	public:
		struct FCompositingMaterial                                CompMaterial;                                            // 0x0000(0x0158)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      RenderScale;                                             // 0x0158(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ResultLookupName;                                        // 0x015C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETargetUsageFlags                                          UsageTag;                                                // 0x0164(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EI83[0x3];                                   // 0x0165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture*                                            ReturnValue;                                             // 0x0168(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.RenderCompElement
	 */
	struct ACompositingElement_RenderCompElement_Params
	{
	public:
		bool                                                       bCameraCutThisFrame;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_55XR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture*                                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.ReleaseOwnedTarget
	 */
	struct ACompositingElement_ReleaseOwnedTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              OwnedTarget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.RegisterPassResult
	 */
	struct ACompositingElement_RegisterPassResult_Params
	{
	public:
		class FName                                                ReferenceName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            PassResult;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetAsLatestRenderResult;                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.IsSubElement
	 */
	struct ACompositingElement_IsSubElement_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.GetTransformsList
	 */
	struct ACompositingElement_GetTransformsList_Params
	{
	public:
		TArray<class UCompositingElementTransform*>                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.GetRenderResolution
	 */
	struct ACompositingElement_GetRenderResolution_Params
	{
	public:
		struct FIntPoint                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.GetRenderPriority
	 */
	struct ACompositingElement_GetRenderPriority_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.GetOutputsList
	 */
	struct ACompositingElement_GetOutputsList_Params
	{
	public:
		TArray<class UCompositingElementOutput*>                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.GetOpacity
	 */
	struct ACompositingElement_GetOpacity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.GetLatestRenderResult
	 */
	struct ACompositingElement_GetLatestRenderResult_Params
	{
	public:
		class UTexture*                                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.GetInputsList
	 */
	struct ACompositingElement_GetInputsList_Params
	{
	public:
		TArray<class UCompositingElementInput*>                    ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.GetElementParent
	 */
	struct ACompositingElement_GetElementParent_Params
	{
	public:
		class ACompositingElement*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.GetCompElementName
	 */
	struct ACompositingElement_GetCompElementName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.GetChildElements
	 */
	struct ACompositingElement_GetChildElements_Params
	{
	public:
		TArray<class ACompositingElement*>                         ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.FindTransformPass
	 */
	struct ACompositingElement_FindTransformPass_Params
	{
	public:
		class UClass*                                              TransformType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            PassResult;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalPassName;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCompositingElementTransform*                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.FindTargetCamera
	 */
	struct ACompositingElement_FindTargetCamera_Params
	{
	public:
		class ACameraActor*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.FindOutputPass
	 */
	struct ACompositingElement_FindOutputPass_Params
	{
	public:
		class UClass*                                              OutputType;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalPassName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCompositingElementOutput*                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.FindNamedRenderResult
	 */
	struct ACompositingElement_FindNamedRenderResult_Params
	{
	public:
		class FName                                                PassName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSearchSubElements;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5IDU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture*                                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.FindInputPass
	 */
	struct ACompositingElement_FindInputPass_Params
	{
	public:
		class UClass*                                              InputType;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            PassResult;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalPassName;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCompositingElementInput*                            ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.DeletePass
	 */
	struct ACompositingElement_DeletePass_Params
	{
	public:
		class UCompositingElementPass*                             PassToDelete;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.CreateNewTransformPass
	 */
	struct ACompositingElement_CreateNewTransformPass_Params
	{
	public:
		class FName                                                PassName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              TransformType;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCompositingElementTransform*                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.CreateNewOutputPass
	 */
	struct ACompositingElement_CreateNewOutputPass_Params
	{
	public:
		class FName                                                PassName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              OutputType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCompositingElementOutput*                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.CreateNewInputPass
	 */
	struct ACompositingElement_CreateNewInputPass_Params
	{
	public:
		class FName                                                PassName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              InputType;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCompositingElementInput*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.AddNewTransformPass
	 */
	struct ACompositingElement_AddNewTransformPass_Params
	{
	public:
		class FName                                                PassName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              TransformType;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCompositingElementTransform*                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.AddNewOutputPass
	 */
	struct ACompositingElement_AddNewOutputPass_Params
	{
	public:
		class FName                                                PassName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              OutputType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCompositingElementOutput*                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElement.AddNewInputPass
	 */
	struct ACompositingElement_AddNewInputPass_Params
	{
	public:
		class FName                                                PassName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              InputType;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCompositingElementInput*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingCaptureBase.UpdateDistortion
	 */
	struct ACompositingCaptureBase_UpdateDistortion_Params
	{	};

	/**
	 * Function Composure.CompositingPickerAsyncTask.OpenCompositingPicker
	 */
	struct UCompositingPickerAsyncTask_OpenCompositingPicker_Params
	{
	public:
		class UTextureRenderTarget2D*                              PickerTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            DisplayImage;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                WindowTitle;                                             // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bAverageColorOnDrag;                                     // 0x0028(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseImplicitGamma;                                       // 0x0029(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_223J[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCompositingPickerAsyncTask*                         ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementPass.SetPassEnabled
	 */
	struct UCompositingElementPass_SetPassEnabled_Params
	{
	public:
		bool                                                       bSetEnabledTo;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementPass.Reset
	 */
	struct UCompositingElementPass_Reset_Params
	{	};

	/**
	 * Function Composure.CompositingElementPass.RequestRenderTarget
	 */
	struct UCompositingElementPass_RequestRenderTarget_Params
	{
	public:
		struct FIntPoint                                           Dimensions;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETextureRenderTargetFormat                                 Format;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8DJJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementPass.RequestNativelyFormattedTarget
	 */
	struct UCompositingElementPass_RequestNativelyFormattedTarget_Params
	{
	public:
		float                                                      RenderScale;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0VCD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementPass.ReleaseRenderTarget
	 */
	struct UCompositingElementPass_ReleaseRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              AssignedTarget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementPass.OnFrameEnd
	 */
	struct UCompositingElementPass_OnFrameEnd_Params
	{	};

	/**
	 * Function Composure.CompositingElementPass.OnFrameBegin
	 */
	struct UCompositingElementPass_OnFrameBegin_Params
	{
	public:
		bool                                                       bCameraCutThisFrame;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementPass.OnEnabled
	 */
	struct UCompositingElementPass_OnEnabled_Params
	{	};

	/**
	 * Function Composure.CompositingElementPass.OnDisabled
	 */
	struct UCompositingElementPass_OnDisabled_Params
	{	};

	/**
	 * Function Composure.CompositingElementPass.IsPassEnabled
	 */
	struct UCompositingElementPass_IsPassEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementInput.GenerateInput
	 */
	struct UCompositingElementInput_GenerateInput_Params
	{
	public:
		class UTexture*                                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingInputInterface.OnFrameEnd
	 */
	struct UCompositingInputInterface_OnFrameEnd_Params
	{
	public:
		class UCompositingInputInterfaceProxy*                     Proxy;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingInputInterface.OnFrameBegin
	 */
	struct UCompositingInputInterface_OnFrameBegin_Params
	{
	public:
		class UCompositingInputInterfaceProxy*                     Proxy;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCameraCutThisFrame;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingInputInterface.GenerateInput
	 */
	struct UCompositingInputInterface_GenerateInput_Params
	{
	public:
		class UCompositingInputInterfaceProxy*                     Proxy;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementOutput.RelayOutput
	 */
	struct UCompositingElementOutput_RelayOutput_Params
	{
	public:
		class UTexture*                                            FinalResult;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UComposurePostProcessingPassProxy*                   PostProcessProxy;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementTransform.FindNamedPrePassResult
	 */
	struct UCompositingElementTransform_FindNamedPrePassResult_Params
	{
	public:
		class FName                                                PassLookupName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementTransform.ApplyTransform
	 */
	struct UCompositingElementTransform_ApplyTransform_Params
	{
	public:
		class UTexture*                                            Input;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UComposurePostProcessingPassProxy*                   PostProcessProxy;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACameraActor*                                        TargetCamera;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementMaterialPass.SetParameterMapping
	 */
	struct UCompositingElementMaterialPass_SetParameterMapping_Params
	{
	public:
		class FName                                                TextureParamName;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ComposureLayerName;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementMaterialPass.SetMaterialInterface
	 */
	struct UCompositingElementMaterialPass_SetMaterialInterface_Params
	{
	public:
		class UMaterialInterface*                                  NewMaterial;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.CompositingElementMaterialPass.ApplyMaterialParams
	 */
	struct UCompositingElementMaterialPass_ApplyMaterialParams_Params
	{
	public:
		class UMaterialInstanceDynamic*                            Mid;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.SetUVMapSettingsToMaterialParameters
	 */
	struct UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Params
	{
	public:
		struct FComposureUVMapSettings                             UVMapSettings;                                           // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic*                            Material;                                                // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.RequestRedrawComposureViewport
	 */
	struct UComposureBlueprintLibrary_RequestRedrawComposureViewport_Params
	{	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.RenameComposureElement
	 */
	struct UComposureBlueprintLibrary_RenameComposureElement_Params
	{
	public:
		class FName                                                OriginalElementName;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewElementName;                                          // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.RefreshComposureElementList
	 */
	struct UComposureBlueprintLibrary_RefreshComposureElementList_Params
	{	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.IsComposureElementDrawing
	 */
	struct UComposureBlueprintLibrary_IsComposureElementDrawing_Params
	{
	public:
		class ACompositingElement*                                 CompElement;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.InvertUVDisplacementMapEncodingParameters
	 */
	struct UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Params
	{
	public:
		struct FVector2D                                           In;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Out;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.GetRedGreenUVFactorsFromChromaticAberration
	 */
	struct UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Params
	{
	public:
		float                                                      ChromaticAberrationAmount;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           RedGreenUVFactors;                                       // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.GetProjectionMatrixFromPostMoveSettings
	 */
	struct UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Params
	{
	public:
		struct FComposurePostMoveSettings                          PostMoveSettings;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      HorizontalFOVAngle;                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AspectRatio;                                             // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMatrix                                             ProjectionMatrix;                                        // 0x0020(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.GetPlayerDisplayGamma
	 */
	struct UComposureBlueprintLibrary_GetPlayerDisplayGamma_Params
	{
	public:
		class APlayerCameraManager*                                PlayerCameraManager;                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DisplayGamma;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.GetCroppingUVTransformationMatrixFromPostMoveSettings
	 */
	struct UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Params
	{
	public:
		struct FComposurePostMoveSettings                          PostMoveSettings;                                        // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      AspectRatio;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZGSX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMatrix                                             CropingUVTransformationMatrix;                           // 0x0020(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FMatrix                                             UncropingUVTransformationMatrix;                         // 0x0060(0x0040)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.GetComposureElement
	 */
	struct UComposureBlueprintLibrary_GetComposureElement_Params
	{
	public:
		class FName                                                ElementName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACompositingElement*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.DeleteComposureElementAndChildren
	 */
	struct UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Params
	{
	public:
		class FName                                                ElementToDelete;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.CreatePlayerCompositingTarget
	 */
	struct UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UComposurePlayerCompositingTarget*                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.CreateComposureElement
	 */
	struct UComposureBlueprintLibrary_CreateComposureElement_Params
	{
	public:
		class FName                                                ElementName;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ClassType;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              LevelContext;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACompositingElement*                                 ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.CopyCameraSettingsToSceneCapture
	 */
	struct UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Params
	{
	public:
		class UCameraComponent*                                    SrcCamera;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneCaptureComponent2D*                            DstCaptureComponent;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OriginalFocalLength;                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OverscanFactor;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureBlueprintLibrary.AttachComposureElement
	 */
	struct UComposureBlueprintLibrary_AttachComposureElement_Params
	{
	public:
		class FName                                                ParentName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ChildName;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePostProcessPass.SetSetupMaterial
	 */
	struct UComposurePostProcessPass_SetSetupMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePostProcessPass.SetOutputRenderTarget
	 */
	struct UComposurePostProcessPass_SetOutputRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePostProcessPass.GetSetupMaterial
	 */
	struct UComposurePostProcessPass_GetSetupMaterial_Params
	{
	public:
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePostProcessPass.GetOutputRenderTarget
	 */
	struct UComposurePostProcessPass_GetOutputRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureLensBloomPass.SetTonemapperReplacingMaterial
	 */
	struct UComposureLensBloomPass_SetTonemapperReplacingMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureLensBloomPass.BloomToRenderTarget
	 */
	struct UComposureLensBloomPass_BloomToRenderTarget_Params
	{	};

	/**
	 * Function Composure.ComposurePostProcessPassPolicy.SetupPostProcess
	 */
	struct UComposurePostProcessPassPolicy_SetupPostProcess_Params
	{
	public:
		class USceneCaptureComponent2D*                            SceneCapture;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInterface*                                  TonemapperOverride;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePlayerCompositingTarget.SetRenderTarget
	 */
	struct UComposurePlayerCompositingTarget_SetRenderTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePlayerCompositingTarget.SetPlayerCameraManager
	 */
	struct UComposurePlayerCompositingTarget_SetPlayerCameraManager_Params
	{
	public:
		class APlayerCameraManager*                                PlayerCameraManager;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerCameraManager*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePlayerCompositingTarget.GetPlayerCameraManager
	 */
	struct UComposurePlayerCompositingTarget_GetPlayerCameraManager_Params
	{
	public:
		class APlayerCameraManager*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureCompositingTargetComponent.SetDisplayTexture
	 */
	struct UComposureCompositingTargetComponent_SetDisplayTexture_Params
	{
	public:
		class UTexture*                                            DisplayTexture;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureCompositingTargetComponent.GetDisplayTexture
	 */
	struct UComposureCompositingTargetComponent_GetDisplayTexture_Params
	{
	public:
		class UTexture*                                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposurePostProcessingPassProxy.Execute
	 */
	struct UComposurePostProcessingPassProxy_Execute_Params
	{
	public:
		class UTexture*                                            PrePassInput;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UComposurePostProcessPassPolicy*                     PostProcessPass;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.ComposureTonemapperPass.TonemapToRenderTarget
	 */
	struct UComposureTonemapperPass_TonemapToRenderTarget_Params
	{	};

	/**
	 * Function Composure.CompositingTextureLookupTable.FindNamedPassResult
	 */
	struct UCompositingTextureLookupTable_FindNamedPassResult_Params
	{
	public:
		class FName                                                LookupName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            OutTexture;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.MovieSceneComposureExportClient.InitializeForExport
	 */
	struct UMovieSceneComposureExportClient_InitializeForExport_Params
	{
	public:
		class UMovieSceneComposureExportInitializer*               ExportInitializer;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Composure.MovieSceneComposureExportInitializer.ExportSceneCaptureBuffers
	 */
	struct UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Params
	{
	public:
		class ACompositingElement*                                 CompShotElement;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneCaptureComponent2D*                            SceneCapture;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      BuffersToExport;                                         // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
