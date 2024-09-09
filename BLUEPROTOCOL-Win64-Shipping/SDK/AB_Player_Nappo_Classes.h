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
	 * AnimBlueprintGeneratedClass AB_Player_Nappo.AB_Player_Nappo_C
	 * Size -> 0x3D28 (FullSize[0x4D00] - InheritedSize[0x0FD8])
	 */
	class UAB_Player_Nappo_C : public USBCharacterAnimInstance
	{
	public:
		unsigned char                                              UnknownData_Z9CU[0x8];                                   // 0x0FD8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FE0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0FE8(0x0030)
		struct FASAnimNode_StateMachine                            ASAnimGraphNode_StateMachine;                            // 0x1018(0x0310)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1328(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1348(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x1368(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x14C0(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x14E8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1640(0x0028)
		unsigned char                                              UnknownData_WGS0[0x8];                                   // 0x1668(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_9;                           // 0x1670(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_8;                           // 0x1C80(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_7;                           // 0x2290(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_6;                           // 0x28A0(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_5;                           // 0x2EB0(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_4;                           // 0x34C0(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_3;                           // 0x3AD0(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_2;                           // 0x40E0(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics;                             // 0x46F0(0x0610)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_AB_Player_Nappo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
