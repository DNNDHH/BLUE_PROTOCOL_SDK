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
	 * AnimBlueprintGeneratedClass AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C
	 * Size -> 0x2EA0 (FullSize[0x3E90] - InheritedSize[0x0FF0])
	 */
	class UAB_ExtraNPC_Common_Demo_C : public USBNpcCharacterAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FF0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0FF8(0x0048)
		struct FSBAnimNode_LookAt                                  SBAnimGraphNode_LookAt;                                  // 0x1040(0x0D00)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x1D40(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x1D60(0x0020)
		struct FASAnimNode_StateMachine                            ASAnimGraphNode_StateMachine;                            // 0x1D80(0x0310)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x2090(0x0048)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x20D8(0x0030)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x2108(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x2128(0x0020)
		unsigned char                                              UnknownData_LRJF[0x8];                                   // 0x2148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics;                             // 0x2150(0x0610)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x2760(0x0118)
		struct FSBAnimNode_CustomBoneScaleLocal                    SBAnimGraphNode_CustomBoneScaleLocal;                    // 0x2878(0x1048)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x38C0(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x38F0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x3918(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x3940(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x3A98(0x00C0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_4;                         // 0x3B58(0x00A0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_3;                         // 0x3BF8(0x00A0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_2;                         // 0x3C98(0x00A0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x3D38(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x3DD8(0x00A8)
		bool                                                       __CustomProperty_bActive_0ECE649E48FF8768D0CAC1A4619446C1; // 0x3E80(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bActive_9DE4EE444D7283CC57EA209CD6BD8963; // 0x3E81(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bActive_8EF3463841808113CD3A5DB2B81608B9; // 0x3E82(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_bActive_62B1D4C54227581CABC290B203E7A33B; // 0x3E83(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_THZ2[0x4];                                   // 0x3E84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UASAnimationSet*                                     AnimSet;                                                 // 0x3E88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HairLayer(const struct FPoseLink& InPose, const struct FVector& Acceralation, bool Active, struct FPoseLink* HairLayer);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_AnimGraphNode_LayeredBoneBlend_0F69395E4C7BF0B1A9E39E81E7A73811();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_AB_ExtraNPC_Common_Demo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
