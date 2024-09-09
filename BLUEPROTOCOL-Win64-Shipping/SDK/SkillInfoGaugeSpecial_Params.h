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
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetEmptyColor
	 */
	struct USkillInfoGaugeSpecial_C_SetEmptyColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetIsEmpty
	 */
	struct USkillInfoGaugeSpecial_C_SetIsEmpty_Params
	{
	public:
		bool                                                       InIsEmpty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1V2K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetKeyGuideVisible
	 */
	struct USkillInfoGaugeSpecial_C_SetKeyGuideVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VJGL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Update Icon Texture
	 */
	struct USkillInfoGaugeSpecial_C_UpdateIconTexture_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimChargeStart
	 */
	struct USkillInfoGaugeSpecial_C_PlayAnimChargeStart_Params
	{	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetEnabled
	 */
	struct USkillInfoGaugeSpecial_C_SetEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimChargeEnd
	 */
	struct USkillInfoGaugeSpecial_C_PlayAnimChargeEnd_Params
	{	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.PlayAnimUse
	 */
	struct USkillInfoGaugeSpecial_C_PlayAnimUse_Params
	{
	public:
		bool                                                       bInit;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UW0M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.SetText
	 */
	struct USkillInfoGaugeSpecial_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Set Gauge Value
	 */
	struct USkillInfoGaugeSpecial_C_SetGaugeValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRecastTime;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.Construct
	 */
	struct USkillInfoGaugeSpecial_C_Construct_Params
	{	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.OnUpdateIconTexture
	 */
	struct USkillInfoGaugeSpecial_C_OnUpdateIconTexture_Params
	{
	public:
		bool                                                       inbActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.OnIconDisableChange
	 */
	struct USkillInfoGaugeSpecial_C_OnIconDisableChange_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeSpecial.SkillInfoGaugeSpecial_C.ExecuteUbergraph_SkillInfoGaugeSpecial
	 */
	struct USkillInfoGaugeSpecial_C_ExecuteUbergraph_SkillInfoGaugeSpecial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
