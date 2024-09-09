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
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.ChangeDesign
	 */
	struct UWBP_ScbPopup_C_ChangeDesign_Params
	{
	public:
		bool                                                       bRank;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.SetTotalBonus
	 */
	struct UWBP_ScbPopup_C_SetTotalBonus_Params
	{
	public:
		struct FSBScbClassData                                     TotalBonus;                                              // 0x0000(0x0024)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_8BMH[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.Finished_48175ABA459004A31D7F73BB1AD68F3D
	 */
	struct UWBP_ScbPopup_C_Finished_48175ABA459004A31D7F73BB1AD68F3D_Params
	{	};

	/**
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.Construct
	 */
	struct UWBP_ScbPopup_C_Construct_Params
	{	};

	/**
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.ShowRank
	 */
	struct UWBP_ScbPopup_C_ShowRank_Params
	{	};

	/**
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.ShowConditions
	 */
	struct UWBP_ScbPopup_C_ShowConditions_Params
	{	};

	/**
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_Button_Proficiency_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ScbPopup_C_BndEvt__WBP_SubClassBonusPopup_Button_Proficiency_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_Button_Conditions_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ScbPopup_C_BndEvt__WBP_SubClassBonusPopup_Button_Conditions_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_SBButton_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ScbPopup_C_BndEvt__WBP_SubClassBonusPopup_SBButton_Close_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.BndEvt__WBP_SubClassBonusPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ScbPopup_C_BndEvt__WBP_SubClassBonusPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.OnPressCancelKey
	 */
	struct UWBP_ScbPopup_C_OnPressCancelKey_Params
	{	};

	/**
	 * Function WBP_ScbPopup.WBP_ScbPopup_C.ExecuteUbergraph_WBP_ScbPopup
	 */
	struct UWBP_ScbPopup_C_ExecuteUbergraph_WBP_ScbPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
