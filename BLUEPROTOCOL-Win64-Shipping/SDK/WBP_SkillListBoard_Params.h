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
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.PassiveSkillListSetting
	 */
	struct UWBP_SkillListBoard_C_PassiveSkillListSetting_Params
	{	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.Skill List Setting
	 */
	struct UWBP_SkillListBoard_C_SkillListSetting_Params
	{	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.Get Now Select Class
	 */
	struct UWBP_SkillListBoard_C_GetNowSelectClass_Params
	{
	public:
		ESBClassType                                               Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.BoardUpdate
	 */
	struct UWBP_SkillListBoard_C_BoardUpdate_Params
	{	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.OpenSkillTree
	 */
	struct UWBP_SkillListBoard_C_OpenSkillTree_Params
	{
	public:
		struct FSBSkillDataMasterData                              Skill;                                                   // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.Construct
	 */
	struct UWBP_SkillListBoard_C_Construct_Params
	{	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.CustomEvent_1
	 */
	struct UWBP_SkillListBoard_C_CustomEvent_1_Params
	{
	public:
		ESBClassType                                               Typr;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.CustomEvent_2
	 */
	struct UWBP_SkillListBoard_C_CustomEvent_2_Params
	{	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.OnCharaSkillMasteryOthersComplete
	 */
	struct UWBP_SkillListBoard_C_OnCharaSkillMasteryOthersComplete_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.Destruct
	 */
	struct UWBP_SkillListBoard_C_Destruct_Params
	{	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.BndEvt__WBP_SkillListBoard_WBP_SkillTreeHorizon_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UWBP_SkillListBoard_C_BndEvt__WBP_SkillListBoard_WBP_SkillTreeHorizon_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.ExecuteUbergraph_WBP_SkillListBoard
	 */
	struct UWBP_SkillListBoard_C_ExecuteUbergraph_WBP_SkillListBoard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_STB6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SkillListBoard.WBP_SkillListBoard_C.OnSubMenuChanged__DelegateSignature
	 */
	struct UWBP_SkillListBoard_C_OnSubMenuChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
