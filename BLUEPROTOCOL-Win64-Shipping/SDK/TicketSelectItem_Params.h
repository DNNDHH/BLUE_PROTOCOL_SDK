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
	 * Function TicketSelectItem.TicketSelectItem_C.isValidTokenID
	 */
	struct UTicketSelectItem_C_isValidTokenID_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TicketSelectItem.TicketSelectItem_C.UpdateTokenNum
	 */
	struct UTicketSelectItem_C_UpdateTokenNum_Params
	{	};

	/**
	 * Function TicketSelectItem.TicketSelectItem_C.SetTextId
	 */
	struct UTicketSelectItem_C_SetTextId_Params
	{
	public:
		int32_t                                                    TicketId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HTXG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
