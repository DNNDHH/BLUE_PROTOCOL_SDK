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
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimForDhcBattleTopMenu
	 */
	struct UMyCharaMenu_DetailedStatus_C_PlayInAnimForDhcBattleTopMenu_Params
	{
	public:
		TArray<struct FSBDhcBattleAttributeResistanceInfo>         InDhcBattleScoreAttrResistInfos;                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimPresetEquip
	 */
	struct UMyCharaMenu_DetailedStatus_C_PlayInAnimPresetEquip_Params
	{
	public:
		TArray<struct FSBPlayerPresetEquipItem>                    InPresetEquipItemList;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnimBase
	 */
	struct UMyCharaMenu_DetailedStatus_C_PlayInAnimBase_Params
	{
	public:
		bool                                                       InDoStatusUpdate;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatusParam
	 */
	struct UMyCharaMenu_DetailedStatus_C_SetupStatusParam_Params
	{
	public:
		TArray<int32_t>                                            inValueList;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatusPresetEquip
	 */
	struct UMyCharaMenu_DetailedStatus_C_SetupStatusPresetEquip_Params
	{
	public:
		TArray<struct FSBPlayerPresetEquipItem>                    InPresetEquipItemList;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.GetAttributeDurabilityListItemObj
	 */
	struct UMyCharaMenu_DetailedStatus_C_GetAttributeDurabilityListItemObj_Params
	{
	public:
		ESBAttribute                                               InAttribute;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BF33[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMyCharaMenu_AttributeDurabilityListItem_C*          OutObj;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.CreateAttributeDurabilityList
	 */
	struct UMyCharaMenu_DetailedStatus_C_CreateAttributeDurabilityList_Params
	{	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.ImmediateClose
	 */
	struct UMyCharaMenu_DetailedStatus_C_ImmediateClose_Params
	{	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.SetupStatus
	 */
	struct UMyCharaMenu_DetailedStatus_C_SetupStatus_Params
	{	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayOutAnim
	 */
	struct UMyCharaMenu_DetailedStatus_C_PlayOutAnim_Params
	{	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PlayInAnim
	 */
	struct UMyCharaMenu_DetailedStatus_C_PlayInAnim_Params
	{	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.PreConstruct
	 */
	struct UMyCharaMenu_DetailedStatus_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.Construct
	 */
	struct UMyCharaMenu_DetailedStatus_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UMyCharaMenu_DetailedStatus_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.BndEvt__MyCharaMenu_DetailedStatus_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 */
	struct UMyCharaMenu_DetailedStatus_C_BndEvt__MyCharaMenu_DetailedStatus_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.ExecuteUbergraph_MyCharaMenu_DetailedStatus
	 */
	struct UMyCharaMenu_DetailedStatus_C_ExecuteUbergraph_MyCharaMenu_DetailedStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C.CloseEvent__DelegateSignature
	 */
	struct UMyCharaMenu_DetailedStatus_C_CloseEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
