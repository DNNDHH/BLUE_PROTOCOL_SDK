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
	 * Function UD_NpcCanWander.UD_NpcCanWander_C.ReceiveFetchValue
	 */
	struct UUD_NpcCanWander_C_ReceiveFetchValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UD_NpcCanWander.UD_NpcCanWander_C.ReceiveInitialize
	 */
	struct UUD_NpcCanWander_C_ReceiveInitialize_Params
	{
	public:
		class USBUtilityBrainComponent*                            OwnerComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UD_NpcCanWander.UD_NpcCanWander_C.OnWanderingModeChanged
	 */
	struct UUD_NpcCanWander_C_OnWanderingModeChanged_Params
	{
	public:
		bool                                                       bCanWander;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UD_NpcCanWander.UD_NpcCanWander_C.ExecuteUbergraph_UD_NpcCanWander
	 */
	struct UUD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
