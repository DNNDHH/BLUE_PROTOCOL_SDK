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
	 * Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.ResetPossessionInfo
	 */
	struct UCommonIconToolTipContents_PossessionSkillParts_C_ResetPossessionInfo_Params
	{	};

	/**
	 * Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetMasterImagineData
	 */
	struct UCommonIconToolTipContents_PossessionSkillParts_C_SetMasterImagineData_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetPossessionInfo
	 */
	struct UCommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo_Params
	{
	public:
		struct FSBMasterImagine                                    InMasterImagineData;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetPossessionName
	 */
	struct UCommonIconToolTipContents_PossessionSkillParts_C_SetPossessionName_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetPossessionTypeName
	 */
	struct UCommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName_Params
	{
	public:
		class FText                                                InTypeName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetTextColor
	 */
	struct UCommonIconToolTipContents_PossessionSkillParts_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts
	 */
	struct UCommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
