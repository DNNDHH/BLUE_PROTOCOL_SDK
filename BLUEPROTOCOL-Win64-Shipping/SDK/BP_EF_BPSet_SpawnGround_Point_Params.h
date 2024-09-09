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
	 * Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.2VectorDistance
	 */
	struct ABP_EF_BPSet_SpawnGround_Point_C__2VectorDistance_Params
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             B;                                                       // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NewParam;                                                // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ReceiveBeginPlay
	 */
	struct ABP_EF_BPSet_SpawnGround_Point_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ReceiveTick
	 */
	struct ABP_EF_BPSet_SpawnGround_Point_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Point
	 */
	struct ABP_EF_BPSet_SpawnGround_Point_C_ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Point_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
