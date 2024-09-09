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
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.GetClassType
	 */
	struct UDhcBattleTopClassTypeListItem_C_GetClassType_Params
	{
	public:
		ESBClassType                                               OutClassType;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.IsScoreInfoEmpty
	 */
	struct UDhcBattleTopClassTypeListItem_C_IsScoreInfoEmpty_Params
	{
	public:
		bool                                                       OutIsScoreInfoEmpty;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.GetScoreInfo
	 */
	struct UDhcBattleTopClassTypeListItem_C_GetScoreInfo_Params
	{
	public:
		struct FSBDhcBattleHighScoreInfo                           OutScoreInfo;                                            // 0x0000(0x00F8)  (Parm, OutParm)
	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetTextAndClassTypeIconColor
	 */
	struct UDhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor_Params
	{
	public:
		bool                                                       InIsHovered;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NY7T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetSelected
	 */
	struct UDhcBattleTopClassTypeListItem_C_SetSelected_Params
	{
	public:
		bool                                                       InIsSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZYY4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetIsCurrPlayerClassType
	 */
	struct UDhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType_Params
	{
	public:
		bool                                                       InIsCurrPlayerClassType;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EKFW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetupAsEmpty
	 */
	struct UDhcBattleTopClassTypeListItem_C_SetupAsEmpty_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V84J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.Setup
	 */
	struct UDhcBattleTopClassTypeListItem_C_Setup_Params
	{
	public:
		struct FSBDhcBattleHighScoreInfo                           InScoreInfo;                                             // 0x0000(0x00F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDhcBattleTopClassTypeListItem_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UDhcBattleTopClassTypeListItem_C_BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UDhcBattleTopClassTypeListItem_C_BndEvt__BattleCordeListItem_Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.ExecuteUbergraph_DhcBattleTopClassTypeListItem
	 */
	struct UDhcBattleTopClassTypeListItem_C_ExecuteUbergraph_DhcBattleTopClassTypeListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.OnClicked__DelegateSignature
	 */
	struct UDhcBattleTopClassTypeListItem_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UDhcBattleTopClassTypeListItem_C*                    InSelf;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
