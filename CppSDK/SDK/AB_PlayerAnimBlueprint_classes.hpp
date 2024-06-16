#pragma once

 

// Package: AB_PlayerAnimBlueprint

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SBAnimNode_structs.hpp"
#include "ActionSystem_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C
// 0x63F0 (0x7450 - 0x1060)
class UAB_PlayerAnimBlueprint_C final : public USBPlayerCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1060(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1068(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1088(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_8;                    // 0x10A8(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_17;                    // 0x1200(0x0028)()
	struct FASAnimNode_StateMachine               ASAnimGraphNode_StateMachine_4;                    // 0x1228(0x0310)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x1538(0x00C0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x15F8(0x00A8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_16;                    // 0x16A0(0x0028)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph_3;                   // 0x16C8(0x00A0)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph_2;                   // 0x1768(0x00A0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_7;                    // 0x1808(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_15;                    // 0x1960(0x0028)()
	struct FASAnimNode_StateMachine               ASAnimGraphNode_StateMachine_3;                    // 0x1988(0x0310)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph_1;                   // 0x1C98(0x00A0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x1D38(0x00A8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_6;                    // 0x1DE0(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_14;                    // 0x1F38(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_13;                    // 0x1F60(0x0028)()
	uint8                                         Pad_1D5C[0x8];                                     // 0x1F88(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAnimNode_LegIK                      SBAnimGraphNode_LegIK;                             // 0x1F90(0x07C0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x2750(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x2798(0x00A8)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x2840(0x00A0)()
	struct FSBAnimNode_SimpleIK                   SBAnimGraphNode_SimpleIK_3;                        // 0x28E0(0x0170)()
	struct FASAnimNode_StateMachine               ASAnimGraphNode_StateMachine_2;                    // 0x2A50(0x0310)()
	struct FSBAnimNode_PoseAlong                  SBAnimGraphNode_PoseAlong_1;                       // 0x2D60(0x0210)()
	struct FSBAnimNode_LookAt                     SBAnimGraphNode_LookAt;                            // 0x2F70(0x0D00)()
	struct FASAnimNode_StateMachine               ASAnimGraphNode_StateMachine_1;                    // 0x3C70(0x0310)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x3F80(0x00A8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_5;                    // 0x4028(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_12;                    // 0x4180(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_4;                    // 0x41A8(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_11;                    // 0x4300(0x0028)()
	struct FSBAnimNode_SimpleIK                   SBAnimGraphNode_SimpleIK_2;                        // 0x4328(0x0170)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x4498(0x0048)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_3;                    // 0x44E0(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_10;                    // 0x4638(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x4660(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_9;                     // 0x47B8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_8;                     // 0x47E0(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x4808(0x0158)()
	struct FSBAnimNode_CustomBoneScaleLocal       SBAnimGraphNode_CustomBoneScaleLocal;              // 0x4960(0x1048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_7;                     // 0x59A8(0x0028)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x59D0(0x00C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x5A90(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x5AB8(0x00A8)()
	struct FSBAnimNode_RigidBody                  SBAnimGraphNode_RigidBody;                         // 0x5B60(0x09A0)()
	struct FSBAnimNode_CopyBone                   SBAnimGraphNode_CopyBone;                          // 0x6500(0x0128)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x6628(0x0028)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x6650(0x0030)()
	struct FSBAnimNode_SimpleIK                   SBAnimGraphNode_SimpleIK_1;                        // 0x6680(0x0170)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x67F0(0x0028)()
	uint8                                         Pad_1D5D[0x8];                                     // 0x6818(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAnimNode_PoseAlong                  SBAnimGraphNode_PoseAlong;                         // 0x6820(0x0210)()
	struct FSBAnimNode_SimpleIK                   SBAnimGraphNode_SimpleIK;                          // 0x6A30(0x0170)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x6BA0(0x0028)()
	struct FASAnimNode_StateMachine               ASAnimGraphNode_StateMachine;                      // 0x6BC8(0x0310)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x6ED8(0x00A8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x6F80(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x70D8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x7100(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x7128(0x0028)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x7150(0x00C8)()
	bool                                          __CustomProperty_bActive_EE6F7A2144257EEF4EEFABB52EDCBDDA; // 0x7218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_bActive_BDB16ED54031EFBECE29CB8A71D2CA73; // 0x7219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_bActive_6300081F43CA4F105E22E385380546B9; // 0x721A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_bActive_C58262BC44B702C351430398D0A54317; // 0x721B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                InputVector;                                       // 0x721C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x7228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         ClimbingDirection;                                 // 0x722C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D5E[0x3];                                     // 0x722D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ClimbingSpeedUp;                                   // 0x7230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClimbingSpeedRight;                                // 0x7234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimClimbingSpeedUp;                               // 0x7238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimClimbingSpeedRight;                            // 0x723C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MeshClimbingAim;                                   // 0x7240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClimbingAimBlendSpeed;                             // 0x7248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ClimbingAimTarget;                                 // 0x724C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MeshClimbingAimX;                                  // 0x7254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MeshClimbingAimY;                                  // 0x7258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D5F[0x4];                                     // 0x725C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UASAnimationSet*                        AnimationSet;                                      // 0x7260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASStateMachine*                        StateMachine;                                      // 0x7268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Previous_State;                                    // 0x7270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Next_State;                                        // 0x7280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           AnimTags;                                          // 0x7290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   CheckTag;                                          // 0x72A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   NowTag;                                            // 0x72A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PreviousTag;                                       // 0x72B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Walking_Vector;                                    // 0x72B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Falling_Vector;                                    // 0x72C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_Counter;                                      // 0x72D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_BS_X;                                         // 0x72D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_BS_Y;                                         // 0x72D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D60[0x4];                                     // 0x72DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ChangeState;                                       // 0x72E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                                Temp_Vector;                                       // 0x72F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Temp_Rotation;                                     // 0x72FC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Turn_Wait;                                         // 0x7308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CancelLock;                                        // 0x730C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MoveEnd;                                           // 0x730D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D61[0x2];                                     // 0x730E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  Local_OwnerPawn;                                   // 0x7310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASStateMachine*                        AimStateMachine;                                   // 0x7318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWalkForward;                                      // 0x7320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DoHoming;                                          // 0x7321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Temp_Flag;                                         // 0x7322(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D62[0x1];                                     // 0x7323(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Debug_Counter;                                     // 0x7324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Debug_Speed;                                       // 0x7328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Debug_Int_Speed;                                   // 0x732C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValidAim;                                        // 0x7330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D63[0x7];                                     // 0x7331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UASStateMachine*                        AimOffsetStateMachine;                             // 0x7338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EventFall;                                         // 0x7340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsValidAimOffset;                                  // 0x7341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D64[0x6];                                     // 0x7342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UASStateMachine*                        AdditiveMeshSpaceStateMachine;                     // 0x7348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_IntCount;                                     // 0x7350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D65[0x4];                                     // 0x7354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Temp_INTArray;                                     // 0x7358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Temp_PressCounter;                                 // 0x7368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_MoveSpeed;                                    // 0x736C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TempTargetActor;                                   // 0x7370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BreastPhysics;                                     // 0x7378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D66[0x3];                                     // 0x7379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Swim_Counter;                                      // 0x737C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeelLength;                                        // 0x7380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AdditiveLandingAlpha;                              // 0x7384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValidAdditiveMeshSpaceSM;                        // 0x7388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D67[0x7];                                     // 0x7389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UASStateMachine*                        AdditiveLocalSpaceStateMachine;                    // 0x7390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bValidAdditiveLocalSpaceSM;                        // 0x7398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBlendAdditiveMeshSpace;                           // 0x7399(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBlendAdditveLocalSpace;                           // 0x739A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D68[0x1];                                     // 0x739B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                WristRetargetL;                                    // 0x739C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WristRetargetR;                                    // 0x73A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FootRetargetL;                                     // 0x73B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FootRetargetR;                                     // 0x73C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLimbIKUpdateParam                   FootRetargetIKParamR;                              // 0x73CC(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSBLimbIKUpdateParam                   FootRetargetIKParamL;                              // 0x73DC(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSBLimbIKUpdateParam                   WristRetargetIKParamR;                             // 0x73EC(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSBLimbIKUpdateParam                   WristRetargetIKParamL;                             // 0x73FC(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsEnableMountIK;                                   // 0x740C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D69[0x3];                                     // 0x740D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLimbIKUpdateParam                   MountIKLeftGrip;                                   // 0x7410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSBLimbIKUpdateParam                   MountIKRightGrip;                                  // 0x7420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSBLimbIKUpdateParam                   MountIKLeftSole;                                   // 0x7430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSBLimbIKUpdateParam                   MountIKRightSole;                                  // 0x7440(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ChangeState__DelegateSignature(class FName Previous, class FName Now);
	void ExecuteUbergraph_AB_PlayerAnimBlueprint(int32 EntryPoint);
	void Set_MeshYaw(float Yaw);
	void Set_Temp_Rot();
	void ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PlayerAnimBlueprint_SBAnimGraphNode_SimpleIK_63E9F70F45D50A456F67428371215FF7();
	void UpdateCharacterVariablesBp(float DeltaTime);
	void SetupAnimationSet();
	void UpdateMountIKParam(class ASBMount* Mount, class ASBPlayerCharacter* Player);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_PlayerAnimBlueprint_C">();
	}
	static class UAB_PlayerAnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_PlayerAnimBlueprint_C>();
	}
};
static_assert(alignof(UAB_PlayerAnimBlueprint_C) == 0x000010, "Wrong alignment on UAB_PlayerAnimBlueprint_C");
static_assert(sizeof(UAB_PlayerAnimBlueprint_C) == 0x007450, "Wrong size on UAB_PlayerAnimBlueprint_C");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, UberGraphFrame) == 0x001060, "Member 'UAB_PlayerAnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x001068, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x001088, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_SaveCachedPose_8) == 0x0010A8, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_SaveCachedPose_8' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_17) == 0x001200, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_17' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, ASAnimGraphNode_StateMachine_4) == 0x001228, "Member 'UAB_PlayerAnimBlueprint_C::ASAnimGraphNode_StateMachine_4' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_LayeredBoneBlend_1) == 0x001538, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_BlendListByBool_5) == 0x0015F8, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_BlendListByBool_5' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_16) == 0x0016A0, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_16' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_LinkedAnimGraph_3) == 0x0016C8, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_LinkedAnimGraph_3' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_LinkedAnimGraph_2) == 0x001768, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_LinkedAnimGraph_2' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_SaveCachedPose_7) == 0x001808, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_SaveCachedPose_7' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_15) == 0x001960, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_15' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, ASAnimGraphNode_StateMachine_3) == 0x001988, "Member 'UAB_PlayerAnimBlueprint_C::ASAnimGraphNode_StateMachine_3' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_LinkedAnimGraph_1) == 0x001C98, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_LinkedAnimGraph_1' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_BlendListByBool_4) == 0x001D38, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_BlendListByBool_4' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_SaveCachedPose_6) == 0x001DE0, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_SaveCachedPose_6' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_14) == 0x001F38, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_14' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_13) == 0x001F60, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_13' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, SBAnimGraphNode_LegIK) == 0x001F90, "Member 'UAB_PlayerAnimBlueprint_C::SBAnimGraphNode_LegIK' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_Slot_1) == 0x002750, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_BlendListByBool_3) == 0x002798, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_BlendListByBool_3' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_LinkedAnimGraph) == 0x002840, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, SBAnimGraphNode_SimpleIK_3) == 0x0028E0, "Member 'UAB_PlayerAnimBlueprint_C::SBAnimGraphNode_SimpleIK_3' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, ASAnimGraphNode_StateMachine_2) == 0x002A50, "Member 'UAB_PlayerAnimBlueprint_C::ASAnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, SBAnimGraphNode_PoseAlong_1) == 0x002D60, "Member 'UAB_PlayerAnimBlueprint_C::SBAnimGraphNode_PoseAlong_1' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, SBAnimGraphNode_LookAt) == 0x002F70, "Member 'UAB_PlayerAnimBlueprint_C::SBAnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, ASAnimGraphNode_StateMachine_1) == 0x003C70, "Member 'UAB_PlayerAnimBlueprint_C::ASAnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_BlendListByBool_2) == 0x003F80, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_BlendListByBool_2' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_SaveCachedPose_5) == 0x004028, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_SaveCachedPose_5' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_12) == 0x004180, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_12' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_SaveCachedPose_4) == 0x0041A8, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_SaveCachedPose_4' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_11) == 0x004300, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_11' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, SBAnimGraphNode_SimpleIK_2) == 0x004328, "Member 'UAB_PlayerAnimBlueprint_C::SBAnimGraphNode_SimpleIK_2' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_Slot) == 0x004498, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_SaveCachedPose_3) == 0x0044E0, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_SaveCachedPose_3' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_10) == 0x004638, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_10' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_SaveCachedPose_2) == 0x004660, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_SaveCachedPose_2' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_9) == 0x0047B8, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_9' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_8) == 0x0047E0, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_8' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_SaveCachedPose_1) == 0x004808, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, SBAnimGraphNode_CustomBoneScaleLocal) == 0x004960, "Member 'UAB_PlayerAnimBlueprint_C::SBAnimGraphNode_CustomBoneScaleLocal' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_7) == 0x0059A8, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_7' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_LayeredBoneBlend) == 0x0059D0, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_6) == 0x005A90, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_6' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_BlendListByBool_1) == 0x005AB8, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, SBAnimGraphNode_RigidBody) == 0x005B60, "Member 'UAB_PlayerAnimBlueprint_C::SBAnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, SBAnimGraphNode_CopyBone) == 0x006500, "Member 'UAB_PlayerAnimBlueprint_C::SBAnimGraphNode_CopyBone' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_5) == 0x006628, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_5' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_Root) == 0x006650, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, SBAnimGraphNode_SimpleIK_1) == 0x006680, "Member 'UAB_PlayerAnimBlueprint_C::SBAnimGraphNode_SimpleIK_1' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_4) == 0x0067F0, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_4' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, SBAnimGraphNode_PoseAlong) == 0x006820, "Member 'UAB_PlayerAnimBlueprint_C::SBAnimGraphNode_PoseAlong' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, SBAnimGraphNode_SimpleIK) == 0x006A30, "Member 'UAB_PlayerAnimBlueprint_C::SBAnimGraphNode_SimpleIK' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_3) == 0x006BA0, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, ASAnimGraphNode_StateMachine) == 0x006BC8, "Member 'UAB_PlayerAnimBlueprint_C::ASAnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x006ED8, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_SaveCachedPose) == 0x006F80, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_2) == 0x0070D8, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose_1) == 0x007100, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_UseCachedPose) == 0x007128, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimGraphNode_ApplyAdditive) == 0x007150, "Member 'UAB_PlayerAnimBlueprint_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, __CustomProperty_bActive_EE6F7A2144257EEF4EEFABB52EDCBDDA) == 0x007218, "Member 'UAB_PlayerAnimBlueprint_C::__CustomProperty_bActive_EE6F7A2144257EEF4EEFABB52EDCBDDA' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, __CustomProperty_bActive_BDB16ED54031EFBECE29CB8A71D2CA73) == 0x007219, "Member 'UAB_PlayerAnimBlueprint_C::__CustomProperty_bActive_BDB16ED54031EFBECE29CB8A71D2CA73' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, __CustomProperty_bActive_6300081F43CA4F105E22E385380546B9) == 0x00721A, "Member 'UAB_PlayerAnimBlueprint_C::__CustomProperty_bActive_6300081F43CA4F105E22E385380546B9' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, __CustomProperty_bActive_C58262BC44B702C351430398D0A54317) == 0x00721B, "Member 'UAB_PlayerAnimBlueprint_C::__CustomProperty_bActive_C58262BC44B702C351430398D0A54317' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, InputVector) == 0x00721C, "Member 'UAB_PlayerAnimBlueprint_C::InputVector' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, FrameDeltaTime) == 0x007228, "Member 'UAB_PlayerAnimBlueprint_C::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, ClimbingDirection) == 0x00722C, "Member 'UAB_PlayerAnimBlueprint_C::ClimbingDirection' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, ClimbingSpeedUp) == 0x007230, "Member 'UAB_PlayerAnimBlueprint_C::ClimbingSpeedUp' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, ClimbingSpeedRight) == 0x007234, "Member 'UAB_PlayerAnimBlueprint_C::ClimbingSpeedRight' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimClimbingSpeedUp) == 0x007238, "Member 'UAB_PlayerAnimBlueprint_C::AnimClimbingSpeedUp' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimClimbingSpeedRight) == 0x00723C, "Member 'UAB_PlayerAnimBlueprint_C::AnimClimbingSpeedRight' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, MeshClimbingAim) == 0x007240, "Member 'UAB_PlayerAnimBlueprint_C::MeshClimbingAim' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, ClimbingAimBlendSpeed) == 0x007248, "Member 'UAB_PlayerAnimBlueprint_C::ClimbingAimBlendSpeed' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, ClimbingAimTarget) == 0x00724C, "Member 'UAB_PlayerAnimBlueprint_C::ClimbingAimTarget' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, MeshClimbingAimX) == 0x007254, "Member 'UAB_PlayerAnimBlueprint_C::MeshClimbingAimX' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, MeshClimbingAimY) == 0x007258, "Member 'UAB_PlayerAnimBlueprint_C::MeshClimbingAimY' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimationSet) == 0x007260, "Member 'UAB_PlayerAnimBlueprint_C::AnimationSet' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, StateMachine) == 0x007268, "Member 'UAB_PlayerAnimBlueprint_C::StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Previous_State) == 0x007270, "Member 'UAB_PlayerAnimBlueprint_C::Previous_State' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Next_State) == 0x007280, "Member 'UAB_PlayerAnimBlueprint_C::Next_State' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AnimTags) == 0x007290, "Member 'UAB_PlayerAnimBlueprint_C::AnimTags' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, CheckTag) == 0x0072A0, "Member 'UAB_PlayerAnimBlueprint_C::CheckTag' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, NowTag) == 0x0072A8, "Member 'UAB_PlayerAnimBlueprint_C::NowTag' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, PreviousTag) == 0x0072B0, "Member 'UAB_PlayerAnimBlueprint_C::PreviousTag' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Walking_Vector) == 0x0072B8, "Member 'UAB_PlayerAnimBlueprint_C::Walking_Vector' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Falling_Vector) == 0x0072C4, "Member 'UAB_PlayerAnimBlueprint_C::Falling_Vector' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Temp_Counter) == 0x0072D0, "Member 'UAB_PlayerAnimBlueprint_C::Temp_Counter' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Temp_BS_X) == 0x0072D4, "Member 'UAB_PlayerAnimBlueprint_C::Temp_BS_X' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Temp_BS_Y) == 0x0072D8, "Member 'UAB_PlayerAnimBlueprint_C::Temp_BS_Y' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, ChangeState) == 0x0072E0, "Member 'UAB_PlayerAnimBlueprint_C::ChangeState' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Temp_Vector) == 0x0072F0, "Member 'UAB_PlayerAnimBlueprint_C::Temp_Vector' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Temp_Rotation) == 0x0072FC, "Member 'UAB_PlayerAnimBlueprint_C::Temp_Rotation' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Turn_Wait) == 0x007308, "Member 'UAB_PlayerAnimBlueprint_C::Turn_Wait' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, CancelLock) == 0x00730C, "Member 'UAB_PlayerAnimBlueprint_C::CancelLock' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, MoveEnd) == 0x00730D, "Member 'UAB_PlayerAnimBlueprint_C::MoveEnd' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Local_OwnerPawn) == 0x007310, "Member 'UAB_PlayerAnimBlueprint_C::Local_OwnerPawn' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AimStateMachine) == 0x007318, "Member 'UAB_PlayerAnimBlueprint_C::AimStateMachine' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, bWalkForward) == 0x007320, "Member 'UAB_PlayerAnimBlueprint_C::bWalkForward' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, DoHoming) == 0x007321, "Member 'UAB_PlayerAnimBlueprint_C::DoHoming' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Temp_Flag) == 0x007322, "Member 'UAB_PlayerAnimBlueprint_C::Temp_Flag' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Debug_Counter) == 0x007324, "Member 'UAB_PlayerAnimBlueprint_C::Debug_Counter' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Debug_Speed) == 0x007328, "Member 'UAB_PlayerAnimBlueprint_C::Debug_Speed' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Debug_Int_Speed) == 0x00732C, "Member 'UAB_PlayerAnimBlueprint_C::Debug_Int_Speed' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, IsValidAim) == 0x007330, "Member 'UAB_PlayerAnimBlueprint_C::IsValidAim' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AimOffsetStateMachine) == 0x007338, "Member 'UAB_PlayerAnimBlueprint_C::AimOffsetStateMachine' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, EventFall) == 0x007340, "Member 'UAB_PlayerAnimBlueprint_C::EventFall' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, IsValidAimOffset) == 0x007341, "Member 'UAB_PlayerAnimBlueprint_C::IsValidAimOffset' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AdditiveMeshSpaceStateMachine) == 0x007348, "Member 'UAB_PlayerAnimBlueprint_C::AdditiveMeshSpaceStateMachine' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Temp_IntCount) == 0x007350, "Member 'UAB_PlayerAnimBlueprint_C::Temp_IntCount' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Temp_INTArray) == 0x007358, "Member 'UAB_PlayerAnimBlueprint_C::Temp_INTArray' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Temp_PressCounter) == 0x007368, "Member 'UAB_PlayerAnimBlueprint_C::Temp_PressCounter' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Temp_MoveSpeed) == 0x00736C, "Member 'UAB_PlayerAnimBlueprint_C::Temp_MoveSpeed' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, TempTargetActor) == 0x007370, "Member 'UAB_PlayerAnimBlueprint_C::TempTargetActor' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, BreastPhysics) == 0x007378, "Member 'UAB_PlayerAnimBlueprint_C::BreastPhysics' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, Swim_Counter) == 0x00737C, "Member 'UAB_PlayerAnimBlueprint_C::Swim_Counter' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, HeelLength) == 0x007380, "Member 'UAB_PlayerAnimBlueprint_C::HeelLength' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AdditiveLandingAlpha) == 0x007384, "Member 'UAB_PlayerAnimBlueprint_C::AdditiveLandingAlpha' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, IsValidAdditiveMeshSpaceSM) == 0x007388, "Member 'UAB_PlayerAnimBlueprint_C::IsValidAdditiveMeshSpaceSM' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, AdditiveLocalSpaceStateMachine) == 0x007390, "Member 'UAB_PlayerAnimBlueprint_C::AdditiveLocalSpaceStateMachine' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, bValidAdditiveLocalSpaceSM) == 0x007398, "Member 'UAB_PlayerAnimBlueprint_C::bValidAdditiveLocalSpaceSM' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, bBlendAdditiveMeshSpace) == 0x007399, "Member 'UAB_PlayerAnimBlueprint_C::bBlendAdditiveMeshSpace' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, bBlendAdditveLocalSpace) == 0x00739A, "Member 'UAB_PlayerAnimBlueprint_C::bBlendAdditveLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, WristRetargetL) == 0x00739C, "Member 'UAB_PlayerAnimBlueprint_C::WristRetargetL' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, WristRetargetR) == 0x0073A8, "Member 'UAB_PlayerAnimBlueprint_C::WristRetargetR' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, FootRetargetL) == 0x0073B4, "Member 'UAB_PlayerAnimBlueprint_C::FootRetargetL' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, FootRetargetR) == 0x0073C0, "Member 'UAB_PlayerAnimBlueprint_C::FootRetargetR' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, FootRetargetIKParamR) == 0x0073CC, "Member 'UAB_PlayerAnimBlueprint_C::FootRetargetIKParamR' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, FootRetargetIKParamL) == 0x0073DC, "Member 'UAB_PlayerAnimBlueprint_C::FootRetargetIKParamL' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, WristRetargetIKParamR) == 0x0073EC, "Member 'UAB_PlayerAnimBlueprint_C::WristRetargetIKParamR' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, WristRetargetIKParamL) == 0x0073FC, "Member 'UAB_PlayerAnimBlueprint_C::WristRetargetIKParamL' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, IsEnableMountIK) == 0x00740C, "Member 'UAB_PlayerAnimBlueprint_C::IsEnableMountIK' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, MountIKLeftGrip) == 0x007410, "Member 'UAB_PlayerAnimBlueprint_C::MountIKLeftGrip' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, MountIKRightGrip) == 0x007420, "Member 'UAB_PlayerAnimBlueprint_C::MountIKRightGrip' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, MountIKLeftSole) == 0x007430, "Member 'UAB_PlayerAnimBlueprint_C::MountIKLeftSole' has a wrong offset!");
static_assert(offsetof(UAB_PlayerAnimBlueprint_C, MountIKRightSole) == 0x007440, "Member 'UAB_PlayerAnimBlueprint_C::MountIKRightSole' has a wrong offset!");

}

