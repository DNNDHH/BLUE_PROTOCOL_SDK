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
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SwitchSkillBg
	 */
	struct USkillInfoGaugeActive_C_SwitchSkillBg_Params
	{
	public:
		bool                                                       bHud;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBehind;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAnim;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A9I0[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetKeyVisibilityPermanent
	 */
	struct USkillInfoGaugeActive_C_SetKeyVisibilityPermanent_Params
	{
	public:
		bool                                                       InIsVisibilityPermanent;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetEmptyColor
	 */
	struct USkillInfoGaugeActive_C_SetEmptyColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetIsEmpty
	 */
	struct USkillInfoGaugeActive_C_SetIsEmpty_Params
	{
	public:
		bool                                                       InIsEmpty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G7WF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.CheckBerserkModeSkill
	 */
	struct USkillInfoGaugeActive_C_CheckBerserkModeSkill_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.GetIconElementType
	 */
	struct USkillInfoGaugeActive_C_GetIconElementType_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E5A0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASBPlayerCharacter*                                  InPlayerCharacter;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBSkillElementIconType                                    ElementType;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RDHK[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.UpdateAttackUp
	 */
	struct USkillInfoGaugeActive_C_UpdateAttackUp_Params
	{
	public:
		bool                                                       InAttackUp;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9I60[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBPlayerSkillActionComponent*                       SkillActionComp;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.GetIconBgType
	 */
	struct USkillInfoGaugeActive_C_GetIconBgType_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GQBH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASBPlayerCharacter*                                  InPlayerCharacter;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIgnoreEquipActiveAbilityCheck;                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBSkillIconBgType                                         BgType;                                                  // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UIXF[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetIconOpacity
	 */
	struct USkillInfoGaugeActive_C_SetIconOpacity_Params
	{
	public:
		bool                                                       IsEquipped;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetKeyGuideVisible
	 */
	struct USkillInfoGaugeActive_C_SetKeyGuideVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8A7G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimChargeStart
	 */
	struct USkillInfoGaugeActive_C_PlayAnimChargeStart_Params
	{	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.UpdateIconTexture
	 */
	struct USkillInfoGaugeActive_C_UpdateIconTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SkillId;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForceUpdate;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IgnoreEquipActiveAbilityCheckForIconBgType;              // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DIMN[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetEnabled
	 */
	struct USkillInfoGaugeActive_C_SetEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimChargeEnd
	 */
	struct USkillInfoGaugeActive_C_PlayAnimChargeEnd_Params
	{	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.PlayAnimUse
	 */
	struct USkillInfoGaugeActive_C_PlayAnimUse_Params
	{
	public:
		bool                                                       bInit;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TSL4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetText
	 */
	struct USkillInfoGaugeActive_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.SetGaugeValue
	 */
	struct USkillInfoGaugeActive_C_SetGaugeValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRecastTime;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.Construct
	 */
	struct USkillInfoGaugeActive_C_Construct_Params
	{	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnUpdateIconTexture
	 */
	struct USkillInfoGaugeActive_C_OnUpdateIconTexture_Params
	{
	public:
		class UTexture2D*                                          SkillIconSmall;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnSetKeyGuideVisible
	 */
	struct USkillInfoGaugeActive_C_OnSetKeyGuideVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnAttackUpChange
	 */
	struct USkillInfoGaugeActive_C_OnAttackUpChange_Params
	{
	public:
		bool                                                       InAttackUp;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5XT6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBPlayerSkillActionComponent*                       SkillActionComp;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnStartBerserkMode
	 */
	struct USkillInfoGaugeActive_C_OnStartBerserkMode_Params
	{	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnStopBerserkMode
	 */
	struct USkillInfoGaugeActive_C_OnStopBerserkMode_Params
	{	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.OnIconDisableChange
	 */
	struct USkillInfoGaugeActive_C_OnIconDisableChange_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeActive.SkillInfoGaugeActive_C.ExecuteUbergraph_SkillInfoGaugeActive
	 */
	struct USkillInfoGaugeActive_C_ExecuteUbergraph_SkillInfoGaugeActive_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
