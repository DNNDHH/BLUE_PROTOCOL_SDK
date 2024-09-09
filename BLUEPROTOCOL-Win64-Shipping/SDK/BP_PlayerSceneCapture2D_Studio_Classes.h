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
	 * BlueprintGeneratedClass BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C
	 * Size -> 0x01B4 (FullSize[0x03DC] - InheritedSize[0x0228])
	 */
	class ABP_PlayerSceneCapture2D_Studio_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDirectionalLightComponent*                          SkyLight;                                                // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     EmptyComponent;                                          // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D_FaceImage;                       // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D_BustUpImage;                     // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D_BodyImage;                       // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDirectionalLightComponent*                          DirectionalLight;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D;                                 // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                PlayerAvatar;                                            // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            PlayerAvatarDefaultRotation;                             // 0x0278(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPlayerAvatarRotateActive;                              // 0x0284(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NSPA[0x3];                                   // 0x0285(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCharaPartsLoadedDelegete;                              // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              PlayerCharacterId;                                       // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class USBUserImageComponent*                               SBUserImageComponent;                                    // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnUploadImageCompleted;                                  // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsUploadImageSequenceSuspended;                          // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsResetPoseToDefaultRequestSucceeded;                    // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9XXX[0x2];                                   // 0x02C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SceneCaptureOffsetLocation_Bustup;                       // 0x02C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SceneCaptureOffsetLocation_Face;                         // 0x02D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            SceneCaptureOffsetRotation_Bustup;                       // 0x02DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            SceneCaptureOffsetRotation_Face;                         // 0x02E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RRA8[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_PlayerSceneCapture2D_C*                          BPPlayerSceneCapture2D;                                  // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bRootEnabled;                                            // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCaptureEnabled;                                         // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLightEnabled;                                           // 0x0302(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bForceDirectionalLightEanbled;                           // 0x0303(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUploadImageRunning;                                     // 0x0304(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCaptureWhenMovingMode;                                  // 0x0305(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bCaptureEnableByMoveing;                                 // 0x0306(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QOWT[0x1];                                   // 0x0307(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CaptureGraceTime;                                        // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CaptureCountTimer;                                       // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnEmoteFinished;                                         // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bEmotePlaying;                                           // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInitialLoaded;                                          // 0x0321(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N3YT[0x2];                                   // 0x0322(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ReservedEmote;                                           // 0x0324(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Priority;                                                // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bExistPriorityCapture;                                   // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YA2K[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              HighPriorityCaptureList[0x50];                           // 0x0338(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              HigherPriorityCaptureList[0x50];                         // 0x0388(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bExistHighPriorityCapture;                               // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bExistHigherPriorityCapture;                             // 0x03D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bForceCaptureEnabled;                                    // 0x03DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPlayerAvatarVisible;                                   // 0x03DB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsStudioVisible(bool* bOutIsVisible);
		void SetFaceCaptureVisibility(bool bNewVisibility);
		void DoOnEnableCapture();
		void SetFacialType(ESBFacialType InFacialType);
		void JumpMaschineState(const class FString& MachinName, const class FString& StateName);
		void SetSceneCapture2DCameraForBattleSet(bool InIsBattleSet);
		void UpdatePlayerAvatarWeapon();
		void SetCaptureEnable_Internal(bool bIsEnable, bool* bWantVisible);
		void SetCaptureEnableByMoveing(bool bIsEnable);
		void SetLightEnable(bool bIsEnable);
		void RefreshEnableFlag();
		void SetCharaCreateParameterOnly(const struct FSBCharaCreateParameter& CharaCreateParameter);
		void SetCostumePartsDataByUniqueId(const struct FSBMasterCostume& CostumeData, const class FString& InUniqueId);
		void SetCostumePartsData(const struct FSBMasterCostume& CostumeData);
		void SetForceDirectionalLightEnable(bool bEnable);
		bool IsEmoteFinished();
		void SetCaptureWhenMovingMode(bool bCaptureWhenMovingMode, float CaptureGraceTime);
		void CancelEmote();
		void RequestEmote(const class FName& EmoteName);
		void SetIsPlayerAvatarNaked(bool InIsNaked);
		struct FRotator GetDirectionalLightRotation();
		void SetPlayerAvatarEyeBlinkEnable(bool InIsEnable);
		void AdjustSceneCapture2dTransform(class USceneCaptureComponent2D* InSceneCapture, const struct FVector& InSceneCaptue2dOffsetLocation, const struct FRotator& InSceneCapture2dOffsetRotator);
		void SetCaptureEnable(bool bIsEnable);
		void SetStudioVisibility(bool InIsVisible);
		void RefreshAvatar();
		void UpdatePlayerAvatar();
		void UpdateAvatar(const struct FSBCharaCreateParameter& InNewCharaCreateParameter);
		void SetPlayerAvatarRotateActive(bool InIsActive);
		void ResetPlayerAvatarRotation();
		void RotatePlayerAvatar(float InAddRotateValue);
		void UserConstructionScript();
		void CaptureFaceImage();
		void AddAvatarRotation(float DeltaRotationZ);
		void ConstructPriorityGraph();
		void DestructPriorityGraph();
		void OnCreateCapture(class UObject* Sender, class UObject* Param);
		void OnDestroyCapture(class UObject* Sender, class UObject* Param);
		void OnEnableCapture(class UObject* Sender, class UObject* Param);
		void OnDisableCapture(class UObject* Sender, class UObject* Param);
		void StartUploadImage();
		void DoFaceImageUpload();
		void OnUploadFacemageComplete_(bool bResult, int32_t RetCode);
		void RequestPlayerAvatarResetPoseToDefault();
		void OnPlayerAvatarPoseChangedToDefault_(const class FString& InPrevStateName, const class FString& InNextStateName);
		void CompleteUploadImage();
		void ReceiveBeginPlay();
		void SetPlayerAvatarVisibility(bool IsVisible);
		void ReceiveTick(float DeltaSeconds);
		void Tick_PlayerAvatarRotate();
		void OnCharaPartsLoaded(bool Result);
		void CaptureWhenMovingUpdate(float DeltaTime);
		void TargetMoving();
		void SendCommand(const class FName& Command);
		void OnInitialLoaded();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ForceCaptureEnabled(bool Enabled);
		void ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio(int32_t EntryPoint);
		void OnEmoteFinished__DelegateSignature();
		void OnUploadImageCompleted__DelegateSignature();
		void OnCharaPartsLoadedDelegete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
