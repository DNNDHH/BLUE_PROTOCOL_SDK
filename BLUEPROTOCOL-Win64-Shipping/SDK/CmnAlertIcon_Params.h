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
	 * Function CmnAlertIcon.CmnAlertIcon_C.SetAlertTypeRed
	 */
	struct UCmnAlertIcon_C_SetAlertTypeRed_Params
	{	};

	/**
	 * Function CmnAlertIcon.CmnAlertIcon_C.SetAlertTypeYellow
	 */
	struct UCmnAlertIcon_C_SetAlertTypeYellow_Params
	{	};

	/**
	 * Function CmnAlertIcon.CmnAlertIcon_C.SetAlertType
	 */
	struct UCmnAlertIcon_C_SetAlertType_Params
	{
	public:
		bool                                                       IsYellow;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnAlertIcon.CmnAlertIcon_C.ResetIconToDefault
	 */
	struct UCmnAlertIcon_C_ResetIconToDefault_Params
	{	};

	/**
	 * Function CmnAlertIcon.CmnAlertIcon_C.PreConstruct
	 */
	struct UCmnAlertIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnAlertIcon.CmnAlertIcon_C.ExecuteUbergraph_CmnAlertIcon
	 */
	struct UCmnAlertIcon_C_ExecuteUbergraph_CmnAlertIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
