#pragma once

 

// Package: FogControlParam

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct FogControlParam.FogControlParam
// 0x0040 (0x0040 - 0x0000)
struct FFogControlParam final
{
public:
	float                                         FogDensity_27_5B35B58B4D75EE32A28138BA3A2D159B;    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FogInscatteringColor_28_A541EFEC47094B3D08035BB844585D2D; // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FogHeightFalloff_29_3B6DA9EA4C9BD9524E1A09BC53E6CE02; // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FogMaxOpacity_30_E25B28A242B10086159782ADF3089EEA; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SecondFogDensity_52_9A5A993544B7333CCEC9D8B63ABE05D8; // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SecondFogHeightFalloff_53_D6D3AEDD4B6C53CA5C759ABF497BE734; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartDistance_31_CD78D34B485370DF3BFF64B18850B8C5; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DirectionalInscatteringExponent_36_4F74AE4C4289635A502D1CBF81094790; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DirectionalInscatteringStartDistance_37_BD2FF9D94C3F11B8D90C9E9379C2EB77; // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DirectionalInscatteringColor_39_D062AF974148A5E012E3F6B111E70F17; // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFogControlParam) == 0x000004, "Wrong alignment on FFogControlParam");
static_assert(sizeof(FFogControlParam) == 0x000040, "Wrong size on FFogControlParam");
static_assert(offsetof(FFogControlParam, FogDensity_27_5B35B58B4D75EE32A28138BA3A2D159B) == 0x000000, "Member 'FFogControlParam::FogDensity_27_5B35B58B4D75EE32A28138BA3A2D159B' has a wrong offset!");
static_assert(offsetof(FFogControlParam, FogInscatteringColor_28_A541EFEC47094B3D08035BB844585D2D) == 0x000004, "Member 'FFogControlParam::FogInscatteringColor_28_A541EFEC47094B3D08035BB844585D2D' has a wrong offset!");
static_assert(offsetof(FFogControlParam, FogHeightFalloff_29_3B6DA9EA4C9BD9524E1A09BC53E6CE02) == 0x000014, "Member 'FFogControlParam::FogHeightFalloff_29_3B6DA9EA4C9BD9524E1A09BC53E6CE02' has a wrong offset!");
static_assert(offsetof(FFogControlParam, FogMaxOpacity_30_E25B28A242B10086159782ADF3089EEA) == 0x000018, "Member 'FFogControlParam::FogMaxOpacity_30_E25B28A242B10086159782ADF3089EEA' has a wrong offset!");
static_assert(offsetof(FFogControlParam, SecondFogDensity_52_9A5A993544B7333CCEC9D8B63ABE05D8) == 0x00001C, "Member 'FFogControlParam::SecondFogDensity_52_9A5A993544B7333CCEC9D8B63ABE05D8' has a wrong offset!");
static_assert(offsetof(FFogControlParam, SecondFogHeightFalloff_53_D6D3AEDD4B6C53CA5C759ABF497BE734) == 0x000020, "Member 'FFogControlParam::SecondFogHeightFalloff_53_D6D3AEDD4B6C53CA5C759ABF497BE734' has a wrong offset!");
static_assert(offsetof(FFogControlParam, StartDistance_31_CD78D34B485370DF3BFF64B18850B8C5) == 0x000024, "Member 'FFogControlParam::StartDistance_31_CD78D34B485370DF3BFF64B18850B8C5' has a wrong offset!");
static_assert(offsetof(FFogControlParam, DirectionalInscatteringExponent_36_4F74AE4C4289635A502D1CBF81094790) == 0x000028, "Member 'FFogControlParam::DirectionalInscatteringExponent_36_4F74AE4C4289635A502D1CBF81094790' has a wrong offset!");
static_assert(offsetof(FFogControlParam, DirectionalInscatteringStartDistance_37_BD2FF9D94C3F11B8D90C9E9379C2EB77) == 0x00002C, "Member 'FFogControlParam::DirectionalInscatteringStartDistance_37_BD2FF9D94C3F11B8D90C9E9379C2EB77' has a wrong offset!");
static_assert(offsetof(FFogControlParam, DirectionalInscatteringColor_39_D062AF974148A5E012E3F6B111E70F17) == 0x000030, "Member 'FFogControlParam::DirectionalInscatteringColor_39_D062AF974148A5E012E3F6B111E70F17' has a wrong offset!");

}

