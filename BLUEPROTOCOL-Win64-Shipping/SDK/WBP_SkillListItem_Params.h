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
	 * Function WBP_SkillListItem.WBP_SkillListItem_C.UpdateAbility
	 */
	struct UWBP_SkillListItem_C_UpdateAbility_Params
	{
	public:
		bool                                                       Use;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UC3F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SkillListItem.WBP_SkillListItem_C.Init
	 */
	struct UWBP_SkillListItem_C_Init_Params
	{
	public:
		struct FSBSkillDataMasterData                              SBSkillDataMasterData;                                   // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_SkillListItem.WBP_SkillListItem_C.BndEvt__WBP_SkillListItem_SBButton_C_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_SkillListItem_C_BndEvt__WBP_SkillListItem_SBButton_C_174_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillListItem.WBP_SkillListItem_C.ExecuteUbergraph_WBP_SkillListItem
	 */
	struct UWBP_SkillListItem_C_ExecuteUbergraph_WBP_SkillListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillListItem.WBP_SkillListItem_C.OnClick__DelegateSignature
	 */
	struct UWBP_SkillListItem_C_OnClick__DelegateSignature_Params
	{
	public:
		struct FSBSkillDataMasterData                              SkillId;                                                 // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
