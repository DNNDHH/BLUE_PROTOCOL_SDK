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
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.GetToolTipWidget_1
	 */
	struct UWBP_SkillIconSwitcher_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Set Equipment Icon Visible
	 */
	struct UWBP_SkillIconSwitcher_C_SetEquipmentIconVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Update
	 */
	struct UWBP_SkillIconSwitcher_C_Update_Params
	{	};

	/**
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Init
	 */
	struct UWBP_SkillIconSwitcher_C_Init_Params
	{
	public:
		int32_t                                                    SkillId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SkillLevel;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESkillTreeAbilityType                                      AbilityType;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.Destruct
	 */
	struct UWBP_SkillIconSwitcher_C_Destruct_Params
	{	};

	/**
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_SkillIconSwitcher_C_BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_SkillIconSwitcher_C_BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_SkillIconSwitcher_C_BndEvt__WBP_SkillIconSwitcher_SBButton_C_40_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.ExecuteUbergraph_WBP_SkillIconSwitcher
	 */
	struct UWBP_SkillIconSwitcher_C_ExecuteUbergraph_WBP_SkillIconSwitcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnClick__DelegateSignature
	 */
	struct UWBP_SkillIconSwitcher_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    SkillId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SkillLV;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnUnhovered__DelegateSignature
	 */
	struct UWBP_SkillIconSwitcher_C_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillIconSwitcher.WBP_SkillIconSwitcher_C.OnHovered__DelegateSignature
	 */
	struct UWBP_SkillIconSwitcher_C_OnHovered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
