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
	 * Function History_Currency.History_Currency_C.SetAmount
	 */
	struct UHistory_Currency_C_SetAmount_Params
	{
	public:
		int32_t                                                    Paid;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Free;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function History_Currency.History_Currency_C.SwitchShopType
	 */
	struct UHistory_Currency_C_SwitchShopType_Params
	{
	public:
		ESBHistoryType                                             HistoryType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function History_Currency.History_Currency_C.Construct
	 */
	struct UHistory_Currency_C_Construct_Params
	{	};

	/**
	 * Function History_Currency.History_Currency_C.ExecuteUbergraph_History_Currency
	 */
	struct UHistory_Currency_C_ExecuteUbergraph_History_Currency_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
