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
	 * Function History_TimerIcon.History_TimerIcon_C.SetDateTime
	 */
	struct UHistory_TimerIcon_C_SetDateTime_Params
	{
	public:
		struct FDateTime                                           Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function History_TimerIcon.History_TimerIcon_C.OnMouseLeave
	 */
	struct UHistory_TimerIcon_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function History_TimerIcon.History_TimerIcon_C.OnMouseEnter
	 */
	struct UHistory_TimerIcon_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function History_TimerIcon.History_TimerIcon_C.Destruct
	 */
	struct UHistory_TimerIcon_C_Destruct_Params
	{	};

	/**
	 * Function History_TimerIcon.History_TimerIcon_C.ExecuteUbergraph_History_TimerIcon
	 */
	struct UHistory_TimerIcon_C_ExecuteUbergraph_History_TimerIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
