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
	 * Function TS_Order_Buff.TS_Order_Buff_C.ReceivePrepareForPlanning
	 */
	struct UTS_Order_Buff_C_ReceivePrepareForPlanning_Params
	{	};

	/**
	 * Function TS_Order_Buff.TS_Order_Buff_C.ExecuteUbergraph_TS_Order_Buff
	 */
	struct UTS_Order_Buff_C_ExecuteUbergraph_TS_Order_Buff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QEQ6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
