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
	 * Function FallDeadTriggerBox.FallDeadTriggerBox_C.SetStaticMeshScale
	 */
	struct AFallDeadTriggerBox_C_SetStaticMeshScale_Params
	{	};

	/**
	 * Function FallDeadTriggerBox.FallDeadTriggerBox_C.UserConstructionScript
	 */
	struct AFallDeadTriggerBox_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FallDeadTriggerBox.FallDeadTriggerBox_C.ReceiveActorBeginOverlap
	 */
	struct AFallDeadTriggerBox_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FallDeadTriggerBox.FallDeadTriggerBox_C.ExecuteUbergraph_FallDeadTriggerBox
	 */
	struct AFallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
