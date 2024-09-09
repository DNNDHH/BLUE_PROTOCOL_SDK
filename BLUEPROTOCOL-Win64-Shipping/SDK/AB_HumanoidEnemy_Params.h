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
	 * Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.AnimGraph
	 */
	struct UAB_HumanoidEnemy_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.BlueprintInitializeAnimation
	 */
	struct UAB_HumanoidEnemy_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.ExecuteUbergraph_AB_HumanoidEnemy
	 */
	struct UAB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
