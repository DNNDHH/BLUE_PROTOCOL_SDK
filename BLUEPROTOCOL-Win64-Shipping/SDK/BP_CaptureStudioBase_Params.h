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
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RefreshEnableFlag
	 */
	struct ABP_CaptureStudioBase_C_RefreshEnableFlag_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnableByMoveing
	 */
	struct ABP_CaptureStudioBase_C_SetCaptureEnableByMoveing_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetLightEnable
	 */
	struct ABP_CaptureStudioBase_C_SetLightEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnable_Internal
	 */
	struct ABP_CaptureStudioBase_C_SetCaptureEnable_Internal_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWantVisible;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RotateByExternalDirectionalLightRotation
	 */
	struct ABP_CaptureStudioBase_C_RotateByExternalDirectionalLightRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureWhenMovingMode
	 */
	struct ABP_CaptureStudioBase_C_SetCaptureWhenMovingMode_Params
	{
	public:
		bool                                                       bCaptureWhenMovingMode;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9FN7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CaptureGraceTime;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetStudioVisibility
	 */
	struct ABP_CaptureStudioBase_C_SetStudioVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureEnable
	 */
	struct ABP_CaptureStudioBase_C_SetCaptureEnable_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetMeshAndCameraResetActive
	 */
	struct ABP_CaptureStudioBase_C_SetMeshAndCameraResetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.RotateMesh
	 */
	struct ABP_CaptureStudioBase_C_RotateMesh_Params
	{
	public:
		float                                                      InAddRotateValue;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureCameraZoomActive
	 */
	struct ABP_CaptureStudioBase_C_SetCaptureCameraZoomActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetCaptureCameraMoveActive
	 */
	struct ABP_CaptureStudioBase_C_SetCaptureCameraMoveActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.SetMeshRotateActive
	 */
	struct ABP_CaptureStudioBase_C_SetMeshRotateActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.UserConstructionScript
	 */
	struct ABP_CaptureStudioBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ConstructPriorityGraph
	 */
	struct ABP_CaptureStudioBase_C_ConstructPriorityGraph_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DestructPriorityGraph
	 */
	struct ABP_CaptureStudioBase_C_DestructPriorityGraph_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnCreateCapture
	 */
	struct ABP_CaptureStudioBase_C_OnCreateCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnDestroyCapture
	 */
	struct ABP_CaptureStudioBase_C_OnDestroyCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnEnableCapture
	 */
	struct ABP_CaptureStudioBase_C_OnEnableCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.OnDisableCapture
	 */
	struct ABP_CaptureStudioBase_C_OnDisableCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_MeshRotate
	 */
	struct ABP_CaptureStudioBase_C_Tick_MeshRotate_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_CaptureCameraZoom
	 */
	struct ABP_CaptureStudioBase_C_Tick_CaptureCameraZoom_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_CaptureCameraMove
	 */
	struct ABP_CaptureStudioBase_C_Tick_CaptureCameraMove_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.UpdateCaptureCameraMove
	 */
	struct ABP_CaptureStudioBase_C_UpdateCaptureCameraMove_Params
	{
	public:
		float                                                      InAddMoveValue;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.Tick_ModelAndCameraReset
	 */
	struct ABP_CaptureStudioBase_C_Tick_ModelAndCameraReset_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ResetMeshAndCameraTransform
	 */
	struct ABP_CaptureStudioBase_C_ResetMeshAndCameraTransform_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DoEnable
	 */
	struct ABP_CaptureStudioBase_C_DoEnable_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveTick
	 */
	struct ABP_CaptureStudioBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.DoDisable
	 */
	struct ABP_CaptureStudioBase_C_DoDisable_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveBeginPlay
	 */
	struct ABP_CaptureStudioBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ReceiveEndPlay
	 */
	struct ABP_CaptureStudioBase_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.CaptureWhenMovingUpdate
	 */
	struct ABP_CaptureStudioBase_C_CaptureWhenMovingUpdate_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.TargetMoving
	 */
	struct ABP_CaptureStudioBase_C_TargetMoving_Params
	{	};

	/**
	 * Function BP_CaptureStudioBase.BP_CaptureStudioBase_C.ExecuteUbergraph_BP_CaptureStudioBase
	 */
	struct ABP_CaptureStudioBase_C_ExecuteUbergraph_BP_CaptureStudioBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
