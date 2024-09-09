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
	 * Function CmnGauge1.CmnGauge1_C.SetColor
	 */
	struct UCmnGauge1_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        SetColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnGauge1.CmnGauge1_C.SetRate
	 */
	struct UCmnGauge1_C_SetRate_Params
	{
	public:
		float                                                      InRate;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnGauge1.CmnGauge1_C.PreConstruct
	 */
	struct UCmnGauge1_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnGauge1.CmnGauge1_C.Construct
	 */
	struct UCmnGauge1_C_Construct_Params
	{	};

	/**
	 * Function CmnGauge1.CmnGauge1_C.ExecuteUbergraph_CmnGauge1
	 */
	struct UCmnGauge1_C_ExecuteUbergraph_CmnGauge1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
