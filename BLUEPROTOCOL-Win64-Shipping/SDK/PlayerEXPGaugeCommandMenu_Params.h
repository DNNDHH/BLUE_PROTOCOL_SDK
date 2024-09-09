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
	 * Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.SetExpOverflowMode
	 */
	struct UPlayerEXPGaugeCommandMenu_C_SetExpOverflowMode_Params
	{
	public:
		bool                                                       bInIsExpOverflowMode;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.SetGaugeUpdateStop
	 */
	struct UPlayerEXPGaugeCommandMenu_C_SetGaugeUpdateStop_Params
	{
	public:
		bool                                                       InIsUpdateStop;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.Construct
	 */
	struct UPlayerEXPGaugeCommandMenu_C_Construct_Params
	{	};

	/**
	 * Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.Tick
	 */
	struct UPlayerEXPGaugeCommandMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.ExecuteUbergraph_PlayerEXPGaugeCommandMenu
	 */
	struct UPlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
