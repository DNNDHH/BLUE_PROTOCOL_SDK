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
	 * Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.IsCountDownUICancelPressed
	 */
	struct UBP_PlayerWarpComponent_C_IsCountDownUICancelPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1P4D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.HideCountDownUI
	 */
	struct UBP_PlayerWarpComponent_C_HideCountDownUI_Params
	{	};

	/**
	 * Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.ShowCountDownUI
	 */
	struct UBP_PlayerWarpComponent_C_ShowCountDownUI_Params
	{	};

	/**
	 * Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.TickComponentByActorEvent
	 */
	struct UBP_PlayerWarpComponent_C_TickComponentByActorEvent_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerWarpComponent.BP_PlayerWarpComponent_C.ExecuteUbergraph_BP_PlayerWarpComponent
	 */
	struct UBP_PlayerWarpComponent_C_ExecuteUbergraph_BP_PlayerWarpComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
