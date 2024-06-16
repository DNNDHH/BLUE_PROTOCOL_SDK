#pragma once

 

// Package: BP_PlayerSceneCapture2D_Studio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerSceneCapture2D_Studio.BP_PlayerSceneCapture2D_Studio_C
// 0x01B8 (0x03E0 - 0x0228)
class ABP_PlayerSceneCapture2D_Studio_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDirectionalLightComponent*             SkyLight;                                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        EmptyComponent;                                    // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D_FaceImage;                 // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D_BustUpImage;               // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D_BodyImage;                 // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             DirectionalLight;                                  // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   PlayerAvatar;                                      // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PlayerAvatarDefaultRotation;                       // 0x0278(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPlayerAvatarRotateActive;                        // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A12[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCharaPartsLoadedDelegete;                        // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 PlayerCharacterId;                                 // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class USBUserImageComponent*                  SBUserImageComponent;                              // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUploadImageCompleted;                            // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsUploadImageSequenceSuspended;                    // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsResetPoseToDefaultRequestSucceeded;              // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A13[0x2];                                     // 0x02C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SceneCaptureOffsetLocation_Bustup;                 // 0x02C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SceneCaptureOffsetLocation_Face;                   // 0x02D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SceneCaptureOffsetRotation_Bustup;                 // 0x02DC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               SceneCaptureOffsetRotation_Face;                   // 0x02E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A14[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             BPPlayerSceneCapture2D;                            // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRootEnabled;                                      // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCaptureEnabled;                                   // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLightEnabled;                                     // 0x0302(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bForceDirectionalLightEanbled;                     // 0x0303(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUploadImageRunning;                               // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCaptureWhenMovingMode;                            // 0x0305(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bCaptureEnableByMoveing;                           // 0x0306(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A15[0x1];                                     // 0x0307(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CaptureGraceTime;                                  // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureCountTimer;                                 // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEmoteFinished;                                   // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bEmotePlaying;                                     // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInitialLoaded;                                    // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A16[0x2];                                     // 0x0322(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ReservedEmote;                                     // 0x0324(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Priority;                                          // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bExistPriorityCapture;                             // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A17[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class UObject*>                          HighPriorityCaptureList;                           // 0x0338(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class UObject*>                          HigherPriorityCaptureList;                         // 0x0388(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bExistHighPriorityCapture;                         // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bExistHigherPriorityCapture;                       // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bForceCaptureEnabled;                              // 0x03DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPlayerAvatarVisible;                             // 0x03DB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnCharaPartsLoadedDelegete__DelegateSignature();
	void OnUploadImageCompleted__DelegateSignature();
	void OnEmoteFinished__DelegateSignature();
	void ExecuteUbergraph_BP_PlayerSceneCapture2D_Studio(int32 EntryPoint);
	void ForceCaptureEnabled(bool Enabled);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnInitialLoaded();
	void SendCommand(class FName Command);
	void TargetMoving();
	void CaptureWhenMovingUpdate(float DeltaTime);
	void OnCharaPartsLoaded(bool Result);
	void Tick_PlayerAvatarRotate();
	void ReceiveTick(float DeltaSeconds);
	void SetPlayerAvatarVisibility(bool IsVisible);
	void ReceiveBeginPlay();
	void CompleteUploadImage();
	void OnPlayerAvatarPoseChangedToDefault_____(const class FString& InPrevStateName, const class FString& InNextStateName);
	void RequestPlayerAvatarResetPoseToDefault();
	void OnUploadFacemageComplete_____(const bool bResult, int32 RetCode);
	void DoFaceImageUpload();
	void StartUploadImage();
	void OnDisableCapture(class UObject* Sender, class UObject* Param);
	void OnEnableCapture(class UObject* Sender, class UObject* Param);
	void OnDestroyCapture(class UObject* Sender, class UObject* Param);
	void OnCreateCapture(class UObject* Sender, class UObject* Param);
	void DestructPriorityGraph();
	void ConstructPriorityGraph();
	void AddAvatarRotation(float DeltaRotationZ);
	void CaptureFaceImage();
	void UserConstructionScript();
	void RotatePlayerAvatar(float InAddRotateValue);
	void ResetPlayerAvatarRotation();
	void SetPlayerAvatarRotateActive(bool InIsActive);
	void UpdateAvatar(const struct FSBCharaCreateParameter& InNewCharaCreateParameter);
	void UpdatePlayerAvatar();
	void RefreshAvatar();
	void SetStudioVisibility(bool InIsVisible);
	void SetCaptureEnable(bool bIsEnable);
	void AdjustSceneCapture2dTransform(class USceneCaptureComponent2D* InSceneCapture, const struct FVector& InSceneCaptue2dOffsetLocation, const struct FRotator& InSceneCapture2dOffsetRotator);
	void SetPlayerAvatarEyeBlinkEnable(bool InIsEnable);
	struct FRotator GetDirectionalLightRotation();
	void SetIsPlayerAvatarNaked(bool InIsNaked);
	void RequestEmote(class FName EmoteName);
	void CancelEmote();
	void SetCaptureWhenMovingMode(bool Param_bCaptureWhenMovingMode, float Param_CaptureGraceTime);
	bool IsEmoteFinished();
	void SetForceDirectionalLightEnable(bool bEnable);
	void SetCostumePartsData(const struct FSBMasterCostume& CostumeData);
	void SetCostumePartsDataByUniqueId(const struct FSBMasterCostume& CostumeData, const class FString& InUniqueId);
	void SetCharaCreateParameterOnly(const struct FSBCharaCreateParameter& CharaCreateParameter);
	void RefreshEnableFlag();
	void SetLightEnable(bool bIsEnable);
	void SetCaptureEnableByMoveing(bool bIsEnable);
	void SetCaptureEnable_Internal(bool bIsEnable, bool* bWantVisible);
	void UpdatePlayerAvatarWeapon();
	void SetSceneCapture2DCameraForBattleSet(bool InIsBattleSet);
	void JumpMaschineState(const class FString& MachinName, const class FString& StateName);
	void SetFacialType(const ESBFacialType InFacialType);
	void DoOnEnableCapture();
	void SetFaceCaptureVisibility(bool bNewVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerSceneCapture2D_Studio_C">();
	}
	static class ABP_PlayerSceneCapture2D_Studio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerSceneCapture2D_Studio_C>();
	}
};
static_assert(alignof(ABP_PlayerSceneCapture2D_Studio_C) == 0x000008, "Wrong alignment on ABP_PlayerSceneCapture2D_Studio_C");
static_assert(sizeof(ABP_PlayerSceneCapture2D_Studio_C) == 0x0003E0, "Wrong size on ABP_PlayerSceneCapture2D_Studio_C");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, UberGraphFrame) == 0x000228, "Member 'ABP_PlayerSceneCapture2D_Studio_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, SkyLight) == 0x000230, "Member 'ABP_PlayerSceneCapture2D_Studio_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, EmptyComponent) == 0x000238, "Member 'ABP_PlayerSceneCapture2D_Studio_C::EmptyComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, SceneCaptureComponent2D_FaceImage) == 0x000240, "Member 'ABP_PlayerSceneCapture2D_Studio_C::SceneCaptureComponent2D_FaceImage' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, SceneCaptureComponent2D_BustUpImage) == 0x000248, "Member 'ABP_PlayerSceneCapture2D_Studio_C::SceneCaptureComponent2D_BustUpImage' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, SceneCaptureComponent2D_BodyImage) == 0x000250, "Member 'ABP_PlayerSceneCapture2D_Studio_C::SceneCaptureComponent2D_BodyImage' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, DirectionalLight) == 0x000258, "Member 'ABP_PlayerSceneCapture2D_Studio_C::DirectionalLight' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, SceneCaptureComponent2D) == 0x000260, "Member 'ABP_PlayerSceneCapture2D_Studio_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, PlayerAvatar) == 0x000268, "Member 'ABP_PlayerSceneCapture2D_Studio_C::PlayerAvatar' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, DefaultSceneRoot) == 0x000270, "Member 'ABP_PlayerSceneCapture2D_Studio_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, PlayerAvatarDefaultRotation) == 0x000278, "Member 'ABP_PlayerSceneCapture2D_Studio_C::PlayerAvatarDefaultRotation' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, IsPlayerAvatarRotateActive) == 0x000284, "Member 'ABP_PlayerSceneCapture2D_Studio_C::IsPlayerAvatarRotateActive' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, OnCharaPartsLoadedDelegete) == 0x000288, "Member 'ABP_PlayerSceneCapture2D_Studio_C::OnCharaPartsLoadedDelegete' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, PlayerCharacterId) == 0x000298, "Member 'ABP_PlayerSceneCapture2D_Studio_C::PlayerCharacterId' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, SBUserImageComponent) == 0x0002A8, "Member 'ABP_PlayerSceneCapture2D_Studio_C::SBUserImageComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, OnUploadImageCompleted) == 0x0002B0, "Member 'ABP_PlayerSceneCapture2D_Studio_C::OnUploadImageCompleted' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, IsUploadImageSequenceSuspended) == 0x0002C0, "Member 'ABP_PlayerSceneCapture2D_Studio_C::IsUploadImageSequenceSuspended' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, IsResetPoseToDefaultRequestSucceeded) == 0x0002C1, "Member 'ABP_PlayerSceneCapture2D_Studio_C::IsResetPoseToDefaultRequestSucceeded' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, SceneCaptureOffsetLocation_Bustup) == 0x0002C4, "Member 'ABP_PlayerSceneCapture2D_Studio_C::SceneCaptureOffsetLocation_Bustup' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, SceneCaptureOffsetLocation_Face) == 0x0002D0, "Member 'ABP_PlayerSceneCapture2D_Studio_C::SceneCaptureOffsetLocation_Face' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, SceneCaptureOffsetRotation_Bustup) == 0x0002DC, "Member 'ABP_PlayerSceneCapture2D_Studio_C::SceneCaptureOffsetRotation_Bustup' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, SceneCaptureOffsetRotation_Face) == 0x0002E8, "Member 'ABP_PlayerSceneCapture2D_Studio_C::SceneCaptureOffsetRotation_Face' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, BPPlayerSceneCapture2D) == 0x0002F8, "Member 'ABP_PlayerSceneCapture2D_Studio_C::BPPlayerSceneCapture2D' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bRootEnabled) == 0x000300, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bRootEnabled' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bCaptureEnabled) == 0x000301, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bCaptureEnabled' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bLightEnabled) == 0x000302, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bLightEnabled' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bForceDirectionalLightEanbled) == 0x000303, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bForceDirectionalLightEanbled' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bUploadImageRunning) == 0x000304, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bUploadImageRunning' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bCaptureWhenMovingMode) == 0x000305, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bCaptureWhenMovingMode' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bCaptureEnableByMoveing) == 0x000306, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bCaptureEnableByMoveing' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, CaptureGraceTime) == 0x000308, "Member 'ABP_PlayerSceneCapture2D_Studio_C::CaptureGraceTime' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, CaptureCountTimer) == 0x00030C, "Member 'ABP_PlayerSceneCapture2D_Studio_C::CaptureCountTimer' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, OnEmoteFinished) == 0x000310, "Member 'ABP_PlayerSceneCapture2D_Studio_C::OnEmoteFinished' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bEmotePlaying) == 0x000320, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bEmotePlaying' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bInitialLoaded) == 0x000321, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bInitialLoaded' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, ReservedEmote) == 0x000324, "Member 'ABP_PlayerSceneCapture2D_Studio_C::ReservedEmote' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, Priority) == 0x00032C, "Member 'ABP_PlayerSceneCapture2D_Studio_C::Priority' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bExistPriorityCapture) == 0x000330, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bExistPriorityCapture' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, HighPriorityCaptureList) == 0x000338, "Member 'ABP_PlayerSceneCapture2D_Studio_C::HighPriorityCaptureList' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, HigherPriorityCaptureList) == 0x000388, "Member 'ABP_PlayerSceneCapture2D_Studio_C::HigherPriorityCaptureList' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bExistHighPriorityCapture) == 0x0003D8, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bExistHighPriorityCapture' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bExistHigherPriorityCapture) == 0x0003D9, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bExistHigherPriorityCapture' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, bForceCaptureEnabled) == 0x0003DA, "Member 'ABP_PlayerSceneCapture2D_Studio_C::bForceCaptureEnabled' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_Studio_C, IsPlayerAvatarVisible) == 0x0003DB, "Member 'ABP_PlayerSceneCapture2D_Studio_C::IsPlayerAvatarVisible' has a wrong offset!");

}

