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
	 * Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.PostAkEvent_RideOff
	 */
	struct UBP_PlayerEngramCannonComponent_C_PostAkEvent_RideOff_Params
	{	};

	/**
	 * Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.PostAkEvent_RideOn
	 */
	struct UBP_PlayerEngramCannonComponent_C_PostAkEvent_RideOn_Params
	{	};

	/**
	 * Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ResetUI
	 */
	struct UBP_PlayerEngramCannonComponent_C_ResetUI_Params
	{	};

	/**
	 * Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.SetUI
	 */
	struct UBP_PlayerEngramCannonComponent_C_SetUI_Params
	{	};

	/**
	 * Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.InitGetOff_BP
	 */
	struct UBP_PlayerEngramCannonComponent_C_InitGetOff_BP_Params
	{	};

	/**
	 * Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.InitOnBoard_BP
	 */
	struct UBP_PlayerEngramCannonComponent_C_InitOnBoard_BP_Params
	{	};

	/**
	 * Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ReceiveEndPlay
	 */
	struct UBP_PlayerEngramCannonComponent_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ExecuteUbergraph_BP_PlayerEngramCannonComponent
	 */
	struct UBP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
