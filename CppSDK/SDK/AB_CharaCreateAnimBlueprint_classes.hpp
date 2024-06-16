#pragma once

 

// Package: AB_CharaCreateAnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SBAnimNode_structs.hpp"
#include "ActionSystem_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CharaParts_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C
// 0x3F40 (0x4FA0 - 0x1060)
class UAB_CharaCreateAnimBlueprint_C final : public USBPlayerCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1060(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1068(0x0048)()
	struct FASAnimNode_StateMachine               ASAnimGraphNode_StateMachine;                      // 0x10B0(0x0310)()
	struct FSBAnimNode_CustomBoneScaleLocal       SBAnimGraphNode_CustomBoneScaleLocal;              // 0x13C0(0x1048)()
	uint8                                         Pad_9B02[0x8];                                     // 0x2408(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAnimNode_RigidBody                  SBAnimGraphNode_RigidBody;                         // 0x2410(0x09A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2DB0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2DD0(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x2DF0(0x0030)()
	struct FSBAnimNode_PoseAlong                  SBAnimGraphNode_PoseAlong_1;                       // 0x2E20(0x0210)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x3030(0x00A8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x30D8(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x3230(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x3258(0x0028)()
	struct FSBAnimNode_LookAt                     SBAnimGraphNode_LookAt;                            // 0x3280(0x0D00)()
	struct FSBAnimNode_LegIK                      SBAnimGraphNode_LegIK;                             // 0x3F80(0x07C0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x4740(0x0028)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x4768(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x48C0(0x0028)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x48E8(0x00A8)()
	struct FAnimNode_PoseSnapshot                 AnimGraphNode_PoseSnapshot;                        // 0x4990(0x0090)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph_3;                   // 0x4A20(0x00A0)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph_2;                   // 0x4AC0(0x00A0)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph_1;                   // 0x4B60(0x00A0)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_LinkedAnimGraph;                     // 0x4C00(0x00A0)()
	struct FSBAnimNode_PoseAlong                  SBAnimGraphNode_PoseAlong;                         // 0x4CA0(0x0210)()
	struct FVector                                __CustomProperty_Acceralation_B966B55E4A36B16179AAEE9372DE102B; // 0x4EB0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __CustomProperty_bActive_B966B55E4A36B16179AAEE9372DE102B; // 0x4EBC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_bActive_D33B46A045BCDA03F65B6086D4C6F12F; // 0x4EBD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_bActive_B345ED124A494F3048EEB98A75383094; // 0x4EBE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_bActive_AF6565F24387432F8848EB97F7EE5F6A; // 0x4EBF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          __CustomProperty_Active_5DBDABF2466DC9153F92CD889DB9A7F9; // 0x4EC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B03[0x3];                                     // 0x4EC1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                __CustomProperty_Acceralation_5DBDABF2466DC9153F92CD889DB9A7F9; // 0x4EC4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCrouch;                                          // 0x4ED0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B04[0x3];                                     // 0x4ED1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                InputVector;                                       // 0x4ED4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDash;                                            // 0x4EE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B05[0x3];                                     // 0x4EE1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FrameDeltaTime;                                    // 0x4EE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         ClimbingDirection;                                 // 0x4EE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B06[0x3];                                     // 0x4EE9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ClimbingSpeedUp;                                   // 0x4EEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClimbingSpeedRight;                                // 0x4EF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimClimbingSpeedUp;                               // 0x4EF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimClimbingSpeedRight;                            // 0x4EF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsClimbing;                                        // 0x4EFC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B07[0x3];                                     // 0x4EFD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              MeshClimbingAim;                                   // 0x4F00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ClimbingAimBlendSpeed;                             // 0x4F08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ClimbingAimTarget;                                 // 0x4F0C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MeshClimbingAimX;                                  // 0x4F14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MeshClimbingAimY;                                  // 0x4F18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B08[0x4];                                     // 0x4F1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UASAnimationSet*                        AnimationSet;                                      // 0x4F20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ChangeState;                                       // 0x4F28(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 PrevStateName;                                     // 0x4F38(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 NextStateName;                                     // 0x4F48(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         HeelLength;                                        // 0x4F58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseCopyPose;                                      // 0x4F5C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B09[0x3];                                     // 0x4F5D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPoseSnapshot                          CopyPoseSnapshot;                                  // 0x4F60(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ChangeState__DelegateSignature(const class FString& InPrevStateName, const class FString& InNextStateName);
	void ExecuteUbergraph_AB_CharaCreateAnimBlueprint(int32 EntryPoint);
	void ReceiveStateChange(const class FString& PreviousStateName, const class FString& Param_NextStateName);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void UpdateCharacterVariablesBp(float DeltaTime);
	void SetupAnimationSet();
	void InitCopyPose(class USkeletalMeshComponent* SourceCharacter);
	void UnuseCopyPose();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_CharaCreateAnimBlueprint_C">();
	}
	static class UAB_CharaCreateAnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_CharaCreateAnimBlueprint_C>();
	}
};
static_assert(alignof(UAB_CharaCreateAnimBlueprint_C) == 0x000010, "Wrong alignment on UAB_CharaCreateAnimBlueprint_C");
static_assert(sizeof(UAB_CharaCreateAnimBlueprint_C) == 0x004FA0, "Wrong size on UAB_CharaCreateAnimBlueprint_C");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, UberGraphFrame) == 0x001060, "Member 'UAB_CharaCreateAnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_Slot) == 0x001068, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, ASAnimGraphNode_StateMachine) == 0x0010B0, "Member 'UAB_CharaCreateAnimBlueprint_C::ASAnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, SBAnimGraphNode_CustomBoneScaleLocal) == 0x0013C0, "Member 'UAB_CharaCreateAnimBlueprint_C::SBAnimGraphNode_CustomBoneScaleLocal' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, SBAnimGraphNode_RigidBody) == 0x002410, "Member 'UAB_CharaCreateAnimBlueprint_C::SBAnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x002DB0, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x002DD0, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_Root) == 0x002DF0, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, SBAnimGraphNode_PoseAlong_1) == 0x002E20, "Member 'UAB_CharaCreateAnimBlueprint_C::SBAnimGraphNode_PoseAlong_1' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_BlendListByBool_1) == 0x003030, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_SaveCachedPose_1) == 0x0030D8, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_SaveCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_UseCachedPose_3) == 0x003230, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_UseCachedPose_3' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_UseCachedPose_2) == 0x003258, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_UseCachedPose_2' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, SBAnimGraphNode_LookAt) == 0x003280, "Member 'UAB_CharaCreateAnimBlueprint_C::SBAnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, SBAnimGraphNode_LegIK) == 0x003F80, "Member 'UAB_CharaCreateAnimBlueprint_C::SBAnimGraphNode_LegIK' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_UseCachedPose_1) == 0x004740, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_SaveCachedPose) == 0x004768, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_UseCachedPose) == 0x0048C0, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x0048E8, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_PoseSnapshot) == 0x004990, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_PoseSnapshot' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_LinkedAnimGraph_3) == 0x004A20, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_LinkedAnimGraph_3' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_LinkedAnimGraph_2) == 0x004AC0, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_LinkedAnimGraph_2' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_LinkedAnimGraph_1) == 0x004B60, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_LinkedAnimGraph_1' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimGraphNode_LinkedAnimGraph) == 0x004C00, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimGraphNode_LinkedAnimGraph' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, SBAnimGraphNode_PoseAlong) == 0x004CA0, "Member 'UAB_CharaCreateAnimBlueprint_C::SBAnimGraphNode_PoseAlong' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, __CustomProperty_Acceralation_B966B55E4A36B16179AAEE9372DE102B) == 0x004EB0, "Member 'UAB_CharaCreateAnimBlueprint_C::__CustomProperty_Acceralation_B966B55E4A36B16179AAEE9372DE102B' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, __CustomProperty_bActive_B966B55E4A36B16179AAEE9372DE102B) == 0x004EBC, "Member 'UAB_CharaCreateAnimBlueprint_C::__CustomProperty_bActive_B966B55E4A36B16179AAEE9372DE102B' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, __CustomProperty_bActive_D33B46A045BCDA03F65B6086D4C6F12F) == 0x004EBD, "Member 'UAB_CharaCreateAnimBlueprint_C::__CustomProperty_bActive_D33B46A045BCDA03F65B6086D4C6F12F' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, __CustomProperty_bActive_B345ED124A494F3048EEB98A75383094) == 0x004EBE, "Member 'UAB_CharaCreateAnimBlueprint_C::__CustomProperty_bActive_B345ED124A494F3048EEB98A75383094' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, __CustomProperty_bActive_AF6565F24387432F8848EB97F7EE5F6A) == 0x004EBF, "Member 'UAB_CharaCreateAnimBlueprint_C::__CustomProperty_bActive_AF6565F24387432F8848EB97F7EE5F6A' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, __CustomProperty_Active_5DBDABF2466DC9153F92CD889DB9A7F9) == 0x004EC0, "Member 'UAB_CharaCreateAnimBlueprint_C::__CustomProperty_Active_5DBDABF2466DC9153F92CD889DB9A7F9' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, __CustomProperty_Acceralation_5DBDABF2466DC9153F92CD889DB9A7F9) == 0x004EC4, "Member 'UAB_CharaCreateAnimBlueprint_C::__CustomProperty_Acceralation_5DBDABF2466DC9153F92CD889DB9A7F9' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, IsCrouch) == 0x004ED0, "Member 'UAB_CharaCreateAnimBlueprint_C::IsCrouch' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, InputVector) == 0x004ED4, "Member 'UAB_CharaCreateAnimBlueprint_C::InputVector' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, IsDash) == 0x004EE0, "Member 'UAB_CharaCreateAnimBlueprint_C::IsDash' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, FrameDeltaTime) == 0x004EE4, "Member 'UAB_CharaCreateAnimBlueprint_C::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, ClimbingDirection) == 0x004EE8, "Member 'UAB_CharaCreateAnimBlueprint_C::ClimbingDirection' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, ClimbingSpeedUp) == 0x004EEC, "Member 'UAB_CharaCreateAnimBlueprint_C::ClimbingSpeedUp' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, ClimbingSpeedRight) == 0x004EF0, "Member 'UAB_CharaCreateAnimBlueprint_C::ClimbingSpeedRight' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimClimbingSpeedUp) == 0x004EF4, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimClimbingSpeedUp' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimClimbingSpeedRight) == 0x004EF8, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimClimbingSpeedRight' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, IsClimbing) == 0x004EFC, "Member 'UAB_CharaCreateAnimBlueprint_C::IsClimbing' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, MeshClimbingAim) == 0x004F00, "Member 'UAB_CharaCreateAnimBlueprint_C::MeshClimbingAim' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, ClimbingAimBlendSpeed) == 0x004F08, "Member 'UAB_CharaCreateAnimBlueprint_C::ClimbingAimBlendSpeed' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, ClimbingAimTarget) == 0x004F0C, "Member 'UAB_CharaCreateAnimBlueprint_C::ClimbingAimTarget' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, MeshClimbingAimX) == 0x004F14, "Member 'UAB_CharaCreateAnimBlueprint_C::MeshClimbingAimX' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, MeshClimbingAimY) == 0x004F18, "Member 'UAB_CharaCreateAnimBlueprint_C::MeshClimbingAimY' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, AnimationSet) == 0x004F20, "Member 'UAB_CharaCreateAnimBlueprint_C::AnimationSet' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, ChangeState) == 0x004F28, "Member 'UAB_CharaCreateAnimBlueprint_C::ChangeState' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, PrevStateName) == 0x004F38, "Member 'UAB_CharaCreateAnimBlueprint_C::PrevStateName' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, NextStateName) == 0x004F48, "Member 'UAB_CharaCreateAnimBlueprint_C::NextStateName' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, HeelLength) == 0x004F58, "Member 'UAB_CharaCreateAnimBlueprint_C::HeelLength' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, bUseCopyPose) == 0x004F5C, "Member 'UAB_CharaCreateAnimBlueprint_C::bUseCopyPose' has a wrong offset!");
static_assert(offsetof(UAB_CharaCreateAnimBlueprint_C, CopyPoseSnapshot) == 0x004F60, "Member 'UAB_CharaCreateAnimBlueprint_C::CopyPoseSnapshot' has a wrong offset!");

}

