#pragma once

 

// Package: BP_SBPhotoModeController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SBPhotoModeController.BP_SBPhotoModeController_C
// 0x0070 (0x0770 - 0x0700)
class ABP_SBPhotoModeController_C final : public ASBPhotoModeController
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0700(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bMenuMode;                                         // 0x0708(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CF7[0x7];                                     // 0x0709(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_PhotoModeControllMenu_C*           MenuWidget;                                        // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SBPhotoModePawn_C*                  PhotoModePawn;                                     // 0x0718(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           CameraActor;                                       // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PrevControlRotation;                               // 0x0728(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                PrevCameraDistance;                                // 0x0734(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableDOF;                                        // 0x0740(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CF8[0x3];                                     // 0x0741(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FocalDistance;                                     // 0x0744(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Aperture;                                          // 0x0748(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFocusToPlayer;                                    // 0x074C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CF9[0x3];                                     // 0x074D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerPhotoModeComponent*            PhotoModeComp;                                     // 0x0750(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLookAtLocEnabled;                                 // 0x0758(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLookAtActive;                                     // 0x0759(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLookAtEyeActive;                                  // 0x075A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CFA[0x5];                                     // 0x075B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ScreenShotCapturedEvent;                           // 0x0760(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ScreenShotCapturedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_SBPhotoModeController(int32 EntryPoint);
	void BP_OnUpdatePlayerControlData();
	void BP_OnRequestQuitPhotoMode();
	void BP_TogglePlayerControlView();
	void BP_ToggleCameraControlView();
	void OnChangeFov(float Value, bool bByUi);
	void BP_ResetCamera();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnChangeTalkMode(bool bInTalkMode, bool bPreChange);
	void OnChangeControlMode(bool bInPlayerControlMode, bool bPreChange);
	void ReceiveOnPreDeactivate(class APlayerController* OriginalPC);
	void ReceiveOnPostActivate(class APlayerController* OriginalPC);
	void ReceiveTick(float DeltaSeconds);
	void OnPossessPhotoModePawn(class ABP_SBPhotoModePawn_C* Param_PhotoModePawn);
	void ReceivePossess(class APawn* PossessedPawn);
	void ReceiveOnDeactivate(class APlayerController* RestoredPC);
	void ReceiveOnActivate(class APlayerController* OriginalPC);
	void OnChangeLookAtPlayer(bool bValue);
	void OnUploadPhotoModeImageDelegate(const bool bResult);
	void OnEndDialogScreenshotCaptuerd(const EYesNoDialogResult Result);
	void OnScreenshotCaptured();
	void SetFocusToPlayer(bool Param_bFocusToPlayer);
	void RequestResetCamera();
	void RequestToggleTalkMode();
	void RequestQuit();
	void RequestToggleControlMode();
	void SetEnableDOF(bool bValue);
	void SetMaxBackgroundRadius(float Value);
	void SetMaxForegroundRadius(float Value);
	void SetAperture(float Value);
	void SetFocalDistance(float Value);
	void RequestSkillAction(const ESkillActionPosition Position, bool bPressed);
	void SetCameraRotationYaw(float Value);
	void SetCameraRotationPitch(float Value);
	void SetCameraRotationRoll(float Value);
	void SetControlRotationByUi(const struct FRotator& NewRotation);
	void Tick_Internal();
	class ABP_PlayerSceneCapture2D_C* SpawnBpPlayerSceneCapture2d(const struct FTransform& SpawnTransform, class ASBPlayerCharacter* BasePlayerCharacter);
	void GetImage_PNGData(TArray<uint8>* Param_Image_PNGData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SBPhotoModeController_C">();
	}
	static class ABP_SBPhotoModeController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SBPhotoModeController_C>();
	}
};
static_assert(alignof(ABP_SBPhotoModeController_C) == 0x000008, "Wrong alignment on ABP_SBPhotoModeController_C");
static_assert(sizeof(ABP_SBPhotoModeController_C) == 0x000770, "Wrong size on ABP_SBPhotoModeController_C");
static_assert(offsetof(ABP_SBPhotoModeController_C, UberGraphFrame) == 0x000700, "Member 'ABP_SBPhotoModeController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, bMenuMode) == 0x000708, "Member 'ABP_SBPhotoModeController_C::bMenuMode' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, MenuWidget) == 0x000710, "Member 'ABP_SBPhotoModeController_C::MenuWidget' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, PhotoModePawn) == 0x000718, "Member 'ABP_SBPhotoModeController_C::PhotoModePawn' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, CameraActor) == 0x000720, "Member 'ABP_SBPhotoModeController_C::CameraActor' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, PrevControlRotation) == 0x000728, "Member 'ABP_SBPhotoModeController_C::PrevControlRotation' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, PrevCameraDistance) == 0x000734, "Member 'ABP_SBPhotoModeController_C::PrevCameraDistance' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, bEnableDOF) == 0x000740, "Member 'ABP_SBPhotoModeController_C::bEnableDOF' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, FocalDistance) == 0x000744, "Member 'ABP_SBPhotoModeController_C::FocalDistance' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, Aperture) == 0x000748, "Member 'ABP_SBPhotoModeController_C::Aperture' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, bFocusToPlayer) == 0x00074C, "Member 'ABP_SBPhotoModeController_C::bFocusToPlayer' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, PhotoModeComp) == 0x000750, "Member 'ABP_SBPhotoModeController_C::PhotoModeComp' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, bLookAtLocEnabled) == 0x000758, "Member 'ABP_SBPhotoModeController_C::bLookAtLocEnabled' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, bLookAtActive) == 0x000759, "Member 'ABP_SBPhotoModeController_C::bLookAtActive' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, bLookAtEyeActive) == 0x00075A, "Member 'ABP_SBPhotoModeController_C::bLookAtEyeActive' has a wrong offset!");
static_assert(offsetof(ABP_SBPhotoModeController_C, ScreenShotCapturedEvent) == 0x000760, "Member 'ABP_SBPhotoModeController_C::ScreenShotCapturedEvent' has a wrong offset!");

}

