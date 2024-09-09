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
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.IsHideWindowAnimePlaying
	 */
	struct USkillStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying_Params
	{
	public:
		bool                                                       OutIsPlaying;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.IsCharaDetailedStatusOpen
	 */
	struct USkillStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen_Params
	{
	public:
		bool                                                       OutIsOpen;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.GetBattleSetInfoType
	 */
	struct USkillStatusDescAndListForBattleSet_C_GetBattleSetInfoType_Params
	{
	public:
		E_BattleSetInfoType                                        OutBattleSetInfoType;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateLeftSideParameterStatus
	 */
	struct USkillStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus_Params
	{
	public:
		bool                                                       InIncludesClassInfoUpdate;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D5DN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.SwitchStatusType
	 */
	struct USkillStatusDescAndListForBattleSet_C_SwitchStatusType_Params
	{
	public:
		int32_t                                                    InStatusTypeId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LXOR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateSelectedSkillDesc
	 */
	struct USkillStatusDescAndListForBattleSet_C_UpdateSelectedSkillDesc_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InForceUpdate;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KP4X[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InEquipmentUniqueId;                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UpdateEquippedSkillDesc
	 */
	struct USkillStatusDescAndListForBattleSet_C_UpdateEquippedSkillDesc_Params
	{
	public:
		int32_t                                                    InEquippedSkillId;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InForceUpdate;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.HideWindow
	 */
	struct USkillStatusDescAndListForBattleSet_C_HideWindow_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ShowWindow
	 */
	struct USkillStatusDescAndListForBattleSet_C_ShowWindow_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               InEquipClassType;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TDJZ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillSlotId;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InClassAbilityTypeId;                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ClassAbilityChangeProc
	 */
	struct USkillStatusDescAndListForBattleSet_C_ClassAbilityChangeProc_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InDisarm;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnClassAbilityChangeCompleted
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnClassAbilityChangeCompleted_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.TacticalSkillChangeProc
	 */
	struct USkillStatusDescAndListForBattleSet_C_TacticalSkillChangeProc_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InDisarm;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnTacticalSkillChangeCompleted
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnTacticalSkillChangeCompleted_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsArtsAssetLoadRequested;                                // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    InSelectedSkillTypeId;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSelectedSkillId;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ShowUnchangeableMessageDialog
	 */
	struct USkillStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog_Params
	{
	public:
		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues    InUnchangeableRetValue;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.Construct
	 */
	struct USkillStatusDescAndListForBattleSet_C_Construct_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnAnimationFinished
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnPress_Cancel
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UiInputBlock
	 */
	struct USkillStatusDescAndListForBattleSet_C_UiInputBlock_Params
	{
	public:
		bool                                                       InIsBlock;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.UIInputBlockForSkillChange
	 */
	struct USkillStatusDescAndListForBattleSet_C_UIInputBlockForSkillChange_Params
	{
	public:
		bool                                                       InIsBlock;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.Destruct
	 */
	struct USkillStatusDescAndListForBattleSet_C_Destruct_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    InPressedSwitchBtnId;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.PreConstruct
	 */
	struct USkillStatusDescAndListForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.CloseDetailedStatus
	 */
	struct USkillStatusDescAndListForBattleSet_C_CloseDetailedStatus_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ChangeSkillResultProc
	 */
	struct USkillStatusDescAndListForBattleSet_C_ChangeSkillResultProc_Params
	{
	public:
		int32_t                                                    InNewEquippedSkillId;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsDisarm;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_EquippedSkillStatusDesc_K2Node_ComponentBoundEvent_5_OnClassAbilityRemoveBtnPressed__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_EquippedSkillStatusDesc_K2Node_ComponentBoundEvent_5_OnClassAbilityRemoveBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature_Params
	{
	public:
		class USkillInfoItemForBattleSet_C*                        InSelectedInfoItem;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZPH3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_15_OnCancelBtnPressed__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_15_OnCancelBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.ExecuteUbergraph_SkillStatusDescAndListForBattleSet
	 */
	struct USkillStatusDescAndListForBattleSet_C_ExecuteUbergraph_SkillStatusDescAndListForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnTermEnd__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnTermEnd__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnEquippedClassAbilityChanged__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnEquippedClassAbilityChanged__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnEquippedTacticalSkillChanged__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnEquippedTacticalSkillChanged__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnResetLeftSideParameterDiffMark__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature_Params
	{
	public:
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIncludesClassInfoUpdate;                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnSkillChangeBtnPressed__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnSkillInfoItemSelected__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnSkillInfoItemSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    InEquippedSkillId;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSelectedSkillId;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C.OnHideWindowFinished__DelegateSignature
	 */
	struct USkillStatusDescAndListForBattleSet_C_OnHideWindowFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
