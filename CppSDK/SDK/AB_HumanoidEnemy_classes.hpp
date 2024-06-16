#pragma once

 

// Package: AB_HumanoidEnemy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SBAnimNode_structs.hpp"
#include "ActionSystem_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AB_HumanoidEnemy.AB_HumanoidEnemy_C
// 0x34D0 (0x4520 - 0x1050)
class UAB_HumanoidEnemy_C final : public USBEnemyCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1050(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1058(0x0030)()
	struct FASAnimNode_StateMachine               ASAnimGraphNode_StateMachine_1;                    // 0x1088(0x0310)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x1398(0x0048)()
	struct FSBAnimNode_LookAt                     SBAnimGraphNode_LookAt;                            // 0x13E0(0x0D00)()
	struct FSBAnimNode_LegIK                      SBAnimGraphNode_LegIK;                             // 0x20E0(0x07C0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x28A0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x28C0(0x0020)()
	struct FSBAnimNode_PoseAlong                  SBAnimGraphNode_PoseAlong;                         // 0x28E0(0x0210)()
	struct FASAnimNode_StateMachine               ASAnimGraphNode_StateMachine;                      // 0x2AF0(0x0310)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x2E00(0x00C0)()
	struct FAnimNode_PoseSnapshot                 AnimGraphNode_PoseSnapshot;                        // 0x2EC0(0x0090)()
	struct FSBAnimNode_CustomBoneScaleLocal       SBAnimGraphNode_CustomBoneScaleLocal;              // 0x2F50(0x1048)()
	struct FSBAnimNode_PartsDamage                SBAnimGraphNode_PartsDamage;                       // 0x3F98(0x0198)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x4130(0x0158)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x4288(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x42B0(0x0028)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x42D8(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x43E0(0x0108)()
	class UASStateMachine*                        Main_SM;                                           // 0x44E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASAnimationSet*                        AST;                                               // 0x44F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UASStateMachine*                        Sub_SM;                                            // 0x44F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VB_NamePlate_Location;                             // 0x4500(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                VB_BadStatus_Location;                             // 0x450C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AB_HumanoidEnemy(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AB_HumanoidEnemy_C">();
	}
	static class UAB_HumanoidEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAB_HumanoidEnemy_C>();
	}
};
static_assert(alignof(UAB_HumanoidEnemy_C) == 0x000010, "Wrong alignment on UAB_HumanoidEnemy_C");
static_assert(sizeof(UAB_HumanoidEnemy_C) == 0x004520, "Wrong size on UAB_HumanoidEnemy_C");
static_assert(offsetof(UAB_HumanoidEnemy_C, UberGraphFrame) == 0x001050, "Member 'UAB_HumanoidEnemy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AnimGraphNode_Root) == 0x001058, "Member 'UAB_HumanoidEnemy_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, ASAnimGraphNode_StateMachine_1) == 0x001088, "Member 'UAB_HumanoidEnemy_C::ASAnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AnimGraphNode_Slot) == 0x001398, "Member 'UAB_HumanoidEnemy_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, SBAnimGraphNode_LookAt) == 0x0013E0, "Member 'UAB_HumanoidEnemy_C::SBAnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, SBAnimGraphNode_LegIK) == 0x0020E0, "Member 'UAB_HumanoidEnemy_C::SBAnimGraphNode_LegIK' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AnimGraphNode_LocalToComponentSpace) == 0x0028A0, "Member 'UAB_HumanoidEnemy_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AnimGraphNode_ComponentToLocalSpace) == 0x0028C0, "Member 'UAB_HumanoidEnemy_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, SBAnimGraphNode_PoseAlong) == 0x0028E0, "Member 'UAB_HumanoidEnemy_C::SBAnimGraphNode_PoseAlong' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, ASAnimGraphNode_StateMachine) == 0x002AF0, "Member 'UAB_HumanoidEnemy_C::ASAnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AnimGraphNode_LayeredBoneBlend) == 0x002E00, "Member 'UAB_HumanoidEnemy_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AnimGraphNode_PoseSnapshot) == 0x002EC0, "Member 'UAB_HumanoidEnemy_C::AnimGraphNode_PoseSnapshot' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, SBAnimGraphNode_CustomBoneScaleLocal) == 0x002F50, "Member 'UAB_HumanoidEnemy_C::SBAnimGraphNode_CustomBoneScaleLocal' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, SBAnimGraphNode_PartsDamage) == 0x003F98, "Member 'UAB_HumanoidEnemy_C::SBAnimGraphNode_PartsDamage' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AnimGraphNode_SaveCachedPose) == 0x004130, "Member 'UAB_HumanoidEnemy_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AnimGraphNode_UseCachedPose_1) == 0x004288, "Member 'UAB_HumanoidEnemy_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AnimGraphNode_UseCachedPose) == 0x0042B0, "Member 'UAB_HumanoidEnemy_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AnimGraphNode_ModifyBone_1) == 0x0042D8, "Member 'UAB_HumanoidEnemy_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AnimGraphNode_ModifyBone) == 0x0043E0, "Member 'UAB_HumanoidEnemy_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, Main_SM) == 0x0044E8, "Member 'UAB_HumanoidEnemy_C::Main_SM' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, AST) == 0x0044F0, "Member 'UAB_HumanoidEnemy_C::AST' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, Sub_SM) == 0x0044F8, "Member 'UAB_HumanoidEnemy_C::Sub_SM' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, VB_NamePlate_Location) == 0x004500, "Member 'UAB_HumanoidEnemy_C::VB_NamePlate_Location' has a wrong offset!");
static_assert(offsetof(UAB_HumanoidEnemy_C, VB_BadStatus_Location) == 0x00450C, "Member 'UAB_HumanoidEnemy_C::VB_BadStatus_Location' has a wrong offset!");

}

