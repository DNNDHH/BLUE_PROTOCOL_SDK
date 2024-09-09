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
	 * Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.SetReceived
	 */
	struct UUMG_SeasonPassQuestRewards_C_SetReceived_Params
	{
	public:
		bool                                                       InReceived;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BZD4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.GetData
	 */
	struct UUMG_SeasonPassQuestRewards_C_GetData_Params
	{
	public:
		TArray<class UQuestRewardIcon_C*>                          Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
		class UWidgetSwitcher*                                     WidgetSwitcher_Btn;                                      // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.BndEvt__UMG_SeasonPassQuestRewards_SBButton_Receive_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestRewards_C_BndEvt__UMG_SeasonPassQuestRewards_SBButton_Receive_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.ExecuteUbergraph_UMG_SeasonPassQuestRewards
	 */
	struct UUMG_SeasonPassQuestRewards_C_ExecuteUbergraph_UMG_SeasonPassQuestRewards_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestRewards.UMG_SeasonPassQuestRewards_C.GetReward_Event__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestRewards_C_GetReward_Event__DelegateSignature_Params
	{
	public:
		class FString                                              QuestID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              GroupId;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
