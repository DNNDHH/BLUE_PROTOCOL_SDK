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
	 * Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.UpdateTicketNum
	 */
	struct UFang_expedition_TicketItem_C_UpdateTicketNum_Params
	{	};

	/**
	 * Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetCheckState
	 */
	struct UFang_expedition_TicketItem_C_SetCheckState_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Initialize
	 */
	struct UFang_expedition_TicketItem_C_Initialize_Params
	{	};

	/**
	 * Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.GetSelectState
	 */
	struct UFang_expedition_TicketItem_C_GetSelectState_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BLW9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TokenID;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetDisableTextVisibility
	 */
	struct UFang_expedition_TicketItem_C_SetDisableTextVisibility_Params
	{
	public:
		bool                                                       Disable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetData
	 */
	struct UFang_expedition_TicketItem_C_SetData_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Select;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Disable;                                                 // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Construct
	 */
	struct UFang_expedition_TicketItem_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UFang_expedition_TicketItem_C_BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Destruct
	 */
	struct UFang_expedition_TicketItem_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.ExecuteUbergraph_Fang_expedition_TicketItem
	 */
	struct UFang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.OnCheckStateChange__DelegateSignature
	 */
	struct UFang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature_Params
	{
	public:
		bool                                                       CheckState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_19NH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
