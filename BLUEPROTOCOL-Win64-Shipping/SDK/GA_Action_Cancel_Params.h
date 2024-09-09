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
	 * Function GA_Action_Cancel.GA_Action_Cancel_C.OnCancelled_4565D44A40D52A401330AE96906B75A0
	 */
	struct UGA_Action_Cancel_C_OnCancelled_4565D44A40D52A401330AE96906B75A0_Params
	{	};

	/**
	 * Function GA_Action_Cancel.GA_Action_Cancel_C.OnRefused_4565D44A40D52A401330AE96906B75A0
	 */
	struct UGA_Action_Cancel_C_OnRefused_4565D44A40D52A401330AE96906B75A0_Params
	{	};

	/**
	 * Function GA_Action_Cancel.GA_Action_Cancel_C.OnCompleted_4565D44A40D52A401330AE96906B75A0
	 */
	struct UGA_Action_Cancel_C_OnCompleted_4565D44A40D52A401330AE96906B75A0_Params
	{	};

	/**
	 * Function GA_Action_Cancel.GA_Action_Cancel_C.EventReceived_B985FB814EB02487BF36918A821F5C0C
	 */
	struct UGA_Action_Cancel_C_EventReceived_B985FB814EB02487BF36918A821F5C0C_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Action_Cancel.GA_Action_Cancel_C.EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A
	 */
	struct UGA_Action_Cancel_C_EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Action_Cancel.GA_Action_Cancel_C.K2_ActivateAbility
	 */
	struct UGA_Action_Cancel_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Action_Cancel.GA_Action_Cancel_C.K2_OnEndAbility
	 */
	struct UGA_Action_Cancel_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Action_Cancel.GA_Action_Cancel_C.ExecuteUbergraph_GA_Action_Cancel
	 */
	struct UGA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
