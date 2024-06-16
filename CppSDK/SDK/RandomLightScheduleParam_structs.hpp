#pragma once

 

// Package: RandomLightScheduleParam

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct RandomLightScheduleParam.RandomLightScheduleParam
// 0x0020 (0x0020 - 0x0000)
struct FRandomLightScheduleParam final
{
public:
	class FString                                 TargetTag_12_9DE1EB9841822CD58BEF72BA7F2B6D78;     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LightOnTime_24_35F763B04914E7A194B4BAA0594AC3A4;   // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OnRandomDelayMinutes_26_B5E4E7B3410DF180FE0CBA83C5E0ED8D; // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LightOffTime_25_0CA32A6C4A7983578527F9A9BB738E2B;  // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OffRandomDelayMintes_27_5325328B4E30380321AF58A96407304E; // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FRandomLightScheduleParam) == 0x000008, "Wrong alignment on FRandomLightScheduleParam");
static_assert(sizeof(FRandomLightScheduleParam) == 0x000020, "Wrong size on FRandomLightScheduleParam");
static_assert(offsetof(FRandomLightScheduleParam, TargetTag_12_9DE1EB9841822CD58BEF72BA7F2B6D78) == 0x000000, "Member 'FRandomLightScheduleParam::TargetTag_12_9DE1EB9841822CD58BEF72BA7F2B6D78' has a wrong offset!");
static_assert(offsetof(FRandomLightScheduleParam, LightOnTime_24_35F763B04914E7A194B4BAA0594AC3A4) == 0x000010, "Member 'FRandomLightScheduleParam::LightOnTime_24_35F763B04914E7A194B4BAA0594AC3A4' has a wrong offset!");
static_assert(offsetof(FRandomLightScheduleParam, OnRandomDelayMinutes_26_B5E4E7B3410DF180FE0CBA83C5E0ED8D) == 0x000014, "Member 'FRandomLightScheduleParam::OnRandomDelayMinutes_26_B5E4E7B3410DF180FE0CBA83C5E0ED8D' has a wrong offset!");
static_assert(offsetof(FRandomLightScheduleParam, LightOffTime_25_0CA32A6C4A7983578527F9A9BB738E2B) == 0x000018, "Member 'FRandomLightScheduleParam::LightOffTime_25_0CA32A6C4A7983578527F9A9BB738E2B' has a wrong offset!");
static_assert(offsetof(FRandomLightScheduleParam, OffRandomDelayMintes_27_5325328B4E30380321AF58A96407304E) == 0x00001C, "Member 'FRandomLightScheduleParam::OffRandomDelayMintes_27_5325328B4E30380321AF58A96407304E' has a wrong offset!");

}

