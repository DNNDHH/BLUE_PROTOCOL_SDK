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
	 * Function AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C.AnimGraph
	 */
	struct UAB_EnpcPhysicsDummy_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AnimGraph;                                               // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C.ExecuteUbergraph_AB_EnpcPhysicsDummy
	 */
	struct UAB_EnpcPhysicsDummy_C_ExecuteUbergraph_AB_EnpcPhysicsDummy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
