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
	 * Function BP_EF_Set.BP_EF_Set_C.ReceiveBeginPlay
	 */
	struct ABP_EF_Set_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_EF_Set.BP_EF_Set_C.ReceiveTick
	 */
	struct ABP_EF_Set_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Set.BP_EF_Set_C.EffectCheck
	 */
	struct ABP_EF_Set_C_EffectCheck_Params
	{	};

	/**
	 * Function BP_EF_Set.BP_EF_Set_C.ReceiveNotifyUpdateAttackCollisionScale
	 */
	struct ABP_EF_Set_C_ReceiveNotifyUpdateAttackCollisionScale_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_EF_Set.BP_EF_Set_C.ReceiveNotifyPrepareDestroy
	 */
	struct ABP_EF_Set_C_ReceiveNotifyPrepareDestroy_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_EF_Set.BP_EF_Set_C.ExecuteUbergraph_BP_EF_Set
	 */
	struct ABP_EF_Set_C_ExecuteUbergraph_BP_EF_Set_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
