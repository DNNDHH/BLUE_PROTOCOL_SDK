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
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetCommunicationSettingMenuAchievement
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetCommunicationSettingMenuAchievement_Params
	{
	public:
		struct FDateTime                                           InDateTime;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetRecepiType
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetRecepiType_Params
	{	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetEndDisplay
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetEndDisplay_Params
	{	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SwitchingRecipeHeader
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SwitchingRecipeHeader_Params
	{	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetLimitTimer
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetLimitTimer_Params
	{
	public:
		struct FDateTime                                           InDateTime;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetMessageTextColor
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetMessageTextColor_Params
	{
	public:
		struct FSlateColor                                         LimitTime;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateColor                                         Desc;                                                    // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetMessage
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetMessage_Params
	{
	public:
		EItemType                                                  InItemType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetDurationMinutes
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetDurationMinutes_Params
	{
	public:
		int32_t                                                    DurationMinutes;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0WBA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetEventTermId
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetEventTermId_Params
	{
	public:
		class FString                                              EventTermId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetData
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetData_Params
	{
	public:
		class FString                                              EventTermId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    DurationMinutes;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  ItemType;                                                // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetExpiryDateTime
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetExpiryDateTime_Params
	{
	public:
		struct FDateTime                                           ExpiryDateTime;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetDataAndVisibility
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetDataAndVisibility_Params
	{
	public:
		class FString                                              EventTermId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    DurationMinutes;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  ItemType;                                                // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.PreConstruct
	 */
	struct UWBP_ToolTipDetailsDateTime_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.SetExpiryDateTimeEndDisplay
	 */
	struct UWBP_ToolTipDetailsDateTime_C_SetExpiryDateTimeEndDisplay_Params
	{
	public:
		struct FDateTime                                           ExpiryDateTime;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ToolTipDetailsDateTime.WBP_ToolTipDetailsDateTime_C.ExecuteUbergraph_WBP_ToolTipDetailsDateTime
	 */
	struct UWBP_ToolTipDetailsDateTime_C_ExecuteUbergraph_WBP_ToolTipDetailsDateTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
