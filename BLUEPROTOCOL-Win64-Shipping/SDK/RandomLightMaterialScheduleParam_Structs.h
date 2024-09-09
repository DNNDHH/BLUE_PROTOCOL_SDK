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
	 * UserDefinedStruct RandomLightMaterialScheduleParam.RandomLightMaterialScheduleParam
	 * Size -> 0x000C
	 */
	struct FRandomLightMaterialScheduleParam
	{
	public:
		float                                                      Intencity_9_104BEC03422336927BAFBA874514A1DA;            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SwitchOnTime_4_35F763B04914E7A194B4BAA0594AC3A4;         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SwitchOffTime_6_0CA32A6C4A7983578527F9A9BB738E2B;        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
