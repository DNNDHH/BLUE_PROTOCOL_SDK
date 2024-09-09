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
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetMaxHPWithoutResurrectionAdjust
	 */
	struct UPartyMemberInfo_HPGauge_C_GetMaxHPWithoutResurrectionAdjust_Params
	{
	public:
		float                                                      MaxHPWithoutResurrectionAdjust;                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetMaxHP
	 */
	struct UPartyMemberInfo_HPGauge_C_GetMaxHP_Params
	{
	public:
		float                                                      OutMaxHP;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.GetCurrHP
	 */
	struct UPartyMemberInfo_HPGauge_C_GetCurrHP_Params
	{
	public:
		float                                                      OutCurrHP;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.IsVIsibleIcon
	 */
	struct UPartyMemberInfo_HPGauge_C_IsVIsibleIcon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetAnimSpeedBlinkFast
	 */
	struct UPartyMemberInfo_HPGauge_C_SetAnimSpeedBlinkFast_Params
	{
	public:
		float                                                      PlaybackSpeed;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.StopAnimBlinkFast
	 */
	struct UPartyMemberInfo_HPGauge_C_StopAnimBlinkFast_Params
	{	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PlayAnimBlinkFast
	 */
	struct UPartyMemberInfo_HPGauge_C_PlayAnimBlinkFast_Params
	{	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.StopAnimBlink
	 */
	struct UPartyMemberInfo_HPGauge_C_StopAnimBlink_Params
	{	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PlayAnimBlink
	 */
	struct UPartyMemberInfo_HPGauge_C_PlayAnimBlink_Params
	{	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetVisibleBlinkFrame
	 */
	struct UPartyMemberInfo_HPGauge_C_SetVisibleBlinkFrame_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Get Enable Blink Anim
	 */
	struct UPartyMemberInfo_HPGauge_C_GetEnableBlinkAnim_Params
	{
	public:
		bool                                                       EnableBlinkAnim;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHpGaugeWidthRate
	 */
	struct UPartyMemberInfo_HPGauge_C_SetHpGaugeWidthRate_Params
	{
	public:
		float                                                      InWidthRate;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHPGaugeSize
	 */
	struct UPartyMemberInfo_HPGauge_C_SetHPGaugeSize_Params
	{	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.SetHP
	 */
	struct UPartyMemberInfo_HPGauge_C_SetHP_Params
	{
	public:
		float                                                      InCurrHp;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InMaxHp;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InMaxHPWoAdjust;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateAnim
	 */
	struct UPartyMemberInfo_HPGauge_C_UpdateAnim_Params
	{
	public:
		class USBPlayerCharacterParameterComponent*                CharaParamComp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamNumber;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateIcon
	 */
	struct UPartyMemberInfo_HPGauge_C_UpdateIcon_Params
	{
	public:
		class USBPlayerCharacterParameterComponent*                CharaParamComp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamNumber;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DQWU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.UpdateHP
	 */
	struct UPartyMemberInfo_HPGauge_C_UpdateHP_Params
	{
	public:
		class USBPlayerCharacterParameterComponent*                CharaParamComp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Update
	 */
	struct UPartyMemberInfo_HPGauge_C_Update_Params
	{
	public:
		class USBPlayerCharacterParameterComponent*                CharaParamComp;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamNumber;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.Construct
	 */
	struct UPartyMemberInfo_HPGauge_C_Construct_Params
	{	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.PreConstruct
	 */
	struct UPartyMemberInfo_HPGauge_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.OnUpdateAnim
	 */
	struct UPartyMemberInfo_HPGauge_C_OnUpdateAnim_Params
	{
	public:
		class USBPlayerCharacterParameterComponent*                ParameterComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTeamId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.OnUpdate
	 */
	struct UPartyMemberInfo_HPGauge_C_OnUpdate_Params
	{
	public:
		class USBPlayerCharacterParameterComponent*                ParameterComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTeamId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C.ExecuteUbergraph_PartyMemberInfo_HPGauge
	 */
	struct UPartyMemberInfo_HPGauge_C_ExecuteUbergraph_PartyMemberInfo_HPGauge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A2F5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
