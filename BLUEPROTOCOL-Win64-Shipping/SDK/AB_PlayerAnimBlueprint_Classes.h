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
	 * AnimBlueprintGeneratedClass AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C
	 * Size -> 0x63F0 (FullSize[0x7450] - InheritedSize[0x1060])
	 */
	class UAB_PlayerAnimBlueprint_C : public USBPlayerCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1060(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1068(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1088(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x10A8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x1200(0x0028)
		struct FASAnimNode_StateMachine                            ASAnimGraphNode_StateMachine_5;                          // 0x1228(0x0310)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x1538(0x00C0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x15F8(0x00A8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x16A0(0x0028)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_4;                         // 0x16C8(0x00A0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_3;                         // 0x1768(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x1808(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x1960(0x0028)
		struct FASAnimNode_StateMachine                            ASAnimGraphNode_StateMachine_4;                          // 0x1988(0x0310)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_2;                         // 0x1C98(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x1D38(0x00A8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x1DE0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x1F38(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x1F60(0x0028)
		unsigned char                                              UnknownData_S92B[0x8];                                   // 0x1F88(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBAnimNode_LegIK                                   SBAnimGraphNode_LegIK;                                   // 0x1F90(0x07C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x2750(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x2798(0x00A8)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x2840(0x00A0)
		struct FSBAnimNode_SimpleIK                                SBAnimGraphNode_SimpleIK_4;                              // 0x28E0(0x0170)
		struct FASAnimNode_StateMachine                            ASAnimGraphNode_StateMachine_3;                          // 0x2A50(0x0310)
		struct FSBAnimNode_PoseAlong                               SBAnimGraphNode_PoseAlong_2;                             // 0x2D60(0x0210)
		struct FSBAnimNode_LookAt                                  SBAnimGraphNode_LookAt;                                  // 0x2F70(0x0D00)
		struct FASAnimNode_StateMachine                            ASAnimGraphNode_StateMachine_2;                          // 0x3C70(0x0310)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x3F80(0x00A8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x4028(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x4180(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x41A8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x4300(0x0028)
		struct FSBAnimNode_SimpleIK                                SBAnimGraphNode_SimpleIK_3;                              // 0x4328(0x0170)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x4498(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x44E0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x4638(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x4660(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x47B8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x47E0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x4808(0x0158)
		struct FSBAnimNode_CustomBoneScaleLocal                    SBAnimGraphNode_CustomBoneScaleLocal;                    // 0x4960(0x1048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x59A8(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x59D0(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x5A90(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x5AB8(0x00A8)
		struct FSBAnimNode_RigidBody                               SBAnimGraphNode_RigidBody;                               // 0x5B60(0x09A0)
		struct FSBAnimNode_CopyBone                                SBAnimGraphNode_CopyBone;                                // 0x6500(0x0128)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x6628(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x6650(0x0030)
		struct FSBAnimNode_SimpleIK                                SBAnimGraphNode_SimpleIK_2;                              // 0x6680(0x0170)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x67F0(0x0028)
		unsigned char                                              UnknownData_E81V[0x8];                                   // 0x6818(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBAnimNode_PoseAlong                               SBAnimGraphNode_PoseAlong;                               // 0x6820(0x0210)
		struct FSBAnimNode_SimpleIK                                SBAnimGraphNode_SimpleIK;                                // 0x6A30(0x0170)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x6BA0(0x0028)
		struct FASAnimNode_StateMachine                            ASAnimGraphNode_StateMachine;                            // 0x6BC8(0x0310)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x6ED8(0x00A8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x6F80(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x70D8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x7100(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x7128(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x7150(0x00C8)
		bool                                                       __CustomProperty_bActive_EE6F7A2144257EEF4EEFABB52EDCBDDA; // 0x7218(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bActive_BDB16ED54031EFBECE29CB8A71D2CA73; // 0x7219(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bActive_6300081F43CA4F105E22E385380546B9; // 0x721A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bActive_C58262BC44B702C351430398D0A54317; // 0x721B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             InputVector;                                             // 0x721C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FrameDeltaTime;                                          // 0x7228(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ClimbingDirection;                                       // 0x722C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D09S[0x3];                                   // 0x722D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbingSpeedUp;                                         // 0x7230(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ClimbingSpeedRight;                                      // 0x7234(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimClimbingSpeedUp;                                     // 0x7238(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimClimbingSpeedRight;                                  // 0x723C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MeshClimbingAim;                                         // 0x7240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ClimbingAimBlendSpeed;                                   // 0x7248(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ClimbingAimTarget;                                       // 0x724C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeshClimbingAimX;                                        // 0x7254(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeshClimbingAimY;                                        // 0x7258(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JDMY[0x4];                                   // 0x725C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UASAnimationSet*                                     AnimationSet;                                            // 0x7260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UASStateMachine*                                     StateMachine;                                            // 0x7268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Previous_State;                                          // 0x7270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              Next_State;                                              // 0x7280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FName>                                        AnimTags;                                                // 0x7290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                CheckTag;                                                // 0x72A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NowTag;                                                  // 0x72A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PreviousTag;                                             // 0x72B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Walking_Vector;                                          // 0x72B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Falling_Vector;                                          // 0x72C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Temp_Counter;                                            // 0x72D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Temp_BS_X;                                               // 0x72D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Temp_BS_Y;                                               // 0x72D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XML4[0x4];                                   // 0x72DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ChangeState;                                             // 0x72E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector                                             Temp_Vector;                                             // 0x72F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Temp_Rotation;                                           // 0x72FC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Turn_Wait;                                               // 0x7308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CancelLock;                                              // 0x730C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MoveEnd;                                                 // 0x730D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R7UQ[0x2];                                   // 0x730E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               Local_OwnerPawn;                                         // 0x7310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UASStateMachine*                                     AimStateMachine;                                         // 0x7318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWalkForward;                                            // 0x7320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DoHoming;                                                // 0x7321(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Temp_Flag;                                               // 0x7322(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KKXP[0x1];                                   // 0x7323(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Debug_Counter;                                           // 0x7324(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Debug_Speed;                                             // 0x7328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Debug_Int_Speed;                                         // 0x732C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsValidAim;                                              // 0x7330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G559[0x7];                                   // 0x7331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UASStateMachine*                                     AimOffsetStateMachine;                                   // 0x7338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EventFall;                                               // 0x7340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsValidAimOffset;                                        // 0x7341(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4EAB[0x6];                                   // 0x7342(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UASStateMachine*                                     AdditiveMeshSpaceStateMachine;                           // 0x7348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Temp_IntCount;                                           // 0x7350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3A7X[0x4];                                   // 0x7354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Temp_INTArray;                                           // 0x7358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      Temp_PressCounter;                                       // 0x7368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Temp_MoveSpeed;                                          // 0x736C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              TempTargetActor;                                         // 0x7370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BreastPhysics;                                           // 0x7378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZJDY[0x3];                                   // 0x7379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Swim_Counter;                                            // 0x737C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeelLength;                                              // 0x7380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AdditiveLandingAlpha;                                    // 0x7384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsValidAdditiveMeshSpaceSM;                              // 0x7388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F6UK[0x7];                                   // 0x7389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UASStateMachine*                                     AdditiveLocalSpaceStateMachine;                          // 0x7390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bValidAdditiveLocalSpaceSM;                              // 0x7398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bBlendAdditiveMeshSpace;                                 // 0x7399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bBlendAdditveLocalSpace;                                 // 0x739A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MXC6[0x1];                                   // 0x739B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WristRetargetL;                                          // 0x739C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             WristRetargetR;                                          // 0x73A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FootRetargetL;                                           // 0x73B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             FootRetargetR;                                           // 0x73C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBLimbIKUpdateParam                                FootRetargetIKParamR;                                    // 0x73CC(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FSBLimbIKUpdateParam                                FootRetargetIKParamL;                                    // 0x73DC(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FSBLimbIKUpdateParam                                WristRetargetIKParamR;                                   // 0x73EC(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FSBLimbIKUpdateParam                                WristRetargetIKParamL;                                   // 0x73FC(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       IsEnableMountIK;                                         // 0x740C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QNEX[0x3];                                   // 0x740D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBLimbIKUpdateParam                                MountIKLeftGrip;                                         // 0x7410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FSBLimbIKUpdateParam                                MountIKRightGrip;                                        // 0x7420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FSBLimbIKUpdateParam                                MountIKLeftSole;                                         // 0x7430(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FSBLimbIKUpdateParam                                MountIKRightSole;                                        // 0x7440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void UpdateMountIKParam(class ASBMount* Mount, class ASBPlayerCharacter* Player);
		void SetupAnimationSet();
		void UpdateCharacterVariablesBp(float DeltaTime);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PlayerAnimBlueprint_SBAnimGraphNode_SimpleIK_63E9F70F45D50A456F67428371215FF7();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName);
		void Set_Temp_Rot();
		void Set_MeshYaw(float Yaw);
		void ExecuteUbergraph_AB_PlayerAnimBlueprint(int32_t EntryPoint);
		void ChangeState__DelegateSignature(const class FName& Previous, const class FName& Now);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
