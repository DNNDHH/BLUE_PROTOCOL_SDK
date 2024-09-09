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
	 * Function CmnColorBadge.CmnColorBadge_C.GetColorBadgeExtraColor
	 */
	struct UCmnColorBadge_C_GetColorBadgeExtraColor_Params
	{
	public:
		struct FLinearColor                                        OutColor1;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        OutColor2;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnColorBadge.CmnColorBadge_C.GetColorBadgeColor
	 */
	struct UCmnColorBadge_C_GetColorBadgeColor_Params
	{
	public:
		struct FLinearColor                                        OutColor;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeExtraColor
	 */
	struct UCmnColorBadge_C_SetColorBadgeExtraColor_Params
	{
	public:
		struct FLinearColor                                        InColor1;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InColor2;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeColor
	 */
	struct UCmnColorBadge_C_SetColorBadgeColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeType
	 */
	struct UCmnColorBadge_C_SetColorBadgeType_Params
	{
	public:
		EColorBadgeType                                            InColorBadgeType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q6KO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnColorBadge.CmnColorBadge_C.PreConstruct
	 */
	struct UCmnColorBadge_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnColorBadge.CmnColorBadge_C.ExecuteUbergraph_CmnColorBadge
	 */
	struct UCmnColorBadge_C_ExecuteUbergraph_CmnColorBadge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
