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
	 * Function TickerMessage.TickerMessage_C.DumpDebugInfo_Internal
	 */
	struct UTickerMessage_C_DumpDebugInfo_Internal_Params
	{
	public:
		class FString                                              InTrigger;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function TickerMessage.TickerMessage_C.OnCheckTime
	 */
	struct UTickerMessage_C_OnCheckTime_Params
	{	};

	/**
	 * Function TickerMessage.TickerMessage_C.CheckNextMessage
	 */
	struct UTickerMessage_C_CheckNextMessage_Params
	{	};

	/**
	 * Function TickerMessage.TickerMessage_C.OnMessageChange
	 */
	struct UTickerMessage_C_OnMessageChange_Params
	{	};

	/**
	 * Function TickerMessage.TickerMessage_C.Tick
	 */
	struct UTickerMessage_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TickerMessage.TickerMessage_C.Proc_Idle
	 */
	struct UTickerMessage_C_Proc_Idle_Params
	{	};

	/**
	 * Function TickerMessage.TickerMessage_C.Proc_Scroll
	 */
	struct UTickerMessage_C_Proc_Scroll_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TickerMessage.TickerMessage_C.Proc_Interval
	 */
	struct UTickerMessage_C_Proc_Interval_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TickerMessage.TickerMessage_C.Construct
	 */
	struct UTickerMessage_C_Construct_Params
	{	};

	/**
	 * Function TickerMessage.TickerMessage_C.OnTickerMessageChanged
	 */
	struct UTickerMessage_C_OnTickerMessageChanged_Params
	{	};

	/**
	 * Function TickerMessage.TickerMessage_C.OnUIVisibleSettingChange
	 */
	struct UTickerMessage_C_OnUIVisibleSettingChange_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TickerMessage.TickerMessage_C.Destruct
	 */
	struct UTickerMessage_C_Destruct_Params
	{	};

	/**
	 * Function TickerMessage.TickerMessage_C.DumpDebugInfo
	 */
	struct UTickerMessage_C_DumpDebugInfo_Params
	{	};

	/**
	 * Function TickerMessage.TickerMessage_C.ExecuteUbergraph_TickerMessage
	 */
	struct UTickerMessage_C_ExecuteUbergraph_TickerMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
