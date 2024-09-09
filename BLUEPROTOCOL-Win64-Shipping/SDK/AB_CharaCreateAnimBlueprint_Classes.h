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
	 * AnimBlueprintGeneratedClass AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C
	 * Size -> 0x3F38 (FullSize[0x4F98] - InheritedSize[0x1060])
	 */
	class UAB_CharaCreateAnimBlueprint_C : public USBPlayerCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1068(0x0048)
		struct FASAnimNode_StateMachine                            ASAnimGraphNode_StateMachine;                            // 0x10B0(0x0310)
		struct FSBAnimNode_CustomBoneScaleLocal                    SBAnimGraphNode_CustomBoneScaleLocal;                    // 0x13C0(0x1048)
		unsigned char                                              UnknownData_OPKP[0x8];                                   // 0x2408(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBAnimNode_RigidBody                               SBAnimGraphNode_RigidBody;                               // 0x2410(0x09A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x2DB0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x2DD0(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x2DF0(0x0030)
		struct FSBAnimNode_PoseAlong                               SBAnimGraphNode_PoseAlong_2;                             // 0x2E20(0x0210)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x3030(0x00A8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x30D8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x3230(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x3258(0x0028)
		struct FSBAnimNode_LookAt                                  SBAnimGraphNode_LookAt;                                  // 0x3280(0x0D00)
		struct FSBAnimNode_LegIK                                   SBAnimGraphNode_LegIK;                                   // 0x3F80(0x07C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x4740(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x4768(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x48C0(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x48E8(0x00A8)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot;                              // 0x4990(0x0090)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_4;                         // 0x4A20(0x00A0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_3;                         // 0x4AC0(0x00A0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_2;                         // 0x4B60(0x00A0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x4C00(0x00A0)
		struct FSBAnimNode_PoseAlong                               SBAnimGraphNode_PoseAlong;                               // 0x4CA0(0x0210)
		struct FVector                                             __CustomProperty_Acceralation_B966B55E4A36B16179AAEE9372DE102B; // 0x4EB0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_bActive_B966B55E4A36B16179AAEE9372DE102B; // 0x4EBC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bActive_D33B46A045BCDA03F65B6086D4C6F12F; // 0x4EBD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bActive_B345ED124A494F3048EEB98A75383094; // 0x4EBE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bActive_AF6565F24387432F8848EB97F7EE5F6A; // 0x4EBF(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_Active_5DBDABF2466DC9153F92CD889DB9A7F9; // 0x4EC0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D2TX[0x3];                                   // 0x4EC1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             __CustomProperty_Acceralation_5DBDABF2466DC9153F92CD889DB9A7F9; // 0x4EC4(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCrouch;                                                // 0x4ED0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3JMO[0x3];                                   // 0x4ED1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InputVector;                                             // 0x4ED4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDash;                                                  // 0x4EE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7OC8[0x3];                                   // 0x4EE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FrameDeltaTime;                                          // 0x4EE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ClimbingDirection;                                       // 0x4EE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KOPU[0x3];                                   // 0x4EE9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbingSpeedUp;                                         // 0x4EEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ClimbingSpeedRight;                                      // 0x4EF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimClimbingSpeedUp;                                     // 0x4EF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimClimbingSpeedRight;                                  // 0x4EF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsClimbing;                                              // 0x4EFC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2V4D[0x3];                                   // 0x4EFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           MeshClimbingAim;                                         // 0x4F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ClimbingAimBlendSpeed;                                   // 0x4F08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ClimbingAimTarget;                                       // 0x4F0C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeshClimbingAimX;                                        // 0x4F14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeshClimbingAimY;                                        // 0x4F18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QJZT[0x4];                                   // 0x4F1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UASAnimationSet*                                     AnimationSet;                                            // 0x4F20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ChangeState;                                             // 0x4F28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              PrevStateName;                                           // 0x4F38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              NextStateName;                                           // 0x4F48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      HeelLength;                                              // 0x4F58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseCopyPose;                                            // 0x4F5C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3U7D[0x3];                                   // 0x4F5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseSnapshot                                       CopyPoseSnapshot;                                        // 0x4F60(0x0038) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void UnuseCopyPose();
		void InitCopyPose(class USkeletalMeshComponent* SourceCharacter);
		void SetupAnimationSet();
		void UpdateCharacterVariablesBp(float DeltaTime);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName);
		void ExecuteUbergraph_AB_CharaCreateAnimBlueprint(int32_t EntryPoint);
		void ChangeState__DelegateSignature(const class FString& InPrevStateName, const class FString& InNextStateName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
