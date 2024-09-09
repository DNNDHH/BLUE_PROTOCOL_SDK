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
	 * Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.ResetAllInfo
	 */
	struct UCommonIconToolTipContents_BattleImagineSkillInfoParts_C_ResetAllInfo_Params
	{	};

	/**
	 * Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.SetMasterImagineData
	 */
	struct UCommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetMasterImagineData_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InStackBNum;                                             // 0x00B8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.SetTextColor
	 */
	struct UCommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts
	 */
	struct UCommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
