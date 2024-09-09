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
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.SetUIBlocker
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_SetUIBlocker_Params
	{
	public:
		bool                                                       IsBlock;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.UpdateQuestItemList
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_UpdateQuestItemList_Params
	{
	public:
		struct FSBSeasonPassQuestListManager                       InQuestListManager;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.UpdateCycleQuestData
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_UpdateCycleQuestData_Params
	{
	public:
		ESBSeasonPassQuestCycleType                                InCycleType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QWNN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.UpdateSubMenuExclation
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_UpdateSubMenuExclation_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.Update Quest Data
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_UpdateQuestData_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.DisplayRmShop
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_DisplayRmShop_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.SetData
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_SetData_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.InitParam
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_InitParam_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.Initialize Open Menu Type
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_InitializeOpenMenuType_Params
	{
	public:
		class FString                                              InputPin;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.SwitchSelect
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_SwitchSelect_Params
	{
	public:
		class FString                                              OpenBookMarkType;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ParamName;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.BookmarkUpdateRequest
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.Construct
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_Construct_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.StartInit
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_StartInit_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.TermRequesTiming
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_TermRequesTiming_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.UpdateCheckEvent
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_UpdateCheckEvent_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.SwitchOut
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_SwitchOut_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.SwitchIn
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_SwitchIn_Params
	{
	public:
		class FString                                              OpenBookMarkType;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ParamName;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.BindSubMenuExcramation
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_BindSubMenuExcramation_Params
	{	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.SubMenuExramation_Event
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_SubMenuExramation_Event_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C.ExecuteUbergraph_UMG_SeasonPassBonusQuestMenu
	 */
	struct UUMG_SeasonPassBonusQuestMenu_C_ExecuteUbergraph_UMG_SeasonPassBonusQuestMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AGBV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
