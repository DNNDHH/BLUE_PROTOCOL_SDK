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
	 * Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetIsTooltipEnable
	 */
	struct UCmnSkillPaletteSwitchBtn_C_SetIsTooltipEnable_Params
	{
	public:
		bool                                                       bInIsTooltipEnabled;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetActiveSwitchBtn
	 */
	struct UCmnSkillPaletteSwitchBtn_C_SetActiveSwitchBtn_Params
	{
	public:
		int32_t                                                    InActiveSwitchBtnId;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.CreateTooltip
	 */
	struct UCmnSkillPaletteSwitchBtn_C_CreateTooltip_Params
	{
	public:
		bool                                                       InIsNoTooltip;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.SetIsSubPaletteReleased
	 */
	struct UCmnSkillPaletteSwitchBtn_C_SetIsSubPaletteReleased_Params
	{
	public:
		bool                                                       bInIsReleased;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.Construct
	 */
	struct UCmnSkillPaletteSwitchBtn_C_Construct_Params
	{	};

	/**
	 * Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.Destruct
	 */
	struct UCmnSkillPaletteSwitchBtn_C_Destruct_Params
	{	};

	/**
	 * Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.BndEvt__CmnSkillPaletteSwitchBtn_ButtonForMainSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnSkillPaletteSwitchBtn_C_BndEvt__CmnSkillPaletteSwitchBtn_ButtonForMainSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.BndEvt__CmnSkillPaletteSwitchBtn_ButtonForSubSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnSkillPaletteSwitchBtn_C_BndEvt__CmnSkillPaletteSwitchBtn_ButtonForSubSkillPaletteSwitchReleased_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.ExecuteUbergraph_CmnSkillPaletteSwitchBtn
	 */
	struct UCmnSkillPaletteSwitchBtn_C_ExecuteUbergraph_CmnSkillPaletteSwitchBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnSkillPaletteSwitchBtn.CmnSkillPaletteSwitchBtn_C.OnPressed__DelegateSignature
	 */
	struct UCmnSkillPaletteSwitchBtn_C_OnPressed__DelegateSignature_Params
	{
	public:
		bool                                                       bInSwitchToSubSkillPalette;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
