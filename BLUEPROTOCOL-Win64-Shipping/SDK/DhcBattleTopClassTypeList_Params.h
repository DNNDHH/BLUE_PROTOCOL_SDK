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
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.GetListItemByClassType
	 */
	struct UDhcBattleTopClassTypeList_C_GetListItemByClassType_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HVNE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDhcBattleTopClassTypeListItem_C*                    OutListItem;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.GetCurrSelectedListItem
	 */
	struct UDhcBattleTopClassTypeList_C_GetCurrSelectedListItem_Params
	{
	public:
		class UDhcBattleTopClassTypeListItem_C*                    OutListItem;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetSelectedListItemTop
	 */
	struct UDhcBattleTopClassTypeList_C_SetSelectedListItemTop_Params
	{	};

	/**
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.UpdateListSelectedItem
	 */
	struct UDhcBattleTopClassTypeList_C_UpdateListSelectedItem_Params
	{
	public:
		class UDhcBattleTopClassTypeListItem_C*                    InListItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetupList
	 */
	struct UDhcBattleTopClassTypeList_C_SetupList_Params
	{
	public:
		TArray<struct FSBDhcBattleHighScoreInfo>                   InScoreInfos;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.SetPlayerCurrClassType
	 */
	struct UDhcBattleTopClassTypeList_C_SetPlayerCurrClassType_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.CreateList
	 */
	struct UDhcBattleTopClassTypeList_C_CreateList_Params
	{	};

	/**
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.PreConstruct
	 */
	struct UDhcBattleTopClassTypeList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.OnListItemClicked
	 */
	struct UDhcBattleTopClassTypeList_C_OnListItemClicked_Params
	{
	public:
		class UDhcBattleTopClassTypeListItem_C*                    InSelf;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.Destruct
	 */
	struct UDhcBattleTopClassTypeList_C_Destruct_Params
	{	};

	/**
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.ExecuteUbergraph_DhcBattleTopClassTypeList
	 */
	struct UDhcBattleTopClassTypeList_C_ExecuteUbergraph_DhcBattleTopClassTypeList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C.OnClassTypeListItemSelected__DelegateSignature
	 */
	struct UDhcBattleTopClassTypeList_C_OnClassTypeListItemSelected__DelegateSignature_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D534[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBDhcBattleHighScoreInfo                           InScoreInfo;                                             // 0x0008(0x00F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InIsScoreInfoEmpty;                                      // 0x0100(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
