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
	 * Function BattleCordeList.BattleCordeList_C.CalculatorBattleScore
	 */
	struct UBattleCordeList_C_CalculatorBattleScore_Params
	{
	public:
		struct FSBPlayerPresetEquipList                            InCordeData;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    OutBattleScore;                                          // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UPR5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.RequestLoadCordeData
	 */
	struct UBattleCordeList_C_RequestLoadCordeData_Params
	{
	public:
		bool                                                       OutRequestSuccessed;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PBTR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.GetCordeListItemOneDownByCordeId
	 */
	struct UBattleCordeList_C_GetCordeListItemOneDownByCordeId_Params
	{
	public:
		int32_t                                                    InCordeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UH9N[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBattleCordeListItem_C*                              OutCordeListItem;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.GetCordeListItemOneUpByCordeId
	 */
	struct UBattleCordeList_C_GetCordeListItemOneUpByCordeId_Params
	{
	public:
		int32_t                                                    InCordeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ECPL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBattleCordeListItem_C*                              OutCordeListItem;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.SetCordeListItemEditBtnsEnable
	 */
	struct UBattleCordeList_C_SetCordeListItemEditBtnsEnable_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceBtnsEnable
	 */
	struct UBattleCordeList_C_SetCordeListItemReplaceBtnsEnable_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceDownBtnEnable
	 */
	struct UBattleCordeList_C_SetCordeListItemReplaceDownBtnEnable_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.SetCordeListItemReplaceUpBtnEnable
	 */
	struct UBattleCordeList_C_SetCordeListItemReplaceUpBtnEnable_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.ResetSelectedCordeToDefault
	 */
	struct UBattleCordeList_C_ResetSelectedCordeToDefault_Params
	{	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.GetCordeListItemByCordeId
	 */
	struct UBattleCordeList_C_GetCordeListItemByCordeId_Params
	{
	public:
		int32_t                                                    InCordeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FHXS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBattleCordeListItem_C*                              OutCordeListItem;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.GetDefaultEquippedCordeId
	 */
	struct UBattleCordeList_C_GetDefaultEquippedCordeId_Params
	{
	public:
		int32_t                                                    OutCordeId;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.UpdateCordeListSelectedItem
	 */
	struct UBattleCordeList_C_UpdateCordeListSelectedItem_Params
	{
	public:
		class UBattleCordeListItem_C*                              InSelectedCordeListItem;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.GetCurrEquippedCordeData
	 */
	struct UBattleCordeList_C_GetCurrEquippedCordeData_Params
	{
	public:
		struct FSBPlayerPresetEquipList                            OutCordeData;                                            // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.GetCurrEquippedBattleCordeName
	 */
	struct UBattleCordeList_C_GetCurrEquippedBattleCordeName_Params
	{
	public:
		class FString                                              OutCordeName;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.SetupCurrEquippedBattleSetInfo
	 */
	struct UBattleCordeList_C_SetupCurrEquippedBattleSetInfo_Params
	{	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.AddCordeListItem
	 */
	struct UBattleCordeList_C_AddCordeListItem_Params
	{
	public:
		struct FSBPlayerPresetEquipList                            InCordeData;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.CreateCordeList
	 */
	struct UBattleCordeList_C_CreateCordeList_Params
	{	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.Init
	 */
	struct UBattleCordeList_C_Init_Params
	{	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.Construct
	 */
	struct UBattleCordeList_C_Construct_Params
	{	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.OnLoadPresetEquipmentList
	 */
	struct UBattleCordeList_C_OnLoadPresetEquipmentList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.Destruct
	 */
	struct UBattleCordeList_C_Destruct_Params
	{	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.OnCordeListItemClickedEvent
	 */
	struct UBattleCordeList_C_OnCordeListItemClickedEvent_Params
	{
	public:
		class UBattleCordeListItem_C*                              InSelf;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UBattleCordeList_C_BndEvt__BattleCordeList_CurrEquippedCordeInfoItem_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{
	public:
		class UBattleCordeListItem_C*                              InSelf;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_ReplaceUpBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBattleCordeList_C_BndEvt__BattleCordeList_ReplaceUpBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_ReplaceDownBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBattleCordeList_C_BndEvt__BattleCordeList_ReplaceDownBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_DeleteBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBattleCordeList_C_BndEvt__BattleCordeList_DeleteBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.BndEvt__BattleCordeList_RenameBtn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBattleCordeList_C_BndEvt__BattleCordeList_RenameBtn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.ExecuteUbergraph_BattleCordeList
	 */
	struct UBattleCordeList_C_ExecuteUbergraph_BattleCordeList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.OnCordeDataLoaded__DelegateSignature
	 */
	struct UBattleCordeList_C_OnCordeDataLoaded__DelegateSignature_Params
	{
	public:
		bool                                                       InIsDataLoadSuccessed;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.OnCordeRenameBtnPressed__DelegateSignature
	 */
	struct UBattleCordeList_C_OnCordeRenameBtnPressed__DelegateSignature_Params
	{
	public:
		class UBattleCordeListItem_C*                              InSelectedCordeListItem;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.OnCordeDeleteBtnPressed__DelegateSignature
	 */
	struct UBattleCordeList_C_OnCordeDeleteBtnPressed__DelegateSignature_Params
	{
	public:
		class UBattleCordeListItem_C*                              InSelectedCordeListItem;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.OnCordeReplaceBtnPressed__DelegateSignature
	 */
	struct UBattleCordeList_C_OnCordeReplaceBtnPressed__DelegateSignature_Params
	{
	public:
		class UBattleCordeListItem_C*                              InSrcCordeListItem;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBattleCordeListItem_C*                              InDstCordListItem;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeList.BattleCordeList_C.OnCordeListItemPresssed__DelegateSignature
	 */
	struct UBattleCordeList_C_OnCordeListItemPresssed__DelegateSignature_Params
	{
	public:
		class UBattleCordeListItem_C*                              InListItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
