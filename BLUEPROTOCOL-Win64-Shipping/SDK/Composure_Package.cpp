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
	 * 		Name   -> PredefinedFunction UCompEditorImagePreviewInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompEditorImagePreviewInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompEditorImagePreviewInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompImageColorPickerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompImageColorPickerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompImageColorPickerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePipelineBaseActor.SetAutoRunChildrenAndSelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAutoRunChildAndSelf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AComposurePipelineBaseActor::SetAutoRunChildrenAndSelf(bool bAutoRunChildAndSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePipelineBaseActor.SetAutoRunChildrenAndSelf");
		
		AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Params params {};
		params.bAutoRunChildAndSelf = bAutoRunChildAndSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePipelineBaseActor.SetAutoRun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewAutoRunVal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AComposurePipelineBaseActor::SetAutoRun(bool bNewAutoRunVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePipelineBaseActor.SetAutoRun");
		
		AComposurePipelineBaseActor_SetAutoRun_Params params {};
		params.bNewAutoRunVal = bNewAutoRunVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePipelineBaseActor.IsActivelyRunning
	 * 		Flags  -> ()
	 */
	bool AComposurePipelineBaseActor::IsActivelyRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePipelineBaseActor.IsActivelyRunning");
		
		AComposurePipelineBaseActor_IsActivelyRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePipelineBaseActor.EnqueueRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCameraCutThisFrame                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AComposurePipelineBaseActor::EnqueueRendering(bool bCameraCutThisFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePipelineBaseActor.EnqueueRendering");
		
		AComposurePipelineBaseActor_EnqueueRendering_Params params {};
		params.bCameraCutThisFrame = bCameraCutThisFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePipelineBaseActor.AreChildrenAndSelfAutoRun
	 * 		Flags  -> ()
	 */
	bool AComposurePipelineBaseActor::AreChildrenAndSelfAutoRun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePipelineBaseActor.AreChildrenAndSelfAutoRun");
		
		AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AComposurePipelineBaseActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AComposurePipelineBaseActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposurePipelineBaseActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.SetTargetCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACameraActor*                                NewCameraActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACompositingElement::SetTargetCamera(class ACameraActor* NewCameraActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.SetTargetCamera");
		
		ACompositingElement_SetTargetCamera_Params params {};
		params.NewCameraActor = NewCameraActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.SetRenderResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   NewResolution                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACompositingElement::SetRenderResolution(const struct FIntPoint& NewResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.SetRenderResolution");
		
		ACompositingElement_SetRenderResolution_Params params {};
		params.NewResolution = NewResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.SetOpacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewOpacity                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACompositingElement::SetOpacity(float NewOpacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.SetOpacity");
		
		ACompositingElement_SetOpacity_Params params {};
		params.NewOpacity = NewOpacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.SetElementName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewName                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACompositingElement::SetElementName(const class FName& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.SetElementName");
		
		ACompositingElement_SetElementName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.SetEditorColorPickingTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      PickingTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACompositingElement::SetEditorColorPickingTarget(class UTextureRenderTarget2D* PickingTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.SetEditorColorPickingTarget");
		
		ACompositingElement_SetEditorColorPickingTarget_Params params {};
		params.PickingTarget = PickingTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.SetEditorColorPickerDisplayImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    PickerDisplayImage                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACompositingElement::SetEditorColorPickerDisplayImage(class UTexture* PickerDisplayImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.SetEditorColorPickerDisplayImage");
		
		ACompositingElement_SetEditorColorPickerDisplayImage_Params params {};
		params.PickerDisplayImage = PickerDisplayImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.RequestNamedRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ReferenceName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RenderPercentage                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETargetUsageFlags                                  UsageTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* ACompositingElement::RequestNamedRenderTarget(const class FName& ReferenceName, float RenderPercentage, ETargetUsageFlags UsageTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.RequestNamedRenderTarget");
		
		ACompositingElement_RequestNamedRenderTarget_Params params {};
		params.ReferenceName = ReferenceName;
		params.RenderPercentage = RenderPercentage;
		params.UsageTag = UsageTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.RenderCompositingMaterialToTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCompositingMaterial                        CompMaterial                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ResultLookupName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* ACompositingElement::RenderCompositingMaterialToTarget(struct FCompositingMaterial* CompMaterial, class UTextureRenderTarget2D* RenderTarget, const class FName& ResultLookupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.RenderCompositingMaterialToTarget");
		
		ACompositingElement_RenderCompositingMaterialToTarget_Params params {};
		params.RenderTarget = RenderTarget;
		params.ResultLookupName = ResultLookupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CompMaterial != nullptr)
			*CompMaterial = params.CompMaterial;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.RenderCompositingMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCompositingMaterial                        CompMaterial                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              RenderScale                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ResultLookupName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETargetUsageFlags                                  UsageTag                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture* ACompositingElement::RenderCompositingMaterial(struct FCompositingMaterial* CompMaterial, float RenderScale, const class FName& ResultLookupName, ETargetUsageFlags UsageTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.RenderCompositingMaterial");
		
		ACompositingElement_RenderCompositingMaterial_Params params {};
		params.RenderScale = RenderScale;
		params.ResultLookupName = ResultLookupName;
		params.UsageTag = UsageTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CompMaterial != nullptr)
			*CompMaterial = params.CompMaterial;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.RenderCompElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCameraCutThisFrame                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture* ACompositingElement::RenderCompElement(bool bCameraCutThisFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.RenderCompElement");
		
		ACompositingElement_RenderCompElement_Params params {};
		params.bCameraCutThisFrame = bCameraCutThisFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.ReleaseOwnedTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      OwnedTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ACompositingElement::ReleaseOwnedTarget(class UTextureRenderTarget2D* OwnedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.ReleaseOwnedTarget");
		
		ACompositingElement_ReleaseOwnedTarget_Params params {};
		params.OwnedTarget = OwnedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.RegisterPassResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ReferenceName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    PassResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetAsLatestRenderResult                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACompositingElement::RegisterPassResult(const class FName& ReferenceName, class UTexture* PassResult, bool bSetAsLatestRenderResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.RegisterPassResult");
		
		ACompositingElement_RegisterPassResult_Params params {};
		params.ReferenceName = ReferenceName;
		params.PassResult = PassResult;
		params.bSetAsLatestRenderResult = bSetAsLatestRenderResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.IsSubElement
	 * 		Flags  -> ()
	 */
	bool ACompositingElement::IsSubElement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.IsSubElement");
		
		ACompositingElement_IsSubElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.GetTransformsList
	 * 		Flags  -> ()
	 */
	TArray<class UCompositingElementTransform*> ACompositingElement::GetTransformsList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetTransformsList");
		
		ACompositingElement_GetTransformsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.GetRenderResolution
	 * 		Flags  -> ()
	 */
	struct FIntPoint ACompositingElement::GetRenderResolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetRenderResolution");
		
		ACompositingElement_GetRenderResolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.GetRenderPriority
	 * 		Flags  -> ()
	 */
	int32_t ACompositingElement::GetRenderPriority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetRenderPriority");
		
		ACompositingElement_GetRenderPriority_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.GetOutputsList
	 * 		Flags  -> ()
	 */
	TArray<class UCompositingElementOutput*> ACompositingElement::GetOutputsList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetOutputsList");
		
		ACompositingElement_GetOutputsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.GetOpacity
	 * 		Flags  -> ()
	 */
	float ACompositingElement::GetOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetOpacity");
		
		ACompositingElement_GetOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.GetLatestRenderResult
	 * 		Flags  -> ()
	 */
	class UTexture* ACompositingElement::GetLatestRenderResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetLatestRenderResult");
		
		ACompositingElement_GetLatestRenderResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.GetInputsList
	 * 		Flags  -> ()
	 */
	TArray<class UCompositingElementInput*> ACompositingElement::GetInputsList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetInputsList");
		
		ACompositingElement_GetInputsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.GetElementParent
	 * 		Flags  -> ()
	 */
	class ACompositingElement* ACompositingElement::GetElementParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetElementParent");
		
		ACompositingElement_GetElementParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.GetCompElementName
	 * 		Flags  -> ()
	 */
	class FName ACompositingElement::GetCompElementName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetCompElementName");
		
		ACompositingElement_GetCompElementName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.GetChildElements
	 * 		Flags  -> ()
	 */
	TArray<class ACompositingElement*> ACompositingElement::GetChildElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.GetChildElements");
		
		ACompositingElement_GetChildElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.FindTransformPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      TransformType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    PassResult                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalPassName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCompositingElementTransform* ACompositingElement::FindTransformPass(class UClass* TransformType, class UTexture** PassResult, const class FName& OptionalPassName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.FindTransformPass");
		
		ACompositingElement_FindTransformPass_Params params {};
		params.TransformType = TransformType;
		params.OptionalPassName = OptionalPassName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PassResult != nullptr)
			*PassResult = params.PassResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.FindTargetCamera
	 * 		Flags  -> ()
	 */
	class ACameraActor* ACompositingElement::FindTargetCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.FindTargetCamera");
		
		ACompositingElement_FindTargetCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.FindOutputPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      OutputType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalPassName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCompositingElementOutput* ACompositingElement::FindOutputPass(class UClass* OutputType, const class FName& OptionalPassName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.FindOutputPass");
		
		ACompositingElement_FindOutputPass_Params params {};
		params.OutputType = OutputType;
		params.OptionalPassName = OptionalPassName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.FindNamedRenderResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PassName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSearchSubElements                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture* ACompositingElement::FindNamedRenderResult(const class FName& PassName, bool bSearchSubElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.FindNamedRenderResult");
		
		ACompositingElement_FindNamedRenderResult_Params params {};
		params.PassName = PassName;
		params.bSearchSubElements = bSearchSubElements;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.FindInputPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    PassResult                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalPassName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCompositingElementInput* ACompositingElement::FindInputPass(class UClass* InputType, class UTexture** PassResult, const class FName& OptionalPassName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.FindInputPass");
		
		ACompositingElement_FindInputPass_Params params {};
		params.InputType = InputType;
		params.OptionalPassName = OptionalPassName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PassResult != nullptr)
			*PassResult = params.PassResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.DeletePass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCompositingElementPass*                     PassToDelete                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ACompositingElement::DeletePass(class UCompositingElementPass* PassToDelete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.DeletePass");
		
		ACompositingElement_DeletePass_Params params {};
		params.PassToDelete = PassToDelete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.CreateNewTransformPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PassName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TransformType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCompositingElementTransform* ACompositingElement::CreateNewTransformPass(const class FName& PassName, class UClass* TransformType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.CreateNewTransformPass");
		
		ACompositingElement_CreateNewTransformPass_Params params {};
		params.PassName = PassName;
		params.TransformType = TransformType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.CreateNewOutputPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PassName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      OutputType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCompositingElementOutput* ACompositingElement::CreateNewOutputPass(const class FName& PassName, class UClass* OutputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.CreateNewOutputPass");
		
		ACompositingElement_CreateNewOutputPass_Params params {};
		params.PassName = PassName;
		params.OutputType = OutputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.CreateNewInputPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PassName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      InputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCompositingElementInput* ACompositingElement::CreateNewInputPass(const class FName& PassName, class UClass* InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.CreateNewInputPass");
		
		ACompositingElement_CreateNewInputPass_Params params {};
		params.PassName = PassName;
		params.InputType = InputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.AddNewTransformPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PassName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TransformType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCompositingElementTransform* ACompositingElement::AddNewTransformPass(const class FName& PassName, class UClass* TransformType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.AddNewTransformPass");
		
		ACompositingElement_AddNewTransformPass_Params params {};
		params.PassName = PassName;
		params.TransformType = TransformType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.AddNewOutputPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PassName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      OutputType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCompositingElementOutput* ACompositingElement::AddNewOutputPass(const class FName& PassName, class UClass* OutputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.AddNewOutputPass");
		
		ACompositingElement_AddNewOutputPass_Params params {};
		params.PassName = PassName;
		params.OutputType = OutputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElement.AddNewInputPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PassName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      InputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCompositingElementInput* ACompositingElement::AddNewInputPass(const class FName& PassName, class UClass* InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElement.AddNewInputPass");
		
		ACompositingElement_AddNewInputPass_Params params {};
		params.PassName = PassName;
		params.InputType = InputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACompositingElement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACompositingElement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingElement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingCaptureBase.UpdateDistortion
	 * 		Flags  -> ()
	 */
	void ACompositingCaptureBase::UpdateDistortion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingCaptureBase.UpdateDistortion");
		
		ACompositingCaptureBase_UpdateDistortion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACompositingCaptureBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACompositingCaptureBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingCaptureBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingPickerAsyncTask.OpenCompositingPicker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      PickerTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    DisplayImage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        WindowTitle                                                (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAverageColorOnDrag                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseImplicitGamma                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCompositingPickerAsyncTask* UCompositingPickerAsyncTask::OpenCompositingPicker(class UTextureRenderTarget2D* PickerTarget, class UTexture* DisplayImage, const class FText& WindowTitle, bool bAverageColorOnDrag, bool bUseImplicitGamma)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingPickerAsyncTask.OpenCompositingPicker");
		
		UCompositingPickerAsyncTask_OpenCompositingPicker_Params params {};
		params.PickerTarget = PickerTarget;
		params.DisplayImage = DisplayImage;
		params.WindowTitle = WindowTitle;
		params.bAverageColorOnDrag = bAverageColorOnDrag;
		params.bUseImplicitGamma = bUseImplicitGamma;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingPickerAsyncTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingPickerAsyncTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingPickerAsyncTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementPass.SetPassEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSetEnabledTo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCompositingElementPass::SetPassEnabled(bool bSetEnabledTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.SetPassEnabled");
		
		UCompositingElementPass_SetPassEnabled_Params params {};
		params.bSetEnabledTo = bSetEnabledTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementPass.Reset
	 * 		Flags  -> ()
	 */
	void UCompositingElementPass::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.Reset");
		
		UCompositingElementPass_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementPass.RequestRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   Dimensions                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETextureRenderTargetFormat                         Format                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* UCompositingElementPass::RequestRenderTarget(const struct FIntPoint& Dimensions, ETextureRenderTargetFormat Format)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.RequestRenderTarget");
		
		UCompositingElementPass_RequestRenderTarget_Params params {};
		params.Dimensions = Dimensions;
		params.Format = Format;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementPass.RequestNativelyFormattedTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RenderScale                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* UCompositingElementPass::RequestNativelyFormattedTarget(float RenderScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.RequestNativelyFormattedTarget");
		
		UCompositingElementPass_RequestNativelyFormattedTarget_Params params {};
		params.RenderScale = RenderScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementPass.ReleaseRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      AssignedTarget                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCompositingElementPass::ReleaseRenderTarget(class UTextureRenderTarget2D* AssignedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.ReleaseRenderTarget");
		
		UCompositingElementPass_ReleaseRenderTarget_Params params {};
		params.AssignedTarget = AssignedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementPass.OnFrameEnd
	 * 		Flags  -> ()
	 */
	void UCompositingElementPass::OnFrameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.OnFrameEnd");
		
		UCompositingElementPass_OnFrameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementPass.OnFrameBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCameraCutThisFrame                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCompositingElementPass::OnFrameBegin(bool bCameraCutThisFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.OnFrameBegin");
		
		UCompositingElementPass_OnFrameBegin_Params params {};
		params.bCameraCutThisFrame = bCameraCutThisFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementPass.OnEnabled
	 * 		Flags  -> ()
	 */
	void UCompositingElementPass::OnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.OnEnabled");
		
		UCompositingElementPass_OnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementPass.OnDisabled
	 * 		Flags  -> ()
	 */
	void UCompositingElementPass::OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.OnDisabled");
		
		UCompositingElementPass_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementPass.IsPassEnabled
	 * 		Flags  -> ()
	 */
	bool UCompositingElementPass::IsPassEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementPass.IsPassEnabled");
		
		UCompositingElementPass_IsPassEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingElementPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingElementPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingElementPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementInput.GenerateInput
	 * 		Flags  -> ()
	 */
	class UTexture* UCompositingElementInput::GenerateInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementInput.GenerateInput");
		
		UCompositingElementInput_GenerateInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingElementInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingElementInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingElementInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingMediaInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingMediaInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingMediaInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMediaTextureCompositingInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaTextureCompositingInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.MediaTextureCompositingInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingInputInterface.OnFrameEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCompositingInputInterfaceProxy*             Proxy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCompositingInputInterface::OnFrameEnd(class UCompositingInputInterfaceProxy* Proxy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingInputInterface.OnFrameEnd");
		
		UCompositingInputInterface_OnFrameEnd_Params params {};
		params.Proxy = Proxy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingInputInterface.OnFrameBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCompositingInputInterfaceProxy*             Proxy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCameraCutThisFrame                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCompositingInputInterface::OnFrameBegin(class UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingInputInterface.OnFrameBegin");
		
		UCompositingInputInterface_OnFrameBegin_Params params {};
		params.Proxy = Proxy;
		params.bCameraCutThisFrame = bCameraCutThisFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingInputInterface.GenerateInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCompositingInputInterfaceProxy*             Proxy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture* UCompositingInputInterface::GenerateInput(class UCompositingInputInterfaceProxy* Proxy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingInputInterface.GenerateInput");
		
		UCompositingInputInterface_GenerateInput_Params params {};
		params.Proxy = Proxy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingInputInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingInputInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingInputInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingInputInterfaceProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingInputInterfaceProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingInputInterfaceProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementOutput.RelayOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    FinalResult                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UComposurePostProcessingPassProxy*           PostProcessProxy                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCompositingElementOutput::RelayOutput(class UTexture* FinalResult, class UComposurePostProcessingPassProxy* PostProcessProxy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementOutput.RelayOutput");
		
		UCompositingElementOutput_RelayOutput_Params params {};
		params.FinalResult = FinalResult;
		params.PostProcessProxy = PostProcessProxy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingElementOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingElementOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingElementOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UColorConverterOutputPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UColorConverterOutputPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ColorConverterOutputPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingMediaCaptureOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingMediaCaptureOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingMediaCaptureOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URenderTargetCompositingOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URenderTargetCompositingOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.RenderTargetCompositingOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEXRFileCompositingOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEXRFileCompositingOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.EXRFileCompositingOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementTransform.FindNamedPrePassResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PassLookupName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture* UCompositingElementTransform::FindNamedPrePassResult(const class FName& PassLookupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementTransform.FindNamedPrePassResult");
		
		UCompositingElementTransform_FindNamedPrePassResult_Params params {};
		params.PassLookupName = PassLookupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementTransform.ApplyTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Input                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UComposurePostProcessingPassProxy*           PostProcessProxy                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACameraActor*                                TargetCamera                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture* UCompositingElementTransform::ApplyTransform(class UTexture* Input, class UComposurePostProcessingPassProxy* PostProcessProxy, class ACameraActor* TargetCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementTransform.ApplyTransform");
		
		UCompositingElementTransform_ApplyTransform_Params params {};
		params.Input = Input;
		params.PostProcessProxy = PostProcessProxy;
		params.TargetCamera = TargetCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingElementTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingElementTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingElementTransform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingPostProcessPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingPostProcessPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingPostProcessPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementMaterialPass.SetParameterMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TextureParamName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ComposureLayerName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCompositingElementMaterialPass::SetParameterMapping(const class FName& TextureParamName, const class FName& ComposureLayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementMaterialPass.SetParameterMapping");
		
		UCompositingElementMaterialPass_SetParameterMapping_Params params {};
		params.TextureParamName = TextureParamName;
		params.ComposureLayerName = ComposureLayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementMaterialPass.SetMaterialInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          NewMaterial                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCompositingElementMaterialPass::SetMaterialInterface(class UMaterialInterface* NewMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementMaterialPass.SetMaterialInterface");
		
		UCompositingElementMaterialPass_SetMaterialInterface_Params params {};
		params.NewMaterial = NewMaterial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingElementMaterialPass.ApplyMaterialParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Mid                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCompositingElementMaterialPass::ApplyMaterialParams(class UMaterialInstanceDynamic* Mid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingElementMaterialPass.ApplyMaterialParams");
		
		UCompositingElementMaterialPass_ApplyMaterialParams_Params params {};
		params.Mid = Mid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingElementMaterialPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingElementMaterialPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingElementMaterialPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingTonemapPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingTonemapPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingTonemapPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiPassChromaKeyer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiPassChromaKeyer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.MultiPassChromaKeyer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiPassDespill.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiPassDespill::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.MultiPassDespill");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlphaTransformPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlphaTransformPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.AlphaTransformPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingOpenColorIOPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingOpenColorIOPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingOpenColorIOPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.SetUVMapSettingsToMaterialParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FComposureUVMapSettings                     UVMapSettings                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UMaterialInstanceDynamic*                    Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposureBlueprintLibrary::SetUVMapSettingsToMaterialParameters(const struct FComposureUVMapSettings& UVMapSettings, class UMaterialInstanceDynamic* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.SetUVMapSettingsToMaterialParameters");
		
		UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Params params {};
		params.UVMapSettings = UVMapSettings;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.RequestRedrawComposureViewport
	 * 		Flags  -> ()
	 */
	void UComposureBlueprintLibrary::RequestRedrawComposureViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.RequestRedrawComposureViewport");
		
		UComposureBlueprintLibrary_RequestRedrawComposureViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.RenameComposureElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OriginalElementName                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewElementName                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UComposureBlueprintLibrary::RenameComposureElement(const class FName& OriginalElementName, const class FName& NewElementName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.RenameComposureElement");
		
		UComposureBlueprintLibrary_RenameComposureElement_Params params {};
		params.OriginalElementName = OriginalElementName;
		params.NewElementName = NewElementName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.RefreshComposureElementList
	 * 		Flags  -> ()
	 */
	void UComposureBlueprintLibrary::RefreshComposureElementList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.RefreshComposureElementList");
		
		UComposureBlueprintLibrary_RefreshComposureElementList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.IsComposureElementDrawing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACompositingElement*                         CompElement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UComposureBlueprintLibrary::IsComposureElementDrawing(class ACompositingElement* CompElement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.IsComposureElementDrawing");
		
		UComposureBlueprintLibrary_IsComposureElementDrawing_Params params {};
		params.CompElement = CompElement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.InvertUVDisplacementMapEncodingParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposureBlueprintLibrary::InvertUVDisplacementMapEncodingParameters(const struct FVector2D& In, struct FVector2D* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.InvertUVDisplacementMapEncodingParameters");
		
		UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.GetRedGreenUVFactorsFromChromaticAberration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChromaticAberrationAmount                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   RedGreenUVFactors                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposureBlueprintLibrary::GetRedGreenUVFactorsFromChromaticAberration(float ChromaticAberrationAmount, struct FVector2D* RedGreenUVFactors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.GetRedGreenUVFactorsFromChromaticAberration");
		
		UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Params params {};
		params.ChromaticAberrationAmount = ChromaticAberrationAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RedGreenUVFactors != nullptr)
			*RedGreenUVFactors = params.RedGreenUVFactors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.GetProjectionMatrixFromPostMoveSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FComposurePostMoveSettings                  PostMoveSettings                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              HorizontalFOVAngle                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AspectRatio                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     ProjectionMatrix                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UComposureBlueprintLibrary::GetProjectionMatrixFromPostMoveSettings(const struct FComposurePostMoveSettings& PostMoveSettings, float HorizontalFOVAngle, float AspectRatio, struct FMatrix* ProjectionMatrix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.GetProjectionMatrixFromPostMoveSettings");
		
		UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Params params {};
		params.PostMoveSettings = PostMoveSettings;
		params.HorizontalFOVAngle = HorizontalFOVAngle;
		params.AspectRatio = AspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjectionMatrix != nullptr)
			*ProjectionMatrix = params.ProjectionMatrix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.GetPlayerDisplayGamma
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCameraManager*                        PlayerCameraManager                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DisplayGamma                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposureBlueprintLibrary::GetPlayerDisplayGamma(class APlayerCameraManager* PlayerCameraManager, float* DisplayGamma)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.GetPlayerDisplayGamma");
		
		UComposureBlueprintLibrary_GetPlayerDisplayGamma_Params params {};
		params.PlayerCameraManager = PlayerCameraManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayGamma != nullptr)
			*DisplayGamma = params.DisplayGamma;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.GetCroppingUVTransformationMatrixFromPostMoveSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FComposurePostMoveSettings                  PostMoveSettings                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              AspectRatio                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     CropingUVTransformationMatrix                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMatrix                                     UncropingUVTransformationMatrix                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UComposureBlueprintLibrary::GetCroppingUVTransformationMatrixFromPostMoveSettings(const struct FComposurePostMoveSettings& PostMoveSettings, float AspectRatio, struct FMatrix* CropingUVTransformationMatrix, struct FMatrix* UncropingUVTransformationMatrix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.GetCroppingUVTransformationMatrixFromPostMoveSettings");
		
		UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Params params {};
		params.PostMoveSettings = PostMoveSettings;
		params.AspectRatio = AspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CropingUVTransformationMatrix != nullptr)
			*CropingUVTransformationMatrix = params.CropingUVTransformationMatrix;
		if (UncropingUVTransformationMatrix != nullptr)
			*UncropingUVTransformationMatrix = params.UncropingUVTransformationMatrix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.GetComposureElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ElementName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACompositingElement* UComposureBlueprintLibrary::GetComposureElement(const class FName& ElementName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.GetComposureElement");
		
		UComposureBlueprintLibrary_GetComposureElement_Params params {};
		params.ElementName = ElementName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.DeleteComposureElementAndChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ElementToDelete                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposureBlueprintLibrary::DeleteComposureElementAndChildren(const class FName& ElementToDelete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.DeleteComposureElementAndChildren");
		
		UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Params params {};
		params.ElementToDelete = ElementToDelete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.CreatePlayerCompositingTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UComposurePlayerCompositingTarget* UComposureBlueprintLibrary::CreatePlayerCompositingTarget(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.CreatePlayerCompositingTarget");
		
		UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.CreateComposureElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ElementName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ClassType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      LevelContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACompositingElement* UComposureBlueprintLibrary::CreateComposureElement(const class FName& ElementName, class UClass* ClassType, class AActor* LevelContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.CreateComposureElement");
		
		UComposureBlueprintLibrary_CreateComposureElement_Params params {};
		params.ElementName = ElementName;
		params.ClassType = ClassType;
		params.LevelContext = LevelContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.CopyCameraSettingsToSceneCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCameraComponent*                            SrcCamera                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneCaptureComponent2D*                    DstCaptureComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OriginalFocalLength                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OverscanFactor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposureBlueprintLibrary::CopyCameraSettingsToSceneCapture(class UCameraComponent* SrcCamera, class USceneCaptureComponent2D* DstCaptureComponent, float OriginalFocalLength, float OverscanFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.CopyCameraSettingsToSceneCapture");
		
		UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Params params {};
		params.SrcCamera = SrcCamera;
		params.DstCaptureComponent = DstCaptureComponent;
		params.OriginalFocalLength = OriginalFocalLength;
		params.OverscanFactor = OverscanFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureBlueprintLibrary.AttachComposureElement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ParentName                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ChildName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UComposureBlueprintLibrary::AttachComposureElement(const class FName& ParentName, const class FName& ChildName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureBlueprintLibrary.AttachComposureElement");
		
		UComposureBlueprintLibrary_AttachComposureElement_Params params {};
		params.ParentName = ParentName;
		params.ChildName = ChildName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposureBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposureBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposureBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposureGameSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposureGameSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposureGameSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePostProcessPass.SetSetupMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposurePostProcessPass::SetSetupMaterial(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessPass.SetSetupMaterial");
		
		UComposurePostProcessPass_SetSetupMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePostProcessPass.SetOutputRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposurePostProcessPass::SetOutputRenderTarget(class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessPass.SetOutputRenderTarget");
		
		UComposurePostProcessPass_SetOutputRenderTarget_Params params {};
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePostProcessPass.GetSetupMaterial
	 * 		Flags  -> ()
	 */
	class UMaterialInterface* UComposurePostProcessPass::GetSetupMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessPass.GetSetupMaterial");
		
		UComposurePostProcessPass_GetSetupMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePostProcessPass.GetOutputRenderTarget
	 * 		Flags  -> ()
	 */
	class UTextureRenderTarget2D* UComposurePostProcessPass::GetOutputRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessPass.GetOutputRenderTarget");
		
		UComposurePostProcessPass_GetOutputRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposurePostProcessPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposurePostProcessPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposurePostProcessPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureLensBloomPass.SetTonemapperReplacingMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposureLensBloomPass::SetTonemapperReplacingMaterial(class UMaterialInstanceDynamic* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureLensBloomPass.SetTonemapperReplacingMaterial");
		
		UComposureLensBloomPass_SetTonemapperReplacingMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureLensBloomPass.BloomToRenderTarget
	 * 		Flags  -> ()
	 */
	void UComposureLensBloomPass::BloomToRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureLensBloomPass.BloomToRenderTarget");
		
		UComposureLensBloomPass_BloomToRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposureLensBloomPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposureLensBloomPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposureLensBloomPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePostProcessPassPolicy.SetupPostProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    SceneCapture                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInterface*                          TonemapperOverride                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposurePostProcessPassPolicy::SetupPostProcess(class USceneCaptureComponent2D* SceneCapture, class UMaterialInterface** TonemapperOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessPassPolicy.SetupPostProcess");
		
		UComposurePostProcessPassPolicy_SetupPostProcess_Params params {};
		params.SceneCapture = SceneCapture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TonemapperOverride != nullptr)
			*TonemapperOverride = params.TonemapperOverride;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposurePostProcessPassPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposurePostProcessPassPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposurePostProcessPassPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposureLensBloomPassPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposureLensBloomPassPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposureLensBloomPassPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposurePlayerCompositingCameraModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposurePlayerCompositingCameraModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposurePlayerCompositingCameraModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposurePlayerCompositingInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposurePlayerCompositingInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposurePlayerCompositingInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePlayerCompositingTarget.SetRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposurePlayerCompositingTarget::SetRenderTarget(class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePlayerCompositingTarget.SetRenderTarget");
		
		UComposurePlayerCompositingTarget_SetRenderTarget_Params params {};
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePlayerCompositingTarget.SetPlayerCameraManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerCameraManager*                        PlayerCameraManager                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APlayerCameraManager* UComposurePlayerCompositingTarget::SetPlayerCameraManager(class APlayerCameraManager* PlayerCameraManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePlayerCompositingTarget.SetPlayerCameraManager");
		
		UComposurePlayerCompositingTarget_SetPlayerCameraManager_Params params {};
		params.PlayerCameraManager = PlayerCameraManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePlayerCompositingTarget.GetPlayerCameraManager
	 * 		Flags  -> ()
	 */
	class APlayerCameraManager* UComposurePlayerCompositingTarget::GetPlayerCameraManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePlayerCompositingTarget.GetPlayerCameraManager");
		
		UComposurePlayerCompositingTarget_GetPlayerCameraManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposurePlayerCompositingTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposurePlayerCompositingTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposurePlayerCompositingTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureCompositingTargetComponent.SetDisplayTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    DisplayTexture                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposureCompositingTargetComponent::SetDisplayTexture(class UTexture* DisplayTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureCompositingTargetComponent.SetDisplayTexture");
		
		UComposureCompositingTargetComponent_SetDisplayTexture_Params params {};
		params.DisplayTexture = DisplayTexture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureCompositingTargetComponent.GetDisplayTexture
	 * 		Flags  -> ()
	 */
	class UTexture* UComposureCompositingTargetComponent::GetDisplayTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureCompositingTargetComponent.GetDisplayTexture");
		
		UComposureCompositingTargetComponent_GetDisplayTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposureCompositingTargetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposureCompositingTargetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposureCompositingTargetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposurePostProcessBlendable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposurePostProcessBlendable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposurePostProcessBlendable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposurePostProcessingPassProxy.Execute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    PrePassInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UComposurePostProcessPassPolicy*             PostProcessPass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComposurePostProcessingPassProxy::Execute(class UTexture* PrePassInput, class UComposurePostProcessPassPolicy* PostProcessPass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposurePostProcessingPassProxy.Execute");
		
		UComposurePostProcessingPassProxy_Execute_Params params {};
		params.PrePassInput = PrePassInput;
		params.PostProcessPass = PostProcessPass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposurePostProcessingPassProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposurePostProcessingPassProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposurePostProcessingPassProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.ComposureTonemapperPass.TonemapToRenderTarget
	 * 		Flags  -> ()
	 */
	void UComposureTonemapperPass::TonemapToRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.ComposureTonemapperPass.TonemapToRenderTarget");
		
		UComposureTonemapperPass_TonemapToRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposureTonemapperPass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposureTonemapperPass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposureTonemapperPass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComposureTonemapperPassPolicy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComposureTonemapperPassPolicy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.ComposureTonemapperPassPolicy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.CompositingTextureLookupTable.FindNamedPassResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LookupName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    OutTexture                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCompositingTextureLookupTable::FindNamedPassResult(const class FName& LookupName, class UTexture** OutTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.CompositingTextureLookupTable.FindNamedPassResult");
		
		UCompositingTextureLookupTable_FindNamedPassResult_Params params {};
		params.LookupName = LookupName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTexture != nullptr)
			*OutTexture = params.OutTexture;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCompositingTextureLookupTable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositingTextureLookupTable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.CompositingTextureLookupTable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.MovieSceneComposureExportClient.InitializeForExport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMovieSceneComposureExportInitializer*       ExportInitializer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneComposureExportClient::InitializeForExport(class UMovieSceneComposureExportInitializer* ExportInitializer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.MovieSceneComposureExportClient.InitializeForExport");
		
		UMovieSceneComposureExportClient_InitializeForExport_Params params {};
		params.ExportInitializer = ExportInitializer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneComposureExportClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComposureExportClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.MovieSceneComposureExportClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Composure.MovieSceneComposureExportInitializer.ExportSceneCaptureBuffers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACompositingElement*                         CompShotElement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneCaptureComponent2D*                    SceneCapture                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              BuffersToExport                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovieSceneComposureExportInitializer::ExportSceneCaptureBuffers(class ACompositingElement* CompShotElement, class USceneCaptureComponent2D* SceneCapture, TArray<class FString> BuffersToExport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Composure.MovieSceneComposureExportInitializer.ExportSceneCaptureBuffers");
		
		UMovieSceneComposureExportInitializer_ExportSceneCaptureBuffers_Params params {};
		params.CompShotElement = CompShotElement;
		params.SceneCapture = SceneCapture;
		params.BuffersToExport = BuffersToExport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneComposureExportInitializer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComposureExportInitializer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.MovieSceneComposureExportInitializer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneComposureExportTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComposureExportTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.MovieSceneComposureExportTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneComposureExportSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComposureExportSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.MovieSceneComposureExportSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneComposurePostMoveSettingsSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComposurePostMoveSettingsSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.MovieSceneComposurePostMoveSettingsSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneComposurePostMoveSettingsTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneComposurePostMoveSettingsTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.MovieSceneComposurePostMoveSettingsTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerViewportCompositingOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerViewportCompositingOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.PlayerViewportCompositingOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerCompOutputCameraModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerCompOutputCameraModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Composure.PlayerCompOutputCameraModifier");
		return ptr;
	}

}


