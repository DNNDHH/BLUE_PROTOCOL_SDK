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
	 * Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.SetIsHoverEnabled
	 */
	struct UMyCharaMenu_TacticalSkillIcon_C_SetIsHoverEnabled_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.SetIsIconEnabled
	 */
	struct UMyCharaMenu_TacticalSkillIcon_C_SetIsIconEnabled_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.SetIconTexture
	 */
	struct UMyCharaMenu_TacticalSkillIcon_C_SetIconTexture_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.CreateTooltip
	 */
	struct UMyCharaMenu_TacticalSkillIcon_C_CreateTooltip_Params
	{
	public:
		bool                                                       InNotUseTooltip;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.SetSkill
	 */
	struct UMyCharaMenu_TacticalSkillIcon_C_SetSkill_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsInformationHidden;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OU86[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.OnMouseEnter
	 */
	struct UMyCharaMenu_TacticalSkillIcon_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_TacticalSkillIcon.MyCharaMenu_TacticalSkillIcon_C.ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon
	 */
	struct UMyCharaMenu_TacticalSkillIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
