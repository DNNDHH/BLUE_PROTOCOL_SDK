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
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.CheckIconActive
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_CheckIconActive_Params
	{	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.CheckVisibleChange
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_CheckVisibleChange_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.SetActionEnable
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_SetActionEnable_Params
	{
	public:
		bool                                                       ToEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.SetKeyVisible
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_SetKeyVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.SetKeyGuideVisible
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_SetKeyGuideVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_APIF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.SetActionGaugeValue
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_SetActionGaugeValue_Params
	{
	public:
		float                                                      InNowValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InMaxValue;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.PlayAnimChargStart
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_PlayAnimChargStart_Params
	{
	public:
		bool                                                       Init;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZXFO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.PlayAnimChargeEnd
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_PlayAnimChargeEnd_Params
	{	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.PlayAnimUse
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_PlayAnimUse_Params
	{
	public:
		bool                                                       bInit;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A3Y7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.Construct
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_Construct_Params
	{	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.OnStartActiveAnimation
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_OnStartActiveAnimation_Params
	{	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.OnStopActiveAnimation
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_OnStopActiveAnimation_Params
	{	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.OnIconDisableChange
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_OnIconDisableChange_Params
	{
	public:
		bool                                                       IsDisable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.OnUpdateActionGauge
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_OnUpdateActionGauge_Params
	{
	public:
		float                                                      OutMaxActionValue;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutNowActionValue;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.OnSetKeyGuideVisible
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_OnSetKeyGuideVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.OnInitWidget
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_OnInitWidget_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.Destruct
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_Destruct_Params
	{	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.OnSkillUse
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_OnSkillUse_Params
	{
	public:
		ESkillActionPosition                                       SkillPosition;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.OnSetVisibleWidget
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_OnSetVisibleWidget_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.CheckActiveAnimation
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_CheckActiveAnimation_Params
	{	};

	/**
	 * Function WBP_ContentAction_AbsoluteDefense.WBP_ContentAction_AbsoluteDefense_C.ExecuteUbergraph_WBP_ContentAction_AbsoluteDefense
	 */
	struct UWBP_ContentAction_AbsoluteDefense_C_ExecuteUbergraph_WBP_ContentAction_AbsoluteDefense_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
