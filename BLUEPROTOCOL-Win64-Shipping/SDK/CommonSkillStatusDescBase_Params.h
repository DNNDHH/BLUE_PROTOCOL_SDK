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
	 * Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillAbilityTypeVisibility
	 */
	struct UCommonSkillStatusDescBase_C_SetSkillAbilityTypeVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillClassType
	 */
	struct UCommonSkillStatusDescBase_C_SetSkillClassType_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillLevel
	 */
	struct UCommonSkillStatusDescBase_C_SetSkillLevel_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NGIA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkillName
	 */
	struct UCommonSkillStatusDescBase_C_SetSkillName_Params
	{
	public:
		class FString                                              InName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetSkill
	 */
	struct UCommonSkillStatusDescBase_C_SetSkill_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetBlank
	 */
	struct UCommonSkillStatusDescBase_C_SetBlank_Params
	{
	public:
		bool                                                       InIsBlank;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SwitchBaseBgType
	 */
	struct UCommonSkillStatusDescBase_C_SwitchBaseBgType_Params
	{
	public:
		bool                                                       InIsNormalType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GVML[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.SetBaseSize
	 */
	struct UCommonSkillStatusDescBase_C_SetBaseSize_Params
	{
	public:
		float                                                      InWidth;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InHeight;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.PreConstruct
	 */
	struct UCommonSkillStatusDescBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonSkillStatusDescBase.CommonSkillStatusDescBase_C.ExecuteUbergraph_CommonSkillStatusDescBase
	 */
	struct UCommonSkillStatusDescBase_C_ExecuteUbergraph_CommonSkillStatusDescBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
