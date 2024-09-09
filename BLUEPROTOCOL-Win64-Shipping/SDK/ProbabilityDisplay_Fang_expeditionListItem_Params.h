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
	 * Function ProbabilityDisplay_Fang_expeditionListItem.ProbabilityDisplay_Fang_expeditionListItem_C.SetData
	 */
	struct UProbabilityDisplay_Fang_expeditionListItem_C_SetData_Params
	{
	public:
		int32_t                                                    FangCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBFang_expeditionRandomRewardData                  Data;                                                    // 0x0004(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
