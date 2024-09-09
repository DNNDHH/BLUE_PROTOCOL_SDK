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
	 * Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetDailyData
	 */
	struct UUMG_SeasonPassQuestListHeader_C_SetDailyData_Params
	{
	public:
		ESBSeasonPassQuestType                                     Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HX9J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUMG_SeasonPassQuestList_C*                          InListMenu;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetWeeklyData
	 */
	struct UUMG_SeasonPassQuestListHeader_C_SetWeeklyData_Params
	{
	public:
		int32_t                                                    WeekCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5C05[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUMG_SeasonPassQuestList_C*                          InListMenu;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetAdditionalQuestData
	 */
	struct UUMG_SeasonPassQuestListHeader_C_SetAdditionalQuestData_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.SetNowWeekData
	 */
	struct UUMG_SeasonPassQuestListHeader_C_SetNowWeekData_Params
	{
	public:
		class UUMG_SeasonPassQuestList_C*                          InListMenu;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InWeekCount;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListActiveBtnOff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestListHeader_C_BndEvt__ListActiveBtnOff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListAciveBtnOn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestListHeader_C_BndEvt__ListAciveBtnOn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListActiveBtnOff_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestListHeader_C_BndEvt__ListActiveBtnOff_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListAciveBtnOn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestListHeader_C_BndEvt__ListAciveBtnOn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListActiveBtnOff_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestListHeader_C_BndEvt__ListActiveBtnOff_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.BndEvt__ListAciveBtnOn_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestListHeader_C_BndEvt__ListAciveBtnOn_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListHeader.UMG_SeasonPassQuestListHeader_C.ExecuteUbergraph_UMG_SeasonPassQuestListHeader
	 */
	struct UUMG_SeasonPassQuestListHeader_C_ExecuteUbergraph_UMG_SeasonPassQuestListHeader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
