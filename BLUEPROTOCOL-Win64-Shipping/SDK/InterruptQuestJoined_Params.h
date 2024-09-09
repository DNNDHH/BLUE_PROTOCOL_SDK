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
	 * Function InterruptQuestJoined.InterruptQuestJoined_C.Construct
	 */
	struct UInterruptQuestJoined_C_Construct_Params
	{	};

	/**
	 * Function InterruptQuestJoined.InterruptQuestJoined_C.OnAnimationFinished
	 */
	struct UInterruptQuestJoined_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InterruptQuestJoined.InterruptQuestJoined_C.ExecuteUbergraph_InterruptQuestJoined
	 */
	struct UInterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5L72[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
