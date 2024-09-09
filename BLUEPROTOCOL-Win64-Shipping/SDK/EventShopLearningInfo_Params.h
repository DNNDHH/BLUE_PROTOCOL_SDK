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
	 * Function EventShopLearningInfo.EventShopLearningInfo_C.GetTextClassLevel
	 */
	struct UEventShopLearningInfo_C_GetTextClassLevel_Params
	{
	public:
		ESBClassType                                               ClassType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B21I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ClassLevel;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ClassText;                                               // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function EventShopLearningInfo.EventShopLearningInfo_C.GetTextSkillConditions
	 */
	struct UEventShopLearningInfo_C_GetTextSkillConditions_Params
	{
	public:
		int32_t                                                    ConditionSkillId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ConditionSkillLv;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Skill;                                                   // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function EventShopLearningInfo.EventShopLearningInfo_C.SetSkillId
	 */
	struct UEventShopLearningInfo_C_SetSkillId_Params
	{
	public:
		int32_t                                                    SkillId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Exchangeable;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopLearningInfo.EventShopLearningInfo_C.OnMouseEnter
	 */
	struct UEventShopLearningInfo_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EventShopLearningInfo.EventShopLearningInfo_C.OnMouseLeave
	 */
	struct UEventShopLearningInfo_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EventShopLearningInfo.EventShopLearningInfo_C.Destruct
	 */
	struct UEventShopLearningInfo_C_Destruct_Params
	{	};

	/**
	 * Function EventShopLearningInfo.EventShopLearningInfo_C.ExecuteUbergraph_EventShopLearningInfo
	 */
	struct UEventShopLearningInfo_C_ExecuteUbergraph_EventShopLearningInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
