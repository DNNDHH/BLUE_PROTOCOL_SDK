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
	 * Function UMG_SeasonPassMenuRewardRankWrap_v106.UMG_SeasonPassMenuRewardRankWrap_v106_C.SetData
	 */
	struct UUMG_SeasonPassMenuRewardRankWrap_v106_C_SetData_Params
	{
	public:
		class USBSeasonPassMenuRewardRankData*                     Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuRewardRankWrap_v106.UMG_SeasonPassMenuRewardRankWrap_v106_C.CustomEvent_1
	 */
	struct UUMG_SeasonPassMenuRewardRankWrap_v106_C_CustomEvent_1_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     RewardItemData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuRewardRankWrap_v106.UMG_SeasonPassMenuRewardRankWrap_v106_C.OnUpdateData
	 */
	struct UUMG_SeasonPassMenuRewardRankWrap_v106_C_OnUpdateData_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuRewardRankWrap_v106.UMG_SeasonPassMenuRewardRankWrap_v106_C.Destruct
	 */
	struct UUMG_SeasonPassMenuRewardRankWrap_v106_C_Destruct_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuRewardRankWrap_v106.UMG_SeasonPassMenuRewardRankWrap_v106_C.ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap_v106
	 */
	struct UUMG_SeasonPassMenuRewardRankWrap_v106_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap_v106_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuRewardRankWrap_v106.UMG_SeasonPassMenuRewardRankWrap_v106_C.OnClickItemIcon__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuRewardRankWrap_v106_C_OnClickItemIcon__DelegateSignature_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     RewardItemData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
