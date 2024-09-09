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
	 * BlueprintGeneratedClass BP_CaptureStudioBase.BP_CaptureStudioBase_C
	 * Size -> 0x0177 (FullSize[0x039F] - InheritedSize[0x0228])
	 */
	class ABP_CaptureStudioBase_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDirectionalLightComponent*                          SkyLight;                                                // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     EmptyComponent;                                          // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDirectionalLightComponent*                          DirectionalLight;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D;                                 // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot;                                                   // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMeshRotateActive;                                      // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCaptureCameraMoveActive;                               // 0x0261(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCaptureCameraZoomActive;                               // 0x0262(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMeshAndCameraResetActive;                              // 0x0263(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CurrCaptureCameraMoveMin;                                // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrCaptureCameraMoveMax;                                // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrCaptureCameraZoomInMax;                              // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrCaptureCameraZoomOutMax;                             // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastMousePositionY;                                      // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMouseLeftButtonDown_ForCameraMove;                     // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_66YF[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PivotDefaultTransform;                                   // 0x0280(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          CaptureCameraDefaultTransform;                           // 0x02B0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsResetButtonPressed;                                    // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRootEnabled;                                            // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCaptureEnabled;                                         // 0x02E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLightEnabled;                                           // 0x02E3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUseExternalDirectionalLightRotation;                    // 0x02E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RJLZ[0x3];                                   // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Priority;                                                // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bExistPriorityCapture;                                   // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JGJJ[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              HighPriorityCaptureList[0x50];                           // 0x02F0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              HigherPriorityCaptureList[0x50];                         // 0x0340(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bCaptureWhenMovingMode;                                  // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCaptureEnableByMoveing;                                 // 0x0391(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4IE0[0x2];                                   // 0x0392(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CaptureCountTimer;                                       // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CaptureGraceTime;                                        // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bExistHighPriorityCapture;                               // 0x039C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bExistHigherPriorityCapture;                             // 0x039D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EmptyComponentRegist;                                    // 0x039E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RefreshEnableFlag();
		void SetCaptureEnableByMoveing(bool enable);
		void SetLightEnable(bool bEnable);
		void SetCaptureEnable_Internal(bool enable, bool* bWantVisible);
		void RotateByExternalDirectionalLightRotation(const struct FRotator& Rotation);
		void SetCaptureWhenMovingMode(bool bCaptureWhenMovingMode, float CaptureGraceTime);
		void SetStudioVisibility(bool InIsVisible);
		void SetCaptureEnable(bool enable);
		void SetMeshAndCameraResetActive(bool IsActive);
		void RotateMesh(float InAddRotateValue);
		void SetCaptureCameraZoomActive(bool IsActive);
		void SetCaptureCameraMoveActive(bool IsActive);
		void SetMeshRotateActive(bool IsActive);
		void UserConstructionScript();
		void ConstructPriorityGraph();
		void DestructPriorityGraph();
		void OnCreateCapture(class UObject* Sender, class UObject* Param);
		void OnDestroyCapture(class UObject* Sender, class UObject* Param);
		void OnEnableCapture(class UObject* Sender, class UObject* Param);
		void OnDisableCapture(class UObject* Sender, class UObject* Param);
		void Tick_MeshRotate();
		void Tick_CaptureCameraZoom();
		void Tick_CaptureCameraMove();
		void UpdateCaptureCameraMove(float InAddMoveValue);
		void Tick_ModelAndCameraReset();
		void ResetMeshAndCameraTransform();
		void DoEnable();
		void ReceiveTick(float DeltaSeconds);
		void DoDisable();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void CaptureWhenMovingUpdate(float DeltaTime);
		void TargetMoving();
		void ExecuteUbergraph_BP_CaptureStudioBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
