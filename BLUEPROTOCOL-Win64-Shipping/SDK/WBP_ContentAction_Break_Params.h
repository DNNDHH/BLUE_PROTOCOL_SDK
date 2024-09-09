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
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.CheckIconActive
	 */
	struct UWBP_ContentAction_Break_C_CheckIconActive_Params
	{	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.CheckVisibleChange
	 */
	struct UWBP_ContentAction_Break_C_CheckVisibleChange_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetRecastVisible
	 */
	struct UWBP_ContentAction_Break_C_SetRecastVisible_Params
	{
	public:
		bool                                                       ToVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetKeyVisible
	 */
	struct UWBP_ContentAction_Break_C_SetKeyVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetKeyGuideVisible
	 */
	struct UWBP_ContentAction_Break_C_SetKeyGuideVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZB9I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.SetGaugeValue
	 */
	struct UWBP_ContentAction_Break_C_SetGaugeValue_Params
	{
	public:
		float                                                      InBaseValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRecastTime;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.PlayAnimChargStart
	 */
	struct UWBP_ContentAction_Break_C_PlayAnimChargStart_Params
	{
	public:
		bool                                                       Init;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RRUR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.PlayAnimChargeEnd
	 */
	struct UWBP_ContentAction_Break_C_PlayAnimChargeEnd_Params
	{	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.PlayAnimUse
	 */
	struct UWBP_ContentAction_Break_C_PlayAnimUse_Params
	{
	public:
		bool                                                       bInit;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnStopActiveAnimation
	 */
	struct UWBP_ContentAction_Break_C_OnStopActiveAnimation_Params
	{	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnIconDisableChange
	 */
	struct UWBP_ContentAction_Break_C_OnIconDisableChange_Params
	{
	public:
		bool                                                       IsDisable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnUpdateRecastGauge
	 */
	struct UWBP_ContentAction_Break_C_OnUpdateRecastGauge_Params
	{
	public:
		float                                                      OutMaxRecastTime;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutRecastTime;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnSetKeyGuideVisible
	 */
	struct UWBP_ContentAction_Break_C_OnSetKeyGuideVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnInitWidget
	 */
	struct UWBP_ContentAction_Break_C_OnInitWidget_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnSkillUse
	 */
	struct UWBP_ContentAction_Break_C_OnSkillUse_Params
	{
	public:
		ESkillActionPosition                                       SkillPosition;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.Destruct
	 */
	struct UWBP_ContentAction_Break_C_Destruct_Params
	{	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnSetVisibleWidget
	 */
	struct UWBP_ContentAction_Break_C_OnSetVisibleWidget_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.CheckActiveAnimation
	 */
	struct UWBP_ContentAction_Break_C_CheckActiveAnimation_Params
	{	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.OnStartExecuteAnimation
	 */
	struct UWBP_ContentAction_Break_C_OnStartExecuteAnimation_Params
	{	};

	/**
	 * Function WBP_ContentAction_Break.WBP_ContentAction_Break_C.ExecuteUbergraph_WBP_ContentAction_Break
	 */
	struct UWBP_ContentAction_Break_C_ExecuteUbergraph_WBP_ContentAction_Break_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
