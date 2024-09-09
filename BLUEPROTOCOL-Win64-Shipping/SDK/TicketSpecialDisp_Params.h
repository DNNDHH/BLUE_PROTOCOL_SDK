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
	 * Function TicketSpecialDisp.TicketSpecialDisp_C.SetTextColorMax
	 */
	struct UTicketSpecialDisp_C_SetTextColorMax_Params
	{
	public:
		bool                                                       bIsMax;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TicketSpecialDisp.TicketSpecialDisp_C.CheckChangeColor
	 */
	struct UTicketSpecialDisp_C_CheckChangeColor_Params
	{	};

	/**
	 * Function TicketSpecialDisp.TicketSpecialDisp_C.SetBaseInfo
	 */
	struct UTicketSpecialDisp_C_SetBaseInfo_Params
	{
	public:
		struct FOwnItemInfo                                        BaseOwnItemInfo;                                         // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TicketSpecialDisp.TicketSpecialDisp_C.SetChangeColor
	 */
	struct UTicketSpecialDisp_C_SetChangeColor_Params
	{
	public:
		bool                                                       bChangeColor;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TicketSpecialDisp.TicketSpecialDisp_C.SetInfo
	 */
	struct UTicketSpecialDisp_C_SetInfo_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
