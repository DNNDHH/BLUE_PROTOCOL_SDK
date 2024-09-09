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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.HairLayer
	 */
	struct UAB_ExtraNPC_Common_Demo_C_HairLayer_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FVector                                             Acceralation;                                            // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Active;                                                  // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8HQY[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPoseLink                                           HairLayer;                                               // 0x0020(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.AnimGraph
	 */
	struct UAB_ExtraNPC_Common_Demo_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_AnimGraphNode_LayeredBoneBlend_0F69395E4C7BF0B1A9E39E81E7A73811
	 */
	struct UAB_ExtraNPC_Common_Demo_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_AnimGraphNode_LayeredBoneBlend_0F69395E4C7BF0B1A9E39E81E7A73811_Params
	{	};

	/**
	 * Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.BlueprintUpdateAnimation
	 */
	struct UAB_ExtraNPC_Common_Demo_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.BlueprintInitializeAnimation
	 */
	struct UAB_ExtraNPC_Common_Demo_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.ExecuteUbergraph_AB_ExtraNPC_Common_Demo
	 */
	struct UAB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
