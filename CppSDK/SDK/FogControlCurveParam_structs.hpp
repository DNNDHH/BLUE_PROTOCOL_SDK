#pragma once

 

// Package: FogControlCurveParam

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct FogControlCurveParam.FogControlCurveParam
// 0x0050 (0x0050 - 0x0000)
struct FFogControlCurveParam final
{
public:
	class UCurveFloat*                            FogDensity_40_5B35B58B4D75EE32A28138BA3A2D159B;    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      FogInscatteringColor_42_A541EFEC47094B3D08035BB844585D2D; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            FogHeightFalloff_43_3B6DA9EA4C9BD9524E1A09BC53E6CE02; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            FogMaxOpacity_44_E25B28A242B10086159782ADF3089EEA; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SecondFogDensity_57_239326A44F39EC68B8FDA58A8AD11203; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SecondFogHeightFalloff_59_C655F7F347FF271EF9B3509C6FC305F3; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            StartDistance_45_CD78D34B485370DF3BFF64B18850B8C5; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DirectionalInscatteringExponent_47_4F74AE4C4289635A502D1CBF81094790; // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DirectionalInscatteringStartDistance_48_BD2FF9D94C3F11B8D90C9E9379C2EB77; // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      DirectionalInscatteringColor_49_D062AF974148A5E012E3F6B111E70F17; // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFogControlCurveParam) == 0x000008, "Wrong alignment on FFogControlCurveParam");
static_assert(sizeof(FFogControlCurveParam) == 0x000050, "Wrong size on FFogControlCurveParam");
static_assert(offsetof(FFogControlCurveParam, FogDensity_40_5B35B58B4D75EE32A28138BA3A2D159B) == 0x000000, "Member 'FFogControlCurveParam::FogDensity_40_5B35B58B4D75EE32A28138BA3A2D159B' has a wrong offset!");
static_assert(offsetof(FFogControlCurveParam, FogInscatteringColor_42_A541EFEC47094B3D08035BB844585D2D) == 0x000008, "Member 'FFogControlCurveParam::FogInscatteringColor_42_A541EFEC47094B3D08035BB844585D2D' has a wrong offset!");
static_assert(offsetof(FFogControlCurveParam, FogHeightFalloff_43_3B6DA9EA4C9BD9524E1A09BC53E6CE02) == 0x000010, "Member 'FFogControlCurveParam::FogHeightFalloff_43_3B6DA9EA4C9BD9524E1A09BC53E6CE02' has a wrong offset!");
static_assert(offsetof(FFogControlCurveParam, FogMaxOpacity_44_E25B28A242B10086159782ADF3089EEA) == 0x000018, "Member 'FFogControlCurveParam::FogMaxOpacity_44_E25B28A242B10086159782ADF3089EEA' has a wrong offset!");
static_assert(offsetof(FFogControlCurveParam, SecondFogDensity_57_239326A44F39EC68B8FDA58A8AD11203) == 0x000020, "Member 'FFogControlCurveParam::SecondFogDensity_57_239326A44F39EC68B8FDA58A8AD11203' has a wrong offset!");
static_assert(offsetof(FFogControlCurveParam, SecondFogHeightFalloff_59_C655F7F347FF271EF9B3509C6FC305F3) == 0x000028, "Member 'FFogControlCurveParam::SecondFogHeightFalloff_59_C655F7F347FF271EF9B3509C6FC305F3' has a wrong offset!");
static_assert(offsetof(FFogControlCurveParam, StartDistance_45_CD78D34B485370DF3BFF64B18850B8C5) == 0x000030, "Member 'FFogControlCurveParam::StartDistance_45_CD78D34B485370DF3BFF64B18850B8C5' has a wrong offset!");
static_assert(offsetof(FFogControlCurveParam, DirectionalInscatteringExponent_47_4F74AE4C4289635A502D1CBF81094790) == 0x000038, "Member 'FFogControlCurveParam::DirectionalInscatteringExponent_47_4F74AE4C4289635A502D1CBF81094790' has a wrong offset!");
static_assert(offsetof(FFogControlCurveParam, DirectionalInscatteringStartDistance_48_BD2FF9D94C3F11B8D90C9E9379C2EB77) == 0x000040, "Member 'FFogControlCurveParam::DirectionalInscatteringStartDistance_48_BD2FF9D94C3F11B8D90C9E9379C2EB77' has a wrong offset!");
static_assert(offsetof(FFogControlCurveParam, DirectionalInscatteringColor_49_D062AF974148A5E012E3F6B111E70F17) == 0x000048, "Member 'FFogControlCurveParam::DirectionalInscatteringColor_49_D062AF974148A5E012E3F6B111E70F17' has a wrong offset!");

}

