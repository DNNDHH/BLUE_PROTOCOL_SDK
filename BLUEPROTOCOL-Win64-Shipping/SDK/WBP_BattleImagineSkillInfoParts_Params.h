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
	 * Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetInfoMark
	 */
	struct UWBP_BattleImagineSkillInfoParts_C_SetInfoMark_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetSkillInfoIconActive
	 */
	struct UWBP_BattleImagineSkillInfoParts_C_SetSkillInfoIconActive_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetMasterImagineData
	 */
	struct UWBP_BattleImagineSkillInfoParts_C_SetMasterImagineData_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              UniqueId;                                                // 0x00B8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetTextColor
	 */
	struct UWBP_BattleImagineSkillInfoParts_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.SetPossessionInfoVisibility
	 */
	struct UWBP_BattleImagineSkillInfoParts_C_SetPossessionInfoVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.PreConstruct
	 */
	struct UWBP_BattleImagineSkillInfoParts_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C.ExecuteUbergraph_WBP_BattleImagineSkillInfoParts
	 */
	struct UWBP_BattleImagineSkillInfoParts_C_ExecuteUbergraph_WBP_BattleImagineSkillInfoParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
