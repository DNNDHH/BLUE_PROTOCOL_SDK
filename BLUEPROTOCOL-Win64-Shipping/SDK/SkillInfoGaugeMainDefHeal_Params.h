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
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetEmptyColor
	 */
	struct USkillInfoGaugeMainDefHeal_C_SetEmptyColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetIsEmpty
	 */
	struct USkillInfoGaugeMainDefHeal_C_SetIsEmpty_Params
	{
	public:
		bool                                                       InIsEmpty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UH19[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetKeyGuideVisible
	 */
	struct USkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4K03[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimChargeStart
	 */
	struct USkillInfoGaugeMainDefHeal_C_PlayAnimChargeStart_Params
	{	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetEnabled
	 */
	struct USkillInfoGaugeMainDefHeal_C_SetEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimChargeEnd
	 */
	struct USkillInfoGaugeMainDefHeal_C_PlayAnimChargeEnd_Params
	{	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimUse
	 */
	struct USkillInfoGaugeMainDefHeal_C_PlayAnimUse_Params
	{
	public:
		bool                                                       bInit;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LG2Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetText
	 */
	struct USkillInfoGaugeMainDefHeal_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetGaugeValue
	 */
	struct USkillInfoGaugeMainDefHeal_C_SetGaugeValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRecastTime;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PreConstruct
	 */
	struct USkillInfoGaugeMainDefHeal_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.Construct
	 */
	struct USkillInfoGaugeMainDefHeal_C_Construct_Params
	{	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.OnIconDisableChange
	 */
	struct USkillInfoGaugeMainDefHeal_C_OnIconDisableChange_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.ExecuteUbergraph_SkillInfoGaugeMainDefHeal
	 */
	struct USkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
