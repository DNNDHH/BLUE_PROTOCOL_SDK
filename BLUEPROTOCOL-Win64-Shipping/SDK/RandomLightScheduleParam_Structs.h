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
	 * UserDefinedStruct RandomLightScheduleParam.RandomLightScheduleParam
	 * Size -> 0x0020
	 */
	struct FRandomLightScheduleParam
	{
	public:
		class FString                                              TargetTag_12_9DE1EB9841822CD58BEF72BA7F2B6D78;           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    LightOnTime_24_35F763B04914E7A194B4BAA0594AC3A4;         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OnRandomDelayMinutes_26_B5E4E7B3410DF180FE0CBA83C5E0ED8D; // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LightOffTime_25_0CA32A6C4A7983578527F9A9BB738E2B;        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OffRandomDelayMintes_27_5325328B4E30380321AF58A96407304E; // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
