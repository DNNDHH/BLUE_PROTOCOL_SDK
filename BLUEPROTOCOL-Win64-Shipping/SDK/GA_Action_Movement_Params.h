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
	 * Function GA_Action_Movement.GA_Action_Movement_C.EventReceived_DC6488B9460FBDBF1C592493913CCCF7
	 */
	struct UGA_Action_Movement_C_EventReceived_DC6488B9460FBDBF1C592493913CCCF7_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Action_Movement.GA_Action_Movement_C.OnCancelled_F0A7509B4F9F16E6439C7895753943AC
	 */
	struct UGA_Action_Movement_C_OnCancelled_F0A7509B4F9F16E6439C7895753943AC_Params
	{	};

	/**
	 * Function GA_Action_Movement.GA_Action_Movement_C.OnRefused_F0A7509B4F9F16E6439C7895753943AC
	 */
	struct UGA_Action_Movement_C_OnRefused_F0A7509B4F9F16E6439C7895753943AC_Params
	{	};

	/**
	 * Function GA_Action_Movement.GA_Action_Movement_C.OnCompleted_F0A7509B4F9F16E6439C7895753943AC
	 */
	struct UGA_Action_Movement_C_OnCompleted_F0A7509B4F9F16E6439C7895753943AC_Params
	{	};

	/**
	 * Function GA_Action_Movement.GA_Action_Movement_C.EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E
	 */
	struct UGA_Action_Movement_C_EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Action_Movement.GA_Action_Movement_C.K2_ActivateAbility
	 */
	struct UGA_Action_Movement_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Action_Movement.GA_Action_Movement_C.K2_OnEndAbility
	 */
	struct UGA_Action_Movement_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Action_Movement.GA_Action_Movement_C.ExecuteUbergraph_GA_Action_Movement
	 */
	struct UGA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9SN1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
