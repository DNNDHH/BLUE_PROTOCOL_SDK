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
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RefreshEnableFlag
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::RefreshEnableFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RefreshEnableFlag");
		
		ABP_CaptureStudioBase_C_RefreshEnableFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnableByMoveing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CaptureStudioBase_C::SetCaptureEnableByMoveing(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnableByMoveing");
		
		ABP_CaptureStudioBase_C_SetCaptureEnableByMoveing_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetLightEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CaptureStudioBase_C::SetLightEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetLightEnable");
		
		ABP_CaptureStudioBase_C_SetLightEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnable_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bWantVisible                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CaptureStudioBase_C::SetCaptureEnable_Internal(bool enable, bool* bWantVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnable_Internal");
		
		ABP_CaptureStudioBase_C_SetCaptureEnable_Internal_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bWantVisible != nullptr)
			*bWantVisible = params.bWantVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RotateByExternalDirectionalLightRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CaptureStudioBase_C::RotateByExternalDirectionalLightRotation(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RotateByExternalDirectionalLightRotation");
		
		ABP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureWhenMovingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCaptureWhenMovingMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CaptureGraceTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaptureStudioBase_C::SetCaptureWhenMovingMode(bool bCaptureWhenMovingMode, float CaptureGraceTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureWhenMovingMode");
		
		ABP_CaptureStudioBase_C_SetCaptureWhenMovingMode_Params params {};
		params.bCaptureWhenMovingMode = bCaptureWhenMovingMode;
		params.CaptureGraceTime = CaptureGraceTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetStudioVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CaptureStudioBase_C::SetStudioVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetStudioVisibility");
		
		ABP_CaptureStudioBase_C_SetStudioVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CaptureStudioBase_C::SetCaptureEnable(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnable");
		
		ABP_CaptureStudioBase_C_SetCaptureEnable_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetMeshAndCameraResetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CaptureStudioBase_C::SetMeshAndCameraResetActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetMeshAndCameraResetActive");
		
		ABP_CaptureStudioBase_C_SetMeshAndCameraResetActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RotateMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAddRotateValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaptureStudioBase_C::RotateMesh(float InAddRotateValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RotateMesh");
		
		ABP_CaptureStudioBase_C_RotateMesh_Params params {};
		params.InAddRotateValue = InAddRotateValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureCameraZoomActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CaptureStudioBase_C::SetCaptureCameraZoomActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureCameraZoomActive");
		
		ABP_CaptureStudioBase_C_SetCaptureCameraZoomActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureCameraMoveActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CaptureStudioBase_C::SetCaptureCameraMoveActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureCameraMoveActive");
		
		ABP_CaptureStudioBase_C_SetCaptureCameraMoveActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetMeshRotateActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CaptureStudioBase_C::SetMeshRotateActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetMeshRotateActive");
		
		ABP_CaptureStudioBase_C_SetMeshRotateActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.UserConstructionScript");
		
		ABP_CaptureStudioBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ConstructPriorityGraph
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::ConstructPriorityGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ConstructPriorityGraph");
		
		ABP_CaptureStudioBase_C_ConstructPriorityGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DestructPriorityGraph
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::DestructPriorityGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DestructPriorityGraph");
		
		ABP_CaptureStudioBase_C_DestructPriorityGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnCreateCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaptureStudioBase_C::OnCreateCapture(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnCreateCapture");
		
		ABP_CaptureStudioBase_C_OnCreateCapture_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnDestroyCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaptureStudioBase_C::OnDestroyCapture(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnDestroyCapture");
		
		ABP_CaptureStudioBase_C_OnDestroyCapture_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnEnableCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaptureStudioBase_C::OnEnableCapture(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnEnableCapture");
		
		ABP_CaptureStudioBase_C_OnEnableCapture_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnDisableCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaptureStudioBase_C::OnDisableCapture(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnDisableCapture");
		
		ABP_CaptureStudioBase_C_OnDisableCapture_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_MeshRotate
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::Tick_MeshRotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_MeshRotate");
		
		ABP_CaptureStudioBase_C_Tick_MeshRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_CaptureCameraZoom
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::Tick_CaptureCameraZoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_CaptureCameraZoom");
		
		ABP_CaptureStudioBase_C_Tick_CaptureCameraZoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_CaptureCameraMove
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::Tick_CaptureCameraMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_CaptureCameraMove");
		
		ABP_CaptureStudioBase_C_Tick_CaptureCameraMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.UpdateCaptureCameraMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAddMoveValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaptureStudioBase_C::UpdateCaptureCameraMove(float InAddMoveValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.UpdateCaptureCameraMove");
		
		ABP_CaptureStudioBase_C_UpdateCaptureCameraMove_Params params {};
		params.InAddMoveValue = InAddMoveValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_ModelAndCameraReset
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::Tick_ModelAndCameraReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_ModelAndCameraReset");
		
		ABP_CaptureStudioBase_C_Tick_ModelAndCameraReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ResetMeshAndCameraTransform
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::ResetMeshAndCameraTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ResetMeshAndCameraTransform");
		
		ABP_CaptureStudioBase_C_ResetMeshAndCameraTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DoEnable
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::DoEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DoEnable");
		
		ABP_CaptureStudioBase_C_DoEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaptureStudioBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveTick");
		
		ABP_CaptureStudioBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DoDisable
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::DoDisable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DoDisable");
		
		ABP_CaptureStudioBase_C_DoDisable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveBeginPlay");
		
		ABP_CaptureStudioBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaptureStudioBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveEndPlay");
		
		ABP_CaptureStudioBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.CaptureWhenMovingUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaptureStudioBase_C::CaptureWhenMovingUpdate(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.CaptureWhenMovingUpdate");
		
		ABP_CaptureStudioBase_C_CaptureWhenMovingUpdate_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.TargetMoving
	 * 		Flags  -> ()
	 */
	void ABP_CaptureStudioBase_C::TargetMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.TargetMoving");
		
		ABP_CaptureStudioBase_C_TargetMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ExecuteUbergraph_BP_CaptureStudioBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CaptureStudioBase_C::ExecuteUbergraph_BP_CaptureStudioBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ExecuteUbergraph_BP_CaptureStudioBase");
		
		ABP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CaptureStudioBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CaptureStudioBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CaptureStudioBase.BP_CaptureStudioBase_C");
		return ptr;
	}

}


