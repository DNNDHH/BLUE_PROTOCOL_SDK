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
	 * BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
	 * Size -> 0x0180 (FullSize[0x4290] - InheritedSize[0x4110])
	 */
	class ABP_PlayerCharacter_C : public ASBPlayerCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x4110(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBCharaBodyCapsuleComponent*                        SBCharaBodyCapsule_Body;                                 // 0x4118(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBMoveSpeedSoundComponent*                          SBMoveSpeedSound;                                        // 0x4120(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PlayerBuddyVoiceComponent_C*                     BP_PlayerBuddyVoiceComponent;                            // 0x4128(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PlayerHoldHandComponent_C*                       BP_PlayerHoldHandComponent;                              // 0x4130(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    EnemyStepJumpCollision;                                  // 0x4138(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PlayerEngramCannonComponent_C*                   BP_PlayerEngramCannonComponent;                          // 0x4140(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PlayerResurrectionComponent_C*                   BP_PlayerResurrectionComponent;                          // 0x4148(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PlayerCameraComponent_C*                         BP_PlayerCameraComponent;                                // 0x4150(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBAutoWordComponent*                                SBAutoWord;                                              // 0x4158(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBAdjustRootMotionComponent*                        SBAdjustRootMotion;                                      // 0x4160(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBPlayerTargetingComponent*                         SBPlayerTargeting;                                       // 0x4168(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_MeshClimbingComponent_C*                         BP_MeshClimbingComponent;                                // 0x4170(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PlayerInteractionComponent_C*                    BP_PlayerInteractionComponent;                           // 0x4178(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBPlayerFootprintComponent*                         SBPlayerFootprint;                                       // 0x4180(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBInteractionTargetComponent*                       SBInteractionTarget;                                     // 0x4188(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PlayerWarpComponent_C*                           WarpComponent;                                           // 0x4190(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBPlayerSpecialSkill*                               SBPlayerSpecialSkill;                                    // 0x4198(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UASCollisionCapsuleComponent*                        ASDamage_Body;                                           // 0x41A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBNamePlateComponent2D*                             NamePlate;                                               // 0x41A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBOtherMessageComponent*                            SBOtherMessage;                                          // 0x41B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBBalloonWindowComponent*                           SBBalloonWindow;                                         // 0x41B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            FaceCapture;                                             // 0x41C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UObjectSelectCursorComponent_C*                      ObjectSelectCursorComponent;                             // 0x41C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMeshClimbingGuideComponent_C*                       MeshClimbingGuideComponent;                              // 0x41D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    AtGatheringPopup;                                        // 0x41D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBTargetableComponent*                              SBTargetable;                                            // 0x41E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  HairMaterialParent;                                      // 0x41E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            HairMaterial;                                            // 0x41F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAtGatheringPopupEnabled;                               // 0x41F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor
		bool                                                       IsAimActive;                                             // 0x41F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y8F8[0x6];                                   // 0x41FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ShakeType;                                               // 0x4200(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShakeScale;                                              // 0x4208(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Limit_MaxDamage;                                         // 0x420C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KnockBack_Scale;                                         // 0x4210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KnockBack_ON;                                            // 0x4214(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XHHY[0x3];                                   // 0x4215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MakeNoiseSpeed;                                          // 0x4218(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MakeNoiseInterval;                                       // 0x421C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MakeNoiseWait;                                           // 0x4220(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D2SW[0x4];                                   // 0x4224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOtherPCMenu_C*                                      OtherPCMenu;                                             // 0x4228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASBPlayerCharacter*                                  OtherPCMenuTarget;                                       // 0x4230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOtherPCMenuOpen;                                       // 0x4238(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4A64[0x3];                                   // 0x4239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             IKGroundPlane;                                           // 0x423C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCreateTargetCursor;                                    // 0x4248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M1O6[0x7];                                   // 0x4249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialDamageCollisionTransform;                         // 0x4250(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsNamePlateOffset;                                       // 0x4280(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KQZC[0x3];                                   // 0x4281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NamePlateOffsetDistance;                                 // 0x4284(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTargetCursor_C*                                     TargetCursor;                                            // 0x4288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DeadNotifyMessage(const class FText& DeadCharacterName);
		class USphereComponent* GetEnemyStepJumpCollisionComponent();
		void OffsetNamePlateLocation(bool IsOffset, float OffsetDistance);
		void CreateClassHUD();
		void GetImagineArtsVoiceEvent(class UAkAudioEvent** Event, ESBAkEventLOD* LOD);
		void InitEquipWeaponStatus(TArray<int32_t>* OutEquipWeaponStatus);
		void GetDamageReaction(const struct FSBStunInfo& StunInfo, E_DamageReaction* DamageReaction);
		void UnSheathe(ESBWeaponEquipType EquipType);
		void GetWeaponSocketOffset(const class FName& SocketName, struct FVector* Offset);
		void GetSocketOffset(const class FName& SocketName, struct FVector* Offset);
		void DebugPrintEquipWeapon();
		void WeaponAnimationUnsheathe();
		void WeaponAnimationSheathe();
		void OpenOtherPCMenu(class ASBPlayerCharacter* InOtherPC);
		void ChangeLifeGaugeColor(bool IsHealChainColor);
		void EnableAtGatheringPopup(bool IsEnabled);
		void UpdateAtGatheringPopup();
		void Sheathe();
		void UpdateHairMaterial();
		void UserConstructionScript();
		void InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_NumPadThree_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_NumPadOne_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_DebugMenu_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_1(const struct FKey& Key);
		void OnDeathDelegate_();
		void ReceiveBeginPlay();
		void OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation);
		void SetOtherPCMenu();
		void ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName);
		void ShowHitIndicator(const struct FVector& InHitPosition, class AActor* InDamageCauser);
		void OnSetInitialMiniMapInfo(const struct FSBPlayerMiniMapInfo& Info);
		void OnDeadNotifyMessage(const class FText& Name);
		void InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_6(float AxisValue);
		void InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_9(float AxisValue);
		void InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_13(float AxisValue);
		void InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_18(float AxisValue);
		void InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_21(float AxisValue);
		void TryClientTravelWithFadeout(const class FString& URL, const class FString& Portal);
		void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnCastSkill(ESkillActionPosition Position);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ReceiveEndInitialLoad();
		void TickMovingNoise(float DeltaTime);
		void OnCloseOtherPCMenu();
		void OnDead();
		void ForceCloseOtherPCMenu();
		void OnOtherPCMenuTargetLost();
		void ReceiveSheathe();
		void ReceiveUnsheathe();
		void ReceiveUnsheatheByEquipType(ESBWeaponEquipType EquipType);
		void OnLastHitActorInfo(class AActor* HitActor);
		void SetDamageCollisionTransformType(ESBPlayerDamageCollisionTransformType TransformType);
		void CustomEvent(bool bIsVisible);
		void TeleportWithDelayImpl(const struct FVector& Location, const struct FRotator& Rotation, bool WithFade, float Delay);
		void TeleportWithDelay(const struct FVector& Location, const struct FRotator& Rotation, bool bWithFade, float DelayTime);
		void EndDemoTeleport();
		void OnFindByEnemyFirst();
		void OnLossByEnemyLast();
		void OnPlayerDeactivateGodMode(bool Result);
		void ReceiveDestroyed();
		void ExecuteUbergraph_BP_PlayerCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
