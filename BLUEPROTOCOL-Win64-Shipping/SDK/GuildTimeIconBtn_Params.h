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
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.GetToolTipWidget_1
	 */
	struct UGuildTimeIconBtn_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.Set Checked
	 */
	struct UGuildTimeIconBtn_C_SetChecked_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N3RO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.GetTime
	 */
	struct UGuildTimeIconBtn_C_GetTime_Params
	{
	public:
		ESBGuildActivityTime                                       Time;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.IsCheck
	 */
	struct UGuildTimeIconBtn_C_IsCheck_Params
	{
	public:
		bool                                                       IsCheck;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.OnLoaded_456EB643467351B1ABBF91877B36AC98
	 */
	struct UGuildTimeIconBtn_C_OnLoaded_456EB643467351B1ABBF91877B36AC98_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.PreConstruct
	 */
	struct UGuildTimeIconBtn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.Construct
	 */
	struct UGuildTimeIconBtn_C_Construct_Params
	{	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.InitializeTime
	 */
	struct UGuildTimeIconBtn_C_InitializeTime_Params
	{	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__Btn_Time_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildTimeIconBtn_C_BndEvt__Btn_Time_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.Set Editable
	 */
	struct UGuildTimeIconBtn_C_SetEditable_Params
	{
	public:
		bool                                                       bEditable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildTimeIconBtn_C_BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildTimeIconBtn_C_BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildTimeIconBtn.GuildTimeIconBtn_C.ExecuteUbergraph_GuildTimeIconBtn
	 */
	struct UGuildTimeIconBtn_C_ExecuteUbergraph_GuildTimeIconBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TYUQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
