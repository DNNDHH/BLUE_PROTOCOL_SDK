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
	 * AnimBlueprintGeneratedClass AB_HumanoidEnemy.AB_HumanoidEnemy_C
	 * Size -> 0x34C8 (FullSize[0x4518] - InheritedSize[0x1050])
	 */
	class UAB_HumanoidEnemy_C : public USBEnemyCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1050(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1058(0x0030)
		struct FASAnimNode_StateMachine                            ASAnimGraphNode_StateMachine_2;                          // 0x1088(0x0310)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1398(0x0048)
		struct FSBAnimNode_LookAt                                  SBAnimGraphNode_LookAt;                                  // 0x13E0(0x0D00)
		struct FSBAnimNode_LegIK                                   SBAnimGraphNode_LegIK;                                   // 0x20E0(0x07C0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x28A0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x28C0(0x0020)
		struct FSBAnimNode_PoseAlong                               SBAnimGraphNode_PoseAlong;                               // 0x28E0(0x0210)
		struct FASAnimNode_StateMachine                            ASAnimGraphNode_StateMachine;                            // 0x2AF0(0x0310)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x2E00(0x00C0)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot;                              // 0x2EC0(0x0090)
		struct FSBAnimNode_CustomBoneScaleLocal                    SBAnimGraphNode_CustomBoneScaleLocal;                    // 0x2F50(0x1048)
		struct FSBAnimNode_PartsDamage                             SBAnimGraphNode_PartsDamage;                             // 0x3F98(0x0198)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x4130(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x4288(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x42B0(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x42D8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x43E0(0x0108)
		class UASStateMachine*                                     Main_SM;                                                 // 0x44E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UASAnimationSet*                                     AST;                                                     // 0x44F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UASStateMachine*                                     Sub_SM;                                                  // 0x44F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             VB_NamePlate_Location;                                   // 0x4500(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             VB_BadStatus_Location;                                   // 0x450C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_AB_HumanoidEnemy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
