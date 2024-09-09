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
	 * Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetClassName
	 */
	struct UWBP_ScbClassItem_C_SetClassName_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TDVW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetClassType
	 */
	struct UWBP_ScbClassItem_C_SetClassType_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ScbClassItem.WBP_ScbClassItem_C.ShowRankStar
	 */
	struct UWBP_ScbClassItem_C_ShowRankStar_Params
	{
	public:
		int32_t                                                    MaxRank;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Rank;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ScbClassItem.WBP_ScbClassItem_C.Construct
	 */
	struct UWBP_ScbClassItem_C_Construct_Params
	{	};

	/**
	 * Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetRankData
	 */
	struct UWBP_ScbClassItem_C_SetRankData_Params
	{
	public:
		struct FSBScbClassData                                     Data;                                                    // 0x0000(0x0024)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetConditionData
	 */
	struct UWBP_ScbClassItem_C_SetConditionData_Params
	{
	public:
		struct FSBScbClassConditionsData                           Data;                                                    // 0x0000(0x0024)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ScbClassItem.WBP_ScbClassItem_C.ExecuteUbergraph_WBP_ScbClassItem
	 */
	struct UWBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
