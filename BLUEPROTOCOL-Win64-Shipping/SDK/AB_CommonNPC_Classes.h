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
	 * AnimBlueprintGeneratedClass AB_CommonNPC.AB_CommonNPC_C
	 * Size -> 0x2B78 (FullSize[0x3B68] - InheritedSize[0x0FF0])
	 */
	class UAB_CommonNPC_C : public USBNpcCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FF0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0FF8(0x0030)
		struct FASAnimNode_StateMachine                            ASAnimGraphNode_StateMachine;                            // 0x1028(0x0310)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x1338(0x0048)
		struct FSBAnimNode_LegIK                                   SBAnimGraphNode_LegIK;                                   // 0x1380(0x07C0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1B40(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1B60(0x0020)
		struct FSBAnimNode_PoseAlong                               SBAnimGraphNode_PoseAlong;                               // 0x1B80(0x0210)
		struct FSBAnimNode_LookAt                                  SBAnimGraphNode_LookAt;                                  // 0x1D90(0x0D00)
		struct FSBAnimNode_CustomBoneScaleLocal                    SBAnimGraphNode_CustomBoneScaleLocal;                    // 0x2A90(0x1048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x3AD8(0x0048)
		class UASStateMachine*                                     SM_Main;                                                 // 0x3B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UASAnimationSet*                                     AnimSet;                                                 // 0x3B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Wait_Stance;                                             // 0x3B30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      Temp_Float;                                              // 0x3B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Counter;                                                 // 0x3B44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StartCounter;                                            // 0x3B48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StartWaitCounter;                                        // 0x3B49(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GNFS[0x2];                                   // 0x3B4A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitCounter;                                             // 0x3B4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                NPC_Stance;                                              // 0x3B50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeelLength;                                              // 0x3B58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_97M6[0x4];                                   // 0x3B5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               NewVar_1;                                                // 0x3B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintInitializeAnimation();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AB_CommonNPC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
