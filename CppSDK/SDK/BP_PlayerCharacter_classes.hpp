#pragma once

 

// Package: BP_PlayerCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_DamageReaction_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// 0x0180 (0x4240 - 0x40C0)
class ABP_PlayerCharacter_C : public ASBPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x40C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCharaBodyCapsuleComponent*           SBCharaBodyCapsule_Body;                           // 0x40C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBMoveSpeedSoundComponent*             SBMoveSpeedSound;                                  // 0x40D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerBuddyVoiceComponent_C*        BP_PlayerBuddyVoiceComponent;                      // 0x40D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerHoldHandComponent_C*          BP_PlayerHoldHandComponent;                        // 0x40E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       EnemyStepJumpCollision;                            // 0x40E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerEngramCannonComponent_C*      BP_PlayerEngramCannonComponent;                    // 0x40F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerResurrectionComponent_C*      BP_PlayerResurrectionComponent;                    // 0x40F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerCameraComponent_C*            BP_PlayerCameraComponent;                          // 0x4100(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBAutoWordComponent*                   SBAutoWord;                                        // 0x4108(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBAdjustRootMotionComponent*           SBAdjustRootMotion;                                // 0x4110(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBPlayerTargetingComponent*            SBPlayerTargeting;                                 // 0x4118(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MeshClimbingComponent_C*            BP_MeshClimbingComponent;                          // 0x4120(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerInteractionComponent_C*       BP_PlayerInteractionComponent;                     // 0x4128(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBPlayerFootprintComponent*            SBPlayerFootprint;                                 // 0x4130(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBInteractionTargetComponent*          SBInteractionTarget;                               // 0x4138(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerWarpComponent_C*              WarpComponent;                                     // 0x4140(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSpecialSkill*                  SBPlayerSpecialSkill;                              // 0x4148(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UASCollisionCapsuleComponent*           ASDamage_Body;                                     // 0x4150(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBNamePlateComponent2D*                NamePlate;                                         // 0x4158(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBOtherMessageComponent*               SBOtherMessage;                                    // 0x4160(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBBalloonWindowComponent*              SBBalloonWindow;                                   // 0x4168(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               FaceCapture;                                       // 0x4170(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObjectSelectCursorComponent_C*         ObjectSelectCursorComponent;                       // 0x4178(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshClimbingGuideComponent_C*          MeshClimbingGuideComponent;                        // 0x4180(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       AtGatheringPopup;                                  // 0x4188(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBTargetableComponent*                 SBTargetable;                                      // 0x4190(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     HairMaterialParent;                                // 0x4198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               HairMaterial;                                      // 0x41A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAtGatheringPopupEnabled;                         // 0x41A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor)
	bool                                          IsAimActive;                                       // 0x41A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97CA[0x6];                                     // 0x41AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Shake_Type;                                        // 0x41B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shake_Scale;                                       // 0x41B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Limit_MaxDamage;                                   // 0x41BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         KnockBack_Scale;                                   // 0x41C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          KnockBack_ON;                                      // 0x41C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97CB[0x3];                                     // 0x41C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MakeNoiseSpeed;                                    // 0x41C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MakeNoiseInterval;                                 // 0x41CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MakeNoiseWait;                                     // 0x41D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97CC[0x4];                                     // 0x41D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOtherPCMenu_C*                         OtherPCMenu;                                       // 0x41D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     OtherPCMenuTarget;                                 // 0x41E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOtherPCMenuOpen;                                 // 0x41E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97CD[0x3];                                     // 0x41E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                IKGroundPlane;                                     // 0x41EC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCreateTargetCursor;                              // 0x41F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97CE[0x7];                                     // 0x41F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             InitialDamageCollisionTransform;                   // 0x4200(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsNamePlateOffset;                                 // 0x4230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97CF[0x3];                                     // 0x4231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NamePlateOffsetDistance;                           // 0x4234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTargetCursor_C*                        TargetCursor;                                      // 0x4238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerCharacter(int32 EntryPoint);
	void ReceiveDestroyed();
	void OnPlayerDeactivateGodMode(bool Result);
	void OnLossByEnemyLast();
	void OnFindByEnemyFirst();
	void EndDemoTeleport();
	void TeleportWithDelay(const struct FVector& Location, const struct FRotator& Rotation, bool bWithFade, float DelayTime);
	void TeleportWithDelayImpl(const struct FVector& Location, const struct FRotator& Rotation, bool WithFade, float Delay);
	void CustomEvent(bool bIsVisible);
	void SetDamageCollisionTransformType(ESBPlayerDamageCollisionTransformType TransformType);
	void OnLastHitActorInfo(class AActor* HitActor);
	void ReceiveUnsheatheByEquipType(ESBWeaponEquipType EquipType);
	void ReceiveUnsheathe();
	void ReceiveSheathe();
	void OnOtherPCMenuTargetLost();
	void ForceCloseOtherPCMenu();
	void OnDead();
	void OnCloseOtherPCMenu();
	void TickMovingNoise(float DeltaTime);
	void ReceiveEndInitialLoad();
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveTick(float DeltaSeconds);
	void OnCastSkill(const ESkillActionPosition Position);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void TryClientTravelWithFadeout(const class FString& URL, const class FString& Portal);
	void InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20(float AxisValue);
	void InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17(float AxisValue);
	void InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12(float AxisValue);
	void InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8(float AxisValue);
	void InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5(float AxisValue);
	void OnDeadNotifyMessage(const class FText& Param_Name);
	void OnSetInitialMiniMapInfo(const struct FSBPlayerMiniMapInfo& Info);
	void ShowHitIndicator(const struct FVector& InHitPosition, class AActor* InDamageCauser);
	void ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName);
	void SetOtherPCMenu();
	void OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation);
	void ReceiveBeginPlay();
	void OnDeathDelegate_____();
	void InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_DebugMenu_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3(const struct FKey& Key);
	void UserConstructionScript();
	void UpdateHairMaterial();
	void Sheathe();
	void UpdateAtGatheringPopup();
	void EnableAtGatheringPopup(bool IsEnabled);
	void ChangeLifeGaugeColor(bool IsHealChainColor);
	void OpenOtherPCMenu(class ASBPlayerCharacter* InOtherPC);
	void WeaponAnimationSheathe();
	void WeaponAnimationUnsheathe();
	void DebugPrintEquipWeapon();
	void GetSocketOffset(class FName SocketName, struct FVector* Offset);
	void GetWeaponSocketOffset(class FName SocketName, struct FVector* Offset);
	void UnSheathe(ESBWeaponEquipType EquipType);
	void InitEquipWeaponStatus(TArray<int32>* OutEquipWeaponStatus);
	void Get_Imagine_Arts_Voice_Event(class UAkAudioEvent** Event, ESBAkEventLOD* LOD);
	void CreateClassHUD();
	void OffsetNamePlateLocation(bool IsOffset, float OffsetDistance);
	void DeadNotifyMessage(const class FText& DeadCharacterName);

	void GetDamageReaction(const struct FSBStunInfo& StunInfo, E_DamageReaction* DamageReaction) const;
	class USphereComponent* GetEnemyStepJumpCollisionComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerCharacter_C">();
	}
	static class ABP_PlayerCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerCharacter_C>();
	}
};
static_assert(alignof(ABP_PlayerCharacter_C) == 0x000010, "Wrong alignment on ABP_PlayerCharacter_C");
static_assert(sizeof(ABP_PlayerCharacter_C) == 0x004240, "Wrong size on ABP_PlayerCharacter_C");
static_assert(offsetof(ABP_PlayerCharacter_C, UberGraphFrame) == 0x0040C0, "Member 'ABP_PlayerCharacter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, SBCharaBodyCapsule_Body) == 0x0040C8, "Member 'ABP_PlayerCharacter_C::SBCharaBodyCapsule_Body' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, SBMoveSpeedSound) == 0x0040D0, "Member 'ABP_PlayerCharacter_C::SBMoveSpeedSound' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, BP_PlayerBuddyVoiceComponent) == 0x0040D8, "Member 'ABP_PlayerCharacter_C::BP_PlayerBuddyVoiceComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, BP_PlayerHoldHandComponent) == 0x0040E0, "Member 'ABP_PlayerCharacter_C::BP_PlayerHoldHandComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, EnemyStepJumpCollision) == 0x0040E8, "Member 'ABP_PlayerCharacter_C::EnemyStepJumpCollision' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, BP_PlayerEngramCannonComponent) == 0x0040F0, "Member 'ABP_PlayerCharacter_C::BP_PlayerEngramCannonComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, BP_PlayerResurrectionComponent) == 0x0040F8, "Member 'ABP_PlayerCharacter_C::BP_PlayerResurrectionComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, BP_PlayerCameraComponent) == 0x004100, "Member 'ABP_PlayerCharacter_C::BP_PlayerCameraComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, SBAutoWord) == 0x004108, "Member 'ABP_PlayerCharacter_C::SBAutoWord' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, SBAdjustRootMotion) == 0x004110, "Member 'ABP_PlayerCharacter_C::SBAdjustRootMotion' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, SBPlayerTargeting) == 0x004118, "Member 'ABP_PlayerCharacter_C::SBPlayerTargeting' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, BP_MeshClimbingComponent) == 0x004120, "Member 'ABP_PlayerCharacter_C::BP_MeshClimbingComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, BP_PlayerInteractionComponent) == 0x004128, "Member 'ABP_PlayerCharacter_C::BP_PlayerInteractionComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, SBPlayerFootprint) == 0x004130, "Member 'ABP_PlayerCharacter_C::SBPlayerFootprint' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, SBInteractionTarget) == 0x004138, "Member 'ABP_PlayerCharacter_C::SBInteractionTarget' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, WarpComponent) == 0x004140, "Member 'ABP_PlayerCharacter_C::WarpComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, SBPlayerSpecialSkill) == 0x004148, "Member 'ABP_PlayerCharacter_C::SBPlayerSpecialSkill' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, ASDamage_Body) == 0x004150, "Member 'ABP_PlayerCharacter_C::ASDamage_Body' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, NamePlate) == 0x004158, "Member 'ABP_PlayerCharacter_C::NamePlate' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, SBOtherMessage) == 0x004160, "Member 'ABP_PlayerCharacter_C::SBOtherMessage' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, SBBalloonWindow) == 0x004168, "Member 'ABP_PlayerCharacter_C::SBBalloonWindow' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, FaceCapture) == 0x004170, "Member 'ABP_PlayerCharacter_C::FaceCapture' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, ObjectSelectCursorComponent) == 0x004178, "Member 'ABP_PlayerCharacter_C::ObjectSelectCursorComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, MeshClimbingGuideComponent) == 0x004180, "Member 'ABP_PlayerCharacter_C::MeshClimbingGuideComponent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, AtGatheringPopup) == 0x004188, "Member 'ABP_PlayerCharacter_C::AtGatheringPopup' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, SBTargetable) == 0x004190, "Member 'ABP_PlayerCharacter_C::SBTargetable' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, HairMaterialParent) == 0x004198, "Member 'ABP_PlayerCharacter_C::HairMaterialParent' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, HairMaterial) == 0x0041A0, "Member 'ABP_PlayerCharacter_C::HairMaterial' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, IsAtGatheringPopupEnabled) == 0x0041A8, "Member 'ABP_PlayerCharacter_C::IsAtGatheringPopupEnabled' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, IsAimActive) == 0x0041A9, "Member 'ABP_PlayerCharacter_C::IsAimActive' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, Shake_Type) == 0x0041B0, "Member 'ABP_PlayerCharacter_C::Shake_Type' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, Shake_Scale) == 0x0041B8, "Member 'ABP_PlayerCharacter_C::Shake_Scale' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, Limit_MaxDamage) == 0x0041BC, "Member 'ABP_PlayerCharacter_C::Limit_MaxDamage' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, KnockBack_Scale) == 0x0041C0, "Member 'ABP_PlayerCharacter_C::KnockBack_Scale' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, KnockBack_ON) == 0x0041C4, "Member 'ABP_PlayerCharacter_C::KnockBack_ON' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, MakeNoiseSpeed) == 0x0041C8, "Member 'ABP_PlayerCharacter_C::MakeNoiseSpeed' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, MakeNoiseInterval) == 0x0041CC, "Member 'ABP_PlayerCharacter_C::MakeNoiseInterval' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, MakeNoiseWait) == 0x0041D0, "Member 'ABP_PlayerCharacter_C::MakeNoiseWait' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, OtherPCMenu) == 0x0041D8, "Member 'ABP_PlayerCharacter_C::OtherPCMenu' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, OtherPCMenuTarget) == 0x0041E0, "Member 'ABP_PlayerCharacter_C::OtherPCMenuTarget' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, IsOtherPCMenuOpen) == 0x0041E8, "Member 'ABP_PlayerCharacter_C::IsOtherPCMenuOpen' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, IKGroundPlane) == 0x0041EC, "Member 'ABP_PlayerCharacter_C::IKGroundPlane' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, IsCreateTargetCursor) == 0x0041F8, "Member 'ABP_PlayerCharacter_C::IsCreateTargetCursor' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, InitialDamageCollisionTransform) == 0x004200, "Member 'ABP_PlayerCharacter_C::InitialDamageCollisionTransform' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, IsNamePlateOffset) == 0x004230, "Member 'ABP_PlayerCharacter_C::IsNamePlateOffset' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, NamePlateOffsetDistance) == 0x004234, "Member 'ABP_PlayerCharacter_C::NamePlateOffsetDistance' has a wrong offset!");
static_assert(offsetof(ABP_PlayerCharacter_C, TargetCursor) == 0x004238, "Member 'ABP_PlayerCharacter_C::TargetCursor' has a wrong offset!");

}

