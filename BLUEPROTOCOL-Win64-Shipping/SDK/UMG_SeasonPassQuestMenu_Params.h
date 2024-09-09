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
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetHelpText
	 */
	struct UUMG_SeasonPassQuestMenu_C_SetHelpText_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.InitTab
	 */
	struct UUMG_SeasonPassQuestMenu_C_InitTab_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetUIBlocker
	 */
	struct UUMG_SeasonPassQuestMenu_C_SetUIBlocker_Params
	{
	public:
		bool                                                       IsBlock;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateQuestItemList
	 */
	struct UUMG_SeasonPassQuestMenu_C_UpdateQuestItemList_Params
	{
	public:
		struct FSBSeasonPassQuestListManager                       InQuestListManager;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateCycleQuestData
	 */
	struct UUMG_SeasonPassQuestMenu_C_UpdateCycleQuestData_Params
	{
	public:
		ESBSeasonPassQuestCycleType                                InCycleType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CXMM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ConvertFilterType
	 */
	struct UUMG_SeasonPassQuestMenu_C_ConvertFilterType_Params
	{
	public:
		class FString                                              InComboBoxSelect;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBSeasonPassQuestFilterType                               OutFilterType;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateWeekRewardDesc
	 */
	struct UUMG_SeasonPassQuestMenu_C_UpdateWeekRewardDesc_Params
	{
	public:
		int32_t                                                    InTabSelect;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateSubMenuExclation
	 */
	struct UUMG_SeasonPassQuestMenu_C_UpdateSubMenuExclation_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateSubMenuExclationType
	 */
	struct UUMG_SeasonPassQuestMenu_C_UpdateSubMenuExclationType_Params
	{
	public:
		ESBSeasonPassQuestCycleType                                InCycle;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetForeceClearCount
	 */
	struct UUMG_SeasonPassQuestMenu_C_SetForeceClearCount_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ReloadUpdate
	 */
	struct UUMG_SeasonPassQuestMenu_C_ReloadUpdate_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ForceClearUpdate
	 */
	struct UUMG_SeasonPassQuestMenu_C_ForceClearUpdate_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Set Ticket
	 */
	struct UUMG_SeasonPassQuestMenu_C_SetTicket_Params
	{
	public:
		int32_t                                                    Tab;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Set Season Filter List
	 */
	struct UUMG_SeasonPassQuestMenu_C_SetSeasonFilterList_Params
	{
	public:
		int32_t                                                    Tab;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.On_filter_combobox_GenerateWidget_2
	 */
	struct UUMG_SeasonPassQuestMenu_C_On_filter_combobox_GenerateWidget_2_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.On_filter_combobox_GenerateWidget_1
	 */
	struct UUMG_SeasonPassQuestMenu_C_On_filter_combobox_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Update Quest Data
	 */
	struct UUMG_SeasonPassQuestMenu_C_UpdateQuestData_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.DisplayRmShop
	 */
	struct UUMG_SeasonPassQuestMenu_C_DisplayRmShop_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetData
	 */
	struct UUMG_SeasonPassQuestMenu_C_SetData_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.InitFilterString
	 */
	struct UUMG_SeasonPassQuestMenu_C_InitFilterString_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetFilterType
	 */
	struct UUMG_SeasonPassQuestMenu_C_SetFilterType_Params
	{
	public:
		class FString                                              InSelectString;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.InitParam
	 */
	struct UUMG_SeasonPassQuestMenu_C_InitParam_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Initialize Open Menu Type
	 */
	struct UUMG_SeasonPassQuestMenu_C_InitializeOpenMenuType_Params
	{
	public:
		class FString                                              InputPin;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bInit;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JWO1[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SwitchOut
	 */
	struct UUMG_SeasonPassQuestMenu_C_SwitchOut_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.TermRequesTiming
	 */
	struct UUMG_SeasonPassQuestMenu_C_TermRequesTiming_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SwitchSelect
	 */
	struct UUMG_SeasonPassQuestMenu_C_SwitchSelect_Params
	{
	public:
		class FString                                              OpenBookMarkType;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ParamName;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.Construct
	 */
	struct UUMG_SeasonPassQuestMenu_C_Construct_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestMenu_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateGeneralData
	 */
	struct UUMG_SeasonPassQuestMenu_C_UpdateGeneralData_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SetTab
	 */
	struct UUMG_SeasonPassQuestMenu_C_SetTab_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BookmarkUpdateRequest
	 */
	struct UUMG_SeasonPassQuestMenu_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateBookmarkStatusButton
	 */
	struct UUMG_SeasonPassQuestMenu_C_UpdateBookmarkStatusButton_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.UpdateCheckEvent
	 */
	struct UUMG_SeasonPassQuestMenu_C_UpdateCheckEvent_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SwitchIn
	 */
	struct UUMG_SeasonPassQuestMenu_C_SwitchIn_Params
	{
	public:
		class FString                                              OpenBookMarkType;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ParamName;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BindSubMenuExcramation
	 */
	struct UUMG_SeasonPassQuestMenu_C_BindSubMenuExcramation_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.SubMenuExramation_Event
	 */
	struct UUMG_SeasonPassQuestMenu_C_SubMenuExramation_Event_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.BndEvt__UMG_SeasonPassQuestMenu_Seasonfilter_combobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestMenu_C_BndEvt__UMG_SeasonPassQuestMenu_Seasonfilter_combobox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.ExecuteUbergraph_UMG_SeasonPassQuestMenu
	 */
	struct UUMG_SeasonPassQuestMenu_C_ExecuteUbergraph_UMG_SeasonPassQuestMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R8ER[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestMenu.UMG_SeasonPassQuestMenu_C.OnChangeBookmarkType__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestMenu_C_OnChangeBookmarkType__DelegateSignature_Params
	{
	public:
		class FString                                              BookmarkType;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
