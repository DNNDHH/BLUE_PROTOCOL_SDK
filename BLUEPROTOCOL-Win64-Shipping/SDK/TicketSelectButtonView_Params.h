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
	 * Function TicketSelectButtonView.TicketSelectButtonView_C.UpdateTarget
	 */
	struct UTicketSelectButtonView_C_UpdateTarget_Params
	{
	public:
		struct FOwnItemInfo                                        Target;                                                  // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TicketSelectButtonView.TicketSelectButtonView_C.CheckRewardRate
	 */
	struct UTicketSelectButtonView_C_CheckRewardRate_Params
	{
	public:
		struct FOwnItemInfo                                        InputPin;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSBStackBMasterData                                 SBStackBMasterData;                                      // 0x0150(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0180(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TicketSelectButtonView.TicketSelectButtonView_C.UpdateTextData
	 */
	struct UTicketSelectButtonView_C_UpdateTextData_Params
	{	};

	/**
	 * Function TicketSelectButtonView.TicketSelectButtonView_C.SetData
	 */
	struct UTicketSelectButtonView_C_SetData_Params
	{
	public:
		int32_t                                                    TicketId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TicketSelectButtonView.TicketSelectButtonView_C.BndEvt__TicketSelectButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UTicketSelectButtonView_C_BndEvt__TicketSelectButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TicketSelectButtonView.TicketSelectButtonView_C.ExecuteUbergraph_TicketSelectButtonView
	 */
	struct UTicketSelectButtonView_C_ExecuteUbergraph_TicketSelectButtonView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TicketSelectButtonView.TicketSelectButtonView_C.Reselect__DelegateSignature
	 */
	struct UTicketSelectButtonView_C_Reselect__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
