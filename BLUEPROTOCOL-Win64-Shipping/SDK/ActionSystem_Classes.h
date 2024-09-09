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
	 * Class ActionSystem.ASAnimationSet
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UASAnimationSet : public UDataAsset
	{
	public:
		TArray<class UASAnimationSet*>                             Parents;                                                 // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FASAnimationSetEntry_Sequence>               Sequences;                                               // 0x0040(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FASAnimationSetEntry_BlendSpace>             BlendSpaces;                                             // 0x0050(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FASAnimationSetEntry_StateMachine>           StateMachines;                                           // 0x0060(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VJG[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		class UASStateMachine* GetStateMachine(const class FName& KeyName);
		class UAnimSequenceBase* GetSequence(const class FName& KeyName);
		class UBlendSpaceBase* GetBlendSpace(const class FName& KeyName);
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASAnimInstance
	 * Size -> 0x01B0 (FullSize[0x0468] - InheritedSize[0x02B8])
	 */
	class UASAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_5SBS[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_HO0A[0x1A8];                                 // 0x02C0(0x01A8) Fix size for supers

	public:
		void SetDynamicTransition(const class FString& AnimNodeName, const class FString& TransitionName, float CrossfadeDuration);
		void SetDynamicSubMachine(const class FString& AnimNodeName, const class FString& StateName, class UASStateMachine* StateMachineAsset);
		void SetDynamicSequence(const class FString& AnimNodeName, const class FString& StateName, class UAnimSequenceBase* SequenceAsset);
		void SetDynamicAnimationSet(const class FString& AnimNodeName, const class FString& StateName, class UASAnimationSet* AnimationSetAsset);
		void SendCommand(const class FName& Command, bool bForce);
		void ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName);
		void JumpMachineState(const class FString& MachinName, const class FString& StateName);
		bool IsHitShift();
		bool HasTagAny(TArray<class FName> Tags);
		bool HasTag(const class FName& Tag);
		void AnimNotify_StateChange(class UASAnimNotify_StateChange* Notify);
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASAnimNotify_EndCancel
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UASAnimNotify_EndCancel : public UAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASAnimNotify_HitShift
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UASAnimNotify_HitShift : public UAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASAnimNotify_StateChange
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UASAnimNotify_StateChange : public UAnimNotify
	{
	public:
		unsigned char                                              UnknownData_K41M[0x40];                                  // 0x0038(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASAnimNotifyState
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UASAnimNotifyState : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASAnimNotifyState_Attack
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UASAnimNotifyState_Attack : public UASAnimNotifyState
	{
	public:
		unsigned char                                              UnknownData_EDEU[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FASAttackCollision>                          AttackCollisions;                                        // 0x0038(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E29R[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASAnimNotifyState_EndCancel
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UASAnimNotifyState_EndCancel : public UASAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASAnimNotifyState_Float
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UASAnimNotifyState_Float : public UASAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASAnimNotifyState_Input
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UASAnimNotifyState_Input : public UASAnimNotifyState
	{
	public:
		float                                                      ShiftStartTime;                                          // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTP7[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Commands;                                                // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASAnimNotifyState_Invincible
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UASAnimNotifyState_Invincible : public UASAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASAnimNotifyState_SuperArmor
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UASAnimNotifyState_SuperArmor : public UASAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASCharacterBase
	 * Size -> 0x0038 (FullSize[0x04F0] - InheritedSize[0x04B8])
	 */
	class AASCharacterBase : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_EKCB[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_QLRO[0x8];                                   // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FASReplicateStateInfo                               ReplicateStateInfo;                                      // 0x04C8(0x0020) Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OSC7[0x8];                                   // 0x04E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SendCommand(const class FName& Command, bool Force, bool bNoEndCancel);
		void SendAnimCommand(const class FString& Command, bool Force);
		void ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName);
		void OnRep_ReplicateStateInfo();
		void JumpMachineState(const class FString& MachinName, const class FString& StateName);
		bool HasAnimTag(const class FName& Tag);
		TArray<class FName> GetAnimTags();
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASCharacter
	 * Size -> 0x0090 (FullSize[0x0580] - InheritedSize[0x04F0])
	 */
	class AASCharacter : public AASCharacterBase
	{
	public:
		unsigned char                                              UnknownData_A026[0x8];                                   // 0x04F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UASCollisionGroupComponent*                          CollisionGroup;                                          // 0x04F8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UASCollisionSphereComponent*                         DamageCollision;                                         // 0x0500(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_74T6[0x78];                                  // 0x0508(0x0078) MISSED OFFSET (PADDING)

	public:
		bool IsSuperArmor();
		bool IsHitAttack();
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASCharacterMovementComponent
	 * Size -> 0x0010 (FullSize[0x0B20] - InheritedSize[0x0B10])
	 */
	class UASCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_8IL0[0x10];                                  // 0x0B10(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetImpulse(const struct FVector& Impulse, bool bVelocityChange);
		void SendCommand(const class FName& Command, bool Force);
		void SendAnimCommand(const class FString& Command, bool Force);
		bool HasAnimTag(const class FName& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASCollisionBoxComponent
	 * Size -> 0x0020 (FullSize[0x04B0] - InheritedSize[0x0490])
	 */
	class UASCollisionBoxComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_V8YX[0x20];                                  // 0x0490(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASCollisionCapsuleComponent
	 * Size -> 0x0028 (FullSize[0x04B0] - InheritedSize[0x0488])
	 */
	class UASCollisionCapsuleComponent : public UCapsuleComponent
	{
	public:
		unsigned char                                              UnknownData_3NYD[0x8];                                   // 0x0488(0x0008) Fix Super Size
		unsigned char                                              UnknownData_7MM1[0x20];                                  // 0x0490(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASCollisionGroupComponent
	 * Size -> 0x0028 (FullSize[0x0230] - InheritedSize[0x0208])
	 */
	class UASCollisionGroupComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_QYRN[0x8];                                   // 0x0208(0x0008) Fix Super Size
		unsigned char                                              UnknownData_5IJ9[0x20];                                  // 0x0210(0x0020) MISSED OFFSET (PADDING)

	public:
		void StopAttack();
		void StartAttack(int32_t HitCount, float HitInterval);
		void SetActiveCollision(bool Active);
		void OnAttackEndOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
		void OnAttackBeginOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASCollisionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UASCollisionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASCollisionListener
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UASCollisionListener : public UInterface
	{
	public:
		bool OnAttackOverlapCallback(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASCollisionSphereComponent
	 * Size -> 0x0038 (FullSize[0x04C0] - InheritedSize[0x0488])
	 */
	class UASCollisionSphereComponent : public USphereComponent
	{
	public:
		unsigned char                                              UnknownData_QGET[0x8];                                   // 0x0488(0x0008) Fix Super Size
		unsigned char                                              UnknownData_WFWL[0x30];                                  // 0x0490(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASDamageType
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UASDamageType : public UDamageType
	{
	public:
		bool                                                       bUseDirection : 1;                                       // 0x0040(0x0001) BIT_FIELD Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LX9[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Direction;                                               // 0x0044(0x000C) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitStopTimeAttack;                                       // 0x0050(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitStopTimeDamage;                                       // 0x0054(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMNode
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UASSMNode : public UObject
	{
	public:
		class FString                                              StateName;                                               // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UASSMNode*>                                   LinkedTo;                                                // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UASStateMachine*                                     MachineAsset;                                            // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMStateNode
	 * Size -> 0x0050 (FullSize[0x00A0] - InheritedSize[0x0050])
	 */
	class UASSMStateNode : public UASSMNode
	{
	public:
		TArray<class FName>                                        Tags;                                                    // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAlwaysCanceledCommand : 1;                              // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_50F8[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UASState_Base*>                               CustomStates;                                            // 0x0068(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UASState_Base*>                               LocalCustomStates;                                       // 0x0078(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    StateIndex;                                              // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V3X2[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UASSMTransitionNode_Base*>                    TransitionList;                                          // 0x0090(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMState_BlendSpace
	 * Size -> 0x0028 (FullSize[0x00C8] - InheritedSize[0x00A0])
	 */
	class UASSMState_BlendSpace : public UASSMStateNode
	{
	public:
		float                                                      PlayRate;                                                // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoop;                                                   // 0x00A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HY0A[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RootMotionScale;                                         // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BlendSpaceName;                                          // 0x00AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplaceWithThroughNodeInServer;                         // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8CB[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimationGroupReference                            SyncGroup;                                               // 0x00B8(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6XR[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMState_AimOffset
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UASSMState_AimOffset : public UASSMState_BlendSpace
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMState_Conduit
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UASSMState_Conduit : public UASSMStateNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMState_Sequence
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UASSMState_Sequence : public UASSMStateNode
	{
	public:
		float                                                      PlayRate;                                                // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoop;                                                   // 0x00A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QR37[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RootMotionScale;                                         // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SequenceName;                                            // 0x00AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimationGroupReference                            SyncGroup;                                               // 0x00B4(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMState_Slot
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	class UASSMState_Slot : public UASSMStateNode
	{
	public:
		class FName                                                SlotName;                                                // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInertialBlend : 1;                                      // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7BY[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMState_StateMachine
	 * Size -> 0x0020 (FullSize[0x00C0] - InheritedSize[0x00A0])
	 */
	class UASSMState_StateMachine : public UASSMStateNode
	{
	public:
		float                                                      PlayRate;                                                // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StateMachineName;                                        // 0x00A4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableChildMachinePlayEnd : 1;                         // 0x00AC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipPlayEndTransitionNumCheck : 1;                      // 0x00AC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipFirstTransition : 1;                                // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LUAM[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UASAnimationSet*                                     AnimationSetAsset;                                       // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicates : 1;                                         // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92KG[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMState_Terminate
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UASSMState_Terminate : public UASSMStateNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMState_Through
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UASSMState_Through : public UASSMStateNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMTransitionNode_Base
	 * Size -> 0x0078 (FullSize[0x00C8] - InheritedSize[0x0050])
	 */
	class UASSMTransitionNode_Base : public UASSMNode
	{
	public:
		TArray<class UASTransition_CommonBase*>                    TransitionRules;                                         // 0x0050(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    PriorityOrder;                                           // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnable : 1;                                             // 0x0064(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Bidirectional;                                           // 0x0065(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UnknownData_Y7B5 : 7;                                    // 0x0064(0x0001) BIT_FIELD (PADDING)
		bool                                                       bAuthorityOnly : 1;                                      // 0x0066(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocallyControlledOnly : 1;                              // 0x0066(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2D2[0x1];                                   // 0x0067(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrossfadeDuration;                                       // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EASAlphaBlendOption                                        BlendOption;                                             // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8P2X[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CustomBlendCurve;                                        // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRootMotionBlend : 1;                                    // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSyncTime : 1;                                           // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3U2[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTime;                                               // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartStateName;                                          // 0x0080(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CustomStartState;                                        // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAnimNotifyEvent>                            InterruptNotifyEvents;                                   // 0x0098(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bClearCommand : 1;                                       // 0x00A8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetInputNotifyTimer : 1;                              // 0x00A8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HD6Y[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UASSMStateNode*                                      PreviousState;                                           // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UASSMStateNode*                                      NextState;                                               // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENextStateType                                             NextStateType;                                           // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RA7[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMTransitionNode
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UASSMTransitionNode : public UASSMTransitionNode_Base
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASCustomStartSate_Base
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UASCustomStartSate_Base : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASSMTransitionNodeEventDriven
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UASSMTransitionNodeEventDriven : public UASSMTransitionNode_Base
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASState_Base
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UASState_Base : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASState_BlueprintBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UASState_BlueprintBase : public UASState_Base
	{
	public:
		unsigned char                                              UnknownData_4YSH[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void StopSlotAnimation(float BlendTime);
		void SetRootMotionScale(float NewScale, const class FName& RootMotionScaleName);
		void SetPlayRateScale(float RateScale);
		void SetPlayRate(float NewRate);
		void SetBlendSpaceInputY(float NewBlendInputY);
		void SetBlendSpaceInputX(float NewBlendInputX);
		void SetBlendSpaceInput(const struct FVector& NewBlendInput);
		void SetAnimTimeRatio(float TimeRatio);
		void SetAnimTime(float Time);
		void ResetRootMotionScale(const class FName& RootMotionScaleName);
		void ResetPlayRate();
		void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
		void ReceiveEndPlay(class UAnimInstance* AnimInstance);
		void ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet);
		void PlaySlotAnimation(class UAnimSequenceBase* AnimSequence, float BlendTime, bool bLoop);
		bool HasCommand(const class FName& Command, bool bAlwaysCanceledCommand, bool bOnce);
		float GetRootMotionDistanceRange(float StartTime, float EndTime);
		float GetRootMotionDistance();
		float GetAnimTimeRatio();
		float GetAnimTimeLength();
		float GetAnimTime();
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASStateMachine
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UASStateMachine : public UObject
	{
	public:
		class UASSMStateNode*                                      RootNode;                                                // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UASSMStateNode*>                              StateTable;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UASAnimationSet*                                     AnimationSetAsset;                                       // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableAnimationSetOverride;                             // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInertialBlend;                                          // 0x0049(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RS9Z[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASTransition_CommonBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UASTransition_CommonBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASTransition_Base
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UASTransition_Base : public UASTransition_CommonBase
	{
	public:
		bool                                                       bNotEqual : 1;                                           // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EJZ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASTransition_BlueprintBase
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UASTransition_BlueprintBase : public UASTransition_Base
	{
	public:
		unsigned char                                              UnknownData_POB5[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		bool ReceiveCanEnter(class UAnimInstance* AnimInstance);
		void OutputLog(const class FString& Value);
		bool IsPlayEnd();
		bool HasCommand(const class FName& Command, bool bOnce);
		float GetElapsedTime();
		float GetAnimTimeLength();
		float GetAnimTime();
		EAnimCommandState CheckCommandState(const class FName& Command, bool bOnce);
		bool CheckCommand(const class FString& Command, bool bOnce);
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASTransition_Command
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UASTransition_Command : public UASTransition_Base
	{
	public:
		class FName                                                Command;                                                 // 0x0030(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASTransition_MovementMode
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UASTransition_MovementMode : public UASTransition_Base
	{
	public:
		EMovementMode                                              MovementMode;                                            // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CustomMovementMode;                                      // 0x0031(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QT4[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASTransition_PlayEnd
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UASTransition_PlayEnd : public UASTransition_Base
	{
	public:
		bool                                                       bIgnoreEndCancel : 1;                                    // 0x0030(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93OH[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASTransitionEventDriven_Base
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UASTransitionEventDriven_Base : public UASTransition_CommonBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ActionSystem.ASTransitionEventDriven_Command
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UASTransitionEventDriven_Command : public UASTransitionEventDriven_Base
	{
	public:
		unsigned char                                              UnknownData_9MVH[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Commands;                                                // 0x0038(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
