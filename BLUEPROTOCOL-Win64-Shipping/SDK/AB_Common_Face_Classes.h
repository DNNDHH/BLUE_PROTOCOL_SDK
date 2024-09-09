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
	 * AnimBlueprintGeneratedClass AB_Common_Face.AB_Common_Face_C
	 * Size -> 0x1938 (FullSize[0x1F70] - InheritedSize[0x0638])
	 */
	class UAB_Common_Face_C : public USBFacialAnimInstance
	{
	public:
		unsigned char                                              UnknownData_NH9K[0x8];                                   // 0x0638(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0640(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_5;                           // 0x0648(0x00A8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x06F0(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x07B0(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x0870(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x09C8(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x09F0(0x0048)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_4;                           // 0x0A38(0x00A8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_6;                           // 0x0AE0(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x0BA8(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x0BD0(0x0048)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0C18(0x0048)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_3;                // 0x0C60(0x0190)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x0DF0(0x0190)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x0F80(0x0050)
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x0FD0(0x0050)
		struct FSBAnimNode_FacialEyelid                            SBAnimGraphNode_FacialEyelid;                            // 0x1020(0x00E8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x1108(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1260(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1288(0x0028)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_3;                           // 0x12B0(0x00A8)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode_2;                           // 0x1358(0x00A8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1400(0x0048)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1448(0x0030)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x1478(0x0190)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1608(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_5;                           // 0x1630(0x00C8)
		struct FAnimNode_PoseByName                                AnimGraphNode_PoseByName_4;                              // 0x16F8(0x0098)
		struct FAnimNode_PoseByName                                AnimGraphNode_PoseByName_3;                              // 0x1790(0x0098)
		struct FAnimNode_PoseByName                                AnimGraphNode_PoseByName_2;                              // 0x1828(0x0098)
		struct FAnimNode_PoseByName                                AnimGraphNode_PoseByName;                                // 0x18C0(0x0098)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1958(0x00A8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_4;                           // 0x1A00(0x00C8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1AC8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1C20(0x0028)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_3;                           // 0x1C48(0x00C8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x1D10(0x00C8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x1DD8(0x00C8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1EA0(0x0028)
		struct FAnimNode_PoseBlendNode                             AnimGraphNode_PoseBlendNode;                             // 0x1EC8(0x00A8)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_AnimGraphNode_PoseBlendNode_579E52E740E2DD80E6BE5EB9CAC40897();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_AnimGraphNode_BlendListByBool_D81790E649753BC113B7A1B39E4E5BD2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_AnimGraphNode_PoseByName_5B7198CD4A473A6DBD64C9AA1449C6F0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_AnimGraphNode_PoseByName_058E0F434B051FE559BBD6A8BF50F0EE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_AnimGraphNode_PoseByName_60DBE162411D2C7658375B8F11211F50();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_AnimGraphNode_PoseByName_4467F5ED4F5D1E631E146EB0ECC873F6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_AnimGraphNode_RotationOffsetBlendSpace_EFB0F7154748E132409CDE9FE05CBEA2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_SBAnimGraphNode_FacialEyelid_8CFF90F64ACCF31494C13DBBF5086EB7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_AnimGraphNode_PoseBlendNode_0EA261274DCC193DA64C9483201DF418();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_AnimGraphNode_PoseBlendNode_D00E1F8B466B8E6810C273AE4947D582();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_AnimGraphNode_PoseBlendNode_8B5C0B3E4A814576981411BB83376159();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Common_Face_AnimGraphNode_PoseBlendNode_57F1BBDF45C59E117E036891D712CD07();
		void ExecuteUbergraph_AB_Common_Face(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
