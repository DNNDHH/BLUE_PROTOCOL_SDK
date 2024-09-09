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
	 * UserDefinedStruct FogControlParam.FogControlParam
	 * Size -> 0x0040
	 */
	struct FFogControlParam
	{
	public:
		float                                                      FogDensity_27_5B35B58B4D75EE32A28138BA3A2D159B;          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FogInscatteringColor_28_A541EFEC47094B3D08035BB844585D2D; // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogHeightFalloff_29_3B6DA9EA4C9BD9524E1A09BC53E6CE02;    // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogMaxOpacity_30_E25B28A242B10086159782ADF3089EEA;       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SecondFogDensity_52_9A5A993544B7333CCEC9D8B63ABE05D8;    // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SecondFogHeightFalloff_53_D6D3AEDD4B6C53CA5C759ABF497BE734; // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartDistance_31_CD78D34B485370DF3BFF64B18850B8C5;       // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DirectionalInscatteringExponent_36_4F74AE4C4289635A502D1CBF81094790; // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DirectionalInscatteringStartDistance_37_BD2FF9D94C3F11B8D90C9E9379C2EB77; // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        DirectionalInscatteringColor_39_D062AF974148A5E012E3F6B111E70F17; // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
