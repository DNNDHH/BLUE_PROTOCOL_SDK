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
	 * UserDefinedStruct FogControlCurveParam.FogControlCurveParam
	 * Size -> 0x0050
	 */
	struct FFogControlCurveParam
	{
	public:
		class UCurveFloat*                                         FogDensity_40_5B35B58B4D75EE32A28138BA3A2D159B;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   FogInscatteringColor_42_A541EFEC47094B3D08035BB844585D2D; // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FogHeightFalloff_43_3B6DA9EA4C9BD9524E1A09BC53E6CE02;    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         FogMaxOpacity_44_E25B28A242B10086159782ADF3089EEA;       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         SecondFogDensity_57_239326A44F39EC68B8FDA58A8AD11203;    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         SecondFogHeightFalloff_59_C655F7F347FF271EF9B3509C6FC305F3; // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         StartDistance_45_CD78D34B485370DF3BFF64B18850B8C5;       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DirectionalInscatteringExponent_47_4F74AE4C4289635A502D1CBF81094790; // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         DirectionalInscatteringStartDistance_48_BD2FF9D94C3F11B8D90C9E9379C2EB77; // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   DirectionalInscatteringColor_49_D062AF974148A5E012E3F6B111E70F17; // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
