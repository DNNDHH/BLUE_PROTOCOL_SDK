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
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.GetRewardSearchName
	 */
	struct UUMG_MatchingMenu_ListItem_C_GetRewardSearchName_Params
	{
	public:
		class FName                                                SearchName;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.MakeMapInfo
	 */
	struct UUMG_MatchingMenu_ListItem_C_MakeMapInfo_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.GetHelpMatchingRequiredInfo
	 */
	struct UUMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo_Params
	{
	public:
		int32_t                                                    BattleScore;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClassLevel;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.SetVisibilityNew
	 */
	struct UUMG_MatchingMenu_ListItem_C_SetVisibilityNew_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Get_ItemButton_ToolTipWidget_1
	 */
	struct UUMG_MatchingMenu_ListItem_C_Get_ItemButton_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.SetSelect
	 */
	struct UUMG_MatchingMenu_ListItem_C_SetSelect_Params
	{
	public:
		bool                                                       Select;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Update Style
	 */
	struct UUMG_MatchingMenu_ListItem_C_UpdateStyle_Params
	{
	public:
		bool                                                       IsFocus;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GUFX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Construct
	 */
	struct UUMG_MatchingMenu_ListItem_C_Construct_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_MatchingMenu_ListItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Destruct
	 */
	struct UUMG_MatchingMenu_ListItem_C_Destruct_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.OnUpdateRewardBoostInfo
	 */
	struct UUMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.UpdateBonusIcon
	 */
	struct UUMG_MatchingMenu_ListItem_C_UpdateBonusIcon_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.ExecuteUbergraph_UMG_MatchingMenu_ListItem
	 */
	struct UUMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.OnSelected__DelegateSignature
	 */
	struct UUMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature_Params
	{
	public:
		struct FSBMapInfo                                          DungeonMapInfo;                                          // 0x0000(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UUMG_MatchingMenu_ListItem_C*                        ListItem;                                                // 0x01F8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
