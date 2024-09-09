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
	 * UserDefinedStruct BP_IndoorLightParam.BP_IndoorLightParam
	 * Size -> 0x0024
	 */
	struct FBP_IndoorLightParam
	{
	public:
		int32_t                                                    GameTimeHour_17_5581CB894D80C67ED37CBF92A4A0D74B;        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GameTimeMin_19_A52B3DFC4628542C13CA6E9B9971A933;         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FadeTimeMin_13_B03B350B4E1B509B4663239F4EBFCC8C;         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color_7_4DEC8730467D573419CC5EB36875890B;                // 0x000C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightIntensity_21_09B7313E4DECE240220CF29DBD00B887;      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmissiveScale_23_20A4251A4289F6AACB0C1DA2B576339E;       // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
