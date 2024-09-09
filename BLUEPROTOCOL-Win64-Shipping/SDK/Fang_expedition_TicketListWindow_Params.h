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
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CheckTicketNum
	 */
	struct UFang_expedition_TicketListWindow_C_CheckTicketNum_Params
	{
	public:
		int32_t                                                    InId;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsEnable;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q1W0[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.SetTokenSelect
	 */
	struct UFang_expedition_TicketListWindow_C_SetTokenSelect_Params
	{
	public:
		TArray<int32_t>                                            SelectTokenId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0010(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CloseWork
	 */
	struct UFang_expedition_TicketListWindow_C_CloseWork_Params
	{	};

	/**
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CB_EnableButtonWork
	 */
	struct UFang_expedition_TicketListWindow_C_CB_EnableButtonWork_Params
	{	};

	/**
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Initialize
	 */
	struct UFang_expedition_TicketListWindow_C_Initialize_Params
	{	};

	/**
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CB_OnCheckStateChange
	 */
	struct UFang_expedition_TicketListWindow_C_CB_OnCheckStateChange_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XC1S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Construct
	 */
	struct UFang_expedition_TicketListWindow_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Destruct
	 */
	struct UFang_expedition_TicketListWindow_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.BndEvt__Fang_expedition_TicketListWindow_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_TicketListWindow_C_BndEvt__Fang_expedition_TicketListWindow_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.BndEvt__Fang_expedition_TicketListWindow_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 */
	struct UFang_expedition_TicketListWindow_C_BndEvt__Fang_expedition_TicketListWindow_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.ExecuteUbergraph_Fang_expedition_TicketListWindow
	 */
	struct UFang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.OnClose__DelegateSignature
	 */
	struct UFang_expedition_TicketListWindow_C_OnClose__DelegateSignature_Params
	{
	public:
		TArray<int32_t>                                            SelectTokenIds;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
