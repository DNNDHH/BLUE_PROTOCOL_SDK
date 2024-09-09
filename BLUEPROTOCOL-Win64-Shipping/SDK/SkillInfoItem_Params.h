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
	 * Function SkillInfoItem.SkillInfoItem_C.GetSkillInfoItemSize
	 */
	struct USkillInfoItem_C_GetSkillInfoItemSize_Params
	{
	public:
		ESkillActionPosition                                       InSAP;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JQE8[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           OutSize;                                                 // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3ZYH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.SwitchSkillBg
	 */
	struct USkillInfoItem_C_SwitchSkillBg_Params
	{
	public:
		bool                                                       bHud;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBehind;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAnim;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.SetKeyVisibilityPermanent
	 */
	struct USkillInfoItem_C_SetKeyVisibilityPermanent_Params
	{
	public:
		bool                                                       InIsVisibilityPermanent;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.GetGaugeSpecial
	 */
	struct USkillInfoItem_C_GetGaugeSpecial_Params
	{
	public:
		bool                                                       OutIsValid;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D8LI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkillInfoGaugeSpecial_C*                            OutGaugeSpecial;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.GetGaugeDef
	 */
	struct USkillInfoItem_C_GetGaugeDef_Params
	{
	public:
		bool                                                       OutIsValid;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IELH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkillInfoGaugeMainDefHeal_C*                        OutGaugeDef;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.GetGaugeMain
	 */
	struct USkillInfoItem_C_GetGaugeMain_Params
	{
	public:
		bool                                                       OutIsValid;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HEYK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkillInfoGaugeMainDefHeal_C*                        OutGaugeMain;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.GetGaugeActive
	 */
	struct USkillInfoItem_C_GetGaugeActive_Params
	{
	public:
		ESkillActionPosition                                       InGaugeActiveSAP;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FJF4[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkillInfoGaugeActive_C*                             OutGaugeActive;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.GetGaugeImagine
	 */
	struct USkillInfoItem_C_GetGaugeImagine_Params
	{
	public:
		ESkillActionPosition                                       InGaugeImagineSAP;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsVaild;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7J0T[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkillInfoGaugeImagine_C*                            OutGaugeImagine;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.PlayAnimChargeStart
	 */
	struct USkillInfoItem_C_PlayAnimChargeStart_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.CheckShieldBreak
	 */
	struct USkillInfoItem_C_CheckShieldBreak_Params
	{
	public:
		bool                                                       bCheck;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QBEM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.SetEnable
	 */
	struct USkillInfoItem_C_SetEnable_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.SetSwitchGauge
	 */
	struct USkillInfoItem_C_SetSwitchGauge_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.PlayAnimChargeEnd
	 */
	struct USkillInfoItem_C_PlayAnimChargeEnd_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.PlayAnimUse
	 */
	struct USkillInfoItem_C_PlayAnimUse_Params
	{
	public:
		bool                                                       bInit;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.ReplaceFunctionText
	 */
	struct USkillInfoItem_C_ReplaceFunctionText_Params
	{
	public:
		class FString                                              InBaseString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Result;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.UpdatePercent
	 */
	struct USkillInfoItem_C_UpdatePercent_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.InitKeyText
	 */
	struct USkillInfoItem_C_InitKeyText_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.UpdateKeyText
	 */
	struct USkillInfoItem_C_UpdateKeyText_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.GetSpecialSkillRecastTime
	 */
	struct USkillInfoItem_C_GetSpecialSkillRecastTime_Params
	{
	public:
		float                                                      MaxTime;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurTime;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.GetRecastTimeBP
	 */
	struct USkillInfoItem_C_GetRecastTimeBP_Params
	{
	public:
		float                                                      MaxRecastTime;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RecastTime;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShowInfo;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IDXL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.OnSkillAnimationStartDelegate_Event_1
	 */
	struct USkillInfoItem_C_OnSkillAnimationStartDelegate_Event_1_Params
	{
	public:
		ESkillActionPosition                                       SkillPosition;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.UpdateDelegate
	 */
	struct USkillInfoItem_C_UpdateDelegate_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.UnbindSkillAnimationStartDelegate
	 */
	struct USkillInfoItem_C_UnbindSkillAnimationStartDelegate_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.Destruct
	 */
	struct USkillInfoItem_C_Destruct_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.Construct
	 */
	struct USkillInfoItem_C_Construct_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.CustomEvent_1
	 */
	struct USkillInfoItem_C_CustomEvent_1_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.PreConstruct
	 */
	struct USkillInfoItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimChargeStart
	 */
	struct USkillInfoItem_C_OnPlayAnimChargeStart_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimChargeEnd
	 */
	struct USkillInfoItem_C_OnPlayAnimChargeEnd_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.OnUpdatePercent
	 */
	struct USkillInfoItem_C_OnUpdatePercent_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.OnPlayAnimUse
	 */
	struct USkillInfoItem_C_OnPlayAnimUse_Params
	{
	public:
		bool                                                       Init;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.CustomEvent_2
	 */
	struct USkillInfoItem_C_CustomEvent_2_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.OnPadSkinChange
	 */
	struct USkillInfoItem_C_OnPadSkinChange_Params
	{
	public:
		ESBPadKeySkinType                                          SkinType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.InitKeyTextAndGauge
	 */
	struct USkillInfoItem_C_InitKeyTextAndGauge_Params
	{	};

	/**
	 * Function SkillInfoItem.SkillInfoItem_C.ExecuteUbergraph_SkillInfoItem
	 */
	struct USkillInfoItem_C_ExecuteUbergraph_SkillInfoItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
