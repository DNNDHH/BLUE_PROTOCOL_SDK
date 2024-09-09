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
	 * Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.SetSelectedSwitchBtn
	 */
	struct UStatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn_Params
	{
	public:
		int32_t                                                    InSelectedSwitchBtnId;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.SetInfoType
	 */
	struct UStatusTypeSwitchBtnForBattleSet_C_SetInfoType_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SVMB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.PreConstruct
	 */
	struct UStatusTypeSwitchBtnForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UStatusTypeSwitchBtnForBattleSet_C_BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn2_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UStatusTypeSwitchBtnForBattleSet_C_BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn2_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.BndEvt__StatusTypeSwitchBtnForBattleSet_SwitchBtn1_1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UStatusTypeSwitchBtnForBattleSet_C_BndEvt__StatusTypeSwitchBtnForBattleSet_SwitchBtn1_1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet
	 */
	struct UStatusTypeSwitchBtnForBattleSet_C_ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.OnSwitchBtnPressed__DelegateSignature
	 */
	struct UStatusTypeSwitchBtnForBattleSet_C_OnSwitchBtnPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    InPressedSwitchBtnId;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
