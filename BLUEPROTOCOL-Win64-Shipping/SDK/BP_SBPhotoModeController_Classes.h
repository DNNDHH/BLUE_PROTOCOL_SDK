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
	 * BlueprintGeneratedClass BP_SBPhotoModeController.BP_SBPhotoModeController_C
	 * Size -> 0x0070 (FullSize[0x0748] - InheritedSize[0x06D8])
	 */
	class ABP_SBPhotoModeController_C : public ASBPhotoModeController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bMenuMode;                                               // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CVGX[0x7];                                   // 0x06E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_PhotoModeControllMenu_C*                        MenuWidget;                                              // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_SBPhotoModePawn_C*                               PhotoModePawn;                                           // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        CameraActor;                                             // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            PrevControlRotation;                                     // 0x0700(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PrevCameraDistance;                                      // 0x070C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEnableDOF;                                              // 0x0718(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6UDY[0x3];                                   // 0x0719(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FocalDistance;                                           // 0x071C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Aperture;                                                // 0x0720(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFocusToPlayer;                                          // 0x0724(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U2QM[0x3];                                   // 0x0725(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBPlayerPhotoModeComponent*                         PhotoModeComp;                                           // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLookAtLocEnabled;                                       // 0x0730(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLookAtActive;                                           // 0x0731(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLookAtEyeActive;                                        // 0x0732(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FA0D[0x5];                                   // 0x0733(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ScreenShotCapturedEvent;                                 // 0x0738(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		class ABP_PlayerSceneCapture2D_C* SpawnBpPlayerSceneCapture2d(const struct FTransform& SpawnTransform, class ASBPlayerCharacter* BasePlayerCharacter);
		void Tick_Internal();
		void SetControlRotationByUi(const struct FRotator& NewRotation);
		void SetCameraRotationRoll(float Value);
		void SetCameraRotationPitch(float Value);
		void SetCameraRotationYaw(float Value);
		void RequestSkillAction(ESkillActionPosition Position, bool bPressed);
		void SetFocalDistance(float Value);
		void SetAperture(float Value);
		void SetMaxForegroundRadius(float Value);
		void SetMaxBackgroundRadius(float Value);
		void SetEnableDOF(bool bValue);
		void RequestToggleControlMode();
		void RequestQuit();
		void RequestToggleTalkMode();
		void RequestResetCamera();
		void SetFocusToPlayer(bool bFocusToPlayer);
		void OnChangeLookAtPlayer(bool bValue);
		void ReceiveOnActivate(class APlayerController* OriginalPC);
		void ReceiveOnDeactivate(class APlayerController* RestoredPC);
		void ReceivePossess(class APawn* PossessedPawn);
		void OnPossessPhotoModePawn(class ABP_SBPhotoModePawn_C* PhotoModePawn);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveOnPostActivate(class APlayerController* OriginalPC);
		void ReceiveOnPreDeactivate(class APlayerController* OriginalPC);
		void OnChangeControlMode(bool bInPlayerControlMode, bool bPreChange);
		void OnChangeTalkMode(bool bInTalkMode, bool bPreChange);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BP_ResetCamera();
		void OnChangeFov(float Value, bool bByUi);
		void BP_ToggleCameraControlView();
		void BP_TogglePlayerControlView();
		void BP_OnRequestQuitPhotoMode();
		void BP_OnUpdatePlayerControlData();
		void ExecuteUbergraph_BP_SBPhotoModeController(int32_t EntryPoint);
		void ScreenShotCapturedEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
