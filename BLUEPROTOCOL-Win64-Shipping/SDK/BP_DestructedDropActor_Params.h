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
	 * Function BP_DestructedDropActor.BP_DestructedDropActor_C.ReceiveBeginPlay
	 */
	struct ABP_DestructedDropActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DestructedDropActor.BP_DestructedDropActor_C.ReceiveActorBeginOverlap
	 */
	struct ABP_DestructedDropActor_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DestructedDropActor.BP_DestructedDropActor_C.PostBuffActivate
	 */
	struct ABP_DestructedDropActor_C_PostBuffActivate_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DestructedDropActor.BP_DestructedDropActor_C.ExecuteUbergraph_BP_DestructedDropActor
	 */
	struct ABP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GEGG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
