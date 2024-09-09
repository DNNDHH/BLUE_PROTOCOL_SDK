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
	 * Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.Set Brunch Color
	 */
	struct UWBP_SkillTreeBranchSwitcher_C_SetBrunchColor_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.Init
	 */
	struct UWBP_SkillTreeBranchSwitcher_C_Init_Params
	{
	public:
		ESkillTreeHorizonBranchType                                InBrunchType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AG76[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.PreConstruct
	 */
	struct UWBP_SkillTreeBranchSwitcher_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.SetBrunchType
	 */
	struct UWBP_SkillTreeBranchSwitcher_C_SetBrunchType_Params
	{
	public:
		ESkillTreeHorizonBranchType                                BrunchType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.ExecuteUbergraph_WBP_SkillTreeBranchSwitcher
	 */
	struct UWBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
