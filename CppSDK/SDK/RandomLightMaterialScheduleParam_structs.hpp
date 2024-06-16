#pragma once

 

// Package: RandomLightMaterialScheduleParam

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct RandomLightMaterialScheduleParam.RandomLightMaterialScheduleParam
// 0x000C (0x000C - 0x0000)
struct FRandomLightMaterialScheduleParam final
{
public:
	float                                         Intencity_9_104BEC03422336927BAFBA874514A1DA;      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SwitchOnTime_4_35F763B04914E7A194B4BAA0594AC3A4;   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SwitchOffTime_6_0CA32A6C4A7983578527F9A9BB738E2B;  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FRandomLightMaterialScheduleParam) == 0x000004, "Wrong alignment on FRandomLightMaterialScheduleParam");
static_assert(sizeof(FRandomLightMaterialScheduleParam) == 0x00000C, "Wrong size on FRandomLightMaterialScheduleParam");
static_assert(offsetof(FRandomLightMaterialScheduleParam, Intencity_9_104BEC03422336927BAFBA874514A1DA) == 0x000000, "Member 'FRandomLightMaterialScheduleParam::Intencity_9_104BEC03422336927BAFBA874514A1DA' has a wrong offset!");
static_assert(offsetof(FRandomLightMaterialScheduleParam, SwitchOnTime_4_35F763B04914E7A194B4BAA0594AC3A4) == 0x000004, "Member 'FRandomLightMaterialScheduleParam::SwitchOnTime_4_35F763B04914E7A194B4BAA0594AC3A4' has a wrong offset!");
static_assert(offsetof(FRandomLightMaterialScheduleParam, SwitchOffTime_6_0CA32A6C4A7983578527F9A9BB738E2B) == 0x000008, "Member 'FRandomLightMaterialScheduleParam::SwitchOffTime_6_0CA32A6C4A7983578527F9A9BB738E2B' has a wrong offset!");

}

