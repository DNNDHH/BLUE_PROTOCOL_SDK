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
	 * Function TokenDisplay.TokenDisplay_C.Open
	 */
	struct UTokenDisplay_C_Open_Params
	{	};

	/**
	 * Function TokenDisplay.TokenDisplay_C.ChangeForcusCategory
	 */
	struct UTokenDisplay_C_ChangeForcusCategory_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenDisplay.TokenDisplay_C.OnGetExpiredBlankText_Event
	 */
	struct UTokenDisplay_C_OnGetExpiredBlankText_Event_Params
	{	};

	/**
	 * Function TokenDisplay.TokenDisplay_C.OnGetTokenListBlankText_Event
	 */
	struct UTokenDisplay_C_OnGetTokenListBlankText_Event_Params
	{	};

	/**
	 * Function TokenDisplay.TokenDisplay_C.SwitchInfoText
	 */
	struct UTokenDisplay_C_SwitchInfoText_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TokenDisplay.TokenDisplay_C.CustomEvent_1
	 */
	struct UTokenDisplay_C_CustomEvent_1_Params
	{	};

	/**
	 * Function TokenDisplay.TokenDisplay_C.ExecuteUbergraph_TokenDisplay
	 */
	struct UTokenDisplay_C_ExecuteUbergraph_TokenDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
