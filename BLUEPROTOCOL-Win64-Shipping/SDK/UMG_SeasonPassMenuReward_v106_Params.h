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
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ChangePickupRewardIfNeeded
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_ChangePickupRewardIfNeeded_Params
	{
	public:
		float                                                      ScrollOffset;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.CreateRewardRankItem
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_CreateRewardRankItem_Params
	{
	public:
		class USBSeasonPassMenuRewardData*                         Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Rank;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ClearRewardRankItem
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_ClearRewardRankItem_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.SetData
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_SetData_Params
	{
	public:
		class USBSeasonPassMenuRewardData*                         Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnClickRankRewardItemIcon
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_OnClickRankRewardItemIcon_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     RewardItemData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_BndEvt__PickupReward_K2Node_ComponentBoundEvent_0_OnClickItemIcon__DelegateSignature_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     RewardItemData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_BndEvt__ScrollBox_57_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.Construct
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_Construct_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ScrollToRank
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_ScrollToRank_Params
	{
	public:
		int32_t                                                    Rank;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AnimateScroll;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnUpdateData
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_OnUpdateData_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.UpdateDesign
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_UpdateDesign_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.UpdateDesignAndData
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_UpdateDesignAndData_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.PreConstruct
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnUpdateSeasonPassRank
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_OnUpdateSeasonPassRank_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.Destruct
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_Destruct_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.ExecuteUbergraph_UMG_SeasonPassMenuReward_v106
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_ExecuteUbergraph_UMG_SeasonPassMenuReward_v106_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9DP4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnClickUpgrade__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_OnClickUpgrade__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuReward_v106.UMG_SeasonPassMenuReward_v106_C.OnClickRewardItemIcon__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuReward_v106_C_OnClickRewardItemIcon__DelegateSignature_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     RewardItemData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
