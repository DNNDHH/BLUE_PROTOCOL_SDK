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
	 * Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.ResetPermanentInfo
	 */
	struct UCommonIconToolTipContents_PermanentSkillParts_C_ResetPermanentInfo_Params
	{	};

	/**
	 * Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetMasterImagineData
	 */
	struct UCommonIconToolTipContents_PermanentSkillParts_C_SetMasterImagineData_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetPermanentInfo
	 */
	struct UCommonIconToolTipContents_PermanentSkillParts_C_SetPermanentInfo_Params
	{
	public:
		struct FSBMasterImagine                                    InMasterImagineData;                                     // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetPermanentName
	 */
	struct UCommonIconToolTipContents_PermanentSkillParts_C_SetPermanentName_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.SetTextColor
	 */
	struct UCommonIconToolTipContents_PermanentSkillParts_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContents_PermanentSkillParts.CommonIconToolTipContents_PermanentSkillParts_C.ExecuteUbergraph_CommonIconToolTipContents_PermanentSkillParts
	 */
	struct UCommonIconToolTipContents_PermanentSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PermanentSkillParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
