#pragma once

 

// Package: BP_CaptureStudioBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CaptureStudioBase.BP_CaptureStudioBase_C
// 0x0178 (0x03A0 - 0x0228)
class ABP_CaptureStudioBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDirectionalLightComponent*             SkyLight;                                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        EmptyComponent;                                    // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             DirectionalLight;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Pivot;                                             // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMeshRotateActive;                                // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCaptureCameraMoveActive;                         // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCaptureCameraZoomActive;                         // 0x0262(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMeshAndCameraResetActive;                        // 0x0263(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         CurrCaptureCameraMoveMin;                          // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrCaptureCameraMoveMax;                          // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrCaptureCameraZoomInMax;                        // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrCaptureCameraZoomOutMax;                       // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastMousePositionY;                                // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMouseLeftButtonDown_ForCameraMove;               // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B2E[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             PivotDefaultTransform;                             // 0x0280(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             CaptureCameraDefaultTransform;                     // 0x02B0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsResetButtonPressed;                              // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bRootEnabled;                                      // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCaptureEnabled;                                   // 0x02E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLightEnabled;                                     // 0x02E3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUseExternalDirectionalLightRotation;              // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B2F[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Priority;                                          // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bExistPriorityCapture;                             // 0x02EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B30[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class UObject*>                          HighPriorityCaptureList;                           // 0x02F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class UObject*>                          HigherPriorityCaptureList;                         // 0x0340(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bCaptureWhenMovingMode;                            // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bCaptureEnableByMoveing;                           // 0x0391(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B31[0x2];                                     // 0x0392(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CaptureCountTimer;                                 // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureGraceTime;                                  // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bExistHighPriorityCapture;                         // 0x039C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bExistHigherPriorityCapture;                       // 0x039D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EmptyComponentRegist;                              // 0x039E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_CaptureStudioBase(int32 EntryPoint);
	void TargetMoving();
	void CaptureWhenMovingUpdate(float DeltaTime);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void DoDisable();
	void ReceiveTick(float DeltaSeconds);
	void DoEnable();
	void ResetMeshAndCameraTransform();
	void Tick_ModelAndCameraReset();
	void UpdateCaptureCameraMove(float InAddMoveValue);
	void Tick_CaptureCameraMove();
	void Tick_CaptureCameraZoom();
	void Tick_MeshRotate();
	void OnDisableCapture(class UObject* Sender, class UObject* Param);
	void OnEnableCapture(class UObject* Sender, class UObject* Param);
	void OnDestroyCapture(class UObject* Sender, class UObject* Param);
	void OnCreateCapture(class UObject* Sender, class UObject* Param);
	void DestructPriorityGraph();
	void ConstructPriorityGraph();
	void UserConstructionScript();
	void SetMeshRotateActive(bool IsActive);
	void SetCaptureCameraMoveActive(bool IsActive);
	void SetCaptureCameraZoomActive(bool IsActive);
	void RotateMesh(float InAddRotateValue);
	void SetMeshAndCameraResetActive(bool IsActive);
	void SetCaptureEnable(bool Enable);
	void SetStudioVisibility(bool InIsVisible);
	void SetCaptureWhenMovingMode(bool Param_bCaptureWhenMovingMode, float Param_CaptureGraceTime);
	void RotateByExternalDirectionalLightRotation(const struct FRotator& Rotation);
	void SetCaptureEnable_Internal(bool Enable, bool* bWantVisible);
	void SetLightEnable(bool bEnable);
	void SetCaptureEnableByMoveing(bool Enable);
	void RefreshEnableFlag();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CaptureStudioBase_C">();
	}
	static class ABP_CaptureStudioBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CaptureStudioBase_C>();
	}
};
static_assert(alignof(ABP_CaptureStudioBase_C) == 0x000010, "Wrong alignment on ABP_CaptureStudioBase_C");
static_assert(sizeof(ABP_CaptureStudioBase_C) == 0x0003A0, "Wrong size on ABP_CaptureStudioBase_C");
static_assert(offsetof(ABP_CaptureStudioBase_C, UberGraphFrame) == 0x000228, "Member 'ABP_CaptureStudioBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, SkyLight) == 0x000230, "Member 'ABP_CaptureStudioBase_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, EmptyComponent) == 0x000238, "Member 'ABP_CaptureStudioBase_C::EmptyComponent' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, DirectionalLight) == 0x000240, "Member 'ABP_CaptureStudioBase_C::DirectionalLight' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, SceneCaptureComponent2D) == 0x000248, "Member 'ABP_CaptureStudioBase_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, Pivot) == 0x000250, "Member 'ABP_CaptureStudioBase_C::Pivot' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, DefaultSceneRoot) == 0x000258, "Member 'ABP_CaptureStudioBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, IsMeshRotateActive) == 0x000260, "Member 'ABP_CaptureStudioBase_C::IsMeshRotateActive' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, IsCaptureCameraMoveActive) == 0x000261, "Member 'ABP_CaptureStudioBase_C::IsCaptureCameraMoveActive' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, IsCaptureCameraZoomActive) == 0x000262, "Member 'ABP_CaptureStudioBase_C::IsCaptureCameraZoomActive' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, IsMeshAndCameraResetActive) == 0x000263, "Member 'ABP_CaptureStudioBase_C::IsMeshAndCameraResetActive' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, CurrCaptureCameraMoveMin) == 0x000264, "Member 'ABP_CaptureStudioBase_C::CurrCaptureCameraMoveMin' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, CurrCaptureCameraMoveMax) == 0x000268, "Member 'ABP_CaptureStudioBase_C::CurrCaptureCameraMoveMax' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, CurrCaptureCameraZoomInMax) == 0x00026C, "Member 'ABP_CaptureStudioBase_C::CurrCaptureCameraZoomInMax' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, CurrCaptureCameraZoomOutMax) == 0x000270, "Member 'ABP_CaptureStudioBase_C::CurrCaptureCameraZoomOutMax' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, LastMousePositionY) == 0x000274, "Member 'ABP_CaptureStudioBase_C::LastMousePositionY' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, IsMouseLeftButtonDown_ForCameraMove) == 0x000278, "Member 'ABP_CaptureStudioBase_C::IsMouseLeftButtonDown_ForCameraMove' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, PivotDefaultTransform) == 0x000280, "Member 'ABP_CaptureStudioBase_C::PivotDefaultTransform' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, CaptureCameraDefaultTransform) == 0x0002B0, "Member 'ABP_CaptureStudioBase_C::CaptureCameraDefaultTransform' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, IsResetButtonPressed) == 0x0002E0, "Member 'ABP_CaptureStudioBase_C::IsResetButtonPressed' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, bRootEnabled) == 0x0002E1, "Member 'ABP_CaptureStudioBase_C::bRootEnabled' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, bCaptureEnabled) == 0x0002E2, "Member 'ABP_CaptureStudioBase_C::bCaptureEnabled' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, bLightEnabled) == 0x0002E3, "Member 'ABP_CaptureStudioBase_C::bLightEnabled' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, bUseExternalDirectionalLightRotation) == 0x0002E4, "Member 'ABP_CaptureStudioBase_C::bUseExternalDirectionalLightRotation' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, Priority) == 0x0002E8, "Member 'ABP_CaptureStudioBase_C::Priority' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, bExistPriorityCapture) == 0x0002EC, "Member 'ABP_CaptureStudioBase_C::bExistPriorityCapture' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, HighPriorityCaptureList) == 0x0002F0, "Member 'ABP_CaptureStudioBase_C::HighPriorityCaptureList' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, HigherPriorityCaptureList) == 0x000340, "Member 'ABP_CaptureStudioBase_C::HigherPriorityCaptureList' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, bCaptureWhenMovingMode) == 0x000390, "Member 'ABP_CaptureStudioBase_C::bCaptureWhenMovingMode' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, bCaptureEnableByMoveing) == 0x000391, "Member 'ABP_CaptureStudioBase_C::bCaptureEnableByMoveing' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, CaptureCountTimer) == 0x000394, "Member 'ABP_CaptureStudioBase_C::CaptureCountTimer' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, CaptureGraceTime) == 0x000398, "Member 'ABP_CaptureStudioBase_C::CaptureGraceTime' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, bExistHighPriorityCapture) == 0x00039C, "Member 'ABP_CaptureStudioBase_C::bExistHighPriorityCapture' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, bExistHigherPriorityCapture) == 0x00039D, "Member 'ABP_CaptureStudioBase_C::bExistHigherPriorityCapture' has a wrong offset!");
static_assert(offsetof(ABP_CaptureStudioBase_C, EmptyComponentRegist) == 0x00039E, "Member 'ABP_CaptureStudioBase_C::EmptyComponentRegist' has a wrong offset!");

}

