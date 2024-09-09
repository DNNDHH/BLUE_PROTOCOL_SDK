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
	 * Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.GetLeftSideParameters
	 */
	struct ULeftSideParametersForBattleSetSecondLevel_C_GetLeftSideParameters_Params
	{
	public:
		class UMyCharaMenu_LeftSideParameters_C*                   OutLeftSideParameters;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.SetBattleSetInfoType
	 */
	struct ULeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType_Params
	{
	public:
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TWYN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.BndEvt__LeftSideParametersForBattleSetSecondLevel_LeftSideParametersBody_K2Node_ComponentBoundEvent_0_OnDetailedStatusClicked__DelegateSignature
	 */
	struct ULeftSideParametersForBattleSetSecondLevel_C_BndEvt__LeftSideParametersForBattleSetSecondLevel_LeftSideParametersBody_K2Node_ComponentBoundEvent_0_OnDetailedStatusClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel
	 */
	struct ULeftSideParametersForBattleSetSecondLevel_C_ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.OnDetailStatusBtnClicked__DelegateSignature
	 */
	struct ULeftSideParametersForBattleSetSecondLevel_C_OnDetailStatusBtnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
