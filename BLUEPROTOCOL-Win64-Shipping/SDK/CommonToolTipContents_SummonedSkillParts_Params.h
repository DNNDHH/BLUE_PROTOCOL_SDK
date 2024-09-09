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
	 * Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.ResetSummonedInfo
	 */
	struct UCommonToolTipContents_SummonedSkillParts_C_ResetSummonedInfo_Params
	{	};

	/**
	 * Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetMasterImagineData
	 */
	struct UCommonToolTipContents_SummonedSkillParts_C_SetMasterImagineData_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedInfo
	 */
	struct UCommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo_Params
	{
	public:
		struct FSBMasterImagine                                    InImagineMasterData;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedName
	 */
	struct UCommonToolTipContents_SummonedSkillParts_C_SetSummonedName_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedTypeName
	 */
	struct UCommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName_Params
	{
	public:
		class FText                                                InTypeName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetTextColor
	 */
	struct UCommonToolTipContents_SummonedSkillParts_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts
	 */
	struct UCommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
