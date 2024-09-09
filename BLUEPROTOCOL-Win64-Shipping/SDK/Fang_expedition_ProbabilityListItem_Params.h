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
	 * Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.SetData
	 */
	struct UFang_expedition_ProbabilityListItem_C_SetData_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBFang_expeditionRandomRewardData                  RandomReward;                                            // 0x0004(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.BndEvt__Fang_expedition_ProbabilityListItem_Btn_Item_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFang_expedition_ProbabilityListItem_C_BndEvt__Fang_expedition_ProbabilityListItem_Btn_Item_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.ExecuteUbergraph_Fang_expedition_ProbabilityListItem
	 */
	struct UFang_expedition_ProbabilityListItem_C_ExecuteUbergraph_Fang_expedition_ProbabilityListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C.OnClicked__DelegateSignature
	 */
	struct UFang_expedition_ProbabilityListItem_C_OnClicked__DelegateSignature_Params
	{
	public:
		struct FSBMasterReward                                     RewardData;                                              // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
