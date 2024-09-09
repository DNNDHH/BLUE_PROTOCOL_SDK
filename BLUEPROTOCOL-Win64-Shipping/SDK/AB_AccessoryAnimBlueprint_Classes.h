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
	 * AnimBlueprintGeneratedClass AB_AccessoryAnimBlueprint.AB_AccessoryAnimBlueprint_C
	 * Size -> 0x4920 (FullSize[0x4DC0] - InheritedSize[0x04A0])
	 */
	class UAB_AccessoryAnimBlueprint_C : public USBPhysicsAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x04A8(0x0020)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x04C8(0x0030)
		unsigned char                                              UnknownData_I2HV[0x8];                                   // 0x04F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_12;                          // 0x0500(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_11;                          // 0x0B10(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_10;                          // 0x1120(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_9;                           // 0x1730(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_8;                           // 0x1D40(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_7;                           // 0x2350(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_6;                           // 0x2960(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_5;                           // 0x2F70(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_4;                           // 0x3580(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_3;                           // 0x3B90(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_2;                           // 0x41A0(0x0610)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics;                             // 0x47B0(0x0610)

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_AB_AccessoryAnimBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
