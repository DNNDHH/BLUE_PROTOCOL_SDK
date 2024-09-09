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
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.UISupportRefresh
	 */
	struct USkillListForBattleSet_C_UISupportRefresh_Params
	{	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.GetClassAbilityDatas
	 */
	struct USkillListForBattleSet_C_GetClassAbilityDatas_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBPlayerArtsType                                          InArtsType;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QF8O[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBPlayerPassiveSkillData>                   OutDataArray;                                            // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.GetTacticalSkillDatas
	 */
	struct USkillListForBattleSet_C_GetTacticalSkillDatas_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z4EX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBPlayerSkillData>                          OutDataArray;                                            // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.SetTacticalSkillSlotType
	 */
	struct USkillListForBattleSet_C_SetTacticalSkillSlotType_Params
	{
	public:
		ESBPlayerActiveArtsSlotType                                InSlotType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.SetSkillListItemSelectedBySkillId
	 */
	struct USkillListForBattleSet_C_SetSkillListItemSelectedBySkillId_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T28L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.SwitchEquipmentIconListBody
	 */
	struct USkillListForBattleSet_C_SwitchEquipmentIconListBody_Params
	{
	public:
		bool                                                       InIsEquipmentIconListBodyEmpty;                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9K8Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.SetInfoType
	 */
	struct USkillListForBattleSet_C_SetInfoType_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.SetListVisibility
	 */
	struct USkillListForBattleSet_C_SetListVisibility_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.SetIsEquipChangeBtnEnabled
	 */
	struct USkillListForBattleSet_C_SetIsEquipChangeBtnEnabled_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.ResetSelectedInfoItemAll
	 */
	struct USkillListForBattleSet_C_ResetSelectedInfoItemAll_Params
	{	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.HideInfoItemAll
	 */
	struct USkillListForBattleSet_C_HideInfoItemAll_Params
	{	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.PlayListInAnimReverse
	 */
	struct USkillListForBattleSet_C_PlayListInAnimReverse_Params
	{	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.PlayListInAnimForward
	 */
	struct USkillListForBattleSet_C_PlayListInAnimForward_Params
	{	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.UpdateList
	 */
	struct USkillListForBattleSet_C_UpdateList_Params
	{	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.InitList
	 */
	struct USkillListForBattleSet_C_InitList_Params
	{
	public:
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               InSkillClassType;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G476[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillSlotId;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InClassAbilityTypeId;                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.Destruct
	 */
	struct USkillListForBattleSet_C_Destruct_Params
	{	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct USkillListForBattleSet_C_BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.BndEvt__SkillListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct USkillListForBattleSet_C_BndEvt__SkillListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.OnSkillInfoItemPressed
	 */
	struct USkillListForBattleSet_C_OnSkillInfoItemPressed_Params
	{
	public:
		class USkillInfoItemForBattleSet_C*                        InInfoItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.Construct
	 */
	struct USkillListForBattleSet_C_Construct_Params
	{	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.ExecuteUbergraph_SkillListForBattleSet
	 */
	struct USkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.OnCancelBtnPressed__DelegateSignature
	 */
	struct USkillListForBattleSet_C_OnCancelBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.OnSkillChangeBtnPressed__DelegateSignature
	 */
	struct USkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VI8P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillListForBattleSet.SkillListForBattleSet_C.OnInfoItemSelected__DelegateSignature
	 */
	struct USkillListForBattleSet_C_OnInfoItemSelected__DelegateSignature_Params
	{
	public:
		class USkillInfoItemForBattleSet_C*                        InSelectedInfoItem;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
