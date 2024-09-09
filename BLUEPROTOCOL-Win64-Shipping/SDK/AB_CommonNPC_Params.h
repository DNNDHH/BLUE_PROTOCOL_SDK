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
	 * Function AB_CommonNPC.AB_CommonNPC_C.AnimGraph
	 */
	struct UAB_CommonNPC_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function AB_CommonNPC.AB_CommonNPC_C.BlueprintInitializeAnimation
	 */
	struct UAB_CommonNPC_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function AB_CommonNPC.AB_CommonNPC_C.BlueprintUpdateAnimation
	 */
	struct UAB_CommonNPC_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AB_CommonNPC.AB_CommonNPC_C.ExecuteUbergraph_AB_CommonNPC
	 */
	struct UAB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
